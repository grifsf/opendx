/***********************************************************************/
/* Open Visualization Data Explorer                                    */
/* (C) Copyright IBM Corp. 1989,1999                                   */
/* ALL RIGHTS RESERVED                                                 */
/* This code licensed under the                                        */
/*    "IBM PUBLIC LICENSE - Open Visualization Data Explorer"          */
/***********************************************************************/
#define CIRCLE8PTS 8 
#define CIRCLE8TRS 6 
static Point points[CIRCLE8PTS] = {
 {  0.7071067691F,      0.7071067691F,      0.0000000000F },
 { -0.0000000437F,      1.0000000000F,      0.0000000000F },
 { -0.7071067691F,      0.7071067691F,      0.0000000000F },
 { -1.0000000000F,     -0.0000000874F,      0.0000000000F },
 { -0.7071066499F,     -0.7071068883F,      0.0000000000F },
 {  0.0000000119F,     -1.0000000000F,      0.0000000000F },
 {  0.7071070075F,     -0.7071065307F,      0.0000000000F },
 {  1.0000000000F,      0.0000000000F,      0.0000000000F }
};
static Triangle triangles[] = {
 {   0,     1,     2 },
 {   0,     2,     3 },
 {   0,     3,     4 },
 {   0,     4,     5 },
 {   0,     5,     6 },
 {   0,     6,     7 }
};
