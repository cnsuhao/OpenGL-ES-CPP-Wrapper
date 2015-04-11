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

#include "gl2.h"

#include <iostream>

void glActiveTexture(GLenum texture)
{
  std::clog << "glActiveTexture\n";
}

void glAttachShader(GLuint program, GLuint shader)
{
  std::clog << "glAttachShader\n";
}

void glBindAttribLocation(GLuint program, GLuint index, const GLchar *name)
{
  std::clog << "glBindAttribLocation\n";
}

void glBindBuffer(GLenum target, GLuint buffer)
{
  std::clog << "glBindBuffer\n";
}

void glBindFramebuffer(GLenum target, GLuint framebuffer)
{
  std::clog << "glBindFramebuffer\n";
}

void glBindRenderbuffer(GLenum target, GLuint renderbuffer)
{
  std::clog << "glBindRenderbuffer\n";
}

void glBindTexture(GLenum target, GLuint texture)
{
  std::clog << "glBindTexture\n";
}

void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
  std::clog << "glBlendColor\n";
}

void glBlendEquation(GLenum mode)
{
  std::clog << "glBlendEquation\n";
}

void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
{
  std::clog << "glBlendEquationSeparate\n";
}

void glBlendFunc(GLenum sfactor, GLenum dfactor)
{
  std::clog << "glBlendFunc\n";
}

void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
  std::clog << "glBlendFuncSeparate\n";
}

void glBufferData(GLenum target, GLsizeiptr size, const void *data, GLenum usage)
{
  std::clog << "glBufferData\n";
}

void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void *data)
{
  std::clog << "glBufferSubData\n";
}

GLenum glCheckFramebufferStatus(GLenum target)
{
  std::clog << "glCheckFramebufferStatus\n";
  return GL_NONE;
}

void glClear(GLbitfield mask)
{
  std::clog << "glClear\n";
}

void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
  std::clog << "glClearColor\n";
}

void glClearDepthf(GLfloat d)
{
  std::clog << "glClearDepthf\n";
}

void glClearStencil(GLint s)
{
  std::clog << "glClearStencil\n";
}

void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
  std::clog << "glColorMask\n";
}

void glCompileShader(GLuint shader)
{
  std::clog << "glCompileShader\n";
}

void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data)
{
  std::clog << "glCompressedTexImage2D\n";
}

void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data)
{
  std::clog << "glCompressedTexSubImage2D\n";
}

void glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
  std::clog << "glCopyTexImage2D\n";
}

void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
  std::clog << "glCopyTexSubImage2D\n";
}

GLuint glCreateProgram()
{
  std::clog << "glCreateProgram\n";
  return 0;
}

GLuint glCreateShader(GLenum type)
{
  std::clog << "glCreateShader\n";
  return 0;
}

void glCullFace(GLenum mode)
{
  std::clog << "glCullFace\n";
}

void glDeleteBuffers(GLsizei n, const GLuint *buffers)
{
  std::clog << "glDeleteBuffers\n";
}

void glDeleteFramebuffers(GLsizei n, const GLuint *framebuffers)
{
  std::clog << "glDeleteFramebuffers\n";
}

void glDeleteProgram(GLuint program)
{
  std::clog << "glDeleteProgram\n";
}

void glDeleteRenderbuffers(GLsizei n, const GLuint *renderbuffers)
{
  std::clog << "glDeleteRenderbuffers\n";
}

void glDeleteShader(GLuint shader)
{
  std::clog << "glDeleteShader\n";
}

void glDeleteTextures(GLsizei n, const GLuint *textures)
{
  std::clog << "glDeleteTextures\n";
}

void glDepthFunc(GLenum func)
{
  std::clog << "glDepthFunc\n";
}

void glDepthMask(GLboolean flag)
{
  std::clog << "glDepthMask\n";
}

void glDepthRangef(GLfloat n, GLfloat f)
{
  std::clog << "glDepthRangef\n";
}

void glDetachShader(GLuint program, GLuint shader)
{
  std::clog << "glDetachShader\n";
}

void glDisable(GLenum cap)
{
  std::clog << "glDisable\n";
}

void glDisableVertexAttribArray(GLuint index)
{
  std::clog << "glDisableVertexAttribArray\n";
}

void glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
  std::clog << "glDrawArrays\n";
}

void glDrawElements(GLenum mode, GLsizei count, GLenum type, const void *indices)
{
  std::clog << "glDrawElements\n";
}

void glEnable(GLenum cap)
{
  std::clog << "glEnable\n";
}

void glEnableVertexAttribArray(GLuint index)
{
  std::clog << "glEnableVertexAttribArray\n";
}

void glFinish()
{
  std::clog << "glFinish\n";
}

void glFlush()
{
  std::clog << "glFlush\n";
}

void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
  std::clog << "glFramebufferRenderbuffer\n";
}

void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
  std::clog << "glFramebufferTexture2D\n";
}

void glFrontFace(GLenum mode)
{
  std::clog << "glFrontFace\n";
}

