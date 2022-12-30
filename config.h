/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 0;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Terminus (TTF):size=15"
};

static const char col_cyan1[]   = "#005577";
static const char col_cyan2[]   = "#007777";
static const char col_gray1[]   = "#222222";
static const char col_gray3[]   = "#bbbbbb";
static const char col_gray4[]   = "#eeeeee";

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { col_gray3, col_gray1 },
	[SchemeSel] = { col_gray4, col_cyan1 },
	[SchemeOut] = { "#000000", "#00ffff" },
	[SchemeHp]  = { "#bbbbbb", "#333333" }
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 23.5;         /* -h option; minimum height of a menu line     */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
