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

#ifndef GLESWRAPPER_CORE_BUFFER_H
#define GLESWRAPPER_CORE_BUFFER_H

#include "Predefine.h"
#include "core/Object.h"

namespace gl
{

  template<GLenum target>
  class Buffer : public Object
  {
    public:
      /**
       * Construct a Buffer object with the name of value 0
       */
      Buffer() : Object() {}

      /**
       * Construct a Buffer object with the name of a specified value
       *
       * @param id a specified value for Buffer object's name
       */
      explicit Buffer(GLuint id) : Object(id) {}

      virtual ~Buffer() {}

      /**
       * Generate a buffer object name
       *
       * @see glGenBuffers(GLsizei n, GLuint* buffers)
       */
      void Generate()
      {
        ::glGenBuffers(1, &mId);
      }

      /**
       * Delete a named buffer object
       *
       * @see glDeleteBuffers(GLsizei n, const GLuint* buffers)
       */
      void Delete()
      {
        ::glDeleteBuffers(1, &mId);
        mId = 0;
      }

      /**
       * Bind a named buffer object
       *
       * @see glBindBuffer(GLenum target, GLuint buffer)
       */
      inline void Bind() const
      {
        ::glBindBuffer(target, mId);
      }

      /**
       * Create and initialize a buffer object's data store
       *
       * @see glBufferData(GLenum target, GLsizeiptr size, const GLvoid* data, GLenum usage)
       */
      inline void SetData(GLsizeiptr size, const GLvoid* data, GLenum usage)
      {
        ::glBufferData(target, size, data, usage);
      }

      /**
       * Equivalent to call {@link #SetData(size, 0, usage)}
       *
       * @see #SetData(GLsizeiptr size, const GLvoid* data, GLenum usage)
       */
      inline void SetData(GLsizeiptr size, GLenum usage)
      {
        SetData(size, 0, usage);
      }

      /**
       * Update a subset of a buffer object's data store
       *
       * @see glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid * data)
       */
      inline void SetSubData(GLintptr offset, GLsizeiptr size, const GLvoid* data)
      {
        ::glBufferSubData(target, offset, size, data);
      }

      /**
       * Return parameters of a buffer object
       *
       * @see glGetBufferParameteriv(GLenum target, GLenum value, GLint* data)
       */
      inline void GetParameter(GLenum value, GLint* data) const
      {
        ::glGetBufferParameteriv(target, value, data);
      }

  }; //class Buffer

  typedef Buffer<GL_ARRAY_BUFFER> ArrayBuffer;
  typedef Buffer<GL_ELEMENT_ARRAY_BUFFER> ElementBuffer;

} // namespace gl

#endif // GLESWRAPPER_CORE_BUFFER_H