void glGenBuffers(GLsizei n, GLuint *buffers)
{
  std::clog << "glGenBuffers\n";
}

void glGenerateMipmap(GLenum target)
{
  std::clog << "glGenerateMipmap\n";
}

void glGenFramebuffers(GLsizei n, GLuint *framebuffers)
{
  std::clog << "glGenFramebuffers\n";
}

void glGenRenderbuffers(GLsizei n, GLuint *renderbuffers)
{
  std::clog << "glGenRenderbuffers\n";
}

void glGenTextures(GLsizei n, GLuint *textures)
{
  std::clog << "glGenTextures\n";
}

void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name)
{
  std::clog << "glGetActiveAttrib\n";
}

void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name)
{
  std::clog << "glGetActiveUniform\n";
}

void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders)
{
  std::clog << "glGetAttachedShaders\n";
}

GLint glGetAttribLocation(GLuint program, const GLchar *name)
{
  std::clog << "glGetAttribLocation\n";
  return 0;
}

void glGetBooleanv(GLenum pname, GLboolean *data)
{
  std::clog << "glGetBooleanv\n";
}

void glGetBufferParameteriv(GLenum target, GLenum pname, GLint *params)
{
  std::clog << "glGetBufferParameteriv\n";
}

GLenum glGetError()
{
  std::clog << "glGetError\n";
  return GL_NONE;
}

void glGetFloatv(GLenum pname, GLfloat *data)
{
  std::clog << "glGetFloatv\n";
}

void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint *params)
{
  std::clog << "glGetFramebufferAttachmentParameteriv\n";
}

void glGetIntegerv(GLenum pname, GLint *data)
{
  std::clog << "glGetIntegerv\n";
}

void glGetProgramiv(GLuint program, GLenum pname, GLint *params)
{
  std::clog << "glGetProgramiv\n";
}

void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog)
{
  std::clog << "glGetProgramInfoLog\n";
}

void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint *params)
{
  std::clog << "glGetRenderbufferParameteriv\n";
}

void glGetShaderiv(GLuint shader, GLenum pname, GLint *params)
{
  std::clog << "glGetShaderiv\n";
}

void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog)
{
  std::clog << "glGetShaderInfoLog\n";
}

void glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision)
{
  std::clog << "glGetShaderPrecisionFormat\n";
}

void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source)
{
  std::clog << "glGetShaderSource\n";
}

const GLubyte *glGetString(GLenum name)
{
  std::clog << "glGetString\n";
  return (const GLubyte*)("");
}

void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat *params)
{
  std::clog << "glGetTexParameterfv\n";
}

void glGetTexParameteriv(GLenum target, GLenum pname, GLint *params)
{
  std::clog << "glGetTexParameteriv\n";
}

void glGetUniformfv(GLuint program, GLint location, GLfloat *params)
{
  std::clog << "glGetUniformfv\n";
}

void glGetUniformiv(GLuint program, GLint location, GLint *params)
{
  std::clog << "glGetUniformiv\n";
}

GLint glGetUniformLocation(GLuint program, const GLchar *name)
{
  std::clog << "glGetUniformLocation\n";
  return 0;
}

void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat *params)
{
  std::clog << "glGetVertexAttribfv\n";
}

void glGetVertexAttribiv(GLuint index, GLenum pname, GLint *params)
{
  std::clog << "glGetVertexAttribiv\n";
}

void glGetVertexAttribPointerv(GLuint index, GLenum pname, void **pointer)
{
  std::clog << "glGetVertexAttribPointerv\n";
}

void glHint(GLenum target, GLenum mode)
{
  std::clog << "glHint\n";
}

GLboolean glIsBuffer(GLuint buffer)
{
  std::clog << "glIsBuffer\n";
  return GL_TRUE;
}

GLboolean glIsEnabled(GLenum cap)
{
  std::clog << "glIsEnabled\n";
  return GL_TRUE;
}

GLboolean glIsFramebuffer(GLuint framebuffer)
{
  std::clog << "glIsFramebuffer\n";
  return GL_TRUE;
}

GLboolean glIsProgram(GLuint program)
{
  std::clog << "glIsProgram\n";
  return GL_TRUE;
}

GLboolean glIsRenderbuffer(GLuint renderbuffer)
{
  std::clog << "glIsRenderbuffer\n";
  return GL_TRUE;
}

GLboolean glIsShader(GLuint shader)
{
  std::clog << "glIsShader\n";
  return GL_TRUE;
}

GLboolean glIsTexture(GLuint texture)
{
  std::clog << "glIsTexture\n";
  return GL_TRUE;
}

void glLineWidth(GLfloat width)
{
  std::clog << "glLineWidth\n";
}

void glLinkProgram(GLuint program)
{
  std::clog << "glLinkProgram\n";
}

void glPixelStorei(GLenum pname, GLint param)
{
  std::clog << "glPixelStorei\n";
}

void glPolygonOffset(GLfloat factor, GLfloat units)
{
  std::clog << "glPolygonOffset\n";
}

void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void *pixels)
{
  std::clog << "glReadPixels\n";
}

