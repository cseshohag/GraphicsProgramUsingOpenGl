#include<windows.h>
#include <GL/glut.h>


void initGL(){

    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

}

void display(){

    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);
            glColor3f(1.0f, 1.0f, 0.0f);
            glVertex2f(-0.9f, 0.20f);
            glColor3f(1.0f, 0.0f, 0.0f);
            glVertex2f(-0.65f, 0.20f);
            glColor3f(1.0f, 0.0f, 0.0f);
            glVertex2f(-0.65f, 0.6f);
            glColor3f(1.0f, 0.0f, 0.0f);
            glVertex2f(-0.9f, 0.6f);

    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.80f, 0.20f);
        glColor3f(1.0f, 0.0f, 1.0f);
        glVertex2f(-0.75f, 0.20f);
        glColor3f(1.0f, 0.0f, 1.0f);
        glVertex2f(-0.75f, 0.35f);
        glColor3f(1.0f, 0.0f, 1.0f);
        glVertex2f(-0.80f, 0.35f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.97f, 0.50f);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.97f, 0.50f);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.77, 0.80f);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.58f, 0.50f);

    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.65f, 0.20f);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2f(-0.6f, 0.20f);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2f(-0.6f, 0.15f);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.95f, 0.15f);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2f(-0.95f, 0.2f);
    glEnd();
    glBegin(GL_LINE_LOOP);                     //Tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Starting line
        glVertex2f(-0.5f, 0.15f);           //Starting line
        glColor3f(1.0f, 0.0f, 0.0f);        //Starting line
        glVertex2f(-0.5f, 0.80f);           //Starting line
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.52f, 0.78f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.525f, 0.75f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.53f, 0.73f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.535f, 0.70f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.54f, 0.73f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.52f, 0.8f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.50f, 0.81f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.52f, 0.82f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.55f, 0.75f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.55f, 0.79f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.52f, 0.85f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.50f, 0.84f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.53f, 0.87f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.57f, 0.85f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.54f, 0.89f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.51f, 0.896f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.53f, 0.91f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.51f, 0.93f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.50f, 0.91f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.48f, 0.93f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.46f, 0.91f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.48f, 0.88f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.46f, 0.90f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.44f, 0.91f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.42f, 0.89f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.44f, 0.89f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.46f, 0.88f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.48f, 0.84f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.45f, 0.86f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.40f, 0.82f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.42f, 0.81f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.45f, 0.83f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.49f, 0.81f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.45f, 0.805f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.42f, 0.72f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.44f, 0.73f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.45f, 0.77f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.46f, 0.78f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.49f, 0.79f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.49f, 0.15f);          //Start tree


    glEnd();

    glBegin(GL_POLYGON);            //Flag
            glColor3ub(0, 106, 77);
            glVertex2f(0.25f, 0.60f);
            glColor3ub(0, 106, 77);
            glVertex2f(0.45f, 0.60f);
            glColor3ub(0, 106, 77);
            glVertex2f(0.45f, 0.8f);
            glColor3ub(0, 106, 77);
            glVertex2f(.25f, 0.8f);

    glEnd();

    glBegin(GL_LINES);  //flag line
        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex2f(0.25f, 0.82f);
        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex2f(0.25f, 0.2f);
    glEnd();



    glBegin(GL_POLYGON);        //road
        glColor3ub(0, 106, 77);
        glVertex2f(-1.0f, 0.0f);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2f(1.0f, 0.0f);
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex2f(1.0f, -0.2f);
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex2f(-1.0f, -0.2f);
    glEnd();

    glBegin(GL_POLYGON);        //Pond
        glColor3ub(0, 106, 77);
        glVertex2f(0.8f, -0.7f);
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex2f(0.9f, -0.55f);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(0.7f, -0.45f);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.4f, -0.25f);
        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex2f(0.2f, -0.35f);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(0.15f, -0.4f);
        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex2f(0.42f, -0.55f);
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex2f(0.55f, -0.7f);

    glEnd();
    glFlush();

}


int main(int argc, char** argv){

    glutInit(&argc, argv);
    glutCreateWindow("Scenario");
    glutInitWindowSize(700,700);
    glutInitWindowPosition(100,100);
    glutDisplayFunc(display);
    initGL();
    glutMainLoop();
    return 0;

}
