// Copyright (c) 2015, JRBS Team(jrbs.top)
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//
// 1.Redistributions of source code must retain the above copyright
//   notice, this list of conditions and the following disclaimer.
//
// 2.Redistributions in binary form must reproduce the above copyright
//   notice, this list of conditions and the following disclaimer in the
//   documentation and/or other materials provided with the distribution.
//
// 3.Neither the name of the copyright holder nor the names of its
//   contributors may be used to endorse or promote products derived
//   from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
// FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
// COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
// BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
// OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
// ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR
// TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
// USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef GLESWRAPPER_CORE_ATTRIBUTE_H
#define GLESWRAPPER_CORE_ATTRIBUTE_H

#include "Predefine.h"
#include "core/Object.h"

namespace gl
{

  class Attribute
  {
    public:
      friend class Program;

      inline static void GetParameter(GLuint index, GLenum pname, GLfloat* params)
      {
        ::glGetVertexAttribfv(index, pname, params);
      }

      inline static void GetParameter(GLuint index, GLenum pname, GLint* params)
      {
        ::glGetVertexAttribiv(index, pname, params);
      }

      inline static void GetPointer(GLuint index, GLvoid** pointer)
      {
        ::glGetVertexAttribPointerv(index, GL_VERTEX_ATTRIB_ARRAY_POINTER, pointer);
      }

      Attribute() : mLoc(0) {}

      explicit Attribute(GLint loc) : mLoc(loc) {}

      virtual ~Attribute()
      {
        mLoc = 0;
      }

      inline void Set(GLfloat v0)
      {
        ::glVertexAttrib1f(mLoc, v0);
      }

      inline void Set(GLfloat v0, GLfloat v1)
      {
        ::glVertexAttrib2f(mLoc, v0, v1);
      }

      inline void Set(GLfloat v0, GLfloat v1, GLfloat v2)
      {
        ::glVertexAttrib3f(mLoc, v0, v1, v2);
      }

      inline void Set(GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
      {
        ::glVertexAttrib4f(mLoc, v0, v1, v2, v3);
      }

      inline void Set1v(const GLfloat* v)
      {
        ::glVertexAttrib1fv(mLoc, v);
      }

      inline void Set2v(const GLfloat* v)
      {
        ::glVertexAttrib2fv(mLoc, v);
      }

      inline void Set3v(const GLfloat* v)
      {
        ::glVertexAttrib3fv(mLoc, v);
      }

      inline void Set4v(const GLfloat* v)
      {
        ::glVertexAttrib4fv(mLoc, v);
      }

      inline void EnableGeneric()
      {
        ::glEnableVertexAttribArray(mLoc);
      }

      inline void DisableGeneric()
      {
        ::glDisableVertexAttribArray(mLoc);
      }

      inline void SetPointer(GLint size, GLenum type, bool normalized, GLsizei stride, GLsizeiptr offset)
      {
        ::glVertexAttribPointer(mLoc, size, type, normalized, stride, (GLvoid*)offset);
      }

      inline void SetPointer(GLint size, GLenum type, bool normalized, GLsizei stride, const GLvoid* data)
      {
        ::glVertexAttribPointer(mLoc, size, type, normalized, stride, data);
      }

      inline GLint GetLocation() const
      {
        return mLoc;
      }

    protected:
      GLint mLoc;
  }; // class Attribute


} // namespace gl

#endif // GLESWRAPPER_CORE_ATTRIBUTE_H
