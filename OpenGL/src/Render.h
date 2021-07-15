//  Render.h
//  OpenGL
//
//  Created by supermanmwng on 2021/7/13.
//  
//
//         .-"-.
//       _/_-.-_\_
//      / __> <__ \
//     / //  "  \\ \   see no evil...
//    / / \'---'/ \ \
//    \ \_/`"""`\_/ /
//     \           /

#ifndef Render_h
#define Render_h

#include "glew.h"

#define ASSERT(x) if (!(x)) __builtin_trap();

#define GLCall(x) GLClearError();\
    x;\
    ASSERT(GLLogCall(#x, __FILE__, __LINE__))


void GLClearError();

bool GLLogCall(const char * function, const char* file, int line);

#endif /* Render_h */
