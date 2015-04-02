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

#ifndef GLESWRAPPER_CORE_TEXTURE_H
#define GLESWRAPPER_CORE_TEXTURE_H

#include "Predefine.h"
#include "core/Object.h"

namespace gl
{

  template<GLenum target>
  class Texture : public Object
  {
    public:
      static void Active(GLenum texture)
      {
        ::glActiveTexture(texture);
      }

      Texture() : Object() {}

      explicit Texture(GLuint id) : Object(id) {}

      virtual ~Texture() {}

      void Generate()
      {
        ::glGenTextures(1, &mId);
      }

      void Delete()
      {
        ::glDeleteTextures(1, &mId);
        mId = 0;
      }

      inline void Bind() const
      {
        ::glBindTexture(target, mId);
      }

      inline void GenerateMipmap() const
      {
        ::glGenerateMipmap(target);
      }

      inline void SetImage2D(GLint level, GLint internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* data)
      {
        ::glTexImage2D(target, level, internalformat, width, height, 0, format, type, data);
      }

      inline void SetImage2D(GLint level, GLint internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type)
      {
        SetImage2D(level, internalformat, width, height, format, type, 0);
      }

      inline void SetCompressedImage2D(GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei imageSize, const GLvoid* data)
      {
        ::glCompressedTexImage2D(target, level, internalformat, width, height, 0, imageSize, data);
      }

      inline void SetCompressedImage2D(GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei imageSize)
      {
        SetCompressedImage2D(level, internalformat, width, height, 0, imageSize, 0);
      }

      inline void SetSubImage2D(GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * data)
      {
        ::glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, data);
      }

      inline void SetCompressedSubImage2D(GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data)
      {
        ::glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
      }

      inline void CopyImage2D(GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height)
      {
        ::glCopyTexImage2D(target, level, internalformat, x, y, width, height, 0);
      }

      inline void CopySubImage2D(GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
      {
        ::glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
      }

      inline void SetParameter(GLenum pname, GLfloat param)
      {
        ::glTexParameterf(target, pname, param);
      }

      inline void SetParameter(GLenum pname, GLint param)
      {
        ::glTexParameteri(target, pname, param);
      }

      inline void SetParameter(GLenum pname, const GLfloat* params)
      {
        ::glTexParameterfv(target, pname, params);
      }

      inline void SetParameter(GLenum pname, const GLint* params)
      {
        ::glTexParameteriv(target, pname, params);
      }

      inline void GetParameter(GLenum pname, GLfloat* params) const
      {
        ::glGetTexParameterfv(target, pname, params);
      }

      inline void GetParameter(GLenum pname, GLint* params) const
      {
        ::glGetTexParameteriv(target, pname, params);
      }

  }; // class Texture

  typedef Texture<GL_TEXTURE_2D> Texture2D;
  typedef Texture<GL_TEXTURE_CUBE_MAP> TextureCubeMap;

} // namespace gl

#endif // GLESWRAPPER_CORE_TEXTURE_H
