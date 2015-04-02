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

#ifndef GLESWRAPPER_CORE_PROGRAM_H
#define GLESWRAPPER_CORE_PROGRAM_H

#include "Predefine.h"
#include "core/Object.h"

namespace gl
{

  class Program : public Object
  {
    public:
      Program() : Object() {}

      explicit Program(GLuint id) : Object(id) {}

      virtual ~Program() {}

      void Create()
      {
        mId = ::glCreateProgram();
      }

      void Delete()
      {
        ::glDeleteProgram(mId);
        mId = 0;
      }

      inline void Attach(const VertexShader& vs)
      {
        ::glAttachShader(mId, vs.GetId());
      }

      inline void Attach(const FragmentShader& fs)
      {
        ::glAttachShader(mId, fs.GetId());
      }

      inline void Detach(const VertexShader& vs)
      {
        ::glDetachShader(mId, vs.GetId());
      }

      inline void Detach(const FragmentShader& fs)
      {
        ::glDetachShader(mId, fs.GetId());
      }

      inline void Link()
      {
        ::glLinkProgram(mId);
      }

      inline void Validate() const
      {
        ::glValidateProgram(mId);
      }

      inline void Use()
      {
        ::glUseProgram(mId);
      }

      inline void GetParameter(GLenum pname, GLint* param) const
      {
        ::glGetProgramiv(mId, pname, param);
      }

      inline void GetInfoLog(GLsizei bufsize, GLsizei* length, GLchar* infolog) const
      {
        ::glGetProgramInfoLog(mId, bufsize, length, infolog);
      }

      inline Attribute GetAttribute(const GLchar* name) const
      {
        return Attribute(::glGetAttribLocation(mId, name));
      }

      inline Uniform GetUniform(const GLchar* name) const
      {
        return Uniform(mId, ::glGetUniformLocation(mId, name));
      }

      inline void BindAttribLocation(GLuint index, const GLchar* name)
      {
        ::glBindAttribLocation(mId, index, name);
      }

      inline void GetActiveUniform(GLuint index, GLsizei bufSize, GLsizei* length, GLint* size, GLenum* type, GLchar* name) const
      {
        ::glGetActiveUniform(mId, index, bufSize, length, size, type, name);
      }

      inline void GetActiveAttrib(GLuint index, GLsizei bufSize, GLsizei* length, GLint* size, GLenum* type, GLchar* name) const
      {
        ::glGetActiveAttrib(mId, index, bufSize, length, size, type, name);
      }

      inline void GetAttachedShaders(GLsizei maxCount, GLsizei* count, GLuint* shaders) const
      {
        ::glGetAttachedShaders(mId, maxCount, count, shaders);
      }

  }; // class Program

} // namespace gl

#endif // GLESWRAPPER_CORE_PROGRAM_H
