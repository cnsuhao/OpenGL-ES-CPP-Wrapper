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

#ifndef GLESWRAPPER_PREDEFINE_H
#define GLESWRAPPER_PREDEFINE_H

#include <GLES2/gl2.h>

#include <string>

#if __cplusplus >= 201103L
#include <array>
#endif // __cplusplus

namespace gl {

// you can change the default String to one compatible with std::string
typedef std::string String;

#if __cplusplus >= 201103L
// the typedefs below are compatible with GLSL vector types
typedef std::array<GLfloat, 2> vec2;
typedef std::array<GLfloat, 3> vec3;
typedef std::array<GLfloat, 4> vec4;

typedef std::array<GLint, 2> ivec2;
typedef std::array<GLint, 3> ivec3;
typedef std::array<GLint, 4> ivec4;

typedef std::array<GLboolean, 2> bvec2;
typedef std::array<GLboolean, 3> bvec3;
typedef std::array<GLboolean, 4> bvec4;

typedef std::array<vec2, 2> mat2;
typedef std::array<vec3, 3> mat3;
typedef std::array<vec4, 4> mat4;
#endif // __cplusplus

} // namespace gl

#endif // GLESWRAPPER_PREDEFINE_H
