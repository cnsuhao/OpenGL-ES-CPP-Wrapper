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

#ifndef GLESWRAPPER_CORE_SHADER_H
#define GLESWRAPPER_CORE_SHADER_H

#include "Predefine.h"
#include "core/Object.h"

namespace gl
{

  template<GLenum type>
  class Shader : public Object
  {
    public:
      /**
       * Release resources consumed by the implementation's shader compiler
       *
       * @see glReleaseShaderCompiler()
       */
      static void ReleaseCompiler()
      {
        ::glReleaseShaderCompiler();
      }

      /**
       * Retrieve the range and precision for numeric formats supported by the shader compiler
       *
       * @see glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision)
       */
      static void GetPrecisionFormat(GLenum precisiontype, GLint* range, GLint* precision)
      {
        ::glGetShaderPrecisionFormat(type, precisiontype, range, precision);
      }

      /**
       * Construct a Shader object with the name of value 0
       *
       */
      Shader() : Object() {}

      /**
       * Construct a Shader object with the name of a specified value
       *
       * @param id a specified value for Shader object's name
       */
      explicit Shader(GLuint id) : Object(id) {}

      virtual ~Shader() {}

      /**
       * Create a shader object
       *
       * @see glCreateShader(GLenum type)
       */
      void Create()
      {
        mId = ::glCreateShader(type);
      }

      /**
       * Delete a shader object
       *
       * @see glDeleteShader(GLuint shader)
       */
      void Delete()
      {
        ::glDeleteShader(mId);
        mId = 0;
      }

      /**
       * Replace the source code in a shader object
       *
       * @see glShaderSource(GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length)
       */
      inline void SetSource(GLsizei count, const GLchar** sources, const GLint* length)
      {
        ::glShaderSource(mId, count, sources, length);
      }

      /**
       * Equivalent to call <code>SetSource(count, sources, 0)</code>
       *
       * @see #SetSource(GLsizei count, const GLchar** sources, const GLint* length)
       */
      inline void SetSource(GLsizei count, const GLchar** sources)
      {
        SetSource(count, sources, 0);
      }

      /**
       * Equivalent to call <code>SetSource(1, &source)</code>
       *
       * @see #SetSource(GLsizei count, const GLchar** sources)
       */
      inline void SetSource(const GLchar* source)
      {
        SetSource(1, &source);
      }

      /**
       * Load pre-compiled shader binaries
       *
       * @see glShaderBinary(GLsizei count, const GLuint *shaders, GLenum binaryformat, const void *binary, GLsizei length)
       */
      inline void SetBinary(GLsizei count, const GLuint* shader, GLenum binaryformat, const GLvoid* data, GLsizei length)
      {
        ::glShaderBinary(count, shader, binaryformat, data, length);
      }

      /**
       * Compile a shader object
       *
       * @see glCompileShader(GLuint shader)
       */
      inline void Compile()
      {
        ::glCompileShader(mId);
      }

      /**
       * Return a parameter from a shader object
       *
       * @see glGetShaderiv(GLuint shader, GLenum pname, GLint *params)
       */
      inline void GetParameter(GLenum pname, GLint* param) const
      {
        ::glGetShaderiv(mId, pname, param);
      }

      /**
       * Return the information log for a shader object
       *
       * @see glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog)
       */
      inline void GetInfoLog(GLsizei bufsize, GLsizei* length, GLchar* infolog) const
      {
        ::glGetShaderInfoLog(mId, bufsize, length, infolog);
      }

      /**
       * Return the source code string from a shader object
       *
       * @see glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source)
       */
      inline void GetSource(GLsizei bufSize, GLsizei* length, GLchar* source) const
      {
        ::glGetShaderSource(mId, bufSize, length, source);
      }

  }; // class Shader

  typedef Shader<GL_VERTEX_SHADER> VertexShader;
  typedef Shader<GL_FRAGMENT_SHADER> FragmentShader;

} // namespace gl

#endif // GLESWRAPPER_CORE_SHADER_H
