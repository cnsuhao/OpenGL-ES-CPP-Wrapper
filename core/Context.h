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

  /**
   * Return error information
   *
   * @see glGetError()
   */
  inline GLenum Error()
  {
    return ::glGetError();
  }

  /**
   * Specify the width of rasterized lines
   *
   * @see glLineWidth(GLfloat width)
   */
  inline void LineWidth(GLfloat width)
  {
    ::glLineWidth(width);
  }

  /**
   * Define front- and back-facing polygons
   *
   * @see glFrontFace(GLenum mode)
   */
  inline void FrontFace(GLenum mode)
  {
    ::glFrontFace(mode);
  }

  /**
   * Specify whether front- or back-facing polygons can be culled
   *
   * @see glCullFace(GLenum mode)
   */
  inline void CullFace(GLenum mode)
  {
    ::glCullFace(mode);
  }

  /**
   * Set the scale and units used to calculate depth values
   *
   * @see glPolygonOffset(GLfloat factor, GLfloat units)
   */
  inline void PolygonOffset(GLfloat factor, GLfloat units)
  {
    ::glPolygonOffset(factor, units);
  }

  /**
   * Specify clear values for the color buffers
   *
   * @see glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
   */
  inline void ClearColor(GLclampf r, GLclampf g, GLclampf b, GLclampf a)
  {
    ::glClearColor(r, g, b ,a);
  }

  /**
   * Specify the clear value for the depth buffer
   *
   * @see glClearDepthf(GLclampf depth)
   */
  inline void ClearDepth(GLclampf d)
  {
    ::glClearDepthf(d);
  }

  /**
   * Specify the clear value for the stencil buffer
   *
   * @see glClearStencil(GLint s)
   */
  inline void ClearStencil(GLint s)
  {
    ::glClearStencil(s);
  }

  /**
   * Clear buffers to preset values
   *
   * @see glClear(GLbitfield mask)
   */
  inline void Clear(GLbitfield mask)
  {
    ::glClear(mask);
  }

  /**
   * Set the viewport
   *
   * @see glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
   */
  inline void Viewport(GLint x, GLint y, GLsizei width, GLsizei height)
  {
    ::glViewport(x, y, width, height);
  }

  /**
   * Enable and disable writing of frame buffer color components
   *
   * @see glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
   */
  inline void ColorMask(GLboolean r, GLboolean g, GLboolean b, GLboolean a)
  {
    ::glColorMask(r, g, b, a);
  }

  /**
   * Control the front and back writing of individual bits in the stencil planes
   *
   * @see glStencilMask(GLuint mask)
   */
  inline void StencilMask(GLuint mask)
  {
    ::glStencilMask(mask);
  }

  /**
   * Control the front and/or back writing of individual bits in the stencil planes
   *
   * @see glStencilMaskSeparate(GLenum face, GLuint mask)
   */
  inline void StencilMask(GLenum face, GLuint mask)
  {
    ::glStencilMaskSeparate(face, mask);
  }

  /**
   * Set front and back function and reference value for stencil testing
   *
   * @see glStencilFunc(GLenum func, GLint ref, GLuint mask)
   */
  inline void StencilFunc(GLenum func, GLint ref, GLuint mask)
  {
    ::glStencilFunc(func, ref, mask);
  }

  /**
   * Set front and/or back function and reference value for stencil testing
   *
   * @see glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask)
   */
  inline void StencilFunc(GLenum face, GLenum func, GLint ref, GLuint mask)
  {
    ::glStencilFuncSeparate(face, func, ref, mask);
  }

  /**
   * Set front and back stencil test actions
   *
   * @see glStencilOp(GLenum sfail, GLenum dpfail, GLenum dppass)
   */
  inline void StencilOp(GLenum sfail, GLenum dpfail, GLenum dppass)
  {
    ::glStencilOp(sfail, dpfail, dppass);
  }

  /**
   * Set front and/or back stencil test actions
   *
   * @see glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
   */
  inline void StencilOp(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
  {
    ::glStencilOpSeparate(face, sfail, dpfail, dppass);
  }

  /**
   * Enable or disable writing into the depth buffer
   *
   * @see glDepthMask(GLboolean flag)
   */
  inline void DepthMask(GLboolean flag)
  {
    ::glDepthMask(flag);
  }

  /**
   * Specify mapping of depth values from normalized device coordinates to window coordinates
   *
   * @see glDepthRangef(GLfloat n, GLfloat f)
   */
  inline void DepthRange(GLfloat n, GLfloat f)
  {
    ::glDepthRangef(n, f);
  }

  /**
   * Specify the depth comparison function used for depth buffer comparisons
   *
   * @see glDepthFunc(GLenum func)
   */
  inline void DepthFunc(GLenum func)
  {
    ::glDepthFunc(func);
  }

  /**
   * Specify the equation used for both the RGB blend equation and the Alpha blend equation
   *
   * @see glBlendEquation(GLenum mode)
   */
  inline void BlendEquation(GLenum mode)
  {
    ::glBlendEquation(mode);
  }

  /**
   * Specify pixel arithmetic for RGB and alpha components separately
   *
   * @see glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
   */
  inline void BlendEquation(GLenum modeRGB, GLenum modeAlpha)
  {
    ::glBlendEquationSeparate(modeRGB, modeAlpha);
  }

  /**
   * Specify pixel arithmetic
   *
   * @see glBlendFunc(GLenum sfactor, GLenum dfactor)
   */
  inline void BlendFunc(GLenum sfactor, GLenum dfactor)
  {
    ::glBlendFunc(sfactor, dfactor);
  }

  /**
   *
   *
   * @see glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
   */
  inline void BlendFunc(GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
  {
    ::glBlendFuncSeparate(srcRGB, dstRGB, srcAlpha, dstAlpha);
  }

  /**
   * Set the RGB blend equation and the alpha blend equation separately
   *
   * @see glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
   */
  inline void BlendColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
  {
    ::glBlendColor(red, green, blue, alpha);
  }

  /**
   * Return the value or values of a selected parameter
   *
   * @see glGetIntegerv(GLenum pname, GLint *data)
   */
  inline void Get(GLenum pname, GLint* param)
  {
    ::glGetIntegerv(pname, param);
  }

  /**
   * Return the value or values of a selected parameter
   *
   * @see glGetBooleanv(GLenum pname, GLboolean *data)
   */
  inline void Get(GLenum pname, GLboolean* param)
  {
    ::glGetBooleanv(pname, param);
  }

  /**
   * Return the value or values of a selected parameter
   *
   * @see glGetFloatv(GLenum pname, GLfloat *data)
   */
  inline void Get(GLenum pname, GLfloat* param)
  {
    ::glGetFloatv(pname, param);
  }

  /**
   * Return a string describing the current GL connection
   *
   * @see glGetString(GLenum name)
   */
  inline void Get(GLenum pname, const GLubyte** param)
  {
    *param = ::glGetString(pname);
  }

  /**
   * Enable server-side GL capabilities
   *
   * @see glEnable(GLenum cap)
   */
  inline void Enable(GLenum cap)
  {
    ::glEnable(cap);
  }

  /**
   * Disable server-side GL capabilities
   *
   * @see glDisable(GLenum cap)
   */
  inline void Disable(GLenum cap)
  {
    ::glDisable(cap);
  }

  /**
   * Test whether a capability is enabled
   *
   * @see glIsEnabled(GLenum cap)
   */
  inline bool IsEnabled(GLenum pname)
  {
    return ::glIsEnabled(pname) == GL_TRUE;
  }

  /**
   * Determine if a name corresponds to a buffer object
   *
   * @see glIsBuffer(GLuint buffer)
   */
  inline bool IsBuffer(const Object& object)
  {
    return ::glIsBuffer(object.GetId()) == GL_TRUE;
  }

  /**
   * Determine if a name corresponds to a texture
   *
   * @see glIsTexture(GLuint texture)
   */
  inline bool IsTexture(const Object& object)
  {
    return ::glIsTexture(object.GetId()) == GL_TRUE;
  }

  /**
   * Determine if a name corresponds to a shader object
   *
   * @see glIsShader(GLuint shader)
   */
  inline bool IsShader(const Object& object)
  {
    return ::glIsShader(object.GetId()) == GL_TRUE;
  }

  /**
   * Determine if a name corresponds to a program object
   *
   * @see glIsProgram(GLuint program)
   */
  inline bool IsProgram(const Object& object)
  {
    return ::glIsProgram(object.GetId()) == GL_TRUE;
  }

  /**
   * Determine if a name corresponds to a framebuffer object
   *
   * @see glIsFramebuffer(GLuint framebuffer)
   */
  inline bool IsFramebuffer(const Object& object)
  {
    return ::glIsFramebuffer(object.GetId()) == GL_TRUE;
  }

  /**
   * Determine if a name corresponds to a renderbuffer object
   *
   * @see glIsRenderbuffer(GLuint renderbuffer)
   */
  inline bool IsRenderbuffer(const Object& object)
  {
    return ::glIsRenderbuffer(object.GetId()) == GL_TRUE;
  }

  /**
   * Force execution of GL commands in finite time
   *
   * @see glFlush()
   */
  inline void Flush()
  {
    ::glFlush();
  }

  /**
   * Block until all GL execution is complete
   *
   * @see glFinish()
   */
  inline void Finish()
  {
    ::glFinish();
  }

  /**
   * Specify implementation-specific hints
   *
   * @see glHint(GLenum target, GLenum mode)
   */
  inline void Hint(GLenum target, GLenum mode)
  {
    ::glHint(target, mode);
  }

  /**
   * Define the scissor box
   *
   * @see glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
   */
  inline void Scissor(GLint x, GLint y, GLsizei width, GLsizei height)
  {
    ::glScissor(x, y, width, height);
  }

  /**
   * Specify multisample coverage parameters
   *
   * @see glSampleCoverage(GLfloat value, GLboolean invert)
   */
  inline void SampleCoverage(GLfloat value, GLboolean invert)
  {
    ::glSampleCoverage(value, invert);
  }

  /**
   * Set pixel storage modes
   *
   * @see glPixelStorei(GLenum pname, GLint param)
   */
  inline void PixelStore(GLenum pname, GLint param)
  {
    ::glPixelStorei(pname, param);
  }

  /**
   * Read a block of pixels from the frame buffer
   *
   * @see glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void *pixels)
   */
  inline void ReadPixel(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid* data)
  {
    ::glReadPixels(x, y, width, height, format, type, data);
  }

} // namespace gl

#endif // GLESWRAPPER_CORE_CONTEXT_H
