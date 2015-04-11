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

#ifndef GLESWRAPPER_CORE_RENDERBUFFER_H
#define GLESWRAPPER_CORE_RENDERBUFFER_H

#include "Predefine.h"
#include "core/Object.h"

namespace gl
{

  class Renderbuffer : public Object
  {
    public:
      /**
       * Construct a Renderbuffer object with the name of value 0
       */
      Renderbuffer() : Object() {}

      /**
       * Construct a Renderbuffer object with the name of a specified value
       *
       * @param id a specified value for Renderbuffer object's name
       */
      explicit Renderbuffer(GLuint id) : Object(id) {}

      virtual ~Renderbuffer() {}

      /**
       * Generate a Renderbuffer object name
       *
       * @see glGenRenderbuffers(GLsizei n, GLuint *renderbuffers)
       */
      void Generate()
      {
        ::glGenRenderbuffers(1, &mId);
      }

      /**
       * Delete a named renderbuffer object
       *
       * @see glDeleteRenderbuffers(GLsizei n, const GLuint *renderbuffers)
       */
      void Delete()
      {
        ::glDeleteRenderbuffers(1, &mId);
        mId = 0;
      }

      /**
       * Bind a named Renderbuffer object
       *
       * @see glBindRenderbuffer(GLenum target, GLuint renderbuffer)
       */
      inline void Bind() const
      {
        ::glBindRenderbuffer(GL_RENDERBUFFER, mId);
      }

      /**
       * Create and initialize a Renderbuffer object's data store
       *
       * @see glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
       */
      inline void SetStorage(GLenum internalformat, GLsizei width, GLsizei height)
      {
        ::glRenderbufferStorage(GL_RENDERBUFFER, internalformat, width, height);
      }

      /**
       * Return parameters of a renderbuffer object
       *
       * @see glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint *params)
       */
      inline void GetParameter(GLenum pname, GLint* param) const
      {
        ::glGetRenderbufferParameteriv(GL_RENDERBUFFER, pname, param);
      }

  }; // class Renderbuffer

} // namespace gl

#endif // GLESWRAPPER_CORE_RENDERBUFFER_H