void glReleaseShaderCompiler()
{
  std::clog << "glReleaseShaderCompiler\n";
}

void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
  std::clog << "glRenderbufferStorage\n";
}

void glSampleCoverage(GLfloat value, GLboolean invert)
{
  std::clog << "glSampleCoverage\n";
}

void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
  std::clog << "glScissor\n";
}

void glShaderBinary(GLsizei count, const GLuint *shaders, GLenum binaryformat, const void *binary, GLsizei length)
{
  std::clog << "glShaderBinary\n";
}

void glShaderSource(GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length)
{
  std::clog << "glShaderSource\n";
}

void glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
  std::clog << "glStencilFunc\n";
}

void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask)
{
  std::clog << "glStencilFuncSeparate\n";
}

void glStencilMask(GLuint mask)
{
  std::clog << "glStencilMask\n";
}

void glStencilMaskSeparate(GLenum face, GLuint mask)
{
  std::clog << "glStencilMaskSeparate\n";
}

void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
  std::clog << "glStencilOp\n";
}

void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
  std::clog << "glStencilOpSeparate\n";
}

void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels)
{
  std::clog << "glTexImage2D\n";
}

void glTexParameterf(GLenum target, GLenum pname, GLfloat param)
{
  std::clog << "glTexParameterf\n";
}

void glTexParameterfv(GLenum target, GLenum pname, const GLfloat *params)
{
  std::clog << "glTexParameterfv\n";
}

void glTexParameteri(GLenum target, GLenum pname, GLint param)
{
  std::clog << "glTexParameteri\n";
}

void glTexParameteriv(GLenum target, GLenum pname, const GLint *params)
{
  std::clog << "glTexParameteriv\n";
}

void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels)
{
  std::clog << "glTexSubImage2D\n";
}

void glUniform1f(GLint location, GLfloat v0)
{
  std::clog << "glUniform1f\n";
}

void glUniform1fv(GLint location, GLsizei count, const GLfloat *value)
{
  std::clog << "glUniform1fv\n";
}

void glUniform1i(GLint location, GLint v0)
{
  std::clog << "glUniform1i\n";
}

void glUniform1iv(GLint location, GLsizei count, const GLint *value)
{
  std::clog << "glUniform1iv\n";
}

void glUniform2f(GLint location, GLfloat v0, GLfloat v1)
{
  std::clog << "glUniform2f\n";
}

void glUniform2fv(GLint location, GLsizei count, const GLfloat *value)
{
  std::clog << "glUniform2fv\n";
}

void glUniform2i(GLint location, GLint v0, GLint v1)
{
  std::clog << "glUniform2i\n";
}

void glUniform2iv(GLint location, GLsizei count, const GLint *value)
{
  std::clog << "glUniform2iv\n";
}

void glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
  std::clog << "glUniform3f\n";
}

void glUniform3fv(GLint location, GLsizei count, const GLfloat *value)
{
  std::clog << "glUniform3fv\n";
}

void glUniform3i(GLint location, GLint v0, GLint v1, GLint v2)
{
  std::clog << "glUniform3i\n";
}

void glUniform3iv(GLint location, GLsizei count, const GLint *value)
{
  std::clog << "glUniform3iv\n";
}

void glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
  std::clog << "glUniform4f\n";
}

void glUniform4fv(GLint location, GLsizei count, const GLfloat *value)
{
  std::clog << "glUniform4fv\n";
}

void glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
  std::clog << "glUniform4i\n";
}

void glUniform4iv(GLint location, GLsizei count, const GLint *value)
{
  std::clog << "glUniform4iv\n";
}

void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
  std::clog << "glUniformMatrix2fv\n";
}

void glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
  std::clog << "glUniformMatrix3fv\n";
}

void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
  std::clog << "glUniformMatrix4fv\n";
}

void glUseProgram(GLuint program)
{
  std::clog << "glUseProgram\n";
}

void glValidateProgram(GLuint program)
{
  std::clog << "glValidateProgram\n";
}

void glVertexAttrib1f(GLuint index, GLfloat x)
{
  std::clog << "glVertexAttrib1f\n";
}

void glVertexAttrib1fv(GLuint index, const GLfloat *v)
{
  std::clog << "glVertexAttrib1fv\n";
}

void glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
{
  std::clog << "glVertexAttrib2f\n";
}

void glVertexAttrib2fv(GLuint index, const GLfloat *v)
{
  std::clog << "glVertexAttrib2fv\n";
}

void glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
  std::clog << "glVertexAttrib3f\n";
}

void glVertexAttrib3fv(GLuint index, const GLfloat *v)
{
  std::clog << "glVertexAttrib3fv\n";
}

void glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
  std::clog << "glVertexAttrib4f\n";
}

void glVertexAttrib4fv(GLuint index, const GLfloat *v)
{
  std::clog << "glVertexAttrib4fv\n";
}

void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer)
{
  std::clog << "glVertexAttribPointer\n";
}

void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
  std::clog << "glViewport\n";
}
