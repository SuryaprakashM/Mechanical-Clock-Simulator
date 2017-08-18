#include<stdio.h>
#include<GL/glut.h>
#include<unistd.h>

float _angle = 60.0;
float _angleMin = 0.0;
float _angleHour =0,r=0,g=0,b=0;
int count=0,hours=0,minutes=0;
GLint window1,window2,window3;
#define M_PI 3.14159265
void cylinder();
static GLdouble viewer[]={0.0,0.0,5.0};

int val1=-1,val2=3,val3=-2,val4=-2;

int cursorx,cursory;
int ipcount=0;
void adjust(int hours)
{
    const int NO_OF_DEGREES_IN_A_MINUTE = 6;

    _angleMin=minutes*NO_OF_DEGREES_IN_A_MINUTE;
    _angleHour=30*hours+(minutes*30/60);
     printf("Angle for hours  %f and  min %d\n" ,_angleHour,minutes);
}

void myClrClkInit()
{
    glClearColor(1.0,1.0,1.0,1.0);
    glEnable(GL_DEPTH_TEST);
    gluOrtho2D(0,499,0,499);
    glPointSize(1.2);
}
void displayClrIp()
{
    //adjust(hours,minutes);
    //glLoadIdentity();
    //gluLookAt(viewer[0],viewer[1],viewer[2],300,100,0,0,1,0);
    count++;
     //cylinder();
    //glutPostRedisplay();
    //glClearColor(0,0,0,0);
    //glClear(GL_COLOR_BUFFER_BIT );//| GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    cylinder();
    glLoadIdentity();
    glPushMatrix();
    //glFlush();
    //cylinder();
    glColor3f(1+r,0+g,0+b);
    //glPushMatrix();
    //cylinder();
    glRotatef(_angle,0.0,0.0,-1);
    //glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex3f(0,0.0,0.0);
    glVertex3f(0.3,0.0,0.0);
    //glVertex3f(0.7,1.0,0.0);
    glEnd();

    //cylinder();
    //glRotatef(_angle,0.0,0.0,-1);
    //glRotatef(_angle,0.0,0.0,-1);
    glPopMatrix();


    /*glPushMatrix();
    //glFlush();
    //cylinder();
    //glColor3f(0,0,0);
    //glPushMatrix();
    //cylinder();
    glRotatef(_angle,0.0,0.0,-1);
    // glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex3f(0.0,0.0,0.0);
    glVertex3f(0.48,0.01,0.0);
    //glVertex3f(0.7,1.0,0.0);
    glEnd();

    //cylinder();
    //glRotatef(_angle,0.0,0.0,-1);
    //glRotatef(_angle,0.0,0.0,-1);
    glPopMatrix();*/

    glPushMatrix();
    glColor3f(0, 1, 0);
    glRotatef(_angleMin, 0, 0, -1);
    glBegin(GL_LINES);
    glVertex3f(0,0.0,0.0);
    glVertex3f(0.0,0.4,0.0);
    glEnd();
    glPopMatrix();
    /*glPushMatrix();
    glColor3f(0, 1, 0);
    glRotatef(_angleMin, 0, 0, -1);
    glBegin(GL_LINES)
    glVertex3f(0,0.0,0.0);
    glVertex3f(0.4,0.2,0.0);
    glEnd();
    glPopMatrix();*/


    glPushMatrix();
    //glFlush();
    //cylinder();
    glColor3f(0,0,0);
    //glPushMatrix();
    //cylinder();
    glRotatef(_angleMin,0.0,0.0,-1);
    // glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex3f(0.0,0.01,0.0);
    glVertex3f(0.41,0.21,0.0);
    //glVertex3f(0.7,1.0,0.0);
    glEnd();

    //cylinder();
    //glRotatef(_angle,0.0,0.0,-1);
    //glRotatef(_angle,0.0,0.0,-1);
    glPopMatrix();


    /*if(1)
    {
         //cylinder();
        glutPostRedisplay();
        //glFlush();
    }*/
   // glPopMatrix();
    glPushMatrix();
    glColor3f(1, 1, 1);
    glRotatef(_angleHour, 0, 0, -1);
    glBegin(GL_LINES);
    glVertex3f(0,0.0,0.0);
    glVertex3f(0.0,0.2,0.0);
    glEnd();
    glPopMatrix();
    //glPopMatrix();


    /*glPushMatrix();
    //glFlush();
    //cylinder();
    glColor3f(0,0,0);
    //glPushMatrix();
    //cylinder();
    glRotatef(_angleHour,0.0,0.0,-1);
    // glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex3f(0.0,0.01,0.0);
    glVertex3f(0.01,0.21,0.0);
    //glVertex3f(0.7,1.0,0.0);
    glEnd();

    //cylinder();
    //glRotatef(_angle,0.0,0.0,-1);
    //glRotatef(_angle,0.0,0.0,-1);
    glPopMatrix();*/

    //glFlush();
    //glPopMatrix();
    //glFlush();
   // glutPostRedisplay();
    glutSwapBuffers();
    glutPostRedisplay();

}
void displayClr()
{
    //glLoadIdentity();
    //gluLookAt(viewer[0],viewer[1],viewer[2],300,100,0,0,1,0);
    count++;
     //cylinder();
    //glutPostRedisplay();
    //glClearColor(0,0,0,0);
    //glClear(GL_COLOR_BUFFER_BIT );//| GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    cylinder();
    glLoadIdentity();
    glPushMatrix();
    //glFlush();
    //cylinder();
    glColor3f(1+r,0+g,0+b);
    //glPushMatrix();
    //cylinder();
    glRotatef(_angle,0.0,0.0,-1);
    //glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex3f(0,0.0,0.0);
    glVertex3f(0.3,0.0,0.0);
    //glVertex3f(0.7,1.0,0.0);
    glEnd();

    //cylinder();
    //glRotatef(_angle,0.0,0.0,-1);
    //glRotatef(_angle,0.0,0.0,-1);
    glPopMatrix();


    /*glPushMatrix();
    //glFlush();
    //cylinder();
    //glColor3f(0,0,0);
    //glPushMatrix();
    //cylinder();
    glRotatef(_angle,0.0,0.0,-1);
    // glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex3f(0.0,0.0,0.0);
    glVertex3f(0.48,0.01,0.0);
    //glVertex3f(0.7,1.0,0.0);
    glEnd();

    //cylinder();
    //glRotatef(_angle,0.0,0.0,-1);
    //glRotatef(_angle,0.0,0.0,-1);
    glPopMatrix();*/

    glPushMatrix();
    glColor3f(0, 1, 0);
    glRotatef(_angleMin, 0, 0, -1);
    glBegin(GL_LINES);
    glVertex3f(0,0.0,0.0);
    glVertex3f(0.0,0.4,0.0);
    glEnd();
    glPopMatrix();
    /*glPushMatrix();
    glColor3f(0, 1, 0);
    glRotatef(_angleMin, 0, 0, -1);
    glBegin(GL_LINES)
    glVertex3f(0,0.0,0.0);
    glVertex3f(0.4,0.2,0.0);
    glEnd();
    glPopMatrix();*/


    glPushMatrix();
    //glFlush();
    //cylinder();
    glColor3f(0,0,0);
    //glPushMatrix();
    //cylinder();
    glRotatef(_angleMin,0.0,0.0,-1);
    // glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex3f(0.0,0.01,0.0);
    glVertex3f(0.41,0.21,0.0);
    //glVertex3f(0.7,1.0,0.0);
    glEnd();

    //cylinder();
    //glRotatef(_angle,0.0,0.0,-1);
    //glRotatef(_angle,0.0,0.0,-1);
    glPopMatrix();


    /*if(1)
    {
         //cylinder();
        glutPostRedisplay();
        //glFlush();
    }*/
   // glPopMatrix();
    glPushMatrix();
    glColor3f(1, 1, 1);
    glRotatef(_angleHour, 0, 0, -1);
    glBegin(GL_LINES);
    glVertex3f(0,0.0,0.0);
    glVertex3f(0.0,0.2,0.0);
    glEnd();
    glPopMatrix();
    //glPopMatrix();


    /*glPushMatrix();
    //glFlush();
    //cylinder();
    glColor3f(0,0,0);
    //glPushMatrix();
    //cylinder();
    glRotatef(_angleHour,0.0,0.0,-1);
    // glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex3f(0.0,0.01,0.0);
    glVertex3f(0.01,0.21,0.0);
    //glVertex3f(0.7,1.0,0.0);
    glEnd();

    //cylinder();
    //glRotatef(_angle,0.0,0.0,-1);
    //glRotatef(_angle,0.0,0.0,-1);
    glPopMatrix();*/

    //glFlush();
    //glPopMatrix();
    //glFlush();
   // glutPostRedisplay();
    glutSwapBuffers();
    glutPostRedisplay();

}


void updateClr(int value)
{
    _angle += 0.278;
    _angleMin += 0.01;
    _angleHour += 0.001;
    if(_angle > 360)
    {
        _angle -= 360;
        r=(r-0.2);
        g=(g+0.2*2);
        b=(b+0.2);

    }
    if(_angleMin > 360)
    {
        _angleMin -= 360;
        g=g+0.2;
    }
    if(_angleHour > 360)
    {
        _angleHour -= 360;
        b=b+0.2;
    }
    glutPostRedisplay();
    glutTimerFunc(90, updateClr ,0);
}

void draw_pixel(GLint x,GLint y)
{
    glColor3f(0.0,0.0,1.0);
    glBegin(GL_POINTS);
    glVertex2f(x,y);
    glEnd();
}

void plotpixels(GLint h,GLint k,GLint x,GLint y)
{

    draw_pixel(x+h,y+k);
    draw_pixel(-x+h,y+k);
    draw_pixel(x+h,-y+k);
    draw_pixel(-x+h,-y+k);
    draw_pixel(y+h,x+k);
    draw_pixel(-y+h,x+k);
    draw_pixel(y+h,-x+k);
    draw_pixel(-y+h,-x+k);

}

void output(int x, int y,int cursorx,int cursory, char *string)
{
    glColor3f(1.0,0.0,0.0);
    glRasterPos2f(x+cursorx, y-cursory);
    int len, i;
    len = (int)strlen(string);
    for (i = 0; i < len; i++) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,string[i]);
    }
}

void circle_draw(GLint h,GLint k,GLint r)
{

    GLint i;
    GLint d=1-r;
    GLint x=0,y=r;
    while(y>x)
    {
        plotpixels(h,k,x,y);
        if(d<0) d+=2*x+3;
        else{
            d+=2*(x-y)+5;
            --y;
        }
        ++x;
    }
    plotpixels(h,k,x,y);
}


void cylinder()
{
    GLint xc=250,yc=250,r=200;
    circle_draw(xc,yc,r);
    glRasterPos2f(239.0,435.0);
    glutBitmapCharacter(GLUT_BITMAP_8_BY_13,49);
    glRasterPos2f(244.0,435.0);
    glutBitmapCharacter(GLUT_BITMAP_8_BY_13,50);
    glRasterPos2f(345.0,400.0);
    glutBitmapCharacter(GLUT_BITMAP_8_BY_13,49);
    glRasterPos2f(410.0,335.0);
    glutBitmapCharacter(GLUT_BITMAP_8_BY_13,50);
    glRasterPos2f(240.0,65.0);
    glutBitmapCharacter(GLUT_BITMAP_8_BY_13,54);
    glRasterPos2f(435.0,250.0);
    glutBitmapCharacter(GLUT_BITMAP_8_BY_13,51);
    glRasterPos2f(415.0,160.0);
    glutBitmapCharacter(GLUT_BITMAP_8_BY_13,52);
    glRasterPos2f(348.0,90.0);
    glutBitmapCharacter(GLUT_BITMAP_8_BY_13,53);
    glRasterPos2f(65.0,250.0);
    glutBitmapCharacter(GLUT_BITMAP_8_BY_13,57);
    glRasterPos2f(144.0,400.0);
    glutBitmapCharacter(GLUT_BITMAP_8_BY_13,49);
    glRasterPos2f(150.0,400.0);
    glutBitmapCharacter(GLUT_BITMAP_8_BY_13,49);
    glRasterPos2f(90.0,335.0);
    glutBitmapCharacter(GLUT_BITMAP_8_BY_13,49);
    glRasterPos2f(95.0,335.0);
    glutBitmapCharacter(GLUT_BITMAP_8_BY_13,48);
    glRasterPos2f(80.0,160.0);
    glutBitmapCharacter(GLUT_BITMAP_8_BY_13,56);
    glRasterPos2f(135.0,90.0);
    glutBitmapCharacter(GLUT_BITMAP_8_BY_13,55);
    output(100,20,0,0,"Press right mouse button for more");
}

void minuteconversion(int x)
{

    if(ipcount==4)//10th place
        minutes+=x*10;
    else minutes+=x;
}

void movetonextline()
{
    cursorx=0;
    cursory+=20;
    output(170,380,cursorx,cursory,"Minutes : ");
    cursory+=20;
}
void
reshape(int width, int height)
{
    GLfloat h = (GLfloat) height / (GLfloat) width;

    glViewport(0, 0, (GLint) width, (GLint) height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-3.0, 3.0, -h-2, h+2, 5.0, 60.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, -40.0);
}


void keyboard(unsigned char key,int x,int y)
{

    ipcount++;
    if(ipcount==5)
        output(160,270,cursorx,cursory,"Press Escape to exit");
    if(key==48){
        output(250,400,cursorx,cursory,"0");
        if(ipcount<4) {hours+=0;}
        else {minuteconversion(0);}
    }
    else if(key==49){
        output(250,400,cursorx,cursory,"1");
        if(ipcount<4) {
            if(ipcount==1)
                hours=10;
            else hours=1;}
        else minuteconversion(1);
    }  //printf("1 was typed and about to be stored\n");}
    else if(key==50){
        output(250,400,cursorx,cursory,"2");
        if(ipcount<4) {hours+=2;}
        else {minuteconversion(2);}
    }


    else if(key==51){
        output(250,400,cursorx,cursory,"3");
        if(ipcount<4) hours=3;
        else minuteconversion(3);
    }
    else if(key==52){
        output(250,400,cursorx,cursory,"4");
        if(ipcount<4) hours=4;
        else minuteconversion(4);
    }
    else if(key==53){
        output(250,400,cursorx,cursory,"5");
        if(ipcount<4) hours=5;
        else minuteconversion(5);}

    else if(key==54){
        output(250,400,cursorx,cursory,"6");
        if(ipcount<4) hours=6;
        else minuteconversion(6);}

    else if(key==55){
        output(250,400,cursorx,cursory,"7");
        if(ipcount<4) hours=7;
        else minuteconversion(7);}

    else if(key==56){
        output(250,400,cursorx,cursory,"8");
        if(ipcount<4) hours=8;
        else minuteconversion(8);
    }

    else if(key==57){
        output(250,400,cursorx,cursory,"9");
        if(ipcount<4) hours=9;
        else minuteconversion(9);
    }
    else if(key==27){
        output(180,220,cursorx,cursory,"Done");
    }
    else movetonextline();
    cursorx+=10;
    glutPostRedisplay();
}


void drawcylinder(GLfloat radc,GLfloat heightc)
{
    GLfloat x=0,y=0,angle1=0;

    glColor3f(0.0,1.0,0.0);
    glBegin(GL_QUAD_STRIP);
    while(angle1 < 2*M_PI){
        x= radc * cos(angle1);
        y= radc * sin(angle1);
        glNormal3f(-cos(angle1), -sin(angle1), 0.0);
        glVertex3f(x,y,heightc);
        glVertex3f(x,y,0);
        angle1+=0.1;
    }
    glVertex3f(radc,0,heightc);
    glVertex3f(radc,0,0);
    glEnd();

    glBegin(GL_POLYGON);
    angle1=0.0;

    while(angle1<2*M_PI)
    {
        x= radc * cos(angle1);
        y= radc * sin(angle1);
        glVertex3f(x,y,heightc);
        angle1+=0.1;
    }
    glVertex3f(radc,0,heightc);
    glEnd();
}

void details(int menuentry)
{
    switch(menuentry)
    {
        case 1 : {printf("Enter hours\n");
            scanf("%d",&hours);
            printf("Enter minutes\n");
            scanf("%d",&minutes);
            adjust(hours);
            glutHideWindow();
                   glutSetWindow(window3);
                   glutShowWindow();}


             break;

        case 2 : {
                   glutHideWindow();
                   glutSetWindow(window2);
                   glutShowWindow();
               }
            break;
        case 3 : exit(0);
            break;

        case 4 :
                glClear(GL_COLOR_BUFFER_BIT);
                glutHideWindow();

                 glutSetWindow(window1);
                 glutShowWindow();

                break;
        case 5 : glutHideWindow();
            glutSetWindow(window3);
            glutShowWindow();
    }
    glutPostRedisplay();
}
void myInit()
{
    glClearColor(1.0,1.0,1.0,1.0);
    glEnable(GL_DEPTH_TEST);
    gluOrtho2D(0,499,0,499);
    glPointSize(5);

}

static void
gear(GLfloat inner_radius, GLfloat outer_radius, GLfloat width,
     GLint teeth, GLfloat tooth_depth,int direction,int magnitude)
{

    GLint i;
    GLfloat r0, r1, r2;
    GLfloat angle, slant;
    GLfloat u, v, len;
    GLint left,right;
    if(direction==0)
    {
        left=1;
    }
    else
        right=1;

    r0 = inner_radius;
    r1 = outer_radius - tooth_depth / 2.0;
    r2 = outer_radius + tooth_depth / 2.0;

    slant = 2.0 * M_PI / teeth / 4.0;

    glShadeModel(GL_FLAT);

    glNormal3f(0.0, 0.0, 1.0);

    /* draw front face */
    glBegin(GL_QUAD_STRIP);
    for (i = 0; i <= teeth; i++) {
        angle = i * 2.0 * M_PI / teeth;
        glVertex3f(r0 * cos(angle), r0 * sin(angle), width * 0.5);
        glVertex3f(r1 * cos(angle), r1 * sin(angle), width * 0.5);
        glVertex3f(r0 * cos(angle), r0 * sin(angle), width * 0.5);
        glVertex3f(r1 * cos(angle + 3 * slant), r1 * sin(angle + 3 * slant), width * 0.5);
    }
    glEnd();

    /* draw front sides of teeth */
    glBegin(GL_QUADS);
    slant = 2.0 * M_PI / teeth / 4.0;
    for (i = 0; i < teeth; i++) {
        angle = i * 2.0 * M_PI / teeth;

        glVertex3f(r1 * cos(angle), r1 * sin(angle), width * 0.5);
        glVertex3f(r2 * cos(angle + slant), r2 * sin(angle + slant), width * 0.5);
        glVertex3f(r2 * cos(angle + 2 * slant), r2 * sin(angle + 2 * slant), width * 0.5);
        glVertex3f(r1 * cos(angle + 3 * slant), r1 * sin(angle + 3 * slant), width * 0.5);
    }
    glEnd();

    glNormal3f(0.0, 0.0, -1.0);

    /* draw back face */
    glBegin(GL_QUAD_STRIP);
    for (i = 0; i <= teeth; i++) {
        angle = i * 2.0 * M_PI / teeth;
        glVertex3f(r1 * cos(angle), r1 * sin(angle), -width * 0.5);
        glVertex3f(r0 * cos(angle), r0 * sin(angle), -width * 0.5);
        glVertex3f(r1 * cos(angle + 3 * slant), r1 * sin(angle + 3 * slant), -width * 0.5);
        glVertex3f(r0 * cos(angle), r0 * sin(angle), -width * 0.5);
    }
    glEnd();

    /* draw back sides of teeth */
    glBegin(GL_QUADS);
    slant = 2.0 * M_PI / teeth /4.0;
    for (i = 0; i < teeth; i++) {
        angle = i * 2.0 * M_PI / teeth;

        glVertex3f(r1 * cos(angle + 3 * slant), r1 * sin(angle + 3 * slant), -width * 0.5);
        glVertex3f(r2 * cos(angle + 2 * slant), r2 * sin(angle + 2 * slant), -width * 0.5);
        glVertex3f(r2 * cos(angle + slant), r2 * sin(angle + slant), -width * 0.5);
        glVertex3f(r1 * cos(angle), r1 * sin(angle), -width * 0.5);
    }
    glEnd();

        glShadeModel(GL_SMOOTH);

    /* draw inside radius cylinder */
    glBegin(GL_QUAD_STRIP);
    if(left==1)
    {
        for (i = 0; i <= teeth; i++) {
            angle = i * 2.0 * M_PI / teeth;

            glNormal3f(-cos(angle), -sin(angle), 0.0);
            glVertex3f(r0 * cos(angle), r0 * sin(angle), -width * magnitude);
            glVertex3f(r0 * cos(angle), r0 * sin(angle), width * 0.5);
        }
    }
    else
    {
        for (i = 0; i <= teeth; i++) {
            angle = i * 2.0 * M_PI / teeth;

            glNormal3f(-cos(angle), -sin(angle), 0.0);
            glVertex3f(r0 * cos(angle), r0 * sin(angle), -width * 0.5);
            glVertex3f(r0 * cos(angle), r0 * sin(angle), width * magnitude);  }
    }

    glEnd();



}



static GLfloat view_rotx = 0.0, view_roty = 0.0, view_rotz = 0.0;
static GLint gear1, gear2, gear3,gear4,gear5,gear6,gear7,gear8,gear9,gear10;
static GLfloat angle = 0.0;

static GLuint limit;
//static GLuint count = 1;

void
draw(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glPushMatrix();
    glRotatef(view_rotx, 1.0, 0.0, 0.0);
    glRotatef(view_roty, 0.0, 1.0, 0.0);
    glRotatef(view_rotz, 0.0, 0.0, 1.0);

    glPushMatrix();
    glTranslatef(-14.0, 6.6, -2.0);
    glRotatef(90,1.0,0.0,0.0);
    glRotatef(angle, 0.0, 0.0, 1.0);
    glCallList(gear1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,0.0,0.0);
    glutSolidCube(2);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-14.0, 0.0, 0.8);
    glRotatef(0,1.0,0.0,0.0);
    glRotatef(-2.0 * angle - 9.0, 0.0, 0.0, 1.0);
    glCallList(gear2);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-2,0.0,0.8);
    glPushMatrix();
    glRotatef(0.0,0,1.0,0.0);
    glTranslatef(-2,0.0,0.8);
    drawcylinder(0.8,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-9.0, -2.0, -6.0);
    glRotatef(0,1.0,0.0,0.0);
    glRotatef(2.0 * angle , 0.0, 0.0, 1.0);
    glCallList(gear3);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-8.0, -2.0, 2.0);
    glRotatef(0,1.0,0.0,0.0);
    glRotatef(-2.0 * angle - 25.0, 0.0, 0.0, 1.0);
    glCallList(gear4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-2.0, -3.0, 0.0);
    glRotatef(0,1.0,0.0,0.0);
    glRotatef(-2.0 * angle - 25.0, 0.0, 0.0, 1.0);
    glCallList(gear5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-2,-3,0);
    glutSolidSphere(0.5,10,50);
    glPopMatrix();
    glPushMatrix();
    glColor3f(0.0,0.0,1.0);
    glBegin(GL_LINES);
    glVertex3f(150,200,0);
    glVertex3f(300,450,0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(3.5, -4.0, -0.5);
    glRotatef(0,1.0,0.0,0.0);
    glRotatef(-2.0 * angle - 25.0, 0.0, 0.0, 1.0);
    glCallList(gear6);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-2.2,-2.60,-4.0);
    glRotatef(0.0,0,1.0,0.0);
    glRotatef(0,1.0,0.0,0.0);
    drawcylinder(1.2,4.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(8.5, -4.0, -1.5);
    glRotatef(0,1.0,0.0,0.0);
    glRotatef(-2.0 * angle - 25.0, 0.0, 0.0, 1.0);
    glCallList(gear7);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(16.5, -6.0, -3.5);
    glRotatef(0,1.0,0.0,0.0);
    glRotatef(-2.0 * angle - 25.0, 0.0, 0.0, 1.0);
    glCallList(gear8);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(16.5, -6.0, -3.5);
    glRotatef(0,1.0,0.0,0.0);
    glRotatef(-2.0 * angle - 25.0, 0.0, 0.0, 1.0);
    glCallList(gear9);
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.0,1.0,0.0);
    glRotatef(-40,0.0,0.0,1.0);
    glScalef(0.6,8,1.0);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,1.0,0.0);
    glRotatef(-40,0.0,0.0,1.0);
    glTranslatef(8,5,7);
    glScalef(0.6,8,1.0);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,1.0,0.0);
    glRotatef(90,0.0,1.0,0.0);
    glTranslatef(-3,-2,7); /*hours hand*/
    glScalef(0.6,5,0.5);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,1.0,0.0);
    glTranslatef(18.5,-4,-3);
    glRotatef(90,0.0,0.0,1.0);
    glScalef(0.5,5.8,1.0);
    glutSolidCube(1);
    glPopMatrix();
    glPushMatrix();
    glColor3f(0.0,1.0,0.0);
    glTranslatef(13.9,-8.0,-3);
    glRotatef(90,0.0,0.0,1.0);
    glScalef(0.5,3.8,1.0);
    glutSolidCube(1);

    glPopMatrix();

    glPopMatrix();
    glPopMatrix();


    glutSwapBuffers();

    count++;
    if (count == limit) {
        exit(0);
    }
}

static void
idle(void)
{
    angle += 2.0;

    glutPostRedisplay();
}

/* change view angle, exit upon ESC */
/* ARGSUSED1 */
static void
key(unsigned char key, int x, int y)
{

    if(key=='s') {   glutDestroyWindow(window1);
        glutSetWindow(window2);}
    if(key=='S') { glutDestroyWindow(window2);
        glutSetWindow(window1);
        glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
        myInit();
        glClearColor(0.0,0.0,0.0,1.0);
      glutPostWindowRedisplay(window1);
    }
    if(key=='D') viewer[0]-=5.0;
    if(key=='U') viewer[0]+=1.0;
    if(key=='y') viewer[1]-=1.0;
    if(key=='Y') viewer[1]+=1.0;
    if(key=='z') viewer[2]-=1.0;
    if(key=='Z') viewer[2]+=1.0;
    draw();
    switch (key) {
        case 'z':
            view_rotz += 5.0;
            break;
        case 'Z':
            view_rotz -= 5.0;
            break;
        case 'd' : val1--;
            val2--;
            val3--;
            val4--;

            break;
        case 27:  /* Escape */
            exit(0);
            break;
        default:
            return;
    }
    glutPostRedisplay();
}

/* change view angle */
/* ARGSUSED1 */
static void
special(int k, int x, int y)
{
    switch (k) {
        case GLUT_KEY_UP:
            view_rotx += 5.0;
            break;
        case GLUT_KEY_DOWN:
            view_rotx -= 5.0;
            break;
        case GLUT_KEY_LEFT:
            view_roty += 5.0;
            break;
        case GLUT_KEY_RIGHT:
            view_roty -= 5.0;
            break;
        default:
            return;
    }
    glutPostRedisplay();
}

/* new window size or exposure */



void
init(void)
{
    static GLfloat pos[4] =
    {5.0, 5.0, 10.0, 1.0};
    static GLfloat pos2[4] =
    {1.0, 2.0, 10.0, 1.0};
    static GLfloat red[4] =
    {0.8, 0.1, 0.0, 1.0};
    static GLfloat green[4] =
    {0.0, 0.8, 0.2, 1.0};
    static GLfloat blue[4] =
    {0.2, 0.2, 1.0, 1.0};
    static GLfloat purple[4]={0.9,0.0,0.9,1.0};
    static GLfloat purple1[4]={0.6,0.8,0.9,1.0};
    static GLfloat purple2[4]={0.5,0.17,0.14,1.0};
    static GLfloat purple3[4]={0.75,0.75,0.75,1.0};
    static GLfloat bronze[4]={0.65,0.49,0.24,1.0};

    glLightfv(GL_LIGHT0, GL_POSITION, pos);
    glEnable(GL_CULL_FACE);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);


    /* make the gears */
    gear1 = glGenLists(1);
    glNewList(gear1, GL_COMPILE);
    glMaterialfv(GL_FRONT, GL_AMBIENT, green);
    glMaterialf(GL_FRONT,GL_SHININESS,1.0);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,red);
    //glMaterialfv(GL_FRONT, GL_SPECULAR, white);
    gear(0.8, 2.0, 1.0,40, 0.09,1,6);

    glEndList();

    gear2 = glGenLists(1);
    glNewList(gear2, GL_COMPILE);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, green);
    gear(0.8, 2.5, 2.0, 35, 0.7,0,0);

    glEndList();

    gear3 = glGenLists(1);
    glNewList(gear3, GL_COMPILE);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, blue);
    gear(1.5, 4.5, 2, 20, 0.7,1,4);
    glEndList();

    gear4 = glGenLists(1);
    glNewList(gear4, GL_COMPILE);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, purple3);
    gear(0, 3.5, 2, 30, 1.0,0,0);
    glEndList();

    gear5 = glGenLists(1);
    glNewList(gear5, GL_COMPILE);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, bronze);
    gear(1,3 , 2, 15, 0.7,1,0);
    glEndList();

    gear6 = glGenLists(1);
    glNewList(gear6, GL_COMPILE);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, bronze);
    gear(1.1, 2.8, 2, 10, 0.7,0,2);
    glEndList();

    gear7 = glGenLists(1);
    glNewList(gear7, GL_COMPILE);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, bronze);
    gear(1.1, 2.8, 2, 10, 0.7,0,2);
    glEndList();

    gear8 = glGenLists(1);
    glNewList(gear8, GL_COMPILE);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, red);
    gear(5.2, 5.9, 2, 25, 0.7,0,2);
    glEndList();

    gear9 = glGenLists(1);
    glNewList(gear9, GL_COMPILE);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, green);
    gear(0, 2, 2, 8, 0,0,0);
    glEndList();
    glEnable(GL_NORMALIZE);
}

void
visible(int vis)
{
    if (vis == GLUT_VISIBLE)
        glutIdleFunc(idle);
    else
        glutIdleFunc(NULL);
}


void
reshape1(int width, int height)
{
    GLfloat h = (GLfloat) height / (GLfloat) width;

    glViewport(0, 0, (GLint) width, (GLint) height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-1.0, 1.0, -h, h, 5.0, 60.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, -40.0);
}




int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowSize(550.0,550.0);
    glutInitWindowPosition(0.0,0.0);
    window1= glutCreateWindow("CLOCKS");
    glPointSize(1);
    myInit();

    glutDisplayFunc(displayClr);
    glutTimerFunc(25,updateClr,0);
    glutCreateMenu(details);
    glutAddMenuEntry("Enter input",1);
    glutAddMenuEntry("Zoom in",2);
    glutAddMenuEntry("exit",3);
    glutAttachMenu(GLUT_RIGHT_BUTTON);

    window3=glutCreateWindow("Input");
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
    myClrClkInit();
    glutDisplayFunc(displayClrIp);
    glutTimerFunc(25,updateClr,0);
    glutHideWindow();
    window2=glutCreateWindow("GEARS");
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
    init();

    glutDisplayFunc(draw);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(key);
    glutSpecialFunc(special);
    glutVisibilityFunc(visible);
    glutHideWindow();
    glutCreateMenu(details);
    glutAddMenuEntry("Zoom out",4);
    glutAddMenuEntry("exit",3);
    glutAttachMenu(GLUT_RIGHT_BUTTON);

    glutHideWindow();

    glutMainLoop();
    return 1;
}

