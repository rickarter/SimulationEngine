#ifndef SE_MAIN_H
#define SE_MAIN_H

/* Standart libraries */
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdarg.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>
#include <float.h>
#include <assert.h>
#include <ctype.h>
#include <inttypes.h>
#include <limits.h>

/* Platform-specific */
#include <windows.h>

/* OpenGL */
// NOTE(Eric): Include Open GL related stuff here and delete this comment

/* Engine types */
typedef struct se_video_mode se_video_mode_t;
typedef struct se_core se_core_t;
typedef struct se_core_config se_core_config_t;

/* Simulation Engine */
#include "containers/array.h"
#include "core/event.h"
#include "core/log.h"
#include "input/input.h"
#include "core/time.h"
#include "core/memmgr.h"
#include "core/core.h"

#endif
