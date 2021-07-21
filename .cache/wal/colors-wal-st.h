const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0C012D", /* black   */
  [1] = "#B529F5", /* red     */
  [2] = "#D60CEC", /* green   */
  [3] = "#C72CFB", /* yellow  */
  [4] = "#AA49D7", /* blue    */
  [5] = "#DE5FF9", /* magenta */
  [6] = "#D1D3BA", /* cyan    */
  [7] = "#edc3f5", /* white   */

  /* 8 bright colors */
  [8]  = "#a588ab",  /* black   */
  [9]  = "#B529F5",  /* red     */
  [10] = "#D60CEC", /* green   */
  [11] = "#C72CFB", /* yellow  */
  [12] = "#AA49D7", /* blue    */
  [13] = "#DE5FF9", /* magenta */
  [14] = "#D1D3BA", /* cyan    */
  [15] = "#edc3f5", /* white   */

  /* special colors */
  [256] = "#0C012D", /* background */
  [257] = "#edc3f5", /* foreground */
  [258] = "#edc3f5",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
