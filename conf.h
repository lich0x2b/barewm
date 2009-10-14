#ifndef CONF_H
#define CONF_H

#define VERSION 	"0.2"
#define DISPLAY		":0"
#define CURSOR		XC_left_ptr /* default cursor,overrides any custom cursors you may have defined outside the WM. */
#define CMD_CURSOR	XC_rtl_logo /* cursor to let you know you are in command mode. This is best to differ from CURSOS */
/* valid cursor names in "/usr/include/X11/cursorfont.h", or anywhere you can find them on the internet. Defaults should be fine though */
#define MOD_MASK 	Mod1Mask /* Modifier key */
#define KEY_PREFIX	't' /* key to enter command mode */
#define KEY_WINLIST	'w' /* key to show window list */
#define KEY_TERMINAL 	'c' /* key to spawn terminal */
#define KEY_KILL	'q' /* key to kill selected window */
#define KEY_MENU 	'm' /* key to spawn menu */
#define KEY_PREV	'p' /* select previous window in list */
#define KEY_NEXT	'n' /* select next window in list */
#define KEY_STATUS	's' /* show message containing output from the command defined at STATUS */
#define TERMINAL	"urxvt" /* terminal */
#define MENU		"`dmenu_path | dmenu -fn '-xos4-terminus-*-r-*-*-12-*-*-*-*-*-*-*' -nb '#222222' -nf '#FFFFFF' -sf '#ffffff' -sb '#666666'`"
/* launcher menu to run */
#define FONT		"-xos4-terminus-*-*-*-*-12-*-*-*-*-*-*-*"
/* font to use */
#define BORDER		2 /* border size for window lists / input box */
#define FGCOLOR		"#cfdb6c" /* window list and messaging foreground color */
#define BGCOLOR		"#222222" /* window list and messaging background color */
#define SELFGCOLOR	"#222222" /* window list foreground for selected window */
#define SELBGCOLOR	"#edf69f" /* window list background for selected window */
#define PADDING_NORTH	0 /* top screen edge unmanaged pixels */
#define PADDING_WEST	0 /* left screen edge unmanaged pixels */
#define PADDING_SOUTH	0 /* bottom screen edge unmanaged pixels */
#define PADDING_EAST	0 /* right screen edge unmanaged pixels */
#define WLISTPADDING	5 /* left and right space in window list */
#define WLISTPOS	1 /* 0 = NW, 1 = NE, 2 = SE, 3 = SW, 4 = C */
#define TIMEOUT		2
#define STATUS		"short-info.sh" /* command who's output is shown when you hit KEY_STATUS */

#endif
