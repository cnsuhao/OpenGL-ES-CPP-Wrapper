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
#include "core/Attribute.h"

namespace gl
{

  class Program : public Object
  {
    public:
      /**
       * Construct a Program object with the name of value 0
       */
      Program() : Object() {}

      /**
       * Construct a Program object with the name of a specified value
       *
       * @param id a specified value for Program object's name
       */
      explicit Program(GLuint id) : Object(id) {}

      virtual ~Program() {}

      /**
       * Create a program object
       *
       * @see glCreateProgram()
       */
      void Create()
      {
        mId = ::glCreateProgram();
      }

      /**
       * Delete a program object
       *
       * @see glDeleteProgram(GLuint program)
       */
      void Delete()
      {
        ::glDeleteProgram(mId);
        mId = 0;
      }

      /**
       * Attach a vertex shader object to a program object
       *
       * @see glAttachShader(GLuint program, GLuint shader)
       */
      inline void Attach(const VertexShader& vs)
      {
        ::glAttachShader(mId, vs.GetId());
      }

      /**
       * Attache a fragment shader object to a program object
       *
       * @see glAttachShader(GLuint program, GLuint shader)
       */
      inline void Attach(const FragmentShader& fs)
      {
        ::glAttachShader(mId, fs.GetId());
      }

      /**
       * Detache a vertex shader object from a program object to which it is attached
       *
       * @see glDetachShader(GLuint program, GLuint shader)
       */
      inline void Detach(const VertexShader& vs)
      {
        ::glDetachShader(mId, vs.GetId());
      }

      /**
       * Detache a fragment shader object from a program object to which it is attached
       *
       * @see glDetachShader(GLuint program, GLuint shader)
       */
      inline void Detach(const FragmentShader& fs)
      {
        ::glDetachShader(mId, fs.GetId());
      }

      /**
       * Link a program object
       *
       * @see glLinkProgram(GLuint program)
       */
      inline void Link()
      {
        ::glLinkProgram(mId);
      }

      /**
       * Validate a program object
       *
       * @see glValidateProgram(GLuint program)
       */
      inline void Validate() const
      {
        ::glValidateProgram(mId);
      }

      /**
       * Install a program object as part of current rendering state
       *
       * @see glUseProgram(GLuint program)
       */
      inline void Use()
      {
        ::glUseProgram(mId);
      }

      /**
       * Return a parameter from a program object
       *
       * @see glGetProgramiv(GLuint program, GLenum pname, GLint *params)
       */
      inline void GetParameter(GLenum pname, GLint* param) const
      {
        ::glGetProgramiv(mId, pname, param);
      }

      /**
       * Return the information log for a program object
       *
       * @see glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog)
       */
      inline void GetInfoLog(GLsizei bufsize, GLsizei* length, GLchar* infolog) const
      {
        ::glGetProgramInfoLog(mId, bufsize, length, infolog);
      }

      /**
       * Return the location of an attribute variable
       *
       * @see glGetAttribLocation(GLuint program, const GLchar *name)
       */
      inline Attribute GetAttribute(const GLchar* name) const
      {
        return Attribute(::glGetAttribLocation(mId, name));
      }

      /**
       * Return the location of a uniform variable
       *
       * @see glGetUniformLocation(GLuint program, const GLchar *name)
       */
      inline Uniform GetUniform(const GLchar* name) const
      {
        return Uniform(mId, ::glGetUniformLocation(mId, name));
      }

      /**
       * Associate a generic vertex attribute index with a named attribute variable
       *
       * @see glBindAttribLocation(GLuint program, GLuint index, const GLchar *name)
       */
      inline void BindAttribLocation(const Attribute& attrib, const GLchar* name)
      {
        ::glBindAttribLocation(mId, attrib.GetIndex(), name);
      }

      /**
       * Return information about an active uniform variable for the specified program object
       *
       * @see glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name)
       */
      inline void GetActiveUniform(GLuint index, GLsizei bufSize, GLsizei* length, GLint* size, GLenum* type, GLchar* name) const
      {
        ::glGetActiveUniform(mId, index, bufSize, length, size, type, name);
      }

      /**
       * Return information about an active attribute variable for the specified program object
       *
       * @see glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name)
       */
      inline void GetActiveAttrib(GLuint index, GLsizei bufSize, GLsizei* length, GLint* size, GLenum* type, GLchar* name) const
      {
        ::glGetActiveAttrib(mId, index, bufSize, length, size, type, name);
      }

      /**
       * Return the handles of the shader objects attached to a program object
       *
       * @see glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders)
       */
      inline void GetAttachedShaders(GLsizei maxCount, GLsizei* count, GLuint* shaders) const
      {
        ::glGetAttachedShaders(mId, maxCount, count, shaders);
      }

  }; // class Program

} // namespace gl

#endif // GLESWRAPPER_CORE_PROGRAM_H
