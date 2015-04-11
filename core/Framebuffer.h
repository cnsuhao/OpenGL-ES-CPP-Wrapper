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

#ifndef GLESWRAPPER_CORE_FRAMEBUFFER_H
#define GLESWRAPPER_CORE_FRAMEBUFFER_H

#include "Predefine.h"
#include "core/Object.h"
#include "core/Texture.h"
#include "core/Renderbuffer.h"

namespace gl
{

  class Framebuffer : public Object
  {
    public:
      /**
       * Construct a default Framebuffer object with name (or id) of 0
       */
      Framebuffer() : Object() {}

      /**
       * Construct a Framebuffer object with the specified name (or id)
       *
       * @param id the id to set
       */
      explicit Framebuffer(GLuint id) : Object(id) {}

      virtual ~Framebuffer() {}

      /**
       * Generate a framebuffer object name
       *
       * @see glGenFramebuffers(GLsizei n, GLuint* framebuffers)
       */
      void Generate()
      {
        ::glGenFramebuffers(1, &mId);
      }

      /**
       * Delete a named framebuffer object
       *
       * @see glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers)
       */
      void Delete()
      {
        ::glDeleteFramebuffers(1, &mId);
        mId = 0;
      }

      /**
       * Bind a named framebuffer object
       *
       * @see glBindFramebuffer(GLenum target, GLuint framebuffer)
       */
      inline void Bind() const
      {
        ::glBindFramebuffer(GL_FRAMEBUFFER, mId);
      }

      /**
       * Attach a renderbuffer object to a framebuffer object
       *
       * @see glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
       */
      inline void Attach(GLenum attachment, const Renderbuffer& rb)
      {
        ::glFramebufferRenderbuffer(GL_FRAMEBUFFER, attachment, GL_RENDERBUFFER, rb.GetId());
      }

      /**
       * Attach a texture image to a framebuffer object
       *
       * @see glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
       */
      inline void Attach(GLenum attachment, const Texture2D& texture, GLint level)
      {
        ::glFramebufferTexture2D(GL_FRAMEBUFFER, attachment, GL_TEXTURE_2D, texture.GetId(), level);
      }

      /**
       * Attach a texture image to a framebuffer object
       *
       * @see glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
       */
      inline void Attach(GLenum attachment, GLenum textarget, const TextureCubeMap& texture, GLint level)
      {
        ::glFramebufferTexture2D(GL_FRAMEBUFFER, attachment, textarget, texture.GetId(), level);
      }

      /**
       * Return parameters of a buffer object
       *
       * @see glGetBufferParameteriv(GLenum target, GLenum value, GLint* data)
       */
      inline GLenum CheckStatus() const
      {
        return ::glCheckFramebufferStatus(GL_FRAMEBUFFER);
      }

      /**
       * Return the framebuffer completeness status of a framebuffer object
       *
       * @see glCheckFramebufferStatus(GLenum target)
       */
      inline void GetAttachmentParameter(GLenum attachment, GLenum pname, GLint* param) const
      {
        ::glGetFramebufferAttachmentParameteriv(GL_FRAMEBUFFER, attachment, pname, param);
      }

  }; // class Framebuffer

} // namespace gl

#endif // GLESWRAPPER_CORE_FRAMEBUFFER_H
