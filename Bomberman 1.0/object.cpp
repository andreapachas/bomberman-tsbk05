#include "object.h"
#include <math.h>
#include <freeglut.h>


Object::Object(Model* model, GLfloat x, GLfloat z, GLfloat y, GLfloat rotation, GLfloat scale) : model(model), x(x), z(z), y(y), rotation(rotation), scale(scale) {
}


Object::~Object() {
}


void Object::draw() {
	glPushMatrix();
	glTranslatef(x, y, z);
	glScalef(scale, scale, scale);
	glRotatef(rotation, 0, 1, 0);

	model->draw();

	glPopMatrix();
}


void Object::addRotation(GLfloat newRotation) {
	rotation += newRotation;
}


void Object::addLocation(GLfloat newX, GLfloat newY, GLfloat newZ) {
	x += newX;
	y += newY;
	z += newZ;
}


void Object::setRotation(GLfloat newRotation) {
	rotation = newRotation;
}


void Object::setLocation(GLfloat newX, GLfloat newZ, GLfloat newY) {
	x = newX;
	z = newX;
	y = newY;
}

