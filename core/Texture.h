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
      /**
       * Select active texture unit
       *
       * @see glActiveTexture(GLenum texture)
       */
      static void Active(GLenum texture)
      {
        ::glActiveTexture(texture);
      }

      /**
       * Construct a Texture object with the name of value 0
       *
       */
      Texture() : Object() {}

      /**
       * Construct a Texture object with the name of a specified value
       *
       * @param id a specified value for Texture object's name
       */
      explicit Texture(GLuint id) : Object(id) {}

      virtual ~Texture() {}

      /**
       * Generate a texture name
       *
       * @see glGenTextures(GLsizei n, GLuint *textures)
       */
      void Generate()
      {
        ::glGenTextures(1, &mId);
      }

      /**
       * Delete a named texture
       *
       * @see glDeleteTextures(GLsizei n, const GLuint *textures)
       */
      void Delete()
      {
        ::glDeleteTextures(1, &mId);
        mId = 0;
      }

      /**
       * Bind a named texture to a texturing target
       *
       * @see glBindTexture(GLenum target, GLuint texture)
       */
      inline void Bind() const
      {
        ::glBindTexture(target, mId);
      }

      /**
       * Generate mipmaps for a specified texture target
       *
       * @see glGenerateMipmap(GLenum target)
       */
      inline void GenerateMipmap() const
      {
        ::glGenerateMipmap(target);
      }

      /**
       * Specify a two-dimensional texture image
       *
       * @see glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels)
       */
      inline void SetImage2D(GLint level, GLint internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* data)
      {
        ::glTexImage2D(target, level, internalformat, width, height, 0, format, type, data);
      }

      /**
       * Equivalent to call <code>SetImage2D(level, internalformat, width, height, format, type, 0)</code>
       *
       * @see #SetImage2D(GLint level, GLint internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* data)
       */
      inline void SetImage2D(GLint level, GLint internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type)
      {
        SetImage2D(level, internalformat, width, height, format, type, 0);
      }

      /**
       * Specify a two-dimensional texture image in a compressed format
       *
       * @see glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data)
       */
      inline void SetCompressedImage2D(GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei imageSize, const GLvoid* data)
      {
        ::glCompressedTexImage2D(target, level, internalformat, width, height, 0, imageSize, data);
      }

      /**
       * Equivalent to call <code>SetCompressedImage2D(level, internalformat, width, height, 0, imageSize, 0)</code>
       *
       * @see #SetCompressedImage2D(GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei imageSize, const GLvoid* data)
       */
      inline void SetCompressedImage2D(GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei imageSize)
      {
        SetCompressedImage2D(level, internalformat, width, height, 0, imageSize, 0);
      }

      /**
       * Specify a two-dimensional texture subimage
       *
       * @see glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels)
       */
      inline void SetSubImage2D(GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* data)
      {
        ::glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, data);
      }

      /**
       * Specify a two-dimensional texture subimage in a compressed format
       *
       * @see glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data)
       */
      inline void SetCompressedSubImage2D(GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid* data)
      {
        ::glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
      }

      /**
       * Copy pixels into a 2D texture image
       *
       * @see glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
       */
      inline void CopyImage2D(GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height)
      {
        ::glCopyTexImage2D(target, level, internalformat, x, y, width, height, 0);
      }

      /**
       * Copy a two-dimensional texture subimage
       *
       * @see glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
       */
      inline void CopySubImage2D(GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
      {
        ::glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
      }

      /**
       * Set texture parameters
       *
       * @see glTexParameterf(GLenum target, GLenum pname, GLfloat param)
       */
      inline void SetParameter(GLenum pname, GLfloat param)
      {
        ::glTexParameterf(target, pname, param);
      }

      /**
       * Set texture parameters
       *
       * @see glTexParameteri(GLenum target, GLenum pname, GLint param)
       */
      inline void SetParameter(GLenum pname, GLint param)
      {
        ::glTexParameteri(target, pname, param);
      }

      /**
       * Set texture parameters
       *
       * @see glTexParameterfv(GLenum target, GLenum pname, const GLfloat *params)
       */
      inline void SetParameter(GLenum pname, const GLfloat* params)
      {
        ::glTexParameterfv(target, pname, params);
      }

      /**
       * Set texture parameters
       *
       * @see glTexParameteriv(GLenum target, GLenum pname, const GLint *params)
       */
      inline void SetParameter(GLenum pname, const GLint* params)
      {
        ::glTexParameteriv(target, pname, params);
      }

      /**
       * Return texture parameter values
       *
       * @see glGetTexParameterfv(GLenum target, GLenum pname, GLfloat *params)
       */
      inline void GetParameter(GLenum pname, GLfloat* params) const
      {
        ::glGetTexParameterfv(target, pname, params);
      }

      /**
       * Return texture parameter values
       *
       * @see glGetTexParameteriv(GLenum target, GLenum pname, GLint *params)
       */
      inline void GetParameter(GLenum pname, GLint* params) const
      {
        ::glGetTexParameteriv(target, pname, params);
      }

  }; // class Texture

  typedef Texture<GL_TEXTURE_2D> Texture2D;
  typedef Texture<GL_TEXTURE_CUBE_MAP> TextureCubeMap;

} // namespace gl

#endif // GLESWRAPPER_CORE_TEXTURE_H
