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

#ifndef GLESWRAPPER_SHADER_H
#define GLESWRAPPER_SHADER_H

#include "Predefine.h"
#include "Object.h"

namespace gl
{

  template<GLenum type>
  class Shader : public Object
  {
    public:
      static void ReleaseCompiler()
      {
        ::glReleaseShaderCompiler();
      }

      static void GetPrecisionFormat(GLenum precisiontype, GLint* range, GLint* precision)
      {
        ::glGetShaderPrecisionFormat(type, precisiontype, range, precision);
      }

      void Create()
      {
        mId = ::glCreateShader(type);
      }

      void Delete()
      {
        ::glDeleteShader(mId);
        mId = 0;
      }

      inline void SetSource(GLsizei count, const GLchar** sources, const GLint* length)
      {
        ::glShaderSource(mId, count, sources, length);
      }

      inline void SetSource(GLsizei count, const GLchar** sources)
      {
        SetSource(count, sources, 0);
      }

      inline void SetSource(const GLchar* source)
      {
        SetSource(1, &source);
      }

      inline void SetBinary(GLsizei count, const GLuint* shader, GLenum binaryformat, const GLvoid* data, GLsizei length)
      {
        ::glShaderBinary(count, shader, binaryformat, data, length);
      }

      inline void Compile()
      {
        ::glCompileShader(mId);
      }

      inline void GetParameter(GLenum pname, GLint* param) const
      {
        ::glGetShaderiv(mId, pname, param);
      }

      inline void GetInfoLog(GLsizei bufsize, GLsizei* length, GLchar* infolog) const
      {
        ::glGetShaderInfoLog(mId, bufsize, length, infolog);
      }

      inline void GetSource(GLsizei bufSize, GLsizei* length, GLchar* source) const
      {
        ::glGetShaderSource(mId, bufSize, length, source);
      }

  }; // class Shader

  typedef Shader<GL_VERTEX_SHADER> VertexShader;
  typedef Shader<GL_FRAGMENT_SHADER> FragmentShader;

} // namespace gl

#endif // GLESWRAPPER_SHADER_H
