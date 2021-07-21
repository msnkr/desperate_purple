static const char norm_fg[] = "#edc3f5";
static const char norm_bg[] = "#0C012D";
static const char norm_border[] = "#a588ab";

static const char sel_fg[] = "#edc3f5";
static const char sel_bg[] = "#D60CEC";
static const char sel_border[] = "#edc3f5";

static const char urg_fg[] = "#edc3f5";
static const char urg_bg[] = "#B529F5";
static const char urg_border[] = "#B529F5";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
