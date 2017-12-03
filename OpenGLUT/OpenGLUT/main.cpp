//
//  main.cpp
//  OpenGLUT
//
//  Created by Apple on 2017/12/1.
//  Copyright © 2017年 lsc. All rights reserved.
//

#include <GLUT/GLUT.h>
#include "display.hpp"
#include "keyboard.hpp"
#include "mouse.hpp"

int main(int argc,char *argv[]) {
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DEPTH|GLUT_DOUBLE|GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(320,320);
    glutCreateWindow("MyGLUT");
    
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutIdleFunc(display);
    
    glutIgnoreKeyRepeat(1);
    glutKeyboardFunc(processNormalKeys);
    glutSpecialFunc(pressKey);
    glutSpecialUpFunc(releaseKey);
    
    glutMouseFunc(mouseButton);
    glutMotionFunc(mouseMove);
    
    glEnable(GL_DEPTH_TEST);
    glutMainLoop();
    
    return 1;
}
