//  VertexBuffer.h
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

#ifndef VertexBuffer_h
#define VertexBuffer_h

class VertexBuffer {
private:
    unsigned int m_RendererID;
public:
    VertexBuffer(const void* data, unsigned int size);
    ~VertexBuffer();
    
    void Bind() const;
    void UnBind() const;
};

#endif /* VertexBuffer_h */
