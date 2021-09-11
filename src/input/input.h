enum se_key {
	SE_KEY_UKNOWN = -1,
	SE_KEY_A = 0,
	SE_KEY_B,
	SE_KEY_C,
	SE_KEY_D,
	SE_KEY_E,
	SE_KEY_F,
	SE_KEY_G,
	SE_KEY_H,
	SE_KEY_I,
	SE_KEY_J,
	SE_KEY_K,
	SE_KEY_L,
	SE_KEY_M,
	SE_KEY_N,
	SE_KEY_O,
	SE_KEY_P,
	SE_KEY_Q,
	SE_KEY_R,
	SE_KEY_S,
	SE_KEY_T,
	SE_KEY_U,
	SE_KEY_V,
	SE_KEY_W,
	SE_KEY_X,
	SE_KEY_Y,
	SE_KEY_Z,
	SE_KEY_NUM0,
	SE_KEY_NUM1,
	SE_KEY_NUM2,
	SE_KEY_NUM3,
	SE_KEY_NUM4,
	SE_KEY_NUM5,
	SE_KEY_NUM6,
	SE_KEY_NUM7,
	SE_KEY_NUM8,
	SE_KEY_NUM9,
	SE_KEY_ESC,
	SE_KEY_LCONTROL,
	SE_KEY_LSHIFT,
	SE_KEY_LAlt,
	SE_KEY_LSystem,
	SE_KEY_RControl,
	SE_KEY_RShift,
	SE_KEY_RAlt,
	SE_KEY_RSystem,
	SE_KEY_Menu,
	SE_KEY_LBracket,
	SE_KEY_RBracket,
	SE_KEY_SemiColon,
	SE_KEY_Comma,
	SE_KEY_Period,
	SE_KEY_Quote,
	SE_KEY_Slash,
	SE_KEY_BackSlash,
	SE_KEY_Tilde,
	SE_KEY_Equal,
	SE_KEY_Dash,
	SE_KEY_Space,
	SE_KEY_Return,
	SE_KEY_BACKSPACE,
	SE_KEY_Tab,
	SE_KEY_PageUp,
	SE_KEY_PageDown,
	SE_KEY_End,
	SE_KEY_Home,
	SE_KEY_Insert,
	SE_KEY_DELETE,
	SE_KEY_Add,
	SE_KEY_Subtract,
	SE_KEY_Multiply,
	SE_KEY_Divide,
	SE_KEY_LEFT,
	SE_KEY_RIGHT,
	SE_KEY_UP,
	SE_KEY_DOWN,
	SE_KEY_NUMPAD0, /**< Numpad 0 key */
	SE_KEY_NUMPAD1, /**< Numpad 1 key */
	SE_KEY_NUMPAD2, /**< Numpad 2 key */
	SE_KEY_NUMPAD3, /**< Numpad 3 key */
	SE_KEY_NUMPAD4, /**< Numpad 4 key */
	SE_KEY_NUMPAD5, /**< Numpad 5 key */
	SE_KEY_NUMPAD6, /**< Numpad 6 key */
	SE_KEY_NUMPAD7, /**< Numpad 7 key */
	SE_KEY_NUMPAD8, /**< Numpad 8 key */
	SE_KEY_NUMPAD9, /**< Numpad 9 key */
	SE_KEY_F1,      /**< F1 key */
	SE_KEY_F2,      /**< F2 key */
	SE_KEY_F3,      /**< F3 key */
	SE_KEY_F4,      /**< F4 key */
	SE_KEY_F5,      /**< F5 key */
	SE_KEY_F6,      /**< F6 key */
	SE_KEY_F7,      /**< F7 key */
	SE_KEY_F8,      /**< F8 key */
	SE_KEY_F9,      /**< F9 key */
	SE_KEY_F10,     /**< F10 key */
	SE_KEY_F11,     /**< F11 key */
	SE_KEY_F12,     /**< F12 key */
	SE_KEY_F13,     /**< F13 key */
	SE_KEY_F14,     /**< F14 key */
	SE_KEY_F15,     /**< F15 key */
	SE_KEY_Pause   /**< Pause\break key */
};

/**
* @brief Possible mouse buttons codes
*/
enum se_mouse_button {
	SE_BUTTON_LEFT,   /**< Left mouse button */
	SE_BUTTON_RIGHT,  /**< Right mouse button */
	SE_BUTTON_MIDDLE /**< Middle (wheel) mouse button */
};