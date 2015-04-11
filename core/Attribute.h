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

      /**
       * Construct a default Attribute object with index of 0
       */
      Attribute() : mIndex(0) {}

      /**
       * Construct an Attribute object with the specified index
       *
       * @param index the specified index
       */
      explicit Attribute(GLuint index) : mIndex(index) {}

      /**
       * Simplely reset the index to 0
       */
      virtual ~Attribute()
      {
        mIndex = 0;
      }

      /**
       * Specify the value of a generic vertex attribute
       *
       * @see glVertexAttrib1f(GLuint index, GLfloat x)
       */
      inline void Set(GLfloat v0)
      {
        ::glVertexAttrib1f(mIndex, v0);
      }

      /**
       * Specify the value of a generic vertex attribute
       *
       * @see glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
       */
      inline void Set(GLfloat v0, GLfloat v1)
      {
        ::glVertexAttrib2f(mIndex, v0, v1);
      }

      /**
       * Specify the value of a generic vertex attribute
       *
       * @see glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
       */
      inline void Set(GLfloat v0, GLfloat v1, GLfloat v2)
      {
        ::glVertexAttrib3f(mIndex, v0, v1, v2);
      }

      /**
       * Specify the value of a generic vertex attribute
       *
       * @see glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
       */
      inline void Set(GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
      {
        ::glVertexAttrib4f(mIndex, v0, v1, v2, v3);
      }

      /**
       * Specify the value of a generic vertex attribute
       *
       * @see glVertexAttrib1fv(GLuint index, const GLfloat *v)
       */
      inline void Set1v(const GLfloat* v)
      {
        ::glVertexAttrib1fv(mIndex, v);
      }

      /**
       * Specify the value of a generic vertex attribute
       *
       * @see glVertexAttrib2fv(GLuint index, const GLfloat *v)
       */
      inline void Set2v(const GLfloat* v)
      {
        ::glVertexAttrib2fv(mIndex, v);
      }

      /**
       * Specify the value of a generic vertex attribute
       *
       * @see glVertexAttrib3fv(GLuint index, const GLfloat *v)
       */
      inline void Set3v(const GLfloat* v)
      {
        ::glVertexAttrib3fv(mIndex, v);
      }

      /**
       * Specify the value of a generic vertex attribute
       *
       * @see glVertexAttrib4fv(GLuint index, const GLfloat *v)
       */
      inline void Set4v(const GLfloat* v)
      {
        ::glVertexAttrib4fv(mIndex, v);
      }

      /**
       * Enable a generic vertex attribute array
       *
       * @see glEnableVertexAttribArray(GLuint index)
       */
      inline void EnableArray()
      {
        ::glEnableVertexAttribArray(mIndex);
      }

      /**
       * Disable a generic vertex attribute array
       *
       * @see glDisableVertexAttribArray(GLuint index)
       */
      inline void DisableArray()
      {
        ::glDisableVertexAttribArray(mIndex);
      }

      /**
       * Define an array of generic vertex attribute data
       *
       * @see glVertexAttribPointer(GLuint index, GLint size, GLenum type,
       *      GLboolean normalized, GLsizei stride, const void *pointer)
       */
      inline void SetPointer(GLint size, GLenum type, bool normalized, GLsizei stride, const GLvoid* pointer)
      {
        ::glVertexAttribPointer(mIndex, size, type, normalized, stride, pointer);
      }

      /**
       * Return the index of the generic vertex attribute object
       *
       * @see glGenBuffers(GLsizei n, GLuint* buffers)
       */
      inline GLuint GetIndex() const
      {
        return mIndex;
      }

      /**
       * Return a generic vertex attribute parameter
       *
       * @see glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat *params)
       */
      inline void GetParameter(GLenum pname, GLfloat* params)
      {
        ::glGetVertexAttribfv(mIndex, pname, params);
      }

      /**
       * Return a generic vertex attribute parameter
       *
       * @see glGetVertexAttribiv(GLuint index, GLenum pname, GLint *params)
       */
      inline void GetParameter(GLenum pname, GLint* params)
      {
        ::glGetVertexAttribiv(mIndex, pname, params);
      }

      /**
       * Return the address of the specified generic vertex attribute pointer
       *
       * @see glGetVertexAttribPointerv(GLuint index, GLenum pname, void **pointer)
       */
      inline void GetPointer(GLvoid** pointer)
      {
        ::glGetVertexAttribPointerv(mIndex, GL_VERTEX_ATTRIB_ARRAY_POINTER, pointer);
      }

    protected:
      GLuint mIndex;
  }; // class Attribute


} // namespace gl

#endif // GLESWRAPPER_CORE_ATTRIBUTE_H
