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

#ifndef GLESWRAPPER_CORE_CONTEXT_H
#define GLESWRAPPER_CORE_CONTEXT_H

#include "Predefine.h"

namespace gl
{

  inline GLenum Error()
  {
    return ::glGetError();
  }

  inline void LineWidth(GLfloat width)
  {
    ::glLineWidth(width);
  }

  inline void FrontFace(GLenum dir)
  {
    ::glFrontFace(dir);
  }

  inline void CullFace(GLenum mode)
  {
    ::glCullFace(mode);
  }

  inline void PolygonOffset(GLfloat factor, GLfloat units)
  {
    ::glPolygonOffset(factor, units);
  }

  inline void ClearColor(GLclampf r, GLclampf g, GLclampf b, GLclampf a)
  {
    ::glClearColor(r, g, b ,a);
  }

  inline void ClearDepth(GLclampf d)
  {
    ::glClearDepthf(d);
  }

  inline void ClearStencil(GLint s)
  {
    ::glClearStencil(s);
  }

  inline void Clear(GLbitfield buf)
  {
    ::glClear(buf);
  }

  inline void Viewport(GLint x, GLint y, GLsizei width, GLsizei height)
  {
    ::glViewport(x, y, width, height);
  }

  inline void ColorMask(GLboolean r, GLboolean g, GLboolean b, GLboolean a)
  {
    ::glColorMask(r, g, b, a);
  }

  inline void StencilMask(GLuint mask)
  {
    ::glStencilMask(mask);
  }

  inline void StencilMask(GLenum face, GLuint mask)
  {
    ::glStencilMaskSeparate(face, mask);
  }

  inline void StencilFunc(GLenum func, GLint ref, GLuint mask)
  {
    ::glStencilFunc(func, ref, mask);
  }

  inline void StencilFunc(GLenum face, GLenum func, GLint ref, GLuint mask)
  {
    ::glStencilFuncSeparate(face, func, ref, mask);
  }

  inline void StencilOp(GLenum sfail, GLenum dpfail, GLenum dppass)
  {
    ::glStencilOp(sfail, dpfail, dppass);
  }

  inline void StencilOp(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
  {
    ::glStencilOpSeparate(face, sfail, dpfail, dppass);
  }

  inline void DepthMask(GLboolean mask)
  {
    ::glDepthMask(mask);
  }

  inline void DepthRange(GLfloat n, GLfloat f)
  {
    ::glDepthRangef(n, f);
  }

  inline void DepthFunc(GLenum func)
  {
    ::glDepthFunc(func);
  }

  inline void BlendEquation(GLenum mode)
  {
    ::glBlendEquation(mode);
  }

  inline void BlendEquation(GLenum modeRGB, GLenum modeAlpha)
  {
    ::glBlendEquationSeparate(modeRGB, modeAlpha);
  }

  inline void BlendFunc(GLenum sfactor, GLenum dfactor)
  {
    ::glBlendFunc(sfactor, dfactor);
  }

  inline void BlendFunc(GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
  {
    ::glBlendFuncSeparate(srcRGB, dstRGB, srcAlpha, dstAlpha);
  }

  inline void BlendColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
  {
    ::glBlendColor(red, green, blue, alpha);
  }

  inline void Get(GLenum pname, GLint* param)
  {
    ::glGetIntegerv(pname, param);
  }

  inline void Get(GLenum pname, GLboolean* param)
  {
    ::glGetBooleanv(pname, param);
  }

  inline void Get(GLenum pname, GLfloat* param)
  {
    ::glGetFloatv(pname, param);
  }

  inline void Get(GLenum pname, const GLubyte** param)
  {
    *param = ::glGetString(pname);
  }

  inline void Enable(GLenum cap)
  {
    ::glEnable(cap);
  }

  inline void Disable(GLenum cap)
  {
    ::glDisable(cap);
  }

  inline bool IsEnabled(GLenum pname)
  {
    return ::glIsEnabled(pname) == GL_TRUE;
  }

  inline bool IsBuffer(const Object& object)
  {
    return ::glIsBuffer(object.GetId()) == GL_TRUE;
  }

  inline bool IsTexture(const Object& object)
  {
    return ::glIsTexture(object.GetId()) == GL_TRUE;
  }

  inline bool IsShader(const Object& object)
  {
    return ::glIsShader(object.GetId()) == GL_TRUE;
  }

  inline bool IsProgram(const Object& object)
  {
    return ::glIsProgram(object.GetId()) == GL_TRUE;
  }

  inline bool IsFramebuffer(const Object& object)
  {
    return ::glIsFramebuffer(object.GetId()) == GL_TRUE;
  }

  inline bool IsRenderbuffer(const Object& object)
  {
    return ::glIsRenderbuffer(object.GetId()) == GL_TRUE;
  }

  inline void Flush()
  {
    ::glFlush();
  }

  inline void Finish()
  {
    ::glFinish();
  }

  inline void Hint(GLenum target, GLenum mode)
  {
    ::glHint(target, mode);
  }

  inline void Scissor(GLint x, GLint y, GLsizei width, GLsizei height)
  {
    ::glScissor(x, y, width, height);
  }

  inline void SampleCoverage(GLfloat value, GLboolean invert)
  {
    ::glSampleCoverage(value, invert);
  }

  inline void PixelStore(GLenum pname, GLint param)
  {
    ::glPixelStorei(pname, param);
  }

  inline void ReadPixel(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid* data)
  {
    ::glReadPixels(x, y, width, height, format, type, data);
  }

} // namespace gl

#endif // GLESWRAPPER_CORE_CONTEXT_H
