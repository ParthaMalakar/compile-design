#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

float rocketx = 0;
float party = 0;
float buly = 0;
float bulx =0;
int px = 0, py = 0;
bool rocr = true;

void update_bul(int value)
{
    buly += 5.0f;

    if (buly-100<120) {

        glutPostRedisplay();

        glutTimerFunc(2, update_bul, 0);
    }
    else {
        buly = 0;
    }

}

void update_rocket(int value) {
    if (rocr)
    {
        rocketx += 5.0f;
        bulx += 5.0f;
        if(rocketx-150 > 40.0)
        {
            rocr = false;
        }
    }
    else
    {
        bulx -= 5.0f;
        rocketx -= 5.0f;
        if(rocketx+150 < 40.0)
        {
            rocr = true;
        }
    }

	glutPostRedisplay();

	glutTimerFunc(20, update_rocket, 0);
}

void update_part(int value) {
    party -= 5.0f;
    if(party+450 < 40.0)
    {
        party = 100.0f;
    }

	glutPostRedisplay();

	glutTimerFunc(20, update_part, 0);
}

void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    glTranslatef(0.0, party, 0.0);
    glColor3ub(255, 255, 0);
    glBegin(GL_POLYGON);
    glVertex2f(63, 394);
    glVertex2f(44, 370);
    glVertex2f(75, 370);
    glEnd();
    glColor3ub(255, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(196, 427);
    glVertex2f(178, 400);
    glVertex2f(212, 400);
    glEnd();
    glColor3ub(0, 255, 0);
    glBegin(GL_POLYGON);
    glVertex2f(411, 430);
    glVertex2f(393, 400);
    glVertex2f(425, 400);
    glEnd();
    glPopMatrix();

    // Ammo
    glPushMatrix();
    glTranslatef(bulx, buly, 0.0);
    glColor3ub(0, 0, 255);
    glPointSize(15);
    glBegin(GL_POINTS);
    glVertex2f(240, 250);
    glEnd();
    glPopMatrix();

    //Rocket
    glPushMatrix();
    glTranslatef(rocketx, 0.0, 0.0);
    glColor3ub(255, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(238, 238);
    glVertex2f(190, 195);
    glVertex2f(290, 195);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(238, 184);
    glVertex2f(190, 85);
    glVertex2f(290, 85);
    glEnd();
    // Fire
    glColor3ub(255, 140, 0);
    glBegin(GL_POLYGON);
    glVertex2f(238, 100);
    glVertex2f(190, 67);
    glVertex2f(238, 19);
    glVertex2f(290, 67);
    glEnd();
    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2f(258, 221);
    glVertex2f(218, 221);
    glVertex2f(218, 85);
    glVertex2f(258, 85);
    glEnd();
    glColor3ub(255, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(258, 221);
    glVertex2f(218, 221);
    glVertex2f(238, 285);
    glEnd();
    glPopMatrix();

    glFlush();
}
void myInit (void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 480.0, 0.0, 480.0);
}

void mouse(int button, int state, int x, int y) {
   if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        printf("glVertex2f(%d, %d);\n", x, 480-y);
        px = x;
        py = 480 - y;
        glutTimerFunc(20, update_bul, 0);
   }
}
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (480, 480);
glutInitWindowPosition (100, 200);
glutCreateWindow ("Rocket Game");
glutMouseFunc(mouse);
glutTimerFunc(20, update_rocket, 0);
glutTimerFunc(20, update_part, 0);
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
