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

#ifndef GLESWRAPPER_PRIMITIVE_H
#define GLESWRAPPER_PRIMITIVE_H

#include "Predefine.h"

namespace gl
{

  template<GLenum mode>
  struct Primitive
  {

    inline static void DrawArray(GLint first, GLsizei count)
    {
      ::glDrawArrays(mode, first, count);
    }

    inline static void DrawElement(GLsizei count, GLenum type, const GLvoid* index)
    {
      ::glDrawElements(mode, count, type, index);
    }

  }; // struct Primitive

  typedef Primitive<GL_POINTS> Point;
  typedef Primitive<GL_LINES> Line;
  typedef Primitive<GL_LINE_STRIP> LineStrip;
  typedef Primitive<GL_LINE_LOOP> LineLoop;
  typedef Primitive<GL_TRIANGLES> Triangle;
  typedef Primitive<GL_TRIANGLE_STRIP> TriangleStrip;
  typedef Primitive<GL_TRIANGLE_FAN> TriangleFan;

} // namespace gl

#endif // GLESWRAPPER_PRIMITIVE_H

