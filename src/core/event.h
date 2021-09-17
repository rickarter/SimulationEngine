typedef enum se_event_type {
	SE_EVENT_TYPE_CLOSE,
	SE_EVENT_TYPE_MOUSE_DOWN,
	SE_EVENT_TYPE_MOUSE_UP,
	SE_EVENT_TYPE_MOUSE_WHEEL,
	SE_EVENT_TYPE_MOUSE_MOVE,
	SE_EVENT_TYPE_MOUSE_LEAVE,
	SE_EVENT_TYPE_MOUSE_ENTER,
	SE_EVENT_TYPE_KEY_DOWN,
	SE_EVENT_TYPE_KEY_UP,
	SE_EVENT_TYPE_TEXT,
	SE_EVENT_TYPE_LOST_FOCUS,
	SE_EVENT_TYPE_GOT_FOCUS,
	SE_EVENT_TYPE_RESIZE
} se_event_type_t;

typedef struct se_event {
	se_event_type_t type;

	union {
		struct {
			enum se_key key;
			int alt : 1;
			int control : 1;
			int shift : 1;
			int system : 1;
		} key;

		struct {
			enum se_mouse_button button;
			int x, y; /* position */
		} mouse_down;

		struct {
			enum se_mouse_button button;
			int x, y; /* position */
		} mouse_up;

		struct {
			int delta;
			int x, y; /* position */
		} mouse_wheel;

		struct {
			int x, y; /* position */
			int vx, vy; /* velocity */
		} mouse_move;

		struct {
			uint32_t code;
		} text;

		struct {
			int w, h;
		} resize;
	} s;
} se_event_t;
