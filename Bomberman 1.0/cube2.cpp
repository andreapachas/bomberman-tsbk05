#include "cube2.h"
#include "freeglut.h"


Cube2::Cube2():Model() {}

void Cube2::draw() {

    const static GLfloat cubeVertexes[][3] = {
                {
                    -0.5, 0.5, -0.5
                },
                {0.5, 0.5, -0.5},
                {-0.5, 0.5, 0.5},
                {0.5, 0.5, 0.5},
                {-0.5, -0.5, -0.5},
                {0.5, -0.5, -0.5},
                {-0.5, -0.5, 0.5},
                {0.5, -0.5, 0.5}
            };

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 1.0);
    glNormal3f(0, 1, 0);
    glVertex3fv(cubeVertexes[0]);
    glVertex3fv(cubeVertexes[2]);
    glVertex3fv(cubeVertexes[3]);
    glVertex3fv(cubeVertexes[1]);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
    glNormal3f(0, -1, 0);
    glVertex3fv(cubeVertexes[4]);
    glVertex3fv(cubeVertexes[5]);
    glVertex3fv(cubeVertexes[7]);
    glVertex3fv(cubeVertexes[6]);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 0.0);
    glNormal3f(0, 0, 1);
    glVertex3fv(cubeVertexes[2]);
    glVertex3fv(cubeVertexes[6]);
    glVertex3fv(cubeVertexes[7]);
    glVertex3fv(cubeVertexes[3]);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);
    glNormal3f(0, 0, -1);
    glVertex3fv(cubeVertexes[0]);
    glVertex3fv(cubeVertexes[1]);
    glVertex3fv(cubeVertexes[5]);
    glVertex3fv(cubeVertexes[4]);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.0);
    glNormal3f(-1, 0, 0);
    glVertex3fv(cubeVertexes[0]);
    glVertex3fv(cubeVertexes[4]);
    glVertex3fv(cubeVertexes[6]);
    glVertex3fv(cubeVertexes[2]);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 1.0);
    glNormal3f(1, 0, 0);
    glVertex3fv(cubeVertexes[1]);
    glVertex3fv(cubeVertexes[3]);
    glVertex3fv(cubeVertexes[7]);
    glVertex3fv(cubeVertexes[5]);
    glEnd();

}

