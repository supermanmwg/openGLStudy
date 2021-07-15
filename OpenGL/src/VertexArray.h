//  VertexArray.h
//  OpenGL
//
//  Created by supermanmwng on 2021/7/14.
//  
//
//         .-"-.
//       _/_-.-_\_
//      / __> <__ \
//     / //  "  \\ \   see no evil...
//    / / \'---'/ \ \
//    \ \_/`"""`\_/ /
//     \           /

#ifndef VertexArray_h
#define VertexArray_h

#include "VertexBuffer.h"
#include "VertexBufferLayout.h"
class VertexArray {
private:
    unsigned int m_RendererID;
public:
    VertexArray();
    ~VertexArray();
    
    void Bind() const;
    void UnBind() const;
    void AddBuffer(const VertexBuffer& vb, const VertexBufferLayout& layout);
};

#endif /* VertexArray_h */
