//  IndexBuffer.h
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

#ifndef IndexBuffer_h
#define IndexBuffer_h

class IndexBuffer {
private:
    unsigned int m_RendererID;
    unsigned int m_Count;
public:
    IndexBuffer(const void* data, unsigned int count);
    ~IndexBuffer();
    
    void Bind();
    void UnBind();
};


#endif /* IndexBuffer_h */
