/**
 * @file IT8951.h
 *
 */

#ifndef IT8951_H
#define IT8951_H

#ifdef __cplusplus
extern "C"
{
#endif

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif
#include "sdkconfig.h"

/* Values for M5Paper, this values shouldn't be
 * swapped to change display orientation */
#define EPD_PANEL_WIDTH         CONFIG_LV_DISPLAY_WIDTH   /* 960 */
#define EPD_PANEL_HEIGHT        CONFIG_LV_DISPLAY_HEIGHT  /* 540 */



#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* __IT8951_REGS_H__ */
