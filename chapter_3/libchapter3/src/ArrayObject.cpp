#include "libchapter3_private.h"
#include "ArrayObject.h"

CArrayObject::CArrayObject()
{
    glGenVertexArrays(1, &m_arrayId);
}

CArrayObject::~CArrayObject()
{
    glDeleteVertexArrays(1, &m_arrayId);
}

void CArrayObject::Bind()
{
    glBindVertexArray(m_arrayId);
}
