/* user and group to drop privileges to */
static const char *user = "adelg";
static const char *group = "adelg";

static const char *colorname[NUMCOLS] = {
    [INIT] = "#282a36",   /* after initialization */
    [INPUT] = "#bd93f9",  /* during input */
    [FAILED] = "#ff5555", /* wrong password */
	[CAPS] = "#ffb86c",         /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const char *imgpath = "./images/dracula.xpm";
static const int imgwidth = 512;
static const int imgheight = 512;
static const int imgoffsetx = 704;
static const int imgoffsety = 284;
static const int showimgonlyatstart = 1;
static const int failonclear = 1;


// static const char *imgpath = "./images/arch.xpm";
// static const int imgwidth = 1920;
// static const int imgheight = 1080;
// static const int imgoffsetx = 0;
// static const int imgoffsety = 0;
// static const int showimgonlyatstart = 1;
// static const int failonclear = 1;
//
/* time in seconds before the monitor shuts down */
static const int monitortime = 5;
