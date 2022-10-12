/* user and group to drop privileges to */
static const char *user = "adelg";
static const char *group = "adelg";

static const char *colorname[NUMCOLS] = {
    [INIT] = "#282a36",   /* after initialization */
    [INPUT] = "#bd93f9",  /* during input */
    [FAILED] = "#ff5555", /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const char *imgpath = "./images/dracula.png";
static const int imgwidth = 512;
static const int imgheight = 512;
static const int imgoffsetx = 256;
static const int imgoffsety = 256;
static const int showimgonlyatstart = 1;
static const int failonclear = 1;
