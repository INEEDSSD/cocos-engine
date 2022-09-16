// clang-format off

/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 4.1.0
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

/****************************************************************************
 Copyright (c) 2022 Xiamen Yaji Software Co., Ltd.

 http://www.cocos.com

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated engine source code (the "Software"), a limited,
 worldwide, royalty-free, non-assignable, revocable and non-exclusive license
 to use Cocos Creator solely to develop games on your target platforms. You shall
 not use Cocos Creator software for developing other software or tools that's
 used for developing games. You are not granted to publish, distribute,
 sublicense, and/or sell copies of Cocos Creator.

 The software or tools in this License Agreement are licensed, not sold.
 Xiamen Yaji Software Co., Ltd. reserves all rights not expressly granted to you.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
****************************************************************************/

#pragma once
#include "bindings/jswrapper/SeApi.h"
#include "bindings/manual/jsb_conversions.h"
#include "editor-support/middleware-adapter.h"
#include "editor-support/MiddlewareManager.h"
#include "editor-support/SharedBufferManager.h"




bool register_all_editor_support(se::Object* obj);


JSB_REGISTER_OBJECT_TYPE(cc::middleware::Color4B);
extern se::Object *__jsb_cc_middleware_Color4B_proto; // NOLINT
extern se::Class * __jsb_cc_middleware_Color4B_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::middleware::Color4B * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::middleware::Color4F);
extern se::Object *__jsb_cc_middleware_Color4F_proto; // NOLINT
extern se::Class * __jsb_cc_middleware_Color4F_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::middleware::Color4F * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::middleware::Tex2F);
extern se::Object *__jsb_cc_middleware_Tex2F_proto; // NOLINT
extern se::Class * __jsb_cc_middleware_Tex2F_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::middleware::Tex2F * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::middleware::V3F_T2F_C4B);
extern se::Object *__jsb_cc_middleware_V3F_T2F_C4B_proto; // NOLINT
extern se::Class * __jsb_cc_middleware_V3F_T2F_C4B_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::middleware::V3F_T2F_C4B * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::middleware::V3F_T2F_C4B_C4B);
extern se::Object *__jsb_cc_middleware_V3F_T2F_C4B_C4B_proto; // NOLINT
extern se::Class * __jsb_cc_middleware_V3F_T2F_C4B_C4B_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::middleware::V3F_T2F_C4B_C4B * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::middleware::Triangles);
extern se::Object *__jsb_cc_middleware_Triangles_proto; // NOLINT
extern se::Class * __jsb_cc_middleware_Triangles_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::middleware::Triangles * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::middleware::TwoColorTriangles);
extern se::Object *__jsb_cc_middleware_TwoColorTriangles_proto; // NOLINT
extern se::Class * __jsb_cc_middleware_TwoColorTriangles_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::middleware::TwoColorTriangles * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::middleware::Texture2D::TexParams);
extern se::Object *__jsb_cc_middleware_Texture2D_TexParams_proto; // NOLINT
extern se::Class * __jsb_cc_middleware_Texture2D_TexParams_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::middleware::Texture2D::TexParams * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::middleware::Texture2D);
extern se::Object *__jsb_cc_middleware_Texture2D_proto; // NOLINT
extern se::Class * __jsb_cc_middleware_Texture2D_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::middleware::SpriteFrame);
extern se::Object *__jsb_cc_middleware_SpriteFrame_proto; // NOLINT
extern se::Class * __jsb_cc_middleware_SpriteFrame_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::middleware::SharedBufferManager);
extern se::Object *__jsb_cc_middleware_SharedBufferManager_proto; // NOLINT
extern se::Class * __jsb_cc_middleware_SharedBufferManager_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::middleware::IMiddleware);
extern se::Object *__jsb_cc_middleware_IMiddleware_proto; // NOLINT
extern se::Class * __jsb_cc_middleware_IMiddleware_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::middleware::MiddlewareManager);
extern se::Object *__jsb_cc_middleware_MiddlewareManager_proto; // NOLINT
extern se::Class * __jsb_cc_middleware_MiddlewareManager_class; // NOLINT

// clang-format on