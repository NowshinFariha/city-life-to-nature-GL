
#include<windows.h>
#include<iostream>
#include <GL/glut.h>

using namespace std;




void display()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);

    ///drawing sky
    glBegin(GL_QUADS);
    glColor3ub(132, 164, 239);
    glVertex2f(0,750);
    glVertex2f(1080,750);

    glColor3ub(244, 227, 205);
    glVertex2f(1080,230);
    glVertex2f(0,230);
    glEnd();

    ///drawing road

    ///below white border
    glBegin(GL_QUADS);
    glColor3ub(221, 227, 215);
    glVertex2f(0,93);
    glVertex2f(1080,93);
    glVertex2f(1080,85);
    glVertex2f(0,85);
    glEnd();

    ///middle gray body
    glBegin(GL_QUADS);
    glColor3ub(111, 105, 151);
    glVertex2f(0,171);
    glColor3ub(176, 142, 175);
    glVertex2f(1080,171);
    glColor3ub(176, 142, 175);
    glVertex2f(1080,93);
    glColor3ub(111, 105, 151);
    glVertex2f(0,93);
    glEnd();

    ///breakin white lines
    glBegin(GL_QUADS);
    glColor3ub(222, 205, 247);
    glVertex2f(0,135.44);
    glVertex2f(90.83,135.44);
    glVertex2f(85.79,128);
    glVertex2f(0,128);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(222, 205, 247);
    glVertex2f(222.28,135.67);
    glVertex2f(333.22,136);
    glVertex2f(327.84,128);
    glVertex2f(213.14,128);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(222, 205, 247);
    glVertex2f(428.35,135.67);
    glVertex2f(524.22,136);
    glVertex2f(522.84,128);
    glVertex2f(425,128);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(222, 205, 247);
    glVertex2f(610,135.67);
    glVertex2f(710,136);
    glVertex2f(708,128);
    glVertex2f(608.3,128);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(222, 205, 247);
    glVertex2f(786.9,135.67);
    glVertex2f(890,136);
    glVertex2f(888,128);
    glVertex2f(785,128);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(222, 205, 247);
    glVertex2f(963,135.67);
    glVertex2f(1068,136);
    glVertex2f(1067,128);
    glVertex2f(963,128);
    glEnd();

    ///upper white border
    glBegin(GL_QUADS);
    glColor3ub(193, 180, 174);
    glVertex2f(0,175);
    glVertex2f(1080,175);
    glVertex2f(1080,170);
    glVertex2f(0,170);
    glEnd();

    ///middle green hills
    glBegin(GL_POLYGON);
    glColor3ub(154, 183, 73);
    glVertex2f(0,234.7);
    glVertex2f(7.42,237.62);
    glVertex2f(20,240);
    glVertex2f(30.5,240.75);
    glVertex2f(65.5,242.5);
    glVertex2f(124.51,240);
    glVertex2f(138,244);
    glVertex2f(151,245);
    glVertex2f(168,244);
    glVertex2f(182.63,242.28);
    glVertex2f(198.61,234.5);
    glVertex2f(213.77,239.41);
    glVertex2f(228.51,244.74);
    glVertex2f(245.71,250.5);
    glVertex2f(286.44,254.57);
    glVertex2f(300.61,257.03);
    glVertex2f(329.68,255.08);
    glVertex2f(353.03,251.03);
    glVertex2f(377.71,246.79);
    glVertex2f(402.5,239.82);
    glVertex2f(420.22,237.37);
    glVertex2f(438.38,235.71);
    glVertex2f(476.72,235.73);
    glVertex2f(550.44,235.79);
    glVertex2f(616.2,233.2);
    glVertex2f(665.9,233.43);
    glVertex2f(680,240);
    glVertex2f(694.53,239.5);
    glVertex2f(715.86,235.8);
    glVertex2f(745.17,232.28);
    glVertex2f(803.3,232.8);
    ///glVertex2f(818.81,227.17);
    glVertex2f(818.81,225.17);
    glVertex2f(832.91,228.08);
    glVertex2f(841.55,229.45);
    ///glVertex2f(854.28,226.71);
    glVertex2f(854.28,224.71);
    glVertex2f(865.20,231.28);
    glVertex2f(888.82,226.26);
    //glVertex2f(905.67,222.63);
    glVertex2f(905.67,220.63);
    glVertex2f(944.78,230.35);
    glVertex2f(1028.62,223.87);
    glVertex2f(1080,238.5);
    glVertex2f(1080,175.78);
    glVertex2f(0,175.78);
    glEnd();


    glFlush();


}



void myInit(void)
{
    //glColor3f(0.0f, 0.0f, 0.0f);
    //glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    //gluOrtho2D(-100.0, 640.0,-100.0, 480.0);
    gluOrtho2D(0,1080, 0.0,750);
}




int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1080,750);
    glutInitWindowPosition(100, 150);
    glutCreateWindow("Natural Life");
    glutDisplayFunc(display);
    myInit();
    glutMainLoop();

}



