/* DO NOT EDIT - This file generated automatically by gl_table.py (from Mesa) script */

/*
 * (C) Copyright IBM Corporation 2005
 * All Rights Reserved.
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sub license,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT.  IN NO EVENT SHALL
 * IBM,
 * AND/OR THEIR SUPPLIERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
 * OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#if !defined( _DISPATCH_H_ )
#  define _DISPATCH_H_


/**
 * \file main/dispatch.h
 * Macros for handling GL dispatch tables.
 *
 * For each known GL function, there are 3 macros in this file.  The first
 * macro is named CALL_FuncName and is used to call that GL function using
 * the specified dispatch table.  The other 2 macros, called GET_FuncName
 * can SET_FuncName, are used to get and set the dispatch pointer for the
 * named function in the specified dispatch table.
 */

#include "main/mfeatures.h"

#define CALL_by_offset(disp, cast, offset, parameters) \
    (*(cast (GET_by_offset(disp, offset)))) parameters
#define GET_by_offset(disp, offset) \
    (offset >= 0) ? (((_glapi_proc *)(disp))[offset]) : NULL
#define SET_by_offset(disp, offset, fn) \
    do { \
        if ( (offset) < 0 ) { \
            /* fprintf( stderr, "[%s:%u] SET_by_offset(%p, %d, %s)!\n", */ \
            /*         __func__, __LINE__, disp, offset, # fn); */ \
            /* abort(); */ \
        } \
        else { \
            ( (_glapi_proc *) (disp) )[offset] = (_glapi_proc) fn; \
        } \
    } while(0)

/* total number of offsets below */
#define _gloffset_COUNT 518

#define _gloffset_NewList 0
#define _gloffset_EndList 1
#define _gloffset_CallList 2
#define _gloffset_CallLists 3
#define _gloffset_DeleteLists 4
#define _gloffset_GenLists 5
#define _gloffset_ListBase 6
#define _gloffset_Begin 7
#define _gloffset_Bitmap 8
#define _gloffset_Color3b 9
#define _gloffset_Color3bv 10
#define _gloffset_Color3d 11
#define _gloffset_Color3dv 12
#define _gloffset_Color3f 13
#define _gloffset_Color3fv 14
#define _gloffset_Color3i 15
#define _gloffset_Color3iv 16
#define _gloffset_Color3s 17
#define _gloffset_Color3sv 18
#define _gloffset_Color3ub 19
#define _gloffset_Color3ubv 20
#define _gloffset_Color3ui 21
#define _gloffset_Color3uiv 22
#define _gloffset_Color3us 23
#define _gloffset_Color3usv 24
#define _gloffset_Color4b 25
#define _gloffset_Color4bv 26
#define _gloffset_Color4d 27
#define _gloffset_Color4dv 28
#define _gloffset_Color4f 29
#define _gloffset_Color4fv 30
#define _gloffset_Color4i 31
#define _gloffset_Color4iv 32
#define _gloffset_Color4s 33
#define _gloffset_Color4sv 34
#define _gloffset_Color4ub 35
#define _gloffset_Color4ubv 36
#define _gloffset_Color4ui 37
#define _gloffset_Color4uiv 38
#define _gloffset_Color4us 39
#define _gloffset_Color4usv 40
#define _gloffset_EdgeFlag 41
#define _gloffset_EdgeFlagv 42
#define _gloffset_End 43
#define _gloffset_Indexd 44
#define _gloffset_Indexdv 45
#define _gloffset_Indexf 46
#define _gloffset_Indexfv 47
#define _gloffset_Indexi 48
#define _gloffset_Indexiv 49
#define _gloffset_Indexs 50
#define _gloffset_Indexsv 51
#define _gloffset_Normal3b 52
#define _gloffset_Normal3bv 53
#define _gloffset_Normal3d 54
#define _gloffset_Normal3dv 55
#define _gloffset_Normal3f 56
#define _gloffset_Normal3fv 57
#define _gloffset_Normal3i 58
#define _gloffset_Normal3iv 59
#define _gloffset_Normal3s 60
#define _gloffset_Normal3sv 61
#define _gloffset_RasterPos2d 62
#define _gloffset_RasterPos2dv 63
#define _gloffset_RasterPos2f 64
#define _gloffset_RasterPos2fv 65
#define _gloffset_RasterPos2i 66
#define _gloffset_RasterPos2iv 67
#define _gloffset_RasterPos2s 68
#define _gloffset_RasterPos2sv 69
#define _gloffset_RasterPos3d 70
#define _gloffset_RasterPos3dv 71
#define _gloffset_RasterPos3f 72
#define _gloffset_RasterPos3fv 73
#define _gloffset_RasterPos3i 74
#define _gloffset_RasterPos3iv 75
#define _gloffset_RasterPos3s 76
#define _gloffset_RasterPos3sv 77
#define _gloffset_RasterPos4d 78
#define _gloffset_RasterPos4dv 79
#define _gloffset_RasterPos4f 80
#define _gloffset_RasterPos4fv 81
#define _gloffset_RasterPos4i 82
#define _gloffset_RasterPos4iv 83
#define _gloffset_RasterPos4s 84
#define _gloffset_RasterPos4sv 85
#define _gloffset_Rectd 86
#define _gloffset_Rectdv 87
#define _gloffset_Rectf 88
#define _gloffset_Rectfv 89
#define _gloffset_Recti 90
#define _gloffset_Rectiv 91
#define _gloffset_Rects 92
#define _gloffset_Rectsv 93
#define _gloffset_TexCoord1d 94
#define _gloffset_TexCoord1dv 95
#define _gloffset_TexCoord1f 96
#define _gloffset_TexCoord1fv 97
#define _gloffset_TexCoord1i 98
#define _gloffset_TexCoord1iv 99
#define _gloffset_TexCoord1s 100
#define _gloffset_TexCoord1sv 101
#define _gloffset_TexCoord2d 102
#define _gloffset_TexCoord2dv 103
#define _gloffset_TexCoord2f 104
#define _gloffset_TexCoord2fv 105
#define _gloffset_TexCoord2i 106
#define _gloffset_TexCoord2iv 107
#define _gloffset_TexCoord2s 108
#define _gloffset_TexCoord2sv 109
#define _gloffset_TexCoord3d 110
#define _gloffset_TexCoord3dv 111
#define _gloffset_TexCoord3f 112
#define _gloffset_TexCoord3fv 113
#define _gloffset_TexCoord3i 114
#define _gloffset_TexCoord3iv 115
#define _gloffset_TexCoord3s 116
#define _gloffset_TexCoord3sv 117
#define _gloffset_TexCoord4d 118
#define _gloffset_TexCoord4dv 119
#define _gloffset_TexCoord4f 120
#define _gloffset_TexCoord4fv 121
#define _gloffset_TexCoord4i 122
#define _gloffset_TexCoord4iv 123
#define _gloffset_TexCoord4s 124
#define _gloffset_TexCoord4sv 125
#define _gloffset_Vertex2d 126
#define _gloffset_Vertex2dv 127
#define _gloffset_Vertex2f 128
#define _gloffset_Vertex2fv 129
#define _gloffset_Vertex2i 130
#define _gloffset_Vertex2iv 131
#define _gloffset_Vertex2s 132
#define _gloffset_Vertex2sv 133
#define _gloffset_Vertex3d 134
#define _gloffset_Vertex3dv 135
#define _gloffset_Vertex3f 136
#define _gloffset_Vertex3fv 137
#define _gloffset_Vertex3i 138
#define _gloffset_Vertex3iv 139
#define _gloffset_Vertex3s 140
#define _gloffset_Vertex3sv 141
#define _gloffset_Vertex4d 142
#define _gloffset_Vertex4dv 143
#define _gloffset_Vertex4f 144
#define _gloffset_Vertex4fv 145
#define _gloffset_Vertex4i 146
#define _gloffset_Vertex4iv 147
#define _gloffset_Vertex4s 148
#define _gloffset_Vertex4sv 149
#define _gloffset_ClipPlane 150
#define _gloffset_ColorMaterial 151
#define _gloffset_CullFace 152
#define _gloffset_Fogf 153
#define _gloffset_Fogfv 154
#define _gloffset_Fogi 155
#define _gloffset_Fogiv 156
#define _gloffset_FrontFace 157
#define _gloffset_Hint 158
#define _gloffset_Lightf 159
#define _gloffset_Lightfv 160
#define _gloffset_Lighti 161
#define _gloffset_Lightiv 162
#define _gloffset_LightModelf 163
#define _gloffset_LightModelfv 164
#define _gloffset_LightModeli 165
#define _gloffset_LightModeliv 166
#define _gloffset_LineStipple 167
#define _gloffset_LineWidth 168
#define _gloffset_Materialf 169
#define _gloffset_Materialfv 170
#define _gloffset_Materiali 171
#define _gloffset_Materialiv 172
#define _gloffset_PointSize 173
#define _gloffset_PolygonMode 174
#define _gloffset_PolygonStipple 175
#define _gloffset_Scissor 176
#define _gloffset_ShadeModel 177
#define _gloffset_TexParameterf 178
#define _gloffset_TexParameterfv 179
#define _gloffset_TexParameteri 180
#define _gloffset_TexParameteriv 181
#define _gloffset_TexImage1D 182
#define _gloffset_TexImage2D 183
#define _gloffset_TexEnvf 184
#define _gloffset_TexEnvfv 185
#define _gloffset_TexEnvi 186
#define _gloffset_TexEnviv 187
#define _gloffset_TexGend 188
#define _gloffset_TexGendv 189
#define _gloffset_TexGenf 190
#define _gloffset_TexGenfv 191
#define _gloffset_TexGeni 192
#define _gloffset_TexGeniv 193
#define _gloffset_FeedbackBuffer 194
#define _gloffset_SelectBuffer 195
#define _gloffset_RenderMode 196
#define _gloffset_InitNames 197
#define _gloffset_LoadName 198
#define _gloffset_PassThrough 199
#define _gloffset_PopName 200
#define _gloffset_PushName 201
#define _gloffset_DrawBuffer 202
#define _gloffset_Clear 203
#define _gloffset_ClearAccum 204
#define _gloffset_ClearIndex 205
#define _gloffset_ClearColor 206
#define _gloffset_ClearStencil 207
#define _gloffset_ClearDepth 208
#define _gloffset_StencilMask 209
#define _gloffset_ColorMask 210
#define _gloffset_DepthMask 211
#define _gloffset_IndexMask 212
#define _gloffset_Accum 213
#define _gloffset_Disable 214
#define _gloffset_Enable 215
#define _gloffset_Finish 216
#define _gloffset_Flush 217
#define _gloffset_PopAttrib 218
#define _gloffset_PushAttrib 219
#define _gloffset_Map1d 220
#define _gloffset_Map1f 221
#define _gloffset_Map2d 222
#define _gloffset_Map2f 223
#define _gloffset_MapGrid1d 224
#define _gloffset_MapGrid1f 225
#define _gloffset_MapGrid2d 226
#define _gloffset_MapGrid2f 227
#define _gloffset_EvalCoord1d 228
#define _gloffset_EvalCoord1dv 229
#define _gloffset_EvalCoord1f 230
#define _gloffset_EvalCoord1fv 231
#define _gloffset_EvalCoord2d 232
#define _gloffset_EvalCoord2dv 233
#define _gloffset_EvalCoord2f 234
#define _gloffset_EvalCoord2fv 235
#define _gloffset_EvalMesh1 236
#define _gloffset_EvalPoint1 237
#define _gloffset_EvalMesh2 238
#define _gloffset_EvalPoint2 239
#define _gloffset_AlphaFunc 240
#define _gloffset_BlendFunc 241
#define _gloffset_LogicOp 242
#define _gloffset_StencilFunc 243
#define _gloffset_StencilOp 244
#define _gloffset_DepthFunc 245
#define _gloffset_PixelZoom 246
#define _gloffset_PixelTransferf 247
#define _gloffset_PixelTransferi 248
#define _gloffset_PixelStoref 249
#define _gloffset_PixelStorei 250
#define _gloffset_PixelMapfv 251
#define _gloffset_PixelMapuiv 252
#define _gloffset_PixelMapusv 253
#define _gloffset_ReadBuffer 254
#define _gloffset_CopyPixels 255
#define _gloffset_ReadPixels 256
#define _gloffset_DrawPixels 257
#define _gloffset_GetBooleanv 258
#define _gloffset_GetClipPlane 259
#define _gloffset_GetDoublev 260
#define _gloffset_GetError 261
#define _gloffset_GetFloatv 262
#define _gloffset_GetIntegerv 263
#define _gloffset_GetLightfv 264
#define _gloffset_GetLightiv 265
#define _gloffset_GetMapdv 266
#define _gloffset_GetMapfv 267
#define _gloffset_GetMapiv 268
#define _gloffset_GetMaterialfv 269
#define _gloffset_GetMaterialiv 270
#define _gloffset_GetPixelMapfv 271
#define _gloffset_GetPixelMapuiv 272
#define _gloffset_GetPixelMapusv 273
#define _gloffset_GetPolygonStipple 274
#define _gloffset_GetString 275
#define _gloffset_GetTexEnvfv 276
#define _gloffset_GetTexEnviv 277
#define _gloffset_GetTexGendv 278
#define _gloffset_GetTexGenfv 279
#define _gloffset_GetTexGeniv 280
#define _gloffset_GetTexImage 281
#define _gloffset_GetTexParameterfv 282
#define _gloffset_GetTexParameteriv 283
#define _gloffset_GetTexLevelParameterfv 284
#define _gloffset_GetTexLevelParameteriv 285
#define _gloffset_IsEnabled 286
#define _gloffset_IsList 287
#define _gloffset_DepthRange 288
#define _gloffset_Frustum 289
#define _gloffset_LoadIdentity 290
#define _gloffset_LoadMatrixf 291
#define _gloffset_LoadMatrixd 292
#define _gloffset_MatrixMode 293
#define _gloffset_MultMatrixf 294
#define _gloffset_MultMatrixd 295
#define _gloffset_Ortho 296
#define _gloffset_PopMatrix 297
#define _gloffset_PushMatrix 298
#define _gloffset_Rotated 299
#define _gloffset_Rotatef 300
#define _gloffset_Scaled 301
#define _gloffset_Scalef 302
#define _gloffset_Translated 303
#define _gloffset_Translatef 304
#define _gloffset_Viewport 305
#define _gloffset_ArrayElement 306
#define _gloffset_BindTexture 307
#define _gloffset_ColorPointer 308
#define _gloffset_DisableClientState 309
#define _gloffset_DrawArrays 310
#define _gloffset_DrawElements 311
#define _gloffset_EdgeFlagPointer 312
#define _gloffset_EnableClientState 313
#define _gloffset_IndexPointer 314
#define _gloffset_Indexub 315
#define _gloffset_Indexubv 316
#define _gloffset_InterleavedArrays 317
#define _gloffset_NormalPointer 318
#define _gloffset_PolygonOffset 319
#define _gloffset_TexCoordPointer 320
#define _gloffset_VertexPointer 321
#define _gloffset_AreTexturesResident 322
#define _gloffset_CopyTexImage1D 323
#define _gloffset_CopyTexImage2D 324
#define _gloffset_CopyTexSubImage1D 325
#define _gloffset_CopyTexSubImage2D 326
#define _gloffset_DeleteTextures 327
#define _gloffset_GenTextures 328
#define _gloffset_GetPointerv 329
#define _gloffset_IsTexture 330
#define _gloffset_PrioritizeTextures 331
#define _gloffset_TexSubImage1D 332
#define _gloffset_TexSubImage2D 333
#define _gloffset_PopClientAttrib 334
#define _gloffset_PushClientAttrib 335
#define _gloffset_BlendColor 336
#define _gloffset_BlendEquation 337
#define _gloffset_DrawRangeElements 338
#define _gloffset_ColorTable 339
#define _gloffset_ColorTableParameterfv 340
#define _gloffset_ColorTableParameteriv 341
#define _gloffset_CopyColorTable 342
#define _gloffset_GetColorTable 343
#define _gloffset_GetColorTableParameterfv 344
#define _gloffset_GetColorTableParameteriv 345
#define _gloffset_ColorSubTable 346
#define _gloffset_CopyColorSubTable 347
#define _gloffset_ConvolutionFilter1D 348
#define _gloffset_ConvolutionFilter2D 349
#define _gloffset_ConvolutionParameterf 350
#define _gloffset_ConvolutionParameterfv 351
#define _gloffset_ConvolutionParameteri 352
#define _gloffset_ConvolutionParameteriv 353
#define _gloffset_CopyConvolutionFilter1D 354
#define _gloffset_CopyConvolutionFilter2D 355
#define _gloffset_GetConvolutionFilter 356
#define _gloffset_GetConvolutionParameterfv 357
#define _gloffset_GetConvolutionParameteriv 358
#define _gloffset_GetSeparableFilter 359
#define _gloffset_SeparableFilter2D 360
#define _gloffset_GetHistogram 361
#define _gloffset_GetHistogramParameterfv 362
#define _gloffset_GetHistogramParameteriv 363
#define _gloffset_GetMinmax 364
#define _gloffset_GetMinmaxParameterfv 365
#define _gloffset_GetMinmaxParameteriv 366
#define _gloffset_Histogram 367
#define _gloffset_Minmax 368
#define _gloffset_ResetHistogram 369
#define _gloffset_ResetMinmax 370
#define _gloffset_TexImage3DOES 371
#define _gloffset_TexSubImage3DOES 372
#define _gloffset_CopyTexSubImage3DOES 373
#define _gloffset_ActiveTexture 374
#define _gloffset_ClientActiveTextureARB 375
#define _gloffset_MultiTexCoord1dARB 376
#define _gloffset_MultiTexCoord1dvARB 377
#define _gloffset_MultiTexCoord1fARB 378
#define _gloffset_MultiTexCoord1fvARB 379
#define _gloffset_MultiTexCoord1iARB 380
#define _gloffset_MultiTexCoord1ivARB 381
#define _gloffset_MultiTexCoord1sARB 382
#define _gloffset_MultiTexCoord1svARB 383
#define _gloffset_MultiTexCoord2dARB 384
#define _gloffset_MultiTexCoord2dvARB 385
#define _gloffset_MultiTexCoord2fARB 386
#define _gloffset_MultiTexCoord2fvARB 387
#define _gloffset_MultiTexCoord2iARB 388
#define _gloffset_MultiTexCoord2ivARB 389
#define _gloffset_MultiTexCoord2sARB 390
#define _gloffset_MultiTexCoord2svARB 391
#define _gloffset_MultiTexCoord3dARB 392
#define _gloffset_MultiTexCoord3dvARB 393
#define _gloffset_MultiTexCoord3fARB 394
#define _gloffset_MultiTexCoord3fvARB 395
#define _gloffset_MultiTexCoord3iARB 396
#define _gloffset_MultiTexCoord3ivARB 397
#define _gloffset_MultiTexCoord3sARB 398
#define _gloffset_MultiTexCoord3svARB 399
#define _gloffset_MultiTexCoord4dARB 400
#define _gloffset_MultiTexCoord4dvARB 401
#define _gloffset_MultiTexCoord4fARB 402
#define _gloffset_MultiTexCoord4fvARB 403
#define _gloffset_MultiTexCoord4iARB 404
#define _gloffset_MultiTexCoord4ivARB 405
#define _gloffset_MultiTexCoord4sARB 406
#define _gloffset_MultiTexCoord4svARB 407

#if !FEATURE_remap_table

#define _gloffset_GetBufferPointervOES 408
#define _gloffset_MapBufferOES 409
#define _gloffset_UnmapBufferOES 410
#define _gloffset_CompressedTexImage3DOES 411
#define _gloffset_CompressedTexSubImage3DOES 412
#define _gloffset_FramebufferTexture3DOES 413
#define _gloffset_GetProgramBinaryOES 414
#define _gloffset_ProgramBinaryOES 415
#define _gloffset_MultiDrawArraysEXT 416
#define _gloffset_MultiDrawElementsEXT 417
#define _gloffset_BindVertexArrayAPPLE 418
#define _gloffset_DeleteVertexArraysAPPLE 419
#define _gloffset_GenVertexArraysAPPLE 420
#define _gloffset_IsVertexArrayAPPLE 421
#define _gloffset_EGLImageTargetRenderbufferStorageOES 422
#define _gloffset_EGLImageTargetTexture2DOES 423
#define _gloffset_CompressedTexImage2D 424
#define _gloffset_CompressedTexSubImage2D 425
#define _gloffset_SampleCoverage 426
#define _gloffset_BindBuffer 427
#define _gloffset_BufferData 428
#define _gloffset_BufferSubData 429
#define _gloffset_DeleteBuffers 430
#define _gloffset_GenBuffers 431
#define _gloffset_GetBufferParameteriv 432
#define _gloffset_IsBuffer 433
#define _gloffset_AttachShader 434
#define _gloffset_BindAttribLocation 435
#define _gloffset_BlendEquationSeparate 436
#define _gloffset_CompileShader 437
#define _gloffset_CreateProgram 438
#define _gloffset_CreateShader 439
#define _gloffset_DeleteProgram 440
#define _gloffset_DeleteShader 441
#define _gloffset_DetachShader 442
#define _gloffset_DisableVertexAttribArray 443
#define _gloffset_EnableVertexAttribArray 444
#define _gloffset_GetActiveAttrib 445
#define _gloffset_GetActiveUniform 446
#define _gloffset_GetAttachedShaders 447
#define _gloffset_GetAttribLocation 448
#define _gloffset_GetProgramInfoLog 449
#define _gloffset_GetProgramiv 450
#define _gloffset_GetShaderInfoLog 451
#define _gloffset_GetShaderSource 452
#define _gloffset_GetShaderiv 453
#define _gloffset_GetUniformLocation 454
#define _gloffset_GetUniformfv 455
#define _gloffset_GetUniformiv 456
#define _gloffset_GetVertexAttribPointerv 457
#define _gloffset_GetVertexAttribfv 458
#define _gloffset_GetVertexAttribiv 459
#define _gloffset_IsProgram 460
#define _gloffset_IsShader 461
#define _gloffset_LinkProgram 462
#define _gloffset_ShaderSource 463
#define _gloffset_StencilFuncSeparate 464
#define _gloffset_StencilMaskSeparate 465
#define _gloffset_StencilOpSeparate 466
#define _gloffset_Uniform1f 467
#define _gloffset_Uniform1fv 468
#define _gloffset_Uniform1i 469
#define _gloffset_Uniform1iv 470
#define _gloffset_Uniform2f 471
#define _gloffset_Uniform2fv 472
#define _gloffset_Uniform2i 473
#define _gloffset_Uniform2iv 474
#define _gloffset_Uniform3f 475
#define _gloffset_Uniform3fv 476
#define _gloffset_Uniform3i 477
#define _gloffset_Uniform3iv 478
#define _gloffset_Uniform4f 479
#define _gloffset_Uniform4fv 480
#define _gloffset_Uniform4i 481
#define _gloffset_Uniform4iv 482
#define _gloffset_UniformMatrix2fv 483
#define _gloffset_UniformMatrix3fv 484
#define _gloffset_UniformMatrix4fv 485
#define _gloffset_UseProgram 486
#define _gloffset_ValidateProgram 487
#define _gloffset_VertexAttrib1f 488
#define _gloffset_VertexAttrib1fv 489
#define _gloffset_VertexAttrib2f 490
#define _gloffset_VertexAttrib2fv 491
#define _gloffset_VertexAttrib3f 492
#define _gloffset_VertexAttrib3fv 493
#define _gloffset_VertexAttrib4f 494
#define _gloffset_VertexAttrib4fv 495
#define _gloffset_VertexAttribPointer 496
#define _gloffset_BlendFuncSeparate 497
#define _gloffset_BindFramebuffer 498
#define _gloffset_BindRenderbuffer 499
#define _gloffset_CheckFramebufferStatus 500
#define _gloffset_ClearDepthf 501
#define _gloffset_DeleteFramebuffers 502
#define _gloffset_DeleteRenderbuffers 503
#define _gloffset_DepthRangef 504
#define _gloffset_FramebufferRenderbuffer 505
#define _gloffset_FramebufferTexture2D 506
#define _gloffset_GenFramebuffers 507
#define _gloffset_GenRenderbuffers 508
#define _gloffset_GenerateMipmap 509
#define _gloffset_GetFramebufferAttachmentParameteriv 510
#define _gloffset_GetRenderbufferParameteriv 511
#define _gloffset_GetShaderPrecisionFormat 512
#define _gloffset_IsFramebuffer 513
#define _gloffset_IsRenderbuffer 514
#define _gloffset_ReleaseShaderCompiler 515
#define _gloffset_RenderbufferStorage 516
#define _gloffset_ShaderBinary 517

#else /* !FEATURE_remap_table */

#define esLocalRemapTable_size 110
static int esLocalRemapTable[ esLocalRemapTable_size ];

#define GetBufferPointervOES_remap_index 0
#define MapBufferOES_remap_index 1
#define UnmapBufferOES_remap_index 2
#define CompressedTexImage3DOES_remap_index 3
#define CompressedTexSubImage3DOES_remap_index 4
#define FramebufferTexture3DOES_remap_index 5
#define GetProgramBinaryOES_remap_index 6
#define ProgramBinaryOES_remap_index 7
#define MultiDrawArraysEXT_remap_index 8
#define MultiDrawElementsEXT_remap_index 9
#define BindVertexArrayAPPLE_remap_index 10
#define DeleteVertexArraysAPPLE_remap_index 11
#define GenVertexArraysAPPLE_remap_index 12
#define IsVertexArrayAPPLE_remap_index 13
#define EGLImageTargetRenderbufferStorageOES_remap_index 14
#define EGLImageTargetTexture2DOES_remap_index 15
#define CompressedTexImage2D_remap_index 16
#define CompressedTexSubImage2D_remap_index 17
#define SampleCoverage_remap_index 18
#define BindBuffer_remap_index 19
#define BufferData_remap_index 20
#define BufferSubData_remap_index 21
#define DeleteBuffers_remap_index 22
#define GenBuffers_remap_index 23
#define GetBufferParameteriv_remap_index 24
#define IsBuffer_remap_index 25
#define AttachShader_remap_index 26
#define BindAttribLocation_remap_index 27
#define BlendEquationSeparate_remap_index 28
#define CompileShader_remap_index 29
#define CreateProgram_remap_index 30
#define CreateShader_remap_index 31
#define DeleteProgram_remap_index 32
#define DeleteShader_remap_index 33
#define DetachShader_remap_index 34
#define DisableVertexAttribArray_remap_index 35
#define EnableVertexAttribArray_remap_index 36
#define GetActiveAttrib_remap_index 37
#define GetActiveUniform_remap_index 38
#define GetAttachedShaders_remap_index 39
#define GetAttribLocation_remap_index 40
#define GetProgramInfoLog_remap_index 41
#define GetProgramiv_remap_index 42
#define GetShaderInfoLog_remap_index 43
#define GetShaderSource_remap_index 44
#define GetShaderiv_remap_index 45
#define GetUniformLocation_remap_index 46
#define GetUniformfv_remap_index 47
#define GetUniformiv_remap_index 48
#define GetVertexAttribPointerv_remap_index 49
#define GetVertexAttribfv_remap_index 50
#define GetVertexAttribiv_remap_index 51
#define IsProgram_remap_index 52
#define IsShader_remap_index 53
#define LinkProgram_remap_index 54
#define ShaderSource_remap_index 55
#define StencilFuncSeparate_remap_index 56
#define StencilMaskSeparate_remap_index 57
#define StencilOpSeparate_remap_index 58
#define Uniform1f_remap_index 59
#define Uniform1fv_remap_index 60
#define Uniform1i_remap_index 61
#define Uniform1iv_remap_index 62
#define Uniform2f_remap_index 63
#define Uniform2fv_remap_index 64
#define Uniform2i_remap_index 65
#define Uniform2iv_remap_index 66
#define Uniform3f_remap_index 67
#define Uniform3fv_remap_index 68
#define Uniform3i_remap_index 69
#define Uniform3iv_remap_index 70
#define Uniform4f_remap_index 71
#define Uniform4fv_remap_index 72
#define Uniform4i_remap_index 73
#define Uniform4iv_remap_index 74
#define UniformMatrix2fv_remap_index 75
#define UniformMatrix3fv_remap_index 76
#define UniformMatrix4fv_remap_index 77
#define UseProgram_remap_index 78
#define ValidateProgram_remap_index 79
#define VertexAttrib1f_remap_index 80
#define VertexAttrib1fv_remap_index 81
#define VertexAttrib2f_remap_index 82
#define VertexAttrib2fv_remap_index 83
#define VertexAttrib3f_remap_index 84
#define VertexAttrib3fv_remap_index 85
#define VertexAttrib4f_remap_index 86
#define VertexAttrib4fv_remap_index 87
#define VertexAttribPointer_remap_index 88
#define BlendFuncSeparate_remap_index 89
#define BindFramebuffer_remap_index 90
#define BindRenderbuffer_remap_index 91
#define CheckFramebufferStatus_remap_index 92
#define ClearDepthf_remap_index 93
#define DeleteFramebuffers_remap_index 94
#define DeleteRenderbuffers_remap_index 95
#define DepthRangef_remap_index 96
#define FramebufferRenderbuffer_remap_index 97
#define FramebufferTexture2D_remap_index 98
#define GenFramebuffers_remap_index 99
#define GenRenderbuffers_remap_index 100
#define GenerateMipmap_remap_index 101
#define GetFramebufferAttachmentParameteriv_remap_index 102
#define GetRenderbufferParameteriv_remap_index 103
#define GetShaderPrecisionFormat_remap_index 104
#define IsFramebuffer_remap_index 105
#define IsRenderbuffer_remap_index 106
#define ReleaseShaderCompiler_remap_index 107
#define RenderbufferStorage_remap_index 108
#define ShaderBinary_remap_index 109

#define _gloffset_GetBufferPointervOES esLocalRemapTable[GetBufferPointervOES_remap_index]
#define _gloffset_MapBufferOES esLocalRemapTable[MapBufferOES_remap_index]
#define _gloffset_UnmapBufferOES esLocalRemapTable[UnmapBufferOES_remap_index]
#define _gloffset_CompressedTexImage3DOES esLocalRemapTable[CompressedTexImage3DOES_remap_index]
#define _gloffset_CompressedTexSubImage3DOES esLocalRemapTable[CompressedTexSubImage3DOES_remap_index]
#define _gloffset_FramebufferTexture3DOES esLocalRemapTable[FramebufferTexture3DOES_remap_index]
#define _gloffset_GetProgramBinaryOES esLocalRemapTable[GetProgramBinaryOES_remap_index]
#define _gloffset_ProgramBinaryOES esLocalRemapTable[ProgramBinaryOES_remap_index]
#define _gloffset_MultiDrawArraysEXT esLocalRemapTable[MultiDrawArraysEXT_remap_index]
#define _gloffset_MultiDrawElementsEXT esLocalRemapTable[MultiDrawElementsEXT_remap_index]
#define _gloffset_BindVertexArrayAPPLE esLocalRemapTable[BindVertexArrayAPPLE_remap_index]
#define _gloffset_DeleteVertexArraysAPPLE esLocalRemapTable[DeleteVertexArraysAPPLE_remap_index]
#define _gloffset_GenVertexArraysAPPLE esLocalRemapTable[GenVertexArraysAPPLE_remap_index]
#define _gloffset_IsVertexArrayAPPLE esLocalRemapTable[IsVertexArrayAPPLE_remap_index]
#define _gloffset_EGLImageTargetRenderbufferStorageOES esLocalRemapTable[EGLImageTargetRenderbufferStorageOES_remap_index]
#define _gloffset_EGLImageTargetTexture2DOES esLocalRemapTable[EGLImageTargetTexture2DOES_remap_index]
#define _gloffset_CompressedTexImage2D esLocalRemapTable[CompressedTexImage2D_remap_index]
#define _gloffset_CompressedTexSubImage2D esLocalRemapTable[CompressedTexSubImage2D_remap_index]
#define _gloffset_SampleCoverage esLocalRemapTable[SampleCoverage_remap_index]
#define _gloffset_BindBuffer esLocalRemapTable[BindBuffer_remap_index]
#define _gloffset_BufferData esLocalRemapTable[BufferData_remap_index]
#define _gloffset_BufferSubData esLocalRemapTable[BufferSubData_remap_index]
#define _gloffset_DeleteBuffers esLocalRemapTable[DeleteBuffers_remap_index]
#define _gloffset_GenBuffers esLocalRemapTable[GenBuffers_remap_index]
#define _gloffset_GetBufferParameteriv esLocalRemapTable[GetBufferParameteriv_remap_index]
#define _gloffset_IsBuffer esLocalRemapTable[IsBuffer_remap_index]
#define _gloffset_AttachShader esLocalRemapTable[AttachShader_remap_index]
#define _gloffset_BindAttribLocation esLocalRemapTable[BindAttribLocation_remap_index]
#define _gloffset_BlendEquationSeparate esLocalRemapTable[BlendEquationSeparate_remap_index]
#define _gloffset_CompileShader esLocalRemapTable[CompileShader_remap_index]
#define _gloffset_CreateProgram esLocalRemapTable[CreateProgram_remap_index]
#define _gloffset_CreateShader esLocalRemapTable[CreateShader_remap_index]
#define _gloffset_DeleteProgram esLocalRemapTable[DeleteProgram_remap_index]
#define _gloffset_DeleteShader esLocalRemapTable[DeleteShader_remap_index]
#define _gloffset_DetachShader esLocalRemapTable[DetachShader_remap_index]
#define _gloffset_DisableVertexAttribArray esLocalRemapTable[DisableVertexAttribArray_remap_index]
#define _gloffset_EnableVertexAttribArray esLocalRemapTable[EnableVertexAttribArray_remap_index]
#define _gloffset_GetActiveAttrib esLocalRemapTable[GetActiveAttrib_remap_index]
#define _gloffset_GetActiveUniform esLocalRemapTable[GetActiveUniform_remap_index]
#define _gloffset_GetAttachedShaders esLocalRemapTable[GetAttachedShaders_remap_index]
#define _gloffset_GetAttribLocation esLocalRemapTable[GetAttribLocation_remap_index]
#define _gloffset_GetProgramInfoLog esLocalRemapTable[GetProgramInfoLog_remap_index]
#define _gloffset_GetProgramiv esLocalRemapTable[GetProgramiv_remap_index]
#define _gloffset_GetShaderInfoLog esLocalRemapTable[GetShaderInfoLog_remap_index]
#define _gloffset_GetShaderSource esLocalRemapTable[GetShaderSource_remap_index]
#define _gloffset_GetShaderiv esLocalRemapTable[GetShaderiv_remap_index]
#define _gloffset_GetUniformLocation esLocalRemapTable[GetUniformLocation_remap_index]
#define _gloffset_GetUniformfv esLocalRemapTable[GetUniformfv_remap_index]
#define _gloffset_GetUniformiv esLocalRemapTable[GetUniformiv_remap_index]
#define _gloffset_GetVertexAttribPointerv esLocalRemapTable[GetVertexAttribPointerv_remap_index]
#define _gloffset_GetVertexAttribfv esLocalRemapTable[GetVertexAttribfv_remap_index]
#define _gloffset_GetVertexAttribiv esLocalRemapTable[GetVertexAttribiv_remap_index]
#define _gloffset_IsProgram esLocalRemapTable[IsProgram_remap_index]
#define _gloffset_IsShader esLocalRemapTable[IsShader_remap_index]
#define _gloffset_LinkProgram esLocalRemapTable[LinkProgram_remap_index]
#define _gloffset_ShaderSource esLocalRemapTable[ShaderSource_remap_index]
#define _gloffset_StencilFuncSeparate esLocalRemapTable[StencilFuncSeparate_remap_index]
#define _gloffset_StencilMaskSeparate esLocalRemapTable[StencilMaskSeparate_remap_index]
#define _gloffset_StencilOpSeparate esLocalRemapTable[StencilOpSeparate_remap_index]
#define _gloffset_Uniform1f esLocalRemapTable[Uniform1f_remap_index]
#define _gloffset_Uniform1fv esLocalRemapTable[Uniform1fv_remap_index]
#define _gloffset_Uniform1i esLocalRemapTable[Uniform1i_remap_index]
#define _gloffset_Uniform1iv esLocalRemapTable[Uniform1iv_remap_index]
#define _gloffset_Uniform2f esLocalRemapTable[Uniform2f_remap_index]
#define _gloffset_Uniform2fv esLocalRemapTable[Uniform2fv_remap_index]
#define _gloffset_Uniform2i esLocalRemapTable[Uniform2i_remap_index]
#define _gloffset_Uniform2iv esLocalRemapTable[Uniform2iv_remap_index]
#define _gloffset_Uniform3f esLocalRemapTable[Uniform3f_remap_index]
#define _gloffset_Uniform3fv esLocalRemapTable[Uniform3fv_remap_index]
#define _gloffset_Uniform3i esLocalRemapTable[Uniform3i_remap_index]
#define _gloffset_Uniform3iv esLocalRemapTable[Uniform3iv_remap_index]
#define _gloffset_Uniform4f esLocalRemapTable[Uniform4f_remap_index]
#define _gloffset_Uniform4fv esLocalRemapTable[Uniform4fv_remap_index]
#define _gloffset_Uniform4i esLocalRemapTable[Uniform4i_remap_index]
#define _gloffset_Uniform4iv esLocalRemapTable[Uniform4iv_remap_index]
#define _gloffset_UniformMatrix2fv esLocalRemapTable[UniformMatrix2fv_remap_index]
#define _gloffset_UniformMatrix3fv esLocalRemapTable[UniformMatrix3fv_remap_index]
#define _gloffset_UniformMatrix4fv esLocalRemapTable[UniformMatrix4fv_remap_index]
#define _gloffset_UseProgram esLocalRemapTable[UseProgram_remap_index]
#define _gloffset_ValidateProgram esLocalRemapTable[ValidateProgram_remap_index]
#define _gloffset_VertexAttrib1f esLocalRemapTable[VertexAttrib1f_remap_index]
#define _gloffset_VertexAttrib1fv esLocalRemapTable[VertexAttrib1fv_remap_index]
#define _gloffset_VertexAttrib2f esLocalRemapTable[VertexAttrib2f_remap_index]
#define _gloffset_VertexAttrib2fv esLocalRemapTable[VertexAttrib2fv_remap_index]
#define _gloffset_VertexAttrib3f esLocalRemapTable[VertexAttrib3f_remap_index]
#define _gloffset_VertexAttrib3fv esLocalRemapTable[VertexAttrib3fv_remap_index]
#define _gloffset_VertexAttrib4f esLocalRemapTable[VertexAttrib4f_remap_index]
#define _gloffset_VertexAttrib4fv esLocalRemapTable[VertexAttrib4fv_remap_index]
#define _gloffset_VertexAttribPointer esLocalRemapTable[VertexAttribPointer_remap_index]
#define _gloffset_BlendFuncSeparate esLocalRemapTable[BlendFuncSeparate_remap_index]
#define _gloffset_BindFramebuffer esLocalRemapTable[BindFramebuffer_remap_index]
#define _gloffset_BindRenderbuffer esLocalRemapTable[BindRenderbuffer_remap_index]
#define _gloffset_CheckFramebufferStatus esLocalRemapTable[CheckFramebufferStatus_remap_index]
#define _gloffset_ClearDepthf esLocalRemapTable[ClearDepthf_remap_index]
#define _gloffset_DeleteFramebuffers esLocalRemapTable[DeleteFramebuffers_remap_index]
#define _gloffset_DeleteRenderbuffers esLocalRemapTable[DeleteRenderbuffers_remap_index]
#define _gloffset_DepthRangef esLocalRemapTable[DepthRangef_remap_index]
#define _gloffset_FramebufferRenderbuffer esLocalRemapTable[FramebufferRenderbuffer_remap_index]
#define _gloffset_FramebufferTexture2D esLocalRemapTable[FramebufferTexture2D_remap_index]
#define _gloffset_GenFramebuffers esLocalRemapTable[GenFramebuffers_remap_index]
#define _gloffset_GenRenderbuffers esLocalRemapTable[GenRenderbuffers_remap_index]
#define _gloffset_GenerateMipmap esLocalRemapTable[GenerateMipmap_remap_index]
#define _gloffset_GetFramebufferAttachmentParameteriv esLocalRemapTable[GetFramebufferAttachmentParameteriv_remap_index]
#define _gloffset_GetRenderbufferParameteriv esLocalRemapTable[GetRenderbufferParameteriv_remap_index]
#define _gloffset_GetShaderPrecisionFormat esLocalRemapTable[GetShaderPrecisionFormat_remap_index]
#define _gloffset_IsFramebuffer esLocalRemapTable[IsFramebuffer_remap_index]
#define _gloffset_IsRenderbuffer esLocalRemapTable[IsRenderbuffer_remap_index]
#define _gloffset_ReleaseShaderCompiler esLocalRemapTable[ReleaseShaderCompiler_remap_index]
#define _gloffset_RenderbufferStorage esLocalRemapTable[RenderbufferStorage_remap_index]
#define _gloffset_ShaderBinary esLocalRemapTable[ShaderBinary_remap_index]

#endif /* !FEATURE_remap_table */

typedef void (GLAPIENTRYP _glptr_NewList)(GLuint, GLenum);
#define CALL_NewList(disp, parameters) \
    (* GET_NewList(disp)) parameters
static INLINE _glptr_NewList GET_NewList(struct _glapi_table *disp) {
   return (_glptr_NewList) (GET_by_offset(disp, _gloffset_NewList));
}

static INLINE void SET_NewList(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint, GLenum)) {
   SET_by_offset(disp, _gloffset_NewList, fn);
}

typedef void (GLAPIENTRYP _glptr_EndList)(void);
#define CALL_EndList(disp, parameters) \
    (* GET_EndList(disp)) parameters
static INLINE _glptr_EndList GET_EndList(struct _glapi_table *disp) {
   return (_glptr_EndList) (GET_by_offset(disp, _gloffset_EndList));
}

static INLINE void SET_EndList(struct _glapi_table *disp, void (GLAPIENTRYP fn)(void)) {
   SET_by_offset(disp, _gloffset_EndList, fn);
}

typedef void (GLAPIENTRYP _glptr_CallList)(GLuint);
#define CALL_CallList(disp, parameters) \
    (* GET_CallList(disp)) parameters
static INLINE _glptr_CallList GET_CallList(struct _glapi_table *disp) {
   return (_glptr_CallList) (GET_by_offset(disp, _gloffset_CallList));
}

static INLINE void SET_CallList(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint)) {
   SET_by_offset(disp, _gloffset_CallList, fn);
}

typedef void (GLAPIENTRYP _glptr_CallLists)(GLsizei, GLenum, const GLvoid *);
#define CALL_CallLists(disp, parameters) \
    (* GET_CallLists(disp)) parameters
static INLINE _glptr_CallLists GET_CallLists(struct _glapi_table *disp) {
   return (_glptr_CallLists) (GET_by_offset(disp, _gloffset_CallLists));
}

static INLINE void SET_CallLists(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLsizei, GLenum, const GLvoid *)) {
   SET_by_offset(disp, _gloffset_CallLists, fn);
}

typedef void (GLAPIENTRYP _glptr_DeleteLists)(GLuint, GLsizei);
#define CALL_DeleteLists(disp, parameters) \
    (* GET_DeleteLists(disp)) parameters
static INLINE _glptr_DeleteLists GET_DeleteLists(struct _glapi_table *disp) {
   return (_glptr_DeleteLists) (GET_by_offset(disp, _gloffset_DeleteLists));
}

static INLINE void SET_DeleteLists(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint, GLsizei)) {
   SET_by_offset(disp, _gloffset_DeleteLists, fn);
}

typedef GLuint (GLAPIENTRYP _glptr_GenLists)(GLsizei);
#define CALL_GenLists(disp, parameters) \
    (* GET_GenLists(disp)) parameters
static INLINE _glptr_GenLists GET_GenLists(struct _glapi_table *disp) {
   return (_glptr_GenLists) (GET_by_offset(disp, _gloffset_GenLists));
}

static INLINE void SET_GenLists(struct _glapi_table *disp, GLuint (GLAPIENTRYP fn)(GLsizei)) {
   SET_by_offset(disp, _gloffset_GenLists, fn);
}

typedef void (GLAPIENTRYP _glptr_ListBase)(GLuint);
#define CALL_ListBase(disp, parameters) \
    (* GET_ListBase(disp)) parameters
static INLINE _glptr_ListBase GET_ListBase(struct _glapi_table *disp) {
   return (_glptr_ListBase) (GET_by_offset(disp, _gloffset_ListBase));
}

static INLINE void SET_ListBase(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint)) {
   SET_by_offset(disp, _gloffset_ListBase, fn);
}

typedef void (GLAPIENTRYP _glptr_Begin)(GLenum);
#define CALL_Begin(disp, parameters) \
    (* GET_Begin(disp)) parameters
static INLINE _glptr_Begin GET_Begin(struct _glapi_table *disp) {
   return (_glptr_Begin) (GET_by_offset(disp, _gloffset_Begin));
}

static INLINE void SET_Begin(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum)) {
   SET_by_offset(disp, _gloffset_Begin, fn);
}

typedef void (GLAPIENTRYP _glptr_Bitmap)(GLsizei, GLsizei, GLfloat, GLfloat, GLfloat, GLfloat, const GLubyte *);
#define CALL_Bitmap(disp, parameters) \
    (* GET_Bitmap(disp)) parameters
static INLINE _glptr_Bitmap GET_Bitmap(struct _glapi_table *disp) {
   return (_glptr_Bitmap) (GET_by_offset(disp, _gloffset_Bitmap));
}

static INLINE void SET_Bitmap(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLsizei, GLsizei, GLfloat, GLfloat, GLfloat, GLfloat, const GLubyte *)) {
   SET_by_offset(disp, _gloffset_Bitmap, fn);
}

typedef void (GLAPIENTRYP _glptr_Color3b)(GLbyte, GLbyte, GLbyte);
#define CALL_Color3b(disp, parameters) \
    (* GET_Color3b(disp)) parameters
static INLINE _glptr_Color3b GET_Color3b(struct _glapi_table *disp) {
   return (_glptr_Color3b) (GET_by_offset(disp, _gloffset_Color3b));
}

static INLINE void SET_Color3b(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLbyte, GLbyte, GLbyte)) {
   SET_by_offset(disp, _gloffset_Color3b, fn);
}

typedef void (GLAPIENTRYP _glptr_Color3bv)(const GLbyte *);
#define CALL_Color3bv(disp, parameters) \
    (* GET_Color3bv(disp)) parameters
static INLINE _glptr_Color3bv GET_Color3bv(struct _glapi_table *disp) {
   return (_glptr_Color3bv) (GET_by_offset(disp, _gloffset_Color3bv));
}

static INLINE void SET_Color3bv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLbyte *)) {
   SET_by_offset(disp, _gloffset_Color3bv, fn);
}

typedef void (GLAPIENTRYP _glptr_Color3d)(GLdouble, GLdouble, GLdouble);
#define CALL_Color3d(disp, parameters) \
    (* GET_Color3d(disp)) parameters
static INLINE _glptr_Color3d GET_Color3d(struct _glapi_table *disp) {
   return (_glptr_Color3d) (GET_by_offset(disp, _gloffset_Color3d));
}

static INLINE void SET_Color3d(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLdouble, GLdouble, GLdouble)) {
   SET_by_offset(disp, _gloffset_Color3d, fn);
}

typedef void (GLAPIENTRYP _glptr_Color3dv)(const GLdouble *);
#define CALL_Color3dv(disp, parameters) \
    (* GET_Color3dv(disp)) parameters
static INLINE _glptr_Color3dv GET_Color3dv(struct _glapi_table *disp) {
   return (_glptr_Color3dv) (GET_by_offset(disp, _gloffset_Color3dv));
}

static INLINE void SET_Color3dv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLdouble *)) {
   SET_by_offset(disp, _gloffset_Color3dv, fn);
}

typedef void (GLAPIENTRYP _glptr_Color3f)(GLfloat, GLfloat, GLfloat);
#define CALL_Color3f(disp, parameters) \
    (* GET_Color3f(disp)) parameters
static INLINE _glptr_Color3f GET_Color3f(struct _glapi_table *disp) {
   return (_glptr_Color3f) (GET_by_offset(disp, _gloffset_Color3f));
}

static INLINE void SET_Color3f(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat)) {
   SET_by_offset(disp, _gloffset_Color3f, fn);
}

typedef void (GLAPIENTRYP _glptr_Color3fv)(const GLfloat *);
#define CALL_Color3fv(disp, parameters) \
    (* GET_Color3fv(disp)) parameters
static INLINE _glptr_Color3fv GET_Color3fv(struct _glapi_table *disp) {
   return (_glptr_Color3fv) (GET_by_offset(disp, _gloffset_Color3fv));
}

static INLINE void SET_Color3fv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLfloat *)) {
   SET_by_offset(disp, _gloffset_Color3fv, fn);
}

typedef void (GLAPIENTRYP _glptr_Color3i)(GLint, GLint, GLint);
#define CALL_Color3i(disp, parameters) \
    (* GET_Color3i(disp)) parameters
static INLINE _glptr_Color3i GET_Color3i(struct _glapi_table *disp) {
   return (_glptr_Color3i) (GET_by_offset(disp, _gloffset_Color3i));
}

static INLINE void SET_Color3i(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLint, GLint)) {
   SET_by_offset(disp, _gloffset_Color3i, fn);
}

typedef void (GLAPIENTRYP _glptr_Color3iv)(const GLint *);
#define CALL_Color3iv(disp, parameters) \
    (* GET_Color3iv(disp)) parameters
static INLINE _glptr_Color3iv GET_Color3iv(struct _glapi_table *disp) {
   return (_glptr_Color3iv) (GET_by_offset(disp, _gloffset_Color3iv));
}

static INLINE void SET_Color3iv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLint *)) {
   SET_by_offset(disp, _gloffset_Color3iv, fn);
}

typedef void (GLAPIENTRYP _glptr_Color3s)(GLshort, GLshort, GLshort);
#define CALL_Color3s(disp, parameters) \
    (* GET_Color3s(disp)) parameters
static INLINE _glptr_Color3s GET_Color3s(struct _glapi_table *disp) {
   return (_glptr_Color3s) (GET_by_offset(disp, _gloffset_Color3s));
}

static INLINE void SET_Color3s(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLshort, GLshort, GLshort)) {
   SET_by_offset(disp, _gloffset_Color3s, fn);
}

typedef void (GLAPIENTRYP _glptr_Color3sv)(const GLshort *);
#define CALL_Color3sv(disp, parameters) \
    (* GET_Color3sv(disp)) parameters
static INLINE _glptr_Color3sv GET_Color3sv(struct _glapi_table *disp) {
   return (_glptr_Color3sv) (GET_by_offset(disp, _gloffset_Color3sv));
}

static INLINE void SET_Color3sv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLshort *)) {
   SET_by_offset(disp, _gloffset_Color3sv, fn);
}

typedef void (GLAPIENTRYP _glptr_Color3ub)(GLubyte, GLubyte, GLubyte);
#define CALL_Color3ub(disp, parameters) \
    (* GET_Color3ub(disp)) parameters
static INLINE _glptr_Color3ub GET_Color3ub(struct _glapi_table *disp) {
   return (_glptr_Color3ub) (GET_by_offset(disp, _gloffset_Color3ub));
}

static INLINE void SET_Color3ub(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLubyte, GLubyte, GLubyte)) {
   SET_by_offset(disp, _gloffset_Color3ub, fn);
}

typedef void (GLAPIENTRYP _glptr_Color3ubv)(const GLubyte *);
#define CALL_Color3ubv(disp, parameters) \
    (* GET_Color3ubv(disp)) parameters
static INLINE _glptr_Color3ubv GET_Color3ubv(struct _glapi_table *disp) {
   return (_glptr_Color3ubv) (GET_by_offset(disp, _gloffset_Color3ubv));
}

static INLINE void SET_Color3ubv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLubyte *)) {
   SET_by_offset(disp, _gloffset_Color3ubv, fn);
}

typedef void (GLAPIENTRYP _glptr_Color3ui)(GLuint, GLuint, GLuint);
#define CALL_Color3ui(disp, parameters) \
    (* GET_Color3ui(disp)) parameters
static INLINE _glptr_Color3ui GET_Color3ui(struct _glapi_table *disp) {
   return (_glptr_Color3ui) (GET_by_offset(disp, _gloffset_Color3ui));
}

static INLINE void SET_Color3ui(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint, GLuint, GLuint)) {
   SET_by_offset(disp, _gloffset_Color3ui, fn);
}

typedef void (GLAPIENTRYP _glptr_Color3uiv)(const GLuint *);
#define CALL_Color3uiv(disp, parameters) \
    (* GET_Color3uiv(disp)) parameters
static INLINE _glptr_Color3uiv GET_Color3uiv(struct _glapi_table *disp) {
   return (_glptr_Color3uiv) (GET_by_offset(disp, _gloffset_Color3uiv));
}

static INLINE void SET_Color3uiv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLuint *)) {
   SET_by_offset(disp, _gloffset_Color3uiv, fn);
}

typedef void (GLAPIENTRYP _glptr_Color3us)(GLushort, GLushort, GLushort);
#define CALL_Color3us(disp, parameters) \
    (* GET_Color3us(disp)) parameters
static INLINE _glptr_Color3us GET_Color3us(struct _glapi_table *disp) {
   return (_glptr_Color3us) (GET_by_offset(disp, _gloffset_Color3us));
}

static INLINE void SET_Color3us(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLushort, GLushort, GLushort)) {
   SET_by_offset(disp, _gloffset_Color3us, fn);
}

typedef void (GLAPIENTRYP _glptr_Color3usv)(const GLushort *);
#define CALL_Color3usv(disp, parameters) \
    (* GET_Color3usv(disp)) parameters
static INLINE _glptr_Color3usv GET_Color3usv(struct _glapi_table *disp) {
   return (_glptr_Color3usv) (GET_by_offset(disp, _gloffset_Color3usv));
}

static INLINE void SET_Color3usv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLushort *)) {
   SET_by_offset(disp, _gloffset_Color3usv, fn);
}

typedef void (GLAPIENTRYP _glptr_Color4b)(GLbyte, GLbyte, GLbyte, GLbyte);
#define CALL_Color4b(disp, parameters) \
    (* GET_Color4b(disp)) parameters
static INLINE _glptr_Color4b GET_Color4b(struct _glapi_table *disp) {
   return (_glptr_Color4b) (GET_by_offset(disp, _gloffset_Color4b));
}

static INLINE void SET_Color4b(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLbyte, GLbyte, GLbyte, GLbyte)) {
   SET_by_offset(disp, _gloffset_Color4b, fn);
}

typedef void (GLAPIENTRYP _glptr_Color4bv)(const GLbyte *);
#define CALL_Color4bv(disp, parameters) \
    (* GET_Color4bv(disp)) parameters
static INLINE _glptr_Color4bv GET_Color4bv(struct _glapi_table *disp) {
   return (_glptr_Color4bv) (GET_by_offset(disp, _gloffset_Color4bv));
}

static INLINE void SET_Color4bv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLbyte *)) {
   SET_by_offset(disp, _gloffset_Color4bv, fn);
}

typedef void (GLAPIENTRYP _glptr_Color4d)(GLdouble, GLdouble, GLdouble, GLdouble);
#define CALL_Color4d(disp, parameters) \
    (* GET_Color4d(disp)) parameters
static INLINE _glptr_Color4d GET_Color4d(struct _glapi_table *disp) {
   return (_glptr_Color4d) (GET_by_offset(disp, _gloffset_Color4d));
}

static INLINE void SET_Color4d(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLdouble, GLdouble, GLdouble, GLdouble)) {
   SET_by_offset(disp, _gloffset_Color4d, fn);
}

typedef void (GLAPIENTRYP _glptr_Color4dv)(const GLdouble *);
#define CALL_Color4dv(disp, parameters) \
    (* GET_Color4dv(disp)) parameters
static INLINE _glptr_Color4dv GET_Color4dv(struct _glapi_table *disp) {
   return (_glptr_Color4dv) (GET_by_offset(disp, _gloffset_Color4dv));
}

static INLINE void SET_Color4dv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLdouble *)) {
   SET_by_offset(disp, _gloffset_Color4dv, fn);
}

typedef void (GLAPIENTRYP _glptr_Color4f)(GLfloat, GLfloat, GLfloat, GLfloat);
#define CALL_Color4f(disp, parameters) \
    (* GET_Color4f(disp)) parameters
static INLINE _glptr_Color4f GET_Color4f(struct _glapi_table *disp) {
   return (_glptr_Color4f) (GET_by_offset(disp, _gloffset_Color4f));
}

static INLINE void SET_Color4f(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat, GLfloat)) {
   SET_by_offset(disp, _gloffset_Color4f, fn);
}

typedef void (GLAPIENTRYP _glptr_Color4fv)(const GLfloat *);
#define CALL_Color4fv(disp, parameters) \
    (* GET_Color4fv(disp)) parameters
static INLINE _glptr_Color4fv GET_Color4fv(struct _glapi_table *disp) {
   return (_glptr_Color4fv) (GET_by_offset(disp, _gloffset_Color4fv));
}

static INLINE void SET_Color4fv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLfloat *)) {
   SET_by_offset(disp, _gloffset_Color4fv, fn);
}

typedef void (GLAPIENTRYP _glptr_Color4i)(GLint, GLint, GLint, GLint);
#define CALL_Color4i(disp, parameters) \
    (* GET_Color4i(disp)) parameters
static INLINE _glptr_Color4i GET_Color4i(struct _glapi_table *disp) {
   return (_glptr_Color4i) (GET_by_offset(disp, _gloffset_Color4i));
}

static INLINE void SET_Color4i(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLint, GLint, GLint)) {
   SET_by_offset(disp, _gloffset_Color4i, fn);
}

typedef void (GLAPIENTRYP _glptr_Color4iv)(const GLint *);
#define CALL_Color4iv(disp, parameters) \
    (* GET_Color4iv(disp)) parameters
static INLINE _glptr_Color4iv GET_Color4iv(struct _glapi_table *disp) {
   return (_glptr_Color4iv) (GET_by_offset(disp, _gloffset_Color4iv));
}

static INLINE void SET_Color4iv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLint *)) {
   SET_by_offset(disp, _gloffset_Color4iv, fn);
}

typedef void (GLAPIENTRYP _glptr_Color4s)(GLshort, GLshort, GLshort, GLshort);
#define CALL_Color4s(disp, parameters) \
    (* GET_Color4s(disp)) parameters
static INLINE _glptr_Color4s GET_Color4s(struct _glapi_table *disp) {
   return (_glptr_Color4s) (GET_by_offset(disp, _gloffset_Color4s));
}

static INLINE void SET_Color4s(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLshort, GLshort, GLshort, GLshort)) {
   SET_by_offset(disp, _gloffset_Color4s, fn);
}

typedef void (GLAPIENTRYP _glptr_Color4sv)(const GLshort *);
#define CALL_Color4sv(disp, parameters) \
    (* GET_Color4sv(disp)) parameters
static INLINE _glptr_Color4sv GET_Color4sv(struct _glapi_table *disp) {
   return (_glptr_Color4sv) (GET_by_offset(disp, _gloffset_Color4sv));
}

static INLINE void SET_Color4sv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLshort *)) {
   SET_by_offset(disp, _gloffset_Color4sv, fn);
}

typedef void (GLAPIENTRYP _glptr_Color4ub)(GLubyte, GLubyte, GLubyte, GLubyte);
#define CALL_Color4ub(disp, parameters) \
    (* GET_Color4ub(disp)) parameters
static INLINE _glptr_Color4ub GET_Color4ub(struct _glapi_table *disp) {
   return (_glptr_Color4ub) (GET_by_offset(disp, _gloffset_Color4ub));
}

static INLINE void SET_Color4ub(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLubyte, GLubyte, GLubyte, GLubyte)) {
   SET_by_offset(disp, _gloffset_Color4ub, fn);
}

typedef void (GLAPIENTRYP _glptr_Color4ubv)(const GLubyte *);
#define CALL_Color4ubv(disp, parameters) \
    (* GET_Color4ubv(disp)) parameters
static INLINE _glptr_Color4ubv GET_Color4ubv(struct _glapi_table *disp) {
   return (_glptr_Color4ubv) (GET_by_offset(disp, _gloffset_Color4ubv));
}

static INLINE void SET_Color4ubv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLubyte *)) {
   SET_by_offset(disp, _gloffset_Color4ubv, fn);
}

typedef void (GLAPIENTRYP _glptr_Color4ui)(GLuint, GLuint, GLuint, GLuint);
#define CALL_Color4ui(disp, parameters) \
    (* GET_Color4ui(disp)) parameters
static INLINE _glptr_Color4ui GET_Color4ui(struct _glapi_table *disp) {
   return (_glptr_Color4ui) (GET_by_offset(disp, _gloffset_Color4ui));
}

static INLINE void SET_Color4ui(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint, GLuint, GLuint, GLuint)) {
   SET_by_offset(disp, _gloffset_Color4ui, fn);
}

typedef void (GLAPIENTRYP _glptr_Color4uiv)(const GLuint *);
#define CALL_Color4uiv(disp, parameters) \
    (* GET_Color4uiv(disp)) parameters
static INLINE _glptr_Color4uiv GET_Color4uiv(struct _glapi_table *disp) {
   return (_glptr_Color4uiv) (GET_by_offset(disp, _gloffset_Color4uiv));
}

static INLINE void SET_Color4uiv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLuint *)) {
   SET_by_offset(disp, _gloffset_Color4uiv, fn);
}

typedef void (GLAPIENTRYP _glptr_Color4us)(GLushort, GLushort, GLushort, GLushort);
#define CALL_Color4us(disp, parameters) \
    (* GET_Color4us(disp)) parameters
static INLINE _glptr_Color4us GET_Color4us(struct _glapi_table *disp) {
   return (_glptr_Color4us) (GET_by_offset(disp, _gloffset_Color4us));
}

static INLINE void SET_Color4us(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLushort, GLushort, GLushort, GLushort)) {
   SET_by_offset(disp, _gloffset_Color4us, fn);
}

typedef void (GLAPIENTRYP _glptr_Color4usv)(const GLushort *);
#define CALL_Color4usv(disp, parameters) \
    (* GET_Color4usv(disp)) parameters
static INLINE _glptr_Color4usv GET_Color4usv(struct _glapi_table *disp) {
   return (_glptr_Color4usv) (GET_by_offset(disp, _gloffset_Color4usv));
}

static INLINE void SET_Color4usv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLushort *)) {
   SET_by_offset(disp, _gloffset_Color4usv, fn);
}

typedef void (GLAPIENTRYP _glptr_EdgeFlag)(GLboolean);
#define CALL_EdgeFlag(disp, parameters) \
    (* GET_EdgeFlag(disp)) parameters
static INLINE _glptr_EdgeFlag GET_EdgeFlag(struct _glapi_table *disp) {
   return (_glptr_EdgeFlag) (GET_by_offset(disp, _gloffset_EdgeFlag));
}

static INLINE void SET_EdgeFlag(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLboolean)) {
   SET_by_offset(disp, _gloffset_EdgeFlag, fn);
}

typedef void (GLAPIENTRYP _glptr_EdgeFlagv)(const GLboolean *);
#define CALL_EdgeFlagv(disp, parameters) \
    (* GET_EdgeFlagv(disp)) parameters
static INLINE _glptr_EdgeFlagv GET_EdgeFlagv(struct _glapi_table *disp) {
   return (_glptr_EdgeFlagv) (GET_by_offset(disp, _gloffset_EdgeFlagv));
}

static INLINE void SET_EdgeFlagv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLboolean *)) {
   SET_by_offset(disp, _gloffset_EdgeFlagv, fn);
}

typedef void (GLAPIENTRYP _glptr_End)(void);
#define CALL_End(disp, parameters) \
    (* GET_End(disp)) parameters
static INLINE _glptr_End GET_End(struct _glapi_table *disp) {
   return (_glptr_End) (GET_by_offset(disp, _gloffset_End));
}

static INLINE void SET_End(struct _glapi_table *disp, void (GLAPIENTRYP fn)(void)) {
   SET_by_offset(disp, _gloffset_End, fn);
}

typedef void (GLAPIENTRYP _glptr_Indexd)(GLdouble);
#define CALL_Indexd(disp, parameters) \
    (* GET_Indexd(disp)) parameters
static INLINE _glptr_Indexd GET_Indexd(struct _glapi_table *disp) {
   return (_glptr_Indexd) (GET_by_offset(disp, _gloffset_Indexd));
}

static INLINE void SET_Indexd(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLdouble)) {
   SET_by_offset(disp, _gloffset_Indexd, fn);
}

typedef void (GLAPIENTRYP _glptr_Indexdv)(const GLdouble *);
#define CALL_Indexdv(disp, parameters) \
    (* GET_Indexdv(disp)) parameters
static INLINE _glptr_Indexdv GET_Indexdv(struct _glapi_table *disp) {
   return (_glptr_Indexdv) (GET_by_offset(disp, _gloffset_Indexdv));
}

static INLINE void SET_Indexdv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLdouble *)) {
   SET_by_offset(disp, _gloffset_Indexdv, fn);
}

typedef void (GLAPIENTRYP _glptr_Indexf)(GLfloat);
#define CALL_Indexf(disp, parameters) \
    (* GET_Indexf(disp)) parameters
static INLINE _glptr_Indexf GET_Indexf(struct _glapi_table *disp) {
   return (_glptr_Indexf) (GET_by_offset(disp, _gloffset_Indexf));
}

static INLINE void SET_Indexf(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLfloat)) {
   SET_by_offset(disp, _gloffset_Indexf, fn);
}

typedef void (GLAPIENTRYP _glptr_Indexfv)(const GLfloat *);
#define CALL_Indexfv(disp, parameters) \
    (* GET_Indexfv(disp)) parameters
static INLINE _glptr_Indexfv GET_Indexfv(struct _glapi_table *disp) {
   return (_glptr_Indexfv) (GET_by_offset(disp, _gloffset_Indexfv));
}

static INLINE void SET_Indexfv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLfloat *)) {
   SET_by_offset(disp, _gloffset_Indexfv, fn);
}

typedef void (GLAPIENTRYP _glptr_Indexi)(GLint);
#define CALL_Indexi(disp, parameters) \
    (* GET_Indexi(disp)) parameters
static INLINE _glptr_Indexi GET_Indexi(struct _glapi_table *disp) {
   return (_glptr_Indexi) (GET_by_offset(disp, _gloffset_Indexi));
}

static INLINE void SET_Indexi(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint)) {
   SET_by_offset(disp, _gloffset_Indexi, fn);
}

typedef void (GLAPIENTRYP _glptr_Indexiv)(const GLint *);
#define CALL_Indexiv(disp, parameters) \
    (* GET_Indexiv(disp)) parameters
static INLINE _glptr_Indexiv GET_Indexiv(struct _glapi_table *disp) {
   return (_glptr_Indexiv) (GET_by_offset(disp, _gloffset_Indexiv));
}

static INLINE void SET_Indexiv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLint *)) {
   SET_by_offset(disp, _gloffset_Indexiv, fn);
}

typedef void (GLAPIENTRYP _glptr_Indexs)(GLshort);
#define CALL_Indexs(disp, parameters) \
    (* GET_Indexs(disp)) parameters
static INLINE _glptr_Indexs GET_Indexs(struct _glapi_table *disp) {
   return (_glptr_Indexs) (GET_by_offset(disp, _gloffset_Indexs));
}

static INLINE void SET_Indexs(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLshort)) {
   SET_by_offset(disp, _gloffset_Indexs, fn);
}

typedef void (GLAPIENTRYP _glptr_Indexsv)(const GLshort *);
#define CALL_Indexsv(disp, parameters) \
    (* GET_Indexsv(disp)) parameters
static INLINE _glptr_Indexsv GET_Indexsv(struct _glapi_table *disp) {
   return (_glptr_Indexsv) (GET_by_offset(disp, _gloffset_Indexsv));
}

static INLINE void SET_Indexsv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLshort *)) {
   SET_by_offset(disp, _gloffset_Indexsv, fn);
}

typedef void (GLAPIENTRYP _glptr_Normal3b)(GLbyte, GLbyte, GLbyte);
#define CALL_Normal3b(disp, parameters) \
    (* GET_Normal3b(disp)) parameters
static INLINE _glptr_Normal3b GET_Normal3b(struct _glapi_table *disp) {
   return (_glptr_Normal3b) (GET_by_offset(disp, _gloffset_Normal3b));
}

static INLINE void SET_Normal3b(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLbyte, GLbyte, GLbyte)) {
   SET_by_offset(disp, _gloffset_Normal3b, fn);
}

typedef void (GLAPIENTRYP _glptr_Normal3bv)(const GLbyte *);
#define CALL_Normal3bv(disp, parameters) \
    (* GET_Normal3bv(disp)) parameters
static INLINE _glptr_Normal3bv GET_Normal3bv(struct _glapi_table *disp) {
   return (_glptr_Normal3bv) (GET_by_offset(disp, _gloffset_Normal3bv));
}

static INLINE void SET_Normal3bv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLbyte *)) {
   SET_by_offset(disp, _gloffset_Normal3bv, fn);
}

typedef void (GLAPIENTRYP _glptr_Normal3d)(GLdouble, GLdouble, GLdouble);
#define CALL_Normal3d(disp, parameters) \
    (* GET_Normal3d(disp)) parameters
static INLINE _glptr_Normal3d GET_Normal3d(struct _glapi_table *disp) {
   return (_glptr_Normal3d) (GET_by_offset(disp, _gloffset_Normal3d));
}

static INLINE void SET_Normal3d(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLdouble, GLdouble, GLdouble)) {
   SET_by_offset(disp, _gloffset_Normal3d, fn);
}

typedef void (GLAPIENTRYP _glptr_Normal3dv)(const GLdouble *);
#define CALL_Normal3dv(disp, parameters) \
    (* GET_Normal3dv(disp)) parameters
static INLINE _glptr_Normal3dv GET_Normal3dv(struct _glapi_table *disp) {
   return (_glptr_Normal3dv) (GET_by_offset(disp, _gloffset_Normal3dv));
}

static INLINE void SET_Normal3dv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLdouble *)) {
   SET_by_offset(disp, _gloffset_Normal3dv, fn);
}

typedef void (GLAPIENTRYP _glptr_Normal3f)(GLfloat, GLfloat, GLfloat);
#define CALL_Normal3f(disp, parameters) \
    (* GET_Normal3f(disp)) parameters
static INLINE _glptr_Normal3f GET_Normal3f(struct _glapi_table *disp) {
   return (_glptr_Normal3f) (GET_by_offset(disp, _gloffset_Normal3f));
}

static INLINE void SET_Normal3f(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat)) {
   SET_by_offset(disp, _gloffset_Normal3f, fn);
}

typedef void (GLAPIENTRYP _glptr_Normal3fv)(const GLfloat *);
#define CALL_Normal3fv(disp, parameters) \
    (* GET_Normal3fv(disp)) parameters
static INLINE _glptr_Normal3fv GET_Normal3fv(struct _glapi_table *disp) {
   return (_glptr_Normal3fv) (GET_by_offset(disp, _gloffset_Normal3fv));
}

static INLINE void SET_Normal3fv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLfloat *)) {
   SET_by_offset(disp, _gloffset_Normal3fv, fn);
}

typedef void (GLAPIENTRYP _glptr_Normal3i)(GLint, GLint, GLint);
#define CALL_Normal3i(disp, parameters) \
    (* GET_Normal3i(disp)) parameters
static INLINE _glptr_Normal3i GET_Normal3i(struct _glapi_table *disp) {
   return (_glptr_Normal3i) (GET_by_offset(disp, _gloffset_Normal3i));
}

static INLINE void SET_Normal3i(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLint, GLint)) {
   SET_by_offset(disp, _gloffset_Normal3i, fn);
}

typedef void (GLAPIENTRYP _glptr_Normal3iv)(const GLint *);
#define CALL_Normal3iv(disp, parameters) \
    (* GET_Normal3iv(disp)) parameters
static INLINE _glptr_Normal3iv GET_Normal3iv(struct _glapi_table *disp) {
   return (_glptr_Normal3iv) (GET_by_offset(disp, _gloffset_Normal3iv));
}

static INLINE void SET_Normal3iv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLint *)) {
   SET_by_offset(disp, _gloffset_Normal3iv, fn);
}

typedef void (GLAPIENTRYP _glptr_Normal3s)(GLshort, GLshort, GLshort);
#define CALL_Normal3s(disp, parameters) \
    (* GET_Normal3s(disp)) parameters
static INLINE _glptr_Normal3s GET_Normal3s(struct _glapi_table *disp) {
   return (_glptr_Normal3s) (GET_by_offset(disp, _gloffset_Normal3s));
}

static INLINE void SET_Normal3s(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLshort, GLshort, GLshort)) {
   SET_by_offset(disp, _gloffset_Normal3s, fn);
}

typedef void (GLAPIENTRYP _glptr_Normal3sv)(const GLshort *);
#define CALL_Normal3sv(disp, parameters) \
    (* GET_Normal3sv(disp)) parameters
static INLINE _glptr_Normal3sv GET_Normal3sv(struct _glapi_table *disp) {
   return (_glptr_Normal3sv) (GET_by_offset(disp, _gloffset_Normal3sv));
}

static INLINE void SET_Normal3sv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLshort *)) {
   SET_by_offset(disp, _gloffset_Normal3sv, fn);
}

typedef void (GLAPIENTRYP _glptr_RasterPos2d)(GLdouble, GLdouble);
#define CALL_RasterPos2d(disp, parameters) \
    (* GET_RasterPos2d(disp)) parameters
static INLINE _glptr_RasterPos2d GET_RasterPos2d(struct _glapi_table *disp) {
   return (_glptr_RasterPos2d) (GET_by_offset(disp, _gloffset_RasterPos2d));
}

static INLINE void SET_RasterPos2d(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLdouble, GLdouble)) {
   SET_by_offset(disp, _gloffset_RasterPos2d, fn);
}

typedef void (GLAPIENTRYP _glptr_RasterPos2dv)(const GLdouble *);
#define CALL_RasterPos2dv(disp, parameters) \
    (* GET_RasterPos2dv(disp)) parameters
static INLINE _glptr_RasterPos2dv GET_RasterPos2dv(struct _glapi_table *disp) {
   return (_glptr_RasterPos2dv) (GET_by_offset(disp, _gloffset_RasterPos2dv));
}

static INLINE void SET_RasterPos2dv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLdouble *)) {
   SET_by_offset(disp, _gloffset_RasterPos2dv, fn);
}

typedef void (GLAPIENTRYP _glptr_RasterPos2f)(GLfloat, GLfloat);
#define CALL_RasterPos2f(disp, parameters) \
    (* GET_RasterPos2f(disp)) parameters
static INLINE _glptr_RasterPos2f GET_RasterPos2f(struct _glapi_table *disp) {
   return (_glptr_RasterPos2f) (GET_by_offset(disp, _gloffset_RasterPos2f));
}

static INLINE void SET_RasterPos2f(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLfloat, GLfloat)) {
   SET_by_offset(disp, _gloffset_RasterPos2f, fn);
}

typedef void (GLAPIENTRYP _glptr_RasterPos2fv)(const GLfloat *);
#define CALL_RasterPos2fv(disp, parameters) \
    (* GET_RasterPos2fv(disp)) parameters
static INLINE _glptr_RasterPos2fv GET_RasterPos2fv(struct _glapi_table *disp) {
   return (_glptr_RasterPos2fv) (GET_by_offset(disp, _gloffset_RasterPos2fv));
}

static INLINE void SET_RasterPos2fv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLfloat *)) {
   SET_by_offset(disp, _gloffset_RasterPos2fv, fn);
}

typedef void (GLAPIENTRYP _glptr_RasterPos2i)(GLint, GLint);
#define CALL_RasterPos2i(disp, parameters) \
    (* GET_RasterPos2i(disp)) parameters
static INLINE _glptr_RasterPos2i GET_RasterPos2i(struct _glapi_table *disp) {
   return (_glptr_RasterPos2i) (GET_by_offset(disp, _gloffset_RasterPos2i));
}

static INLINE void SET_RasterPos2i(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLint)) {
   SET_by_offset(disp, _gloffset_RasterPos2i, fn);
}

typedef void (GLAPIENTRYP _glptr_RasterPos2iv)(const GLint *);
#define CALL_RasterPos2iv(disp, parameters) \
    (* GET_RasterPos2iv(disp)) parameters
static INLINE _glptr_RasterPos2iv GET_RasterPos2iv(struct _glapi_table *disp) {
   return (_glptr_RasterPos2iv) (GET_by_offset(disp, _gloffset_RasterPos2iv));
}

static INLINE void SET_RasterPos2iv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLint *)) {
   SET_by_offset(disp, _gloffset_RasterPos2iv, fn);
}

typedef void (GLAPIENTRYP _glptr_RasterPos2s)(GLshort, GLshort);
#define CALL_RasterPos2s(disp, parameters) \
    (* GET_RasterPos2s(disp)) parameters
static INLINE _glptr_RasterPos2s GET_RasterPos2s(struct _glapi_table *disp) {
   return (_glptr_RasterPos2s) (GET_by_offset(disp, _gloffset_RasterPos2s));
}

static INLINE void SET_RasterPos2s(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLshort, GLshort)) {
   SET_by_offset(disp, _gloffset_RasterPos2s, fn);
}

typedef void (GLAPIENTRYP _glptr_RasterPos2sv)(const GLshort *);
#define CALL_RasterPos2sv(disp, parameters) \
    (* GET_RasterPos2sv(disp)) parameters
static INLINE _glptr_RasterPos2sv GET_RasterPos2sv(struct _glapi_table *disp) {
   return (_glptr_RasterPos2sv) (GET_by_offset(disp, _gloffset_RasterPos2sv));
}

static INLINE void SET_RasterPos2sv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLshort *)) {
   SET_by_offset(disp, _gloffset_RasterPos2sv, fn);
}

typedef void (GLAPIENTRYP _glptr_RasterPos3d)(GLdouble, GLdouble, GLdouble);
#define CALL_RasterPos3d(disp, parameters) \
    (* GET_RasterPos3d(disp)) parameters
static INLINE _glptr_RasterPos3d GET_RasterPos3d(struct _glapi_table *disp) {
   return (_glptr_RasterPos3d) (GET_by_offset(disp, _gloffset_RasterPos3d));
}

static INLINE void SET_RasterPos3d(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLdouble, GLdouble, GLdouble)) {
   SET_by_offset(disp, _gloffset_RasterPos3d, fn);
}

typedef void (GLAPIENTRYP _glptr_RasterPos3dv)(const GLdouble *);
#define CALL_RasterPos3dv(disp, parameters) \
    (* GET_RasterPos3dv(disp)) parameters
static INLINE _glptr_RasterPos3dv GET_RasterPos3dv(struct _glapi_table *disp) {
   return (_glptr_RasterPos3dv) (GET_by_offset(disp, _gloffset_RasterPos3dv));
}

static INLINE void SET_RasterPos3dv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLdouble *)) {
   SET_by_offset(disp, _gloffset_RasterPos3dv, fn);
}

typedef void (GLAPIENTRYP _glptr_RasterPos3f)(GLfloat, GLfloat, GLfloat);
#define CALL_RasterPos3f(disp, parameters) \
    (* GET_RasterPos3f(disp)) parameters
static INLINE _glptr_RasterPos3f GET_RasterPos3f(struct _glapi_table *disp) {
   return (_glptr_RasterPos3f) (GET_by_offset(disp, _gloffset_RasterPos3f));
}

static INLINE void SET_RasterPos3f(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat)) {
   SET_by_offset(disp, _gloffset_RasterPos3f, fn);
}

typedef void (GLAPIENTRYP _glptr_RasterPos3fv)(const GLfloat *);
#define CALL_RasterPos3fv(disp, parameters) \
    (* GET_RasterPos3fv(disp)) parameters
static INLINE _glptr_RasterPos3fv GET_RasterPos3fv(struct _glapi_table *disp) {
   return (_glptr_RasterPos3fv) (GET_by_offset(disp, _gloffset_RasterPos3fv));
}

static INLINE void SET_RasterPos3fv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLfloat *)) {
   SET_by_offset(disp, _gloffset_RasterPos3fv, fn);
}

typedef void (GLAPIENTRYP _glptr_RasterPos3i)(GLint, GLint, GLint);
#define CALL_RasterPos3i(disp, parameters) \
    (* GET_RasterPos3i(disp)) parameters
static INLINE _glptr_RasterPos3i GET_RasterPos3i(struct _glapi_table *disp) {
   return (_glptr_RasterPos3i) (GET_by_offset(disp, _gloffset_RasterPos3i));
}

static INLINE void SET_RasterPos3i(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLint, GLint)) {
   SET_by_offset(disp, _gloffset_RasterPos3i, fn);
}

typedef void (GLAPIENTRYP _glptr_RasterPos3iv)(const GLint *);
#define CALL_RasterPos3iv(disp, parameters) \
    (* GET_RasterPos3iv(disp)) parameters
static INLINE _glptr_RasterPos3iv GET_RasterPos3iv(struct _glapi_table *disp) {
   return (_glptr_RasterPos3iv) (GET_by_offset(disp, _gloffset_RasterPos3iv));
}

static INLINE void SET_RasterPos3iv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLint *)) {
   SET_by_offset(disp, _gloffset_RasterPos3iv, fn);
}

typedef void (GLAPIENTRYP _glptr_RasterPos3s)(GLshort, GLshort, GLshort);
#define CALL_RasterPos3s(disp, parameters) \
    (* GET_RasterPos3s(disp)) parameters
static INLINE _glptr_RasterPos3s GET_RasterPos3s(struct _glapi_table *disp) {
   return (_glptr_RasterPos3s) (GET_by_offset(disp, _gloffset_RasterPos3s));
}

static INLINE void SET_RasterPos3s(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLshort, GLshort, GLshort)) {
   SET_by_offset(disp, _gloffset_RasterPos3s, fn);
}

typedef void (GLAPIENTRYP _glptr_RasterPos3sv)(const GLshort *);
#define CALL_RasterPos3sv(disp, parameters) \
    (* GET_RasterPos3sv(disp)) parameters
static INLINE _glptr_RasterPos3sv GET_RasterPos3sv(struct _glapi_table *disp) {
   return (_glptr_RasterPos3sv) (GET_by_offset(disp, _gloffset_RasterPos3sv));
}

static INLINE void SET_RasterPos3sv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLshort *)) {
   SET_by_offset(disp, _gloffset_RasterPos3sv, fn);
}

typedef void (GLAPIENTRYP _glptr_RasterPos4d)(GLdouble, GLdouble, GLdouble, GLdouble);
#define CALL_RasterPos4d(disp, parameters) \
    (* GET_RasterPos4d(disp)) parameters
static INLINE _glptr_RasterPos4d GET_RasterPos4d(struct _glapi_table *disp) {
   return (_glptr_RasterPos4d) (GET_by_offset(disp, _gloffset_RasterPos4d));
}

static INLINE void SET_RasterPos4d(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLdouble, GLdouble, GLdouble, GLdouble)) {
   SET_by_offset(disp, _gloffset_RasterPos4d, fn);
}

typedef void (GLAPIENTRYP _glptr_RasterPos4dv)(const GLdouble *);
#define CALL_RasterPos4dv(disp, parameters) \
    (* GET_RasterPos4dv(disp)) parameters
static INLINE _glptr_RasterPos4dv GET_RasterPos4dv(struct _glapi_table *disp) {
   return (_glptr_RasterPos4dv) (GET_by_offset(disp, _gloffset_RasterPos4dv));
}

static INLINE void SET_RasterPos4dv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLdouble *)) {
   SET_by_offset(disp, _gloffset_RasterPos4dv, fn);
}

typedef void (GLAPIENTRYP _glptr_RasterPos4f)(GLfloat, GLfloat, GLfloat, GLfloat);
#define CALL_RasterPos4f(disp, parameters) \
    (* GET_RasterPos4f(disp)) parameters
static INLINE _glptr_RasterPos4f GET_RasterPos4f(struct _glapi_table *disp) {
   return (_glptr_RasterPos4f) (GET_by_offset(disp, _gloffset_RasterPos4f));
}

static INLINE void SET_RasterPos4f(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat, GLfloat)) {
   SET_by_offset(disp, _gloffset_RasterPos4f, fn);
}

typedef void (GLAPIENTRYP _glptr_RasterPos4fv)(const GLfloat *);
#define CALL_RasterPos4fv(disp, parameters) \
    (* GET_RasterPos4fv(disp)) parameters
static INLINE _glptr_RasterPos4fv GET_RasterPos4fv(struct _glapi_table *disp) {
   return (_glptr_RasterPos4fv) (GET_by_offset(disp, _gloffset_RasterPos4fv));
}

static INLINE void SET_RasterPos4fv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLfloat *)) {
   SET_by_offset(disp, _gloffset_RasterPos4fv, fn);
}

typedef void (GLAPIENTRYP _glptr_RasterPos4i)(GLint, GLint, GLint, GLint);
#define CALL_RasterPos4i(disp, parameters) \
    (* GET_RasterPos4i(disp)) parameters
static INLINE _glptr_RasterPos4i GET_RasterPos4i(struct _glapi_table *disp) {
   return (_glptr_RasterPos4i) (GET_by_offset(disp, _gloffset_RasterPos4i));
}

static INLINE void SET_RasterPos4i(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLint, GLint, GLint)) {
   SET_by_offset(disp, _gloffset_RasterPos4i, fn);
}

typedef void (GLAPIENTRYP _glptr_RasterPos4iv)(const GLint *);
#define CALL_RasterPos4iv(disp, parameters) \
    (* GET_RasterPos4iv(disp)) parameters
static INLINE _glptr_RasterPos4iv GET_RasterPos4iv(struct _glapi_table *disp) {
   return (_glptr_RasterPos4iv) (GET_by_offset(disp, _gloffset_RasterPos4iv));
}

static INLINE void SET_RasterPos4iv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLint *)) {
   SET_by_offset(disp, _gloffset_RasterPos4iv, fn);
}

typedef void (GLAPIENTRYP _glptr_RasterPos4s)(GLshort, GLshort, GLshort, GLshort);
#define CALL_RasterPos4s(disp, parameters) \
    (* GET_RasterPos4s(disp)) parameters
static INLINE _glptr_RasterPos4s GET_RasterPos4s(struct _glapi_table *disp) {
   return (_glptr_RasterPos4s) (GET_by_offset(disp, _gloffset_RasterPos4s));
}

static INLINE void SET_RasterPos4s(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLshort, GLshort, GLshort, GLshort)) {
   SET_by_offset(disp, _gloffset_RasterPos4s, fn);
}

typedef void (GLAPIENTRYP _glptr_RasterPos4sv)(const GLshort *);
#define CALL_RasterPos4sv(disp, parameters) \
    (* GET_RasterPos4sv(disp)) parameters
static INLINE _glptr_RasterPos4sv GET_RasterPos4sv(struct _glapi_table *disp) {
   return (_glptr_RasterPos4sv) (GET_by_offset(disp, _gloffset_RasterPos4sv));
}

static INLINE void SET_RasterPos4sv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLshort *)) {
   SET_by_offset(disp, _gloffset_RasterPos4sv, fn);
}

typedef void (GLAPIENTRYP _glptr_Rectd)(GLdouble, GLdouble, GLdouble, GLdouble);
#define CALL_Rectd(disp, parameters) \
    (* GET_Rectd(disp)) parameters
static INLINE _glptr_Rectd GET_Rectd(struct _glapi_table *disp) {
   return (_glptr_Rectd) (GET_by_offset(disp, _gloffset_Rectd));
}

static INLINE void SET_Rectd(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLdouble, GLdouble, GLdouble, GLdouble)) {
   SET_by_offset(disp, _gloffset_Rectd, fn);
}

typedef void (GLAPIENTRYP _glptr_Rectdv)(const GLdouble *, const GLdouble *);
#define CALL_Rectdv(disp, parameters) \
    (* GET_Rectdv(disp)) parameters
static INLINE _glptr_Rectdv GET_Rectdv(struct _glapi_table *disp) {
   return (_glptr_Rectdv) (GET_by_offset(disp, _gloffset_Rectdv));
}

static INLINE void SET_Rectdv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLdouble *, const GLdouble *)) {
   SET_by_offset(disp, _gloffset_Rectdv, fn);
}

typedef void (GLAPIENTRYP _glptr_Rectf)(GLfloat, GLfloat, GLfloat, GLfloat);
#define CALL_Rectf(disp, parameters) \
    (* GET_Rectf(disp)) parameters
static INLINE _glptr_Rectf GET_Rectf(struct _glapi_table *disp) {
   return (_glptr_Rectf) (GET_by_offset(disp, _gloffset_Rectf));
}

static INLINE void SET_Rectf(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat, GLfloat)) {
   SET_by_offset(disp, _gloffset_Rectf, fn);
}

typedef void (GLAPIENTRYP _glptr_Rectfv)(const GLfloat *, const GLfloat *);
#define CALL_Rectfv(disp, parameters) \
    (* GET_Rectfv(disp)) parameters
static INLINE _glptr_Rectfv GET_Rectfv(struct _glapi_table *disp) {
   return (_glptr_Rectfv) (GET_by_offset(disp, _gloffset_Rectfv));
}

static INLINE void SET_Rectfv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLfloat *, const GLfloat *)) {
   SET_by_offset(disp, _gloffset_Rectfv, fn);
}

typedef void (GLAPIENTRYP _glptr_Recti)(GLint, GLint, GLint, GLint);
#define CALL_Recti(disp, parameters) \
    (* GET_Recti(disp)) parameters
static INLINE _glptr_Recti GET_Recti(struct _glapi_table *disp) {
   return (_glptr_Recti) (GET_by_offset(disp, _gloffset_Recti));
}

static INLINE void SET_Recti(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLint, GLint, GLint)) {
   SET_by_offset(disp, _gloffset_Recti, fn);
}

typedef void (GLAPIENTRYP _glptr_Rectiv)(const GLint *, const GLint *);
#define CALL_Rectiv(disp, parameters) \
    (* GET_Rectiv(disp)) parameters
static INLINE _glptr_Rectiv GET_Rectiv(struct _glapi_table *disp) {
   return (_glptr_Rectiv) (GET_by_offset(disp, _gloffset_Rectiv));
}

static INLINE void SET_Rectiv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLint *, const GLint *)) {
   SET_by_offset(disp, _gloffset_Rectiv, fn);
}

typedef void (GLAPIENTRYP _glptr_Rects)(GLshort, GLshort, GLshort, GLshort);
#define CALL_Rects(disp, parameters) \
    (* GET_Rects(disp)) parameters
static INLINE _glptr_Rects GET_Rects(struct _glapi_table *disp) {
   return (_glptr_Rects) (GET_by_offset(disp, _gloffset_Rects));
}

static INLINE void SET_Rects(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLshort, GLshort, GLshort, GLshort)) {
   SET_by_offset(disp, _gloffset_Rects, fn);
}

typedef void (GLAPIENTRYP _glptr_Rectsv)(const GLshort *, const GLshort *);
#define CALL_Rectsv(disp, parameters) \
    (* GET_Rectsv(disp)) parameters
static INLINE _glptr_Rectsv GET_Rectsv(struct _glapi_table *disp) {
   return (_glptr_Rectsv) (GET_by_offset(disp, _gloffset_Rectsv));
}

static INLINE void SET_Rectsv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLshort *, const GLshort *)) {
   SET_by_offset(disp, _gloffset_Rectsv, fn);
}

typedef void (GLAPIENTRYP _glptr_TexCoord1d)(GLdouble);
#define CALL_TexCoord1d(disp, parameters) \
    (* GET_TexCoord1d(disp)) parameters
static INLINE _glptr_TexCoord1d GET_TexCoord1d(struct _glapi_table *disp) {
   return (_glptr_TexCoord1d) (GET_by_offset(disp, _gloffset_TexCoord1d));
}

static INLINE void SET_TexCoord1d(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLdouble)) {
   SET_by_offset(disp, _gloffset_TexCoord1d, fn);
}

typedef void (GLAPIENTRYP _glptr_TexCoord1dv)(const GLdouble *);
#define CALL_TexCoord1dv(disp, parameters) \
    (* GET_TexCoord1dv(disp)) parameters
static INLINE _glptr_TexCoord1dv GET_TexCoord1dv(struct _glapi_table *disp) {
   return (_glptr_TexCoord1dv) (GET_by_offset(disp, _gloffset_TexCoord1dv));
}

static INLINE void SET_TexCoord1dv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLdouble *)) {
   SET_by_offset(disp, _gloffset_TexCoord1dv, fn);
}

typedef void (GLAPIENTRYP _glptr_TexCoord1f)(GLfloat);
#define CALL_TexCoord1f(disp, parameters) \
    (* GET_TexCoord1f(disp)) parameters
static INLINE _glptr_TexCoord1f GET_TexCoord1f(struct _glapi_table *disp) {
   return (_glptr_TexCoord1f) (GET_by_offset(disp, _gloffset_TexCoord1f));
}

static INLINE void SET_TexCoord1f(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLfloat)) {
   SET_by_offset(disp, _gloffset_TexCoord1f, fn);
}

typedef void (GLAPIENTRYP _glptr_TexCoord1fv)(const GLfloat *);
#define CALL_TexCoord1fv(disp, parameters) \
    (* GET_TexCoord1fv(disp)) parameters
static INLINE _glptr_TexCoord1fv GET_TexCoord1fv(struct _glapi_table *disp) {
   return (_glptr_TexCoord1fv) (GET_by_offset(disp, _gloffset_TexCoord1fv));
}

static INLINE void SET_TexCoord1fv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLfloat *)) {
   SET_by_offset(disp, _gloffset_TexCoord1fv, fn);
}

typedef void (GLAPIENTRYP _glptr_TexCoord1i)(GLint);
#define CALL_TexCoord1i(disp, parameters) \
    (* GET_TexCoord1i(disp)) parameters
static INLINE _glptr_TexCoord1i GET_TexCoord1i(struct _glapi_table *disp) {
   return (_glptr_TexCoord1i) (GET_by_offset(disp, _gloffset_TexCoord1i));
}

static INLINE void SET_TexCoord1i(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint)) {
   SET_by_offset(disp, _gloffset_TexCoord1i, fn);
}

typedef void (GLAPIENTRYP _glptr_TexCoord1iv)(const GLint *);
#define CALL_TexCoord1iv(disp, parameters) \
    (* GET_TexCoord1iv(disp)) parameters
static INLINE _glptr_TexCoord1iv GET_TexCoord1iv(struct _glapi_table *disp) {
   return (_glptr_TexCoord1iv) (GET_by_offset(disp, _gloffset_TexCoord1iv));
}

static INLINE void SET_TexCoord1iv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLint *)) {
   SET_by_offset(disp, _gloffset_TexCoord1iv, fn);
}

typedef void (GLAPIENTRYP _glptr_TexCoord1s)(GLshort);
#define CALL_TexCoord1s(disp, parameters) \
    (* GET_TexCoord1s(disp)) parameters
static INLINE _glptr_TexCoord1s GET_TexCoord1s(struct _glapi_table *disp) {
   return (_glptr_TexCoord1s) (GET_by_offset(disp, _gloffset_TexCoord1s));
}

static INLINE void SET_TexCoord1s(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLshort)) {
   SET_by_offset(disp, _gloffset_TexCoord1s, fn);
}

typedef void (GLAPIENTRYP _glptr_TexCoord1sv)(const GLshort *);
#define CALL_TexCoord1sv(disp, parameters) \
    (* GET_TexCoord1sv(disp)) parameters
static INLINE _glptr_TexCoord1sv GET_TexCoord1sv(struct _glapi_table *disp) {
   return (_glptr_TexCoord1sv) (GET_by_offset(disp, _gloffset_TexCoord1sv));
}

static INLINE void SET_TexCoord1sv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLshort *)) {
   SET_by_offset(disp, _gloffset_TexCoord1sv, fn);
}

typedef void (GLAPIENTRYP _glptr_TexCoord2d)(GLdouble, GLdouble);
#define CALL_TexCoord2d(disp, parameters) \
    (* GET_TexCoord2d(disp)) parameters
static INLINE _glptr_TexCoord2d GET_TexCoord2d(struct _glapi_table *disp) {
   return (_glptr_TexCoord2d) (GET_by_offset(disp, _gloffset_TexCoord2d));
}

static INLINE void SET_TexCoord2d(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLdouble, GLdouble)) {
   SET_by_offset(disp, _gloffset_TexCoord2d, fn);
}

typedef void (GLAPIENTRYP _glptr_TexCoord2dv)(const GLdouble *);
#define CALL_TexCoord2dv(disp, parameters) \
    (* GET_TexCoord2dv(disp)) parameters
static INLINE _glptr_TexCoord2dv GET_TexCoord2dv(struct _glapi_table *disp) {
   return (_glptr_TexCoord2dv) (GET_by_offset(disp, _gloffset_TexCoord2dv));
}

static INLINE void SET_TexCoord2dv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLdouble *)) {
   SET_by_offset(disp, _gloffset_TexCoord2dv, fn);
}

typedef void (GLAPIENTRYP _glptr_TexCoord2f)(GLfloat, GLfloat);
#define CALL_TexCoord2f(disp, parameters) \
    (* GET_TexCoord2f(disp)) parameters
static INLINE _glptr_TexCoord2f GET_TexCoord2f(struct _glapi_table *disp) {
   return (_glptr_TexCoord2f) (GET_by_offset(disp, _gloffset_TexCoord2f));
}

static INLINE void SET_TexCoord2f(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLfloat, GLfloat)) {
   SET_by_offset(disp, _gloffset_TexCoord2f, fn);
}

typedef void (GLAPIENTRYP _glptr_TexCoord2fv)(const GLfloat *);
#define CALL_TexCoord2fv(disp, parameters) \
    (* GET_TexCoord2fv(disp)) parameters
static INLINE _glptr_TexCoord2fv GET_TexCoord2fv(struct _glapi_table *disp) {
   return (_glptr_TexCoord2fv) (GET_by_offset(disp, _gloffset_TexCoord2fv));
}

static INLINE void SET_TexCoord2fv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLfloat *)) {
   SET_by_offset(disp, _gloffset_TexCoord2fv, fn);
}

typedef void (GLAPIENTRYP _glptr_TexCoord2i)(GLint, GLint);
#define CALL_TexCoord2i(disp, parameters) \
    (* GET_TexCoord2i(disp)) parameters
static INLINE _glptr_TexCoord2i GET_TexCoord2i(struct _glapi_table *disp) {
   return (_glptr_TexCoord2i) (GET_by_offset(disp, _gloffset_TexCoord2i));
}

static INLINE void SET_TexCoord2i(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLint)) {
   SET_by_offset(disp, _gloffset_TexCoord2i, fn);
}

typedef void (GLAPIENTRYP _glptr_TexCoord2iv)(const GLint *);
#define CALL_TexCoord2iv(disp, parameters) \
    (* GET_TexCoord2iv(disp)) parameters
static INLINE _glptr_TexCoord2iv GET_TexCoord2iv(struct _glapi_table *disp) {
   return (_glptr_TexCoord2iv) (GET_by_offset(disp, _gloffset_TexCoord2iv));
}

static INLINE void SET_TexCoord2iv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLint *)) {
   SET_by_offset(disp, _gloffset_TexCoord2iv, fn);
}

typedef void (GLAPIENTRYP _glptr_TexCoord2s)(GLshort, GLshort);
#define CALL_TexCoord2s(disp, parameters) \
    (* GET_TexCoord2s(disp)) parameters
static INLINE _glptr_TexCoord2s GET_TexCoord2s(struct _glapi_table *disp) {
   return (_glptr_TexCoord2s) (GET_by_offset(disp, _gloffset_TexCoord2s));
}

static INLINE void SET_TexCoord2s(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLshort, GLshort)) {
   SET_by_offset(disp, _gloffset_TexCoord2s, fn);
}

typedef void (GLAPIENTRYP _glptr_TexCoord2sv)(const GLshort *);
#define CALL_TexCoord2sv(disp, parameters) \
    (* GET_TexCoord2sv(disp)) parameters
static INLINE _glptr_TexCoord2sv GET_TexCoord2sv(struct _glapi_table *disp) {
   return (_glptr_TexCoord2sv) (GET_by_offset(disp, _gloffset_TexCoord2sv));
}

static INLINE void SET_TexCoord2sv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLshort *)) {
   SET_by_offset(disp, _gloffset_TexCoord2sv, fn);
}

typedef void (GLAPIENTRYP _glptr_TexCoord3d)(GLdouble, GLdouble, GLdouble);
#define CALL_TexCoord3d(disp, parameters) \
    (* GET_TexCoord3d(disp)) parameters
static INLINE _glptr_TexCoord3d GET_TexCoord3d(struct _glapi_table *disp) {
   return (_glptr_TexCoord3d) (GET_by_offset(disp, _gloffset_TexCoord3d));
}

static INLINE void SET_TexCoord3d(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLdouble, GLdouble, GLdouble)) {
   SET_by_offset(disp, _gloffset_TexCoord3d, fn);
}

typedef void (GLAPIENTRYP _glptr_TexCoord3dv)(const GLdouble *);
#define CALL_TexCoord3dv(disp, parameters) \
    (* GET_TexCoord3dv(disp)) parameters
static INLINE _glptr_TexCoord3dv GET_TexCoord3dv(struct _glapi_table *disp) {
   return (_glptr_TexCoord3dv) (GET_by_offset(disp, _gloffset_TexCoord3dv));
}

static INLINE void SET_TexCoord3dv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLdouble *)) {
   SET_by_offset(disp, _gloffset_TexCoord3dv, fn);
}

typedef void (GLAPIENTRYP _glptr_TexCoord3f)(GLfloat, GLfloat, GLfloat);
#define CALL_TexCoord3f(disp, parameters) \
    (* GET_TexCoord3f(disp)) parameters
static INLINE _glptr_TexCoord3f GET_TexCoord3f(struct _glapi_table *disp) {
   return (_glptr_TexCoord3f) (GET_by_offset(disp, _gloffset_TexCoord3f));
}

static INLINE void SET_TexCoord3f(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat)) {
   SET_by_offset(disp, _gloffset_TexCoord3f, fn);
}

typedef void (GLAPIENTRYP _glptr_TexCoord3fv)(const GLfloat *);
#define CALL_TexCoord3fv(disp, parameters) \
    (* GET_TexCoord3fv(disp)) parameters
static INLINE _glptr_TexCoord3fv GET_TexCoord3fv(struct _glapi_table *disp) {
   return (_glptr_TexCoord3fv) (GET_by_offset(disp, _gloffset_TexCoord3fv));
}

static INLINE void SET_TexCoord3fv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLfloat *)) {
   SET_by_offset(disp, _gloffset_TexCoord3fv, fn);
}

typedef void (GLAPIENTRYP _glptr_TexCoord3i)(GLint, GLint, GLint);
#define CALL_TexCoord3i(disp, parameters) \
    (* GET_TexCoord3i(disp)) parameters
static INLINE _glptr_TexCoord3i GET_TexCoord3i(struct _glapi_table *disp) {
   return (_glptr_TexCoord3i) (GET_by_offset(disp, _gloffset_TexCoord3i));
}

static INLINE void SET_TexCoord3i(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLint, GLint)) {
   SET_by_offset(disp, _gloffset_TexCoord3i, fn);
}

typedef void (GLAPIENTRYP _glptr_TexCoord3iv)(const GLint *);
#define CALL_TexCoord3iv(disp, parameters) \
    (* GET_TexCoord3iv(disp)) parameters
static INLINE _glptr_TexCoord3iv GET_TexCoord3iv(struct _glapi_table *disp) {
   return (_glptr_TexCoord3iv) (GET_by_offset(disp, _gloffset_TexCoord3iv));
}

static INLINE void SET_TexCoord3iv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLint *)) {
   SET_by_offset(disp, _gloffset_TexCoord3iv, fn);
}

typedef void (GLAPIENTRYP _glptr_TexCoord3s)(GLshort, GLshort, GLshort);
#define CALL_TexCoord3s(disp, parameters) \
    (* GET_TexCoord3s(disp)) parameters
static INLINE _glptr_TexCoord3s GET_TexCoord3s(struct _glapi_table *disp) {
   return (_glptr_TexCoord3s) (GET_by_offset(disp, _gloffset_TexCoord3s));
}

static INLINE void SET_TexCoord3s(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLshort, GLshort, GLshort)) {
   SET_by_offset(disp, _gloffset_TexCoord3s, fn);
}

typedef void (GLAPIENTRYP _glptr_TexCoord3sv)(const GLshort *);
#define CALL_TexCoord3sv(disp, parameters) \
    (* GET_TexCoord3sv(disp)) parameters
static INLINE _glptr_TexCoord3sv GET_TexCoord3sv(struct _glapi_table *disp) {
   return (_glptr_TexCoord3sv) (GET_by_offset(disp, _gloffset_TexCoord3sv));
}

static INLINE void SET_TexCoord3sv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLshort *)) {
   SET_by_offset(disp, _gloffset_TexCoord3sv, fn);
}

typedef void (GLAPIENTRYP _glptr_TexCoord4d)(GLdouble, GLdouble, GLdouble, GLdouble);
#define CALL_TexCoord4d(disp, parameters) \
    (* GET_TexCoord4d(disp)) parameters
static INLINE _glptr_TexCoord4d GET_TexCoord4d(struct _glapi_table *disp) {
   return (_glptr_TexCoord4d) (GET_by_offset(disp, _gloffset_TexCoord4d));
}

static INLINE void SET_TexCoord4d(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLdouble, GLdouble, GLdouble, GLdouble)) {
   SET_by_offset(disp, _gloffset_TexCoord4d, fn);
}

typedef void (GLAPIENTRYP _glptr_TexCoord4dv)(const GLdouble *);
#define CALL_TexCoord4dv(disp, parameters) \
    (* GET_TexCoord4dv(disp)) parameters
static INLINE _glptr_TexCoord4dv GET_TexCoord4dv(struct _glapi_table *disp) {
   return (_glptr_TexCoord4dv) (GET_by_offset(disp, _gloffset_TexCoord4dv));
}

static INLINE void SET_TexCoord4dv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLdouble *)) {
   SET_by_offset(disp, _gloffset_TexCoord4dv, fn);
}

typedef void (GLAPIENTRYP _glptr_TexCoord4f)(GLfloat, GLfloat, GLfloat, GLfloat);
#define CALL_TexCoord4f(disp, parameters) \
    (* GET_TexCoord4f(disp)) parameters
static INLINE _glptr_TexCoord4f GET_TexCoord4f(struct _glapi_table *disp) {
   return (_glptr_TexCoord4f) (GET_by_offset(disp, _gloffset_TexCoord4f));
}

static INLINE void SET_TexCoord4f(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat, GLfloat)) {
   SET_by_offset(disp, _gloffset_TexCoord4f, fn);
}

typedef void (GLAPIENTRYP _glptr_TexCoord4fv)(const GLfloat *);
#define CALL_TexCoord4fv(disp, parameters) \
    (* GET_TexCoord4fv(disp)) parameters
static INLINE _glptr_TexCoord4fv GET_TexCoord4fv(struct _glapi_table *disp) {
   return (_glptr_TexCoord4fv) (GET_by_offset(disp, _gloffset_TexCoord4fv));
}

static INLINE void SET_TexCoord4fv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLfloat *)) {
   SET_by_offset(disp, _gloffset_TexCoord4fv, fn);
}

typedef void (GLAPIENTRYP _glptr_TexCoord4i)(GLint, GLint, GLint, GLint);
#define CALL_TexCoord4i(disp, parameters) \
    (* GET_TexCoord4i(disp)) parameters
static INLINE _glptr_TexCoord4i GET_TexCoord4i(struct _glapi_table *disp) {
   return (_glptr_TexCoord4i) (GET_by_offset(disp, _gloffset_TexCoord4i));
}

static INLINE void SET_TexCoord4i(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLint, GLint, GLint)) {
   SET_by_offset(disp, _gloffset_TexCoord4i, fn);
}

typedef void (GLAPIENTRYP _glptr_TexCoord4iv)(const GLint *);
#define CALL_TexCoord4iv(disp, parameters) \
    (* GET_TexCoord4iv(disp)) parameters
static INLINE _glptr_TexCoord4iv GET_TexCoord4iv(struct _glapi_table *disp) {
   return (_glptr_TexCoord4iv) (GET_by_offset(disp, _gloffset_TexCoord4iv));
}

static INLINE void SET_TexCoord4iv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLint *)) {
   SET_by_offset(disp, _gloffset_TexCoord4iv, fn);
}

typedef void (GLAPIENTRYP _glptr_TexCoord4s)(GLshort, GLshort, GLshort, GLshort);
#define CALL_TexCoord4s(disp, parameters) \
    (* GET_TexCoord4s(disp)) parameters
static INLINE _glptr_TexCoord4s GET_TexCoord4s(struct _glapi_table *disp) {
   return (_glptr_TexCoord4s) (GET_by_offset(disp, _gloffset_TexCoord4s));
}

static INLINE void SET_TexCoord4s(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLshort, GLshort, GLshort, GLshort)) {
   SET_by_offset(disp, _gloffset_TexCoord4s, fn);
}

typedef void (GLAPIENTRYP _glptr_TexCoord4sv)(const GLshort *);
#define CALL_TexCoord4sv(disp, parameters) \
    (* GET_TexCoord4sv(disp)) parameters
static INLINE _glptr_TexCoord4sv GET_TexCoord4sv(struct _glapi_table *disp) {
   return (_glptr_TexCoord4sv) (GET_by_offset(disp, _gloffset_TexCoord4sv));
}

static INLINE void SET_TexCoord4sv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLshort *)) {
   SET_by_offset(disp, _gloffset_TexCoord4sv, fn);
}

typedef void (GLAPIENTRYP _glptr_Vertex2d)(GLdouble, GLdouble);
#define CALL_Vertex2d(disp, parameters) \
    (* GET_Vertex2d(disp)) parameters
static INLINE _glptr_Vertex2d GET_Vertex2d(struct _glapi_table *disp) {
   return (_glptr_Vertex2d) (GET_by_offset(disp, _gloffset_Vertex2d));
}

static INLINE void SET_Vertex2d(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLdouble, GLdouble)) {
   SET_by_offset(disp, _gloffset_Vertex2d, fn);
}

typedef void (GLAPIENTRYP _glptr_Vertex2dv)(const GLdouble *);
#define CALL_Vertex2dv(disp, parameters) \
    (* GET_Vertex2dv(disp)) parameters
static INLINE _glptr_Vertex2dv GET_Vertex2dv(struct _glapi_table *disp) {
   return (_glptr_Vertex2dv) (GET_by_offset(disp, _gloffset_Vertex2dv));
}

static INLINE void SET_Vertex2dv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLdouble *)) {
   SET_by_offset(disp, _gloffset_Vertex2dv, fn);
}

typedef void (GLAPIENTRYP _glptr_Vertex2f)(GLfloat, GLfloat);
#define CALL_Vertex2f(disp, parameters) \
    (* GET_Vertex2f(disp)) parameters
static INLINE _glptr_Vertex2f GET_Vertex2f(struct _glapi_table *disp) {
   return (_glptr_Vertex2f) (GET_by_offset(disp, _gloffset_Vertex2f));
}

static INLINE void SET_Vertex2f(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLfloat, GLfloat)) {
   SET_by_offset(disp, _gloffset_Vertex2f, fn);
}

typedef void (GLAPIENTRYP _glptr_Vertex2fv)(const GLfloat *);
#define CALL_Vertex2fv(disp, parameters) \
    (* GET_Vertex2fv(disp)) parameters
static INLINE _glptr_Vertex2fv GET_Vertex2fv(struct _glapi_table *disp) {
   return (_glptr_Vertex2fv) (GET_by_offset(disp, _gloffset_Vertex2fv));
}

static INLINE void SET_Vertex2fv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLfloat *)) {
   SET_by_offset(disp, _gloffset_Vertex2fv, fn);
}

typedef void (GLAPIENTRYP _glptr_Vertex2i)(GLint, GLint);
#define CALL_Vertex2i(disp, parameters) \
    (* GET_Vertex2i(disp)) parameters
static INLINE _glptr_Vertex2i GET_Vertex2i(struct _glapi_table *disp) {
   return (_glptr_Vertex2i) (GET_by_offset(disp, _gloffset_Vertex2i));
}

static INLINE void SET_Vertex2i(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLint)) {
   SET_by_offset(disp, _gloffset_Vertex2i, fn);
}

typedef void (GLAPIENTRYP _glptr_Vertex2iv)(const GLint *);
#define CALL_Vertex2iv(disp, parameters) \
    (* GET_Vertex2iv(disp)) parameters
static INLINE _glptr_Vertex2iv GET_Vertex2iv(struct _glapi_table *disp) {
   return (_glptr_Vertex2iv) (GET_by_offset(disp, _gloffset_Vertex2iv));
}

static INLINE void SET_Vertex2iv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLint *)) {
   SET_by_offset(disp, _gloffset_Vertex2iv, fn);
}

typedef void (GLAPIENTRYP _glptr_Vertex2s)(GLshort, GLshort);
#define CALL_Vertex2s(disp, parameters) \
    (* GET_Vertex2s(disp)) parameters
static INLINE _glptr_Vertex2s GET_Vertex2s(struct _glapi_table *disp) {
   return (_glptr_Vertex2s) (GET_by_offset(disp, _gloffset_Vertex2s));
}

static INLINE void SET_Vertex2s(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLshort, GLshort)) {
   SET_by_offset(disp, _gloffset_Vertex2s, fn);
}

typedef void (GLAPIENTRYP _glptr_Vertex2sv)(const GLshort *);
#define CALL_Vertex2sv(disp, parameters) \
    (* GET_Vertex2sv(disp)) parameters
static INLINE _glptr_Vertex2sv GET_Vertex2sv(struct _glapi_table *disp) {
   return (_glptr_Vertex2sv) (GET_by_offset(disp, _gloffset_Vertex2sv));
}

static INLINE void SET_Vertex2sv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLshort *)) {
   SET_by_offset(disp, _gloffset_Vertex2sv, fn);
}

typedef void (GLAPIENTRYP _glptr_Vertex3d)(GLdouble, GLdouble, GLdouble);
#define CALL_Vertex3d(disp, parameters) \
    (* GET_Vertex3d(disp)) parameters
static INLINE _glptr_Vertex3d GET_Vertex3d(struct _glapi_table *disp) {
   return (_glptr_Vertex3d) (GET_by_offset(disp, _gloffset_Vertex3d));
}

static INLINE void SET_Vertex3d(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLdouble, GLdouble, GLdouble)) {
   SET_by_offset(disp, _gloffset_Vertex3d, fn);
}

typedef void (GLAPIENTRYP _glptr_Vertex3dv)(const GLdouble *);
#define CALL_Vertex3dv(disp, parameters) \
    (* GET_Vertex3dv(disp)) parameters
static INLINE _glptr_Vertex3dv GET_Vertex3dv(struct _glapi_table *disp) {
   return (_glptr_Vertex3dv) (GET_by_offset(disp, _gloffset_Vertex3dv));
}

static INLINE void SET_Vertex3dv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLdouble *)) {
   SET_by_offset(disp, _gloffset_Vertex3dv, fn);
}

typedef void (GLAPIENTRYP _glptr_Vertex3f)(GLfloat, GLfloat, GLfloat);
#define CALL_Vertex3f(disp, parameters) \
    (* GET_Vertex3f(disp)) parameters
static INLINE _glptr_Vertex3f GET_Vertex3f(struct _glapi_table *disp) {
   return (_glptr_Vertex3f) (GET_by_offset(disp, _gloffset_Vertex3f));
}

static INLINE void SET_Vertex3f(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat)) {
   SET_by_offset(disp, _gloffset_Vertex3f, fn);
}

typedef void (GLAPIENTRYP _glptr_Vertex3fv)(const GLfloat *);
#define CALL_Vertex3fv(disp, parameters) \
    (* GET_Vertex3fv(disp)) parameters
static INLINE _glptr_Vertex3fv GET_Vertex3fv(struct _glapi_table *disp) {
   return (_glptr_Vertex3fv) (GET_by_offset(disp, _gloffset_Vertex3fv));
}

static INLINE void SET_Vertex3fv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLfloat *)) {
   SET_by_offset(disp, _gloffset_Vertex3fv, fn);
}

typedef void (GLAPIENTRYP _glptr_Vertex3i)(GLint, GLint, GLint);
#define CALL_Vertex3i(disp, parameters) \
    (* GET_Vertex3i(disp)) parameters
static INLINE _glptr_Vertex3i GET_Vertex3i(struct _glapi_table *disp) {
   return (_glptr_Vertex3i) (GET_by_offset(disp, _gloffset_Vertex3i));
}

static INLINE void SET_Vertex3i(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLint, GLint)) {
   SET_by_offset(disp, _gloffset_Vertex3i, fn);
}

typedef void (GLAPIENTRYP _glptr_Vertex3iv)(const GLint *);
#define CALL_Vertex3iv(disp, parameters) \
    (* GET_Vertex3iv(disp)) parameters
static INLINE _glptr_Vertex3iv GET_Vertex3iv(struct _glapi_table *disp) {
   return (_glptr_Vertex3iv) (GET_by_offset(disp, _gloffset_Vertex3iv));
}

static INLINE void SET_Vertex3iv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLint *)) {
   SET_by_offset(disp, _gloffset_Vertex3iv, fn);
}

typedef void (GLAPIENTRYP _glptr_Vertex3s)(GLshort, GLshort, GLshort);
#define CALL_Vertex3s(disp, parameters) \
    (* GET_Vertex3s(disp)) parameters
static INLINE _glptr_Vertex3s GET_Vertex3s(struct _glapi_table *disp) {
   return (_glptr_Vertex3s) (GET_by_offset(disp, _gloffset_Vertex3s));
}

static INLINE void SET_Vertex3s(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLshort, GLshort, GLshort)) {
   SET_by_offset(disp, _gloffset_Vertex3s, fn);
}

typedef void (GLAPIENTRYP _glptr_Vertex3sv)(const GLshort *);
#define CALL_Vertex3sv(disp, parameters) \
    (* GET_Vertex3sv(disp)) parameters
static INLINE _glptr_Vertex3sv GET_Vertex3sv(struct _glapi_table *disp) {
   return (_glptr_Vertex3sv) (GET_by_offset(disp, _gloffset_Vertex3sv));
}

static INLINE void SET_Vertex3sv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLshort *)) {
   SET_by_offset(disp, _gloffset_Vertex3sv, fn);
}

typedef void (GLAPIENTRYP _glptr_Vertex4d)(GLdouble, GLdouble, GLdouble, GLdouble);
#define CALL_Vertex4d(disp, parameters) \
    (* GET_Vertex4d(disp)) parameters
static INLINE _glptr_Vertex4d GET_Vertex4d(struct _glapi_table *disp) {
   return (_glptr_Vertex4d) (GET_by_offset(disp, _gloffset_Vertex4d));
}

static INLINE void SET_Vertex4d(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLdouble, GLdouble, GLdouble, GLdouble)) {
   SET_by_offset(disp, _gloffset_Vertex4d, fn);
}

typedef void (GLAPIENTRYP _glptr_Vertex4dv)(const GLdouble *);
#define CALL_Vertex4dv(disp, parameters) \
    (* GET_Vertex4dv(disp)) parameters
static INLINE _glptr_Vertex4dv GET_Vertex4dv(struct _glapi_table *disp) {
   return (_glptr_Vertex4dv) (GET_by_offset(disp, _gloffset_Vertex4dv));
}

static INLINE void SET_Vertex4dv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLdouble *)) {
   SET_by_offset(disp, _gloffset_Vertex4dv, fn);
}

typedef void (GLAPIENTRYP _glptr_Vertex4f)(GLfloat, GLfloat, GLfloat, GLfloat);
#define CALL_Vertex4f(disp, parameters) \
    (* GET_Vertex4f(disp)) parameters
static INLINE _glptr_Vertex4f GET_Vertex4f(struct _glapi_table *disp) {
   return (_glptr_Vertex4f) (GET_by_offset(disp, _gloffset_Vertex4f));
}

static INLINE void SET_Vertex4f(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat, GLfloat)) {
   SET_by_offset(disp, _gloffset_Vertex4f, fn);
}

typedef void (GLAPIENTRYP _glptr_Vertex4fv)(const GLfloat *);
#define CALL_Vertex4fv(disp, parameters) \
    (* GET_Vertex4fv(disp)) parameters
static INLINE _glptr_Vertex4fv GET_Vertex4fv(struct _glapi_table *disp) {
   return (_glptr_Vertex4fv) (GET_by_offset(disp, _gloffset_Vertex4fv));
}

static INLINE void SET_Vertex4fv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLfloat *)) {
   SET_by_offset(disp, _gloffset_Vertex4fv, fn);
}

typedef void (GLAPIENTRYP _glptr_Vertex4i)(GLint, GLint, GLint, GLint);
#define CALL_Vertex4i(disp, parameters) \
    (* GET_Vertex4i(disp)) parameters
static INLINE _glptr_Vertex4i GET_Vertex4i(struct _glapi_table *disp) {
   return (_glptr_Vertex4i) (GET_by_offset(disp, _gloffset_Vertex4i));
}

static INLINE void SET_Vertex4i(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLint, GLint, GLint)) {
   SET_by_offset(disp, _gloffset_Vertex4i, fn);
}

typedef void (GLAPIENTRYP _glptr_Vertex4iv)(const GLint *);
#define CALL_Vertex4iv(disp, parameters) \
    (* GET_Vertex4iv(disp)) parameters
static INLINE _glptr_Vertex4iv GET_Vertex4iv(struct _glapi_table *disp) {
   return (_glptr_Vertex4iv) (GET_by_offset(disp, _gloffset_Vertex4iv));
}

static INLINE void SET_Vertex4iv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLint *)) {
   SET_by_offset(disp, _gloffset_Vertex4iv, fn);
}

typedef void (GLAPIENTRYP _glptr_Vertex4s)(GLshort, GLshort, GLshort, GLshort);
#define CALL_Vertex4s(disp, parameters) \
    (* GET_Vertex4s(disp)) parameters
static INLINE _glptr_Vertex4s GET_Vertex4s(struct _glapi_table *disp) {
   return (_glptr_Vertex4s) (GET_by_offset(disp, _gloffset_Vertex4s));
}

static INLINE void SET_Vertex4s(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLshort, GLshort, GLshort, GLshort)) {
   SET_by_offset(disp, _gloffset_Vertex4s, fn);
}

typedef void (GLAPIENTRYP _glptr_Vertex4sv)(const GLshort *);
#define CALL_Vertex4sv(disp, parameters) \
    (* GET_Vertex4sv(disp)) parameters
static INLINE _glptr_Vertex4sv GET_Vertex4sv(struct _glapi_table *disp) {
   return (_glptr_Vertex4sv) (GET_by_offset(disp, _gloffset_Vertex4sv));
}

static INLINE void SET_Vertex4sv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLshort *)) {
   SET_by_offset(disp, _gloffset_Vertex4sv, fn);
}

typedef void (GLAPIENTRYP _glptr_ClipPlane)(GLenum, const GLdouble *);
#define CALL_ClipPlane(disp, parameters) \
    (* GET_ClipPlane(disp)) parameters
static INLINE _glptr_ClipPlane GET_ClipPlane(struct _glapi_table *disp) {
   return (_glptr_ClipPlane) (GET_by_offset(disp, _gloffset_ClipPlane));
}

static INLINE void SET_ClipPlane(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, const GLdouble *)) {
   SET_by_offset(disp, _gloffset_ClipPlane, fn);
}

typedef void (GLAPIENTRYP _glptr_ColorMaterial)(GLenum, GLenum);
#define CALL_ColorMaterial(disp, parameters) \
    (* GET_ColorMaterial(disp)) parameters
static INLINE _glptr_ColorMaterial GET_ColorMaterial(struct _glapi_table *disp) {
   return (_glptr_ColorMaterial) (GET_by_offset(disp, _gloffset_ColorMaterial));
}

static INLINE void SET_ColorMaterial(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum)) {
   SET_by_offset(disp, _gloffset_ColorMaterial, fn);
}

typedef void (GLAPIENTRYP _glptr_CullFace)(GLenum);
#define CALL_CullFace(disp, parameters) \
    (* GET_CullFace(disp)) parameters
static INLINE _glptr_CullFace GET_CullFace(struct _glapi_table *disp) {
   return (_glptr_CullFace) (GET_by_offset(disp, _gloffset_CullFace));
}

static INLINE void SET_CullFace(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum)) {
   SET_by_offset(disp, _gloffset_CullFace, fn);
}

typedef void (GLAPIENTRYP _glptr_Fogf)(GLenum, GLfloat);
#define CALL_Fogf(disp, parameters) \
    (* GET_Fogf(disp)) parameters
static INLINE _glptr_Fogf GET_Fogf(struct _glapi_table *disp) {
   return (_glptr_Fogf) (GET_by_offset(disp, _gloffset_Fogf));
}

static INLINE void SET_Fogf(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLfloat)) {
   SET_by_offset(disp, _gloffset_Fogf, fn);
}

typedef void (GLAPIENTRYP _glptr_Fogfv)(GLenum, const GLfloat *);
#define CALL_Fogfv(disp, parameters) \
    (* GET_Fogfv(disp)) parameters
static INLINE _glptr_Fogfv GET_Fogfv(struct _glapi_table *disp) {
   return (_glptr_Fogfv) (GET_by_offset(disp, _gloffset_Fogfv));
}

static INLINE void SET_Fogfv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, const GLfloat *)) {
   SET_by_offset(disp, _gloffset_Fogfv, fn);
}

typedef void (GLAPIENTRYP _glptr_Fogi)(GLenum, GLint);
#define CALL_Fogi(disp, parameters) \
    (* GET_Fogi(disp)) parameters
static INLINE _glptr_Fogi GET_Fogi(struct _glapi_table *disp) {
   return (_glptr_Fogi) (GET_by_offset(disp, _gloffset_Fogi));
}

static INLINE void SET_Fogi(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLint)) {
   SET_by_offset(disp, _gloffset_Fogi, fn);
}

typedef void (GLAPIENTRYP _glptr_Fogiv)(GLenum, const GLint *);
#define CALL_Fogiv(disp, parameters) \
    (* GET_Fogiv(disp)) parameters
static INLINE _glptr_Fogiv GET_Fogiv(struct _glapi_table *disp) {
   return (_glptr_Fogiv) (GET_by_offset(disp, _gloffset_Fogiv));
}

static INLINE void SET_Fogiv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, const GLint *)) {
   SET_by_offset(disp, _gloffset_Fogiv, fn);
}

typedef void (GLAPIENTRYP _glptr_FrontFace)(GLenum);
#define CALL_FrontFace(disp, parameters) \
    (* GET_FrontFace(disp)) parameters
static INLINE _glptr_FrontFace GET_FrontFace(struct _glapi_table *disp) {
   return (_glptr_FrontFace) (GET_by_offset(disp, _gloffset_FrontFace));
}

static INLINE void SET_FrontFace(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum)) {
   SET_by_offset(disp, _gloffset_FrontFace, fn);
}

typedef void (GLAPIENTRYP _glptr_Hint)(GLenum, GLenum);
#define CALL_Hint(disp, parameters) \
    (* GET_Hint(disp)) parameters
static INLINE _glptr_Hint GET_Hint(struct _glapi_table *disp) {
   return (_glptr_Hint) (GET_by_offset(disp, _gloffset_Hint));
}

static INLINE void SET_Hint(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum)) {
   SET_by_offset(disp, _gloffset_Hint, fn);
}

typedef void (GLAPIENTRYP _glptr_Lightf)(GLenum, GLenum, GLfloat);
#define CALL_Lightf(disp, parameters) \
    (* GET_Lightf(disp)) parameters
static INLINE _glptr_Lightf GET_Lightf(struct _glapi_table *disp) {
   return (_glptr_Lightf) (GET_by_offset(disp, _gloffset_Lightf));
}

static INLINE void SET_Lightf(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLfloat)) {
   SET_by_offset(disp, _gloffset_Lightf, fn);
}

typedef void (GLAPIENTRYP _glptr_Lightfv)(GLenum, GLenum, const GLfloat *);
#define CALL_Lightfv(disp, parameters) \
    (* GET_Lightfv(disp)) parameters
static INLINE _glptr_Lightfv GET_Lightfv(struct _glapi_table *disp) {
   return (_glptr_Lightfv) (GET_by_offset(disp, _gloffset_Lightfv));
}

static INLINE void SET_Lightfv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, const GLfloat *)) {
   SET_by_offset(disp, _gloffset_Lightfv, fn);
}

typedef void (GLAPIENTRYP _glptr_Lighti)(GLenum, GLenum, GLint);
#define CALL_Lighti(disp, parameters) \
    (* GET_Lighti(disp)) parameters
static INLINE _glptr_Lighti GET_Lighti(struct _glapi_table *disp) {
   return (_glptr_Lighti) (GET_by_offset(disp, _gloffset_Lighti));
}

static INLINE void SET_Lighti(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLint)) {
   SET_by_offset(disp, _gloffset_Lighti, fn);
}

typedef void (GLAPIENTRYP _glptr_Lightiv)(GLenum, GLenum, const GLint *);
#define CALL_Lightiv(disp, parameters) \
    (* GET_Lightiv(disp)) parameters
static INLINE _glptr_Lightiv GET_Lightiv(struct _glapi_table *disp) {
   return (_glptr_Lightiv) (GET_by_offset(disp, _gloffset_Lightiv));
}

static INLINE void SET_Lightiv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, const GLint *)) {
   SET_by_offset(disp, _gloffset_Lightiv, fn);
}

typedef void (GLAPIENTRYP _glptr_LightModelf)(GLenum, GLfloat);
#define CALL_LightModelf(disp, parameters) \
    (* GET_LightModelf(disp)) parameters
static INLINE _glptr_LightModelf GET_LightModelf(struct _glapi_table *disp) {
   return (_glptr_LightModelf) (GET_by_offset(disp, _gloffset_LightModelf));
}

static INLINE void SET_LightModelf(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLfloat)) {
   SET_by_offset(disp, _gloffset_LightModelf, fn);
}

typedef void (GLAPIENTRYP _glptr_LightModelfv)(GLenum, const GLfloat *);
#define CALL_LightModelfv(disp, parameters) \
    (* GET_LightModelfv(disp)) parameters
static INLINE _glptr_LightModelfv GET_LightModelfv(struct _glapi_table *disp) {
   return (_glptr_LightModelfv) (GET_by_offset(disp, _gloffset_LightModelfv));
}

static INLINE void SET_LightModelfv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, const GLfloat *)) {
   SET_by_offset(disp, _gloffset_LightModelfv, fn);
}

typedef void (GLAPIENTRYP _glptr_LightModeli)(GLenum, GLint);
#define CALL_LightModeli(disp, parameters) \
    (* GET_LightModeli(disp)) parameters
static INLINE _glptr_LightModeli GET_LightModeli(struct _glapi_table *disp) {
   return (_glptr_LightModeli) (GET_by_offset(disp, _gloffset_LightModeli));
}

static INLINE void SET_LightModeli(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLint)) {
   SET_by_offset(disp, _gloffset_LightModeli, fn);
}

typedef void (GLAPIENTRYP _glptr_LightModeliv)(GLenum, const GLint *);
#define CALL_LightModeliv(disp, parameters) \
    (* GET_LightModeliv(disp)) parameters
static INLINE _glptr_LightModeliv GET_LightModeliv(struct _glapi_table *disp) {
   return (_glptr_LightModeliv) (GET_by_offset(disp, _gloffset_LightModeliv));
}

static INLINE void SET_LightModeliv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, const GLint *)) {
   SET_by_offset(disp, _gloffset_LightModeliv, fn);
}

typedef void (GLAPIENTRYP _glptr_LineStipple)(GLint, GLushort);
#define CALL_LineStipple(disp, parameters) \
    (* GET_LineStipple(disp)) parameters
static INLINE _glptr_LineStipple GET_LineStipple(struct _glapi_table *disp) {
   return (_glptr_LineStipple) (GET_by_offset(disp, _gloffset_LineStipple));
}

static INLINE void SET_LineStipple(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLushort)) {
   SET_by_offset(disp, _gloffset_LineStipple, fn);
}

typedef void (GLAPIENTRYP _glptr_LineWidth)(GLfloat);
#define CALL_LineWidth(disp, parameters) \
    (* GET_LineWidth(disp)) parameters
static INLINE _glptr_LineWidth GET_LineWidth(struct _glapi_table *disp) {
   return (_glptr_LineWidth) (GET_by_offset(disp, _gloffset_LineWidth));
}

static INLINE void SET_LineWidth(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLfloat)) {
   SET_by_offset(disp, _gloffset_LineWidth, fn);
}

typedef void (GLAPIENTRYP _glptr_Materialf)(GLenum, GLenum, GLfloat);
#define CALL_Materialf(disp, parameters) \
    (* GET_Materialf(disp)) parameters
static INLINE _glptr_Materialf GET_Materialf(struct _glapi_table *disp) {
   return (_glptr_Materialf) (GET_by_offset(disp, _gloffset_Materialf));
}

static INLINE void SET_Materialf(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLfloat)) {
   SET_by_offset(disp, _gloffset_Materialf, fn);
}

typedef void (GLAPIENTRYP _glptr_Materialfv)(GLenum, GLenum, const GLfloat *);
#define CALL_Materialfv(disp, parameters) \
    (* GET_Materialfv(disp)) parameters
static INLINE _glptr_Materialfv GET_Materialfv(struct _glapi_table *disp) {
   return (_glptr_Materialfv) (GET_by_offset(disp, _gloffset_Materialfv));
}

static INLINE void SET_Materialfv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, const GLfloat *)) {
   SET_by_offset(disp, _gloffset_Materialfv, fn);
}

typedef void (GLAPIENTRYP _glptr_Materiali)(GLenum, GLenum, GLint);
#define CALL_Materiali(disp, parameters) \
    (* GET_Materiali(disp)) parameters
static INLINE _glptr_Materiali GET_Materiali(struct _glapi_table *disp) {
   return (_glptr_Materiali) (GET_by_offset(disp, _gloffset_Materiali));
}

static INLINE void SET_Materiali(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLint)) {
   SET_by_offset(disp, _gloffset_Materiali, fn);
}

typedef void (GLAPIENTRYP _glptr_Materialiv)(GLenum, GLenum, const GLint *);
#define CALL_Materialiv(disp, parameters) \
    (* GET_Materialiv(disp)) parameters
static INLINE _glptr_Materialiv GET_Materialiv(struct _glapi_table *disp) {
   return (_glptr_Materialiv) (GET_by_offset(disp, _gloffset_Materialiv));
}

static INLINE void SET_Materialiv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, const GLint *)) {
   SET_by_offset(disp, _gloffset_Materialiv, fn);
}

typedef void (GLAPIENTRYP _glptr_PointSize)(GLfloat);
#define CALL_PointSize(disp, parameters) \
    (* GET_PointSize(disp)) parameters
static INLINE _glptr_PointSize GET_PointSize(struct _glapi_table *disp) {
   return (_glptr_PointSize) (GET_by_offset(disp, _gloffset_PointSize));
}

static INLINE void SET_PointSize(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLfloat)) {
   SET_by_offset(disp, _gloffset_PointSize, fn);
}

typedef void (GLAPIENTRYP _glptr_PolygonMode)(GLenum, GLenum);
#define CALL_PolygonMode(disp, parameters) \
    (* GET_PolygonMode(disp)) parameters
static INLINE _glptr_PolygonMode GET_PolygonMode(struct _glapi_table *disp) {
   return (_glptr_PolygonMode) (GET_by_offset(disp, _gloffset_PolygonMode));
}

static INLINE void SET_PolygonMode(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum)) {
   SET_by_offset(disp, _gloffset_PolygonMode, fn);
}

typedef void (GLAPIENTRYP _glptr_PolygonStipple)(const GLubyte *);
#define CALL_PolygonStipple(disp, parameters) \
    (* GET_PolygonStipple(disp)) parameters
static INLINE _glptr_PolygonStipple GET_PolygonStipple(struct _glapi_table *disp) {
   return (_glptr_PolygonStipple) (GET_by_offset(disp, _gloffset_PolygonStipple));
}

static INLINE void SET_PolygonStipple(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLubyte *)) {
   SET_by_offset(disp, _gloffset_PolygonStipple, fn);
}

typedef void (GLAPIENTRYP _glptr_Scissor)(GLint, GLint, GLsizei, GLsizei);
#define CALL_Scissor(disp, parameters) \
    (* GET_Scissor(disp)) parameters
static INLINE _glptr_Scissor GET_Scissor(struct _glapi_table *disp) {
   return (_glptr_Scissor) (GET_by_offset(disp, _gloffset_Scissor));
}

static INLINE void SET_Scissor(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLint, GLsizei, GLsizei)) {
   SET_by_offset(disp, _gloffset_Scissor, fn);
}

typedef void (GLAPIENTRYP _glptr_ShadeModel)(GLenum);
#define CALL_ShadeModel(disp, parameters) \
    (* GET_ShadeModel(disp)) parameters
static INLINE _glptr_ShadeModel GET_ShadeModel(struct _glapi_table *disp) {
   return (_glptr_ShadeModel) (GET_by_offset(disp, _gloffset_ShadeModel));
}

static INLINE void SET_ShadeModel(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum)) {
   SET_by_offset(disp, _gloffset_ShadeModel, fn);
}

typedef void (GLAPIENTRYP _glptr_TexParameterf)(GLenum, GLenum, GLfloat);
#define CALL_TexParameterf(disp, parameters) \
    (* GET_TexParameterf(disp)) parameters
static INLINE _glptr_TexParameterf GET_TexParameterf(struct _glapi_table *disp) {
   return (_glptr_TexParameterf) (GET_by_offset(disp, _gloffset_TexParameterf));
}

static INLINE void SET_TexParameterf(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLfloat)) {
   SET_by_offset(disp, _gloffset_TexParameterf, fn);
}

typedef void (GLAPIENTRYP _glptr_TexParameterfv)(GLenum, GLenum, const GLfloat *);
#define CALL_TexParameterfv(disp, parameters) \
    (* GET_TexParameterfv(disp)) parameters
static INLINE _glptr_TexParameterfv GET_TexParameterfv(struct _glapi_table *disp) {
   return (_glptr_TexParameterfv) (GET_by_offset(disp, _gloffset_TexParameterfv));
}

static INLINE void SET_TexParameterfv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, const GLfloat *)) {
   SET_by_offset(disp, _gloffset_TexParameterfv, fn);
}

typedef void (GLAPIENTRYP _glptr_TexParameteri)(GLenum, GLenum, GLint);
#define CALL_TexParameteri(disp, parameters) \
    (* GET_TexParameteri(disp)) parameters
static INLINE _glptr_TexParameteri GET_TexParameteri(struct _glapi_table *disp) {
   return (_glptr_TexParameteri) (GET_by_offset(disp, _gloffset_TexParameteri));
}

static INLINE void SET_TexParameteri(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLint)) {
   SET_by_offset(disp, _gloffset_TexParameteri, fn);
}

typedef void (GLAPIENTRYP _glptr_TexParameteriv)(GLenum, GLenum, const GLint *);
#define CALL_TexParameteriv(disp, parameters) \
    (* GET_TexParameteriv(disp)) parameters
static INLINE _glptr_TexParameteriv GET_TexParameteriv(struct _glapi_table *disp) {
   return (_glptr_TexParameteriv) (GET_by_offset(disp, _gloffset_TexParameteriv));
}

static INLINE void SET_TexParameteriv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, const GLint *)) {
   SET_by_offset(disp, _gloffset_TexParameteriv, fn);
}

typedef void (GLAPIENTRYP _glptr_TexImage1D)(GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid *);
#define CALL_TexImage1D(disp, parameters) \
    (* GET_TexImage1D(disp)) parameters
static INLINE _glptr_TexImage1D GET_TexImage1D(struct _glapi_table *disp) {
   return (_glptr_TexImage1D) (GET_by_offset(disp, _gloffset_TexImage1D));
}

static INLINE void SET_TexImage1D(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid *)) {
   SET_by_offset(disp, _gloffset_TexImage1D, fn);
}

typedef void (GLAPIENTRYP _glptr_TexImage2D)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *);
#define CALL_TexImage2D(disp, parameters) \
    (* GET_TexImage2D(disp)) parameters
static INLINE _glptr_TexImage2D GET_TexImage2D(struct _glapi_table *disp) {
   return (_glptr_TexImage2D) (GET_by_offset(disp, _gloffset_TexImage2D));
}

static INLINE void SET_TexImage2D(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *)) {
   SET_by_offset(disp, _gloffset_TexImage2D, fn);
}

typedef void (GLAPIENTRYP _glptr_TexEnvf)(GLenum, GLenum, GLfloat);
#define CALL_TexEnvf(disp, parameters) \
    (* GET_TexEnvf(disp)) parameters
static INLINE _glptr_TexEnvf GET_TexEnvf(struct _glapi_table *disp) {
   return (_glptr_TexEnvf) (GET_by_offset(disp, _gloffset_TexEnvf));
}

static INLINE void SET_TexEnvf(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLfloat)) {
   SET_by_offset(disp, _gloffset_TexEnvf, fn);
}

typedef void (GLAPIENTRYP _glptr_TexEnvfv)(GLenum, GLenum, const GLfloat *);
#define CALL_TexEnvfv(disp, parameters) \
    (* GET_TexEnvfv(disp)) parameters
static INLINE _glptr_TexEnvfv GET_TexEnvfv(struct _glapi_table *disp) {
   return (_glptr_TexEnvfv) (GET_by_offset(disp, _gloffset_TexEnvfv));
}

static INLINE void SET_TexEnvfv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, const GLfloat *)) {
   SET_by_offset(disp, _gloffset_TexEnvfv, fn);
}

typedef void (GLAPIENTRYP _glptr_TexEnvi)(GLenum, GLenum, GLint);
#define CALL_TexEnvi(disp, parameters) \
    (* GET_TexEnvi(disp)) parameters
static INLINE _glptr_TexEnvi GET_TexEnvi(struct _glapi_table *disp) {
   return (_glptr_TexEnvi) (GET_by_offset(disp, _gloffset_TexEnvi));
}

static INLINE void SET_TexEnvi(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLint)) {
   SET_by_offset(disp, _gloffset_TexEnvi, fn);
}

typedef void (GLAPIENTRYP _glptr_TexEnviv)(GLenum, GLenum, const GLint *);
#define CALL_TexEnviv(disp, parameters) \
    (* GET_TexEnviv(disp)) parameters
static INLINE _glptr_TexEnviv GET_TexEnviv(struct _glapi_table *disp) {
   return (_glptr_TexEnviv) (GET_by_offset(disp, _gloffset_TexEnviv));
}

static INLINE void SET_TexEnviv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, const GLint *)) {
   SET_by_offset(disp, _gloffset_TexEnviv, fn);
}

typedef void (GLAPIENTRYP _glptr_TexGend)(GLenum, GLenum, GLdouble);
#define CALL_TexGend(disp, parameters) \
    (* GET_TexGend(disp)) parameters
static INLINE _glptr_TexGend GET_TexGend(struct _glapi_table *disp) {
   return (_glptr_TexGend) (GET_by_offset(disp, _gloffset_TexGend));
}

static INLINE void SET_TexGend(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLdouble)) {
   SET_by_offset(disp, _gloffset_TexGend, fn);
}

typedef void (GLAPIENTRYP _glptr_TexGendv)(GLenum, GLenum, const GLdouble *);
#define CALL_TexGendv(disp, parameters) \
    (* GET_TexGendv(disp)) parameters
static INLINE _glptr_TexGendv GET_TexGendv(struct _glapi_table *disp) {
   return (_glptr_TexGendv) (GET_by_offset(disp, _gloffset_TexGendv));
}

static INLINE void SET_TexGendv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, const GLdouble *)) {
   SET_by_offset(disp, _gloffset_TexGendv, fn);
}

typedef void (GLAPIENTRYP _glptr_TexGenf)(GLenum, GLenum, GLfloat);
#define CALL_TexGenf(disp, parameters) \
    (* GET_TexGenf(disp)) parameters
static INLINE _glptr_TexGenf GET_TexGenf(struct _glapi_table *disp) {
   return (_glptr_TexGenf) (GET_by_offset(disp, _gloffset_TexGenf));
}

static INLINE void SET_TexGenf(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLfloat)) {
   SET_by_offset(disp, _gloffset_TexGenf, fn);
}

typedef void (GLAPIENTRYP _glptr_TexGenfv)(GLenum, GLenum, const GLfloat *);
#define CALL_TexGenfv(disp, parameters) \
    (* GET_TexGenfv(disp)) parameters
static INLINE _glptr_TexGenfv GET_TexGenfv(struct _glapi_table *disp) {
   return (_glptr_TexGenfv) (GET_by_offset(disp, _gloffset_TexGenfv));
}

static INLINE void SET_TexGenfv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, const GLfloat *)) {
   SET_by_offset(disp, _gloffset_TexGenfv, fn);
}

typedef void (GLAPIENTRYP _glptr_TexGeni)(GLenum, GLenum, GLint);
#define CALL_TexGeni(disp, parameters) \
    (* GET_TexGeni(disp)) parameters
static INLINE _glptr_TexGeni GET_TexGeni(struct _glapi_table *disp) {
   return (_glptr_TexGeni) (GET_by_offset(disp, _gloffset_TexGeni));
}

static INLINE void SET_TexGeni(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLint)) {
   SET_by_offset(disp, _gloffset_TexGeni, fn);
}

typedef void (GLAPIENTRYP _glptr_TexGeniv)(GLenum, GLenum, const GLint *);
#define CALL_TexGeniv(disp, parameters) \
    (* GET_TexGeniv(disp)) parameters
static INLINE _glptr_TexGeniv GET_TexGeniv(struct _glapi_table *disp) {
   return (_glptr_TexGeniv) (GET_by_offset(disp, _gloffset_TexGeniv));
}

static INLINE void SET_TexGeniv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, const GLint *)) {
   SET_by_offset(disp, _gloffset_TexGeniv, fn);
}

typedef void (GLAPIENTRYP _glptr_FeedbackBuffer)(GLsizei, GLenum, GLfloat *);
#define CALL_FeedbackBuffer(disp, parameters) \
    (* GET_FeedbackBuffer(disp)) parameters
static INLINE _glptr_FeedbackBuffer GET_FeedbackBuffer(struct _glapi_table *disp) {
   return (_glptr_FeedbackBuffer) (GET_by_offset(disp, _gloffset_FeedbackBuffer));
}

static INLINE void SET_FeedbackBuffer(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLsizei, GLenum, GLfloat *)) {
   SET_by_offset(disp, _gloffset_FeedbackBuffer, fn);
}

typedef void (GLAPIENTRYP _glptr_SelectBuffer)(GLsizei, GLuint *);
#define CALL_SelectBuffer(disp, parameters) \
    (* GET_SelectBuffer(disp)) parameters
static INLINE _glptr_SelectBuffer GET_SelectBuffer(struct _glapi_table *disp) {
   return (_glptr_SelectBuffer) (GET_by_offset(disp, _gloffset_SelectBuffer));
}

static INLINE void SET_SelectBuffer(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLsizei, GLuint *)) {
   SET_by_offset(disp, _gloffset_SelectBuffer, fn);
}

typedef GLint (GLAPIENTRYP _glptr_RenderMode)(GLenum);
#define CALL_RenderMode(disp, parameters) \
    (* GET_RenderMode(disp)) parameters
static INLINE _glptr_RenderMode GET_RenderMode(struct _glapi_table *disp) {
   return (_glptr_RenderMode) (GET_by_offset(disp, _gloffset_RenderMode));
}

static INLINE void SET_RenderMode(struct _glapi_table *disp, GLint (GLAPIENTRYP fn)(GLenum)) {
   SET_by_offset(disp, _gloffset_RenderMode, fn);
}

typedef void (GLAPIENTRYP _glptr_InitNames)(void);
#define CALL_InitNames(disp, parameters) \
    (* GET_InitNames(disp)) parameters
static INLINE _glptr_InitNames GET_InitNames(struct _glapi_table *disp) {
   return (_glptr_InitNames) (GET_by_offset(disp, _gloffset_InitNames));
}

static INLINE void SET_InitNames(struct _glapi_table *disp, void (GLAPIENTRYP fn)(void)) {
   SET_by_offset(disp, _gloffset_InitNames, fn);
}

typedef void (GLAPIENTRYP _glptr_LoadName)(GLuint);
#define CALL_LoadName(disp, parameters) \
    (* GET_LoadName(disp)) parameters
static INLINE _glptr_LoadName GET_LoadName(struct _glapi_table *disp) {
   return (_glptr_LoadName) (GET_by_offset(disp, _gloffset_LoadName));
}

static INLINE void SET_LoadName(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint)) {
   SET_by_offset(disp, _gloffset_LoadName, fn);
}

typedef void (GLAPIENTRYP _glptr_PassThrough)(GLfloat);
#define CALL_PassThrough(disp, parameters) \
    (* GET_PassThrough(disp)) parameters
static INLINE _glptr_PassThrough GET_PassThrough(struct _glapi_table *disp) {
   return (_glptr_PassThrough) (GET_by_offset(disp, _gloffset_PassThrough));
}

static INLINE void SET_PassThrough(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLfloat)) {
   SET_by_offset(disp, _gloffset_PassThrough, fn);
}

typedef void (GLAPIENTRYP _glptr_PopName)(void);
#define CALL_PopName(disp, parameters) \
    (* GET_PopName(disp)) parameters
static INLINE _glptr_PopName GET_PopName(struct _glapi_table *disp) {
   return (_glptr_PopName) (GET_by_offset(disp, _gloffset_PopName));
}

static INLINE void SET_PopName(struct _glapi_table *disp, void (GLAPIENTRYP fn)(void)) {
   SET_by_offset(disp, _gloffset_PopName, fn);
}

typedef void (GLAPIENTRYP _glptr_PushName)(GLuint);
#define CALL_PushName(disp, parameters) \
    (* GET_PushName(disp)) parameters
static INLINE _glptr_PushName GET_PushName(struct _glapi_table *disp) {
   return (_glptr_PushName) (GET_by_offset(disp, _gloffset_PushName));
}

static INLINE void SET_PushName(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint)) {
   SET_by_offset(disp, _gloffset_PushName, fn);
}

typedef void (GLAPIENTRYP _glptr_DrawBuffer)(GLenum);
#define CALL_DrawBuffer(disp, parameters) \
    (* GET_DrawBuffer(disp)) parameters
static INLINE _glptr_DrawBuffer GET_DrawBuffer(struct _glapi_table *disp) {
   return (_glptr_DrawBuffer) (GET_by_offset(disp, _gloffset_DrawBuffer));
}

static INLINE void SET_DrawBuffer(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum)) {
   SET_by_offset(disp, _gloffset_DrawBuffer, fn);
}

typedef void (GLAPIENTRYP _glptr_Clear)(GLbitfield);
#define CALL_Clear(disp, parameters) \
    (* GET_Clear(disp)) parameters
static INLINE _glptr_Clear GET_Clear(struct _glapi_table *disp) {
   return (_glptr_Clear) (GET_by_offset(disp, _gloffset_Clear));
}

static INLINE void SET_Clear(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLbitfield)) {
   SET_by_offset(disp, _gloffset_Clear, fn);
}

typedef void (GLAPIENTRYP _glptr_ClearAccum)(GLfloat, GLfloat, GLfloat, GLfloat);
#define CALL_ClearAccum(disp, parameters) \
    (* GET_ClearAccum(disp)) parameters
static INLINE _glptr_ClearAccum GET_ClearAccum(struct _glapi_table *disp) {
   return (_glptr_ClearAccum) (GET_by_offset(disp, _gloffset_ClearAccum));
}

static INLINE void SET_ClearAccum(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat, GLfloat)) {
   SET_by_offset(disp, _gloffset_ClearAccum, fn);
}

typedef void (GLAPIENTRYP _glptr_ClearIndex)(GLfloat);
#define CALL_ClearIndex(disp, parameters) \
    (* GET_ClearIndex(disp)) parameters
static INLINE _glptr_ClearIndex GET_ClearIndex(struct _glapi_table *disp) {
   return (_glptr_ClearIndex) (GET_by_offset(disp, _gloffset_ClearIndex));
}

static INLINE void SET_ClearIndex(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLfloat)) {
   SET_by_offset(disp, _gloffset_ClearIndex, fn);
}

typedef void (GLAPIENTRYP _glptr_ClearColor)(GLclampf, GLclampf, GLclampf, GLclampf);
#define CALL_ClearColor(disp, parameters) \
    (* GET_ClearColor(disp)) parameters
static INLINE _glptr_ClearColor GET_ClearColor(struct _glapi_table *disp) {
   return (_glptr_ClearColor) (GET_by_offset(disp, _gloffset_ClearColor));
}

static INLINE void SET_ClearColor(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLclampf, GLclampf, GLclampf, GLclampf)) {
   SET_by_offset(disp, _gloffset_ClearColor, fn);
}

typedef void (GLAPIENTRYP _glptr_ClearStencil)(GLint);
#define CALL_ClearStencil(disp, parameters) \
    (* GET_ClearStencil(disp)) parameters
static INLINE _glptr_ClearStencil GET_ClearStencil(struct _glapi_table *disp) {
   return (_glptr_ClearStencil) (GET_by_offset(disp, _gloffset_ClearStencil));
}

static INLINE void SET_ClearStencil(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint)) {
   SET_by_offset(disp, _gloffset_ClearStencil, fn);
}

typedef void (GLAPIENTRYP _glptr_ClearDepth)(GLclampd);
#define CALL_ClearDepth(disp, parameters) \
    (* GET_ClearDepth(disp)) parameters
static INLINE _glptr_ClearDepth GET_ClearDepth(struct _glapi_table *disp) {
   return (_glptr_ClearDepth) (GET_by_offset(disp, _gloffset_ClearDepth));
}

static INLINE void SET_ClearDepth(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLclampd)) {
   SET_by_offset(disp, _gloffset_ClearDepth, fn);
}

typedef void (GLAPIENTRYP _glptr_StencilMask)(GLuint);
#define CALL_StencilMask(disp, parameters) \
    (* GET_StencilMask(disp)) parameters
static INLINE _glptr_StencilMask GET_StencilMask(struct _glapi_table *disp) {
   return (_glptr_StencilMask) (GET_by_offset(disp, _gloffset_StencilMask));
}

static INLINE void SET_StencilMask(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint)) {
   SET_by_offset(disp, _gloffset_StencilMask, fn);
}

typedef void (GLAPIENTRYP _glptr_ColorMask)(GLboolean, GLboolean, GLboolean, GLboolean);
#define CALL_ColorMask(disp, parameters) \
    (* GET_ColorMask(disp)) parameters
static INLINE _glptr_ColorMask GET_ColorMask(struct _glapi_table *disp) {
   return (_glptr_ColorMask) (GET_by_offset(disp, _gloffset_ColorMask));
}

static INLINE void SET_ColorMask(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLboolean, GLboolean, GLboolean, GLboolean)) {
   SET_by_offset(disp, _gloffset_ColorMask, fn);
}

typedef void (GLAPIENTRYP _glptr_DepthMask)(GLboolean);
#define CALL_DepthMask(disp, parameters) \
    (* GET_DepthMask(disp)) parameters
static INLINE _glptr_DepthMask GET_DepthMask(struct _glapi_table *disp) {
   return (_glptr_DepthMask) (GET_by_offset(disp, _gloffset_DepthMask));
}

static INLINE void SET_DepthMask(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLboolean)) {
   SET_by_offset(disp, _gloffset_DepthMask, fn);
}

typedef void (GLAPIENTRYP _glptr_IndexMask)(GLuint);
#define CALL_IndexMask(disp, parameters) \
    (* GET_IndexMask(disp)) parameters
static INLINE _glptr_IndexMask GET_IndexMask(struct _glapi_table *disp) {
   return (_glptr_IndexMask) (GET_by_offset(disp, _gloffset_IndexMask));
}

static INLINE void SET_IndexMask(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint)) {
   SET_by_offset(disp, _gloffset_IndexMask, fn);
}

typedef void (GLAPIENTRYP _glptr_Accum)(GLenum, GLfloat);
#define CALL_Accum(disp, parameters) \
    (* GET_Accum(disp)) parameters
static INLINE _glptr_Accum GET_Accum(struct _glapi_table *disp) {
   return (_glptr_Accum) (GET_by_offset(disp, _gloffset_Accum));
}

static INLINE void SET_Accum(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLfloat)) {
   SET_by_offset(disp, _gloffset_Accum, fn);
}

typedef void (GLAPIENTRYP _glptr_Disable)(GLenum);
#define CALL_Disable(disp, parameters) \
    (* GET_Disable(disp)) parameters
static INLINE _glptr_Disable GET_Disable(struct _glapi_table *disp) {
   return (_glptr_Disable) (GET_by_offset(disp, _gloffset_Disable));
}

static INLINE void SET_Disable(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum)) {
   SET_by_offset(disp, _gloffset_Disable, fn);
}

typedef void (GLAPIENTRYP _glptr_Enable)(GLenum);
#define CALL_Enable(disp, parameters) \
    (* GET_Enable(disp)) parameters
static INLINE _glptr_Enable GET_Enable(struct _glapi_table *disp) {
   return (_glptr_Enable) (GET_by_offset(disp, _gloffset_Enable));
}

static INLINE void SET_Enable(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum)) {
   SET_by_offset(disp, _gloffset_Enable, fn);
}

typedef void (GLAPIENTRYP _glptr_Finish)(void);
#define CALL_Finish(disp, parameters) \
    (* GET_Finish(disp)) parameters
static INLINE _glptr_Finish GET_Finish(struct _glapi_table *disp) {
   return (_glptr_Finish) (GET_by_offset(disp, _gloffset_Finish));
}

static INLINE void SET_Finish(struct _glapi_table *disp, void (GLAPIENTRYP fn)(void)) {
   SET_by_offset(disp, _gloffset_Finish, fn);
}

typedef void (GLAPIENTRYP _glptr_Flush)(void);
#define CALL_Flush(disp, parameters) \
    (* GET_Flush(disp)) parameters
static INLINE _glptr_Flush GET_Flush(struct _glapi_table *disp) {
   return (_glptr_Flush) (GET_by_offset(disp, _gloffset_Flush));
}

static INLINE void SET_Flush(struct _glapi_table *disp, void (GLAPIENTRYP fn)(void)) {
   SET_by_offset(disp, _gloffset_Flush, fn);
}

typedef void (GLAPIENTRYP _glptr_PopAttrib)(void);
#define CALL_PopAttrib(disp, parameters) \
    (* GET_PopAttrib(disp)) parameters
static INLINE _glptr_PopAttrib GET_PopAttrib(struct _glapi_table *disp) {
   return (_glptr_PopAttrib) (GET_by_offset(disp, _gloffset_PopAttrib));
}

static INLINE void SET_PopAttrib(struct _glapi_table *disp, void (GLAPIENTRYP fn)(void)) {
   SET_by_offset(disp, _gloffset_PopAttrib, fn);
}

typedef void (GLAPIENTRYP _glptr_PushAttrib)(GLbitfield);
#define CALL_PushAttrib(disp, parameters) \
    (* GET_PushAttrib(disp)) parameters
static INLINE _glptr_PushAttrib GET_PushAttrib(struct _glapi_table *disp) {
   return (_glptr_PushAttrib) (GET_by_offset(disp, _gloffset_PushAttrib));
}

static INLINE void SET_PushAttrib(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLbitfield)) {
   SET_by_offset(disp, _gloffset_PushAttrib, fn);
}

typedef void (GLAPIENTRYP _glptr_Map1d)(GLenum, GLdouble, GLdouble, GLint, GLint, const GLdouble *);
#define CALL_Map1d(disp, parameters) \
    (* GET_Map1d(disp)) parameters
static INLINE _glptr_Map1d GET_Map1d(struct _glapi_table *disp) {
   return (_glptr_Map1d) (GET_by_offset(disp, _gloffset_Map1d));
}

static INLINE void SET_Map1d(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLdouble, GLdouble, GLint, GLint, const GLdouble *)) {
   SET_by_offset(disp, _gloffset_Map1d, fn);
}

typedef void (GLAPIENTRYP _glptr_Map1f)(GLenum, GLfloat, GLfloat, GLint, GLint, const GLfloat *);
#define CALL_Map1f(disp, parameters) \
    (* GET_Map1f(disp)) parameters
static INLINE _glptr_Map1f GET_Map1f(struct _glapi_table *disp) {
   return (_glptr_Map1f) (GET_by_offset(disp, _gloffset_Map1f));
}

static INLINE void SET_Map1f(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLfloat, GLfloat, GLint, GLint, const GLfloat *)) {
   SET_by_offset(disp, _gloffset_Map1f, fn);
}

typedef void (GLAPIENTRYP _glptr_Map2d)(GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble *);
#define CALL_Map2d(disp, parameters) \
    (* GET_Map2d(disp)) parameters
static INLINE _glptr_Map2d GET_Map2d(struct _glapi_table *disp) {
   return (_glptr_Map2d) (GET_by_offset(disp, _gloffset_Map2d));
}

static INLINE void SET_Map2d(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble *)) {
   SET_by_offset(disp, _gloffset_Map2d, fn);
}

typedef void (GLAPIENTRYP _glptr_Map2f)(GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat *);
#define CALL_Map2f(disp, parameters) \
    (* GET_Map2f(disp)) parameters
static INLINE _glptr_Map2f GET_Map2f(struct _glapi_table *disp) {
   return (_glptr_Map2f) (GET_by_offset(disp, _gloffset_Map2f));
}

static INLINE void SET_Map2f(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat *)) {
   SET_by_offset(disp, _gloffset_Map2f, fn);
}

typedef void (GLAPIENTRYP _glptr_MapGrid1d)(GLint, GLdouble, GLdouble);
#define CALL_MapGrid1d(disp, parameters) \
    (* GET_MapGrid1d(disp)) parameters
static INLINE _glptr_MapGrid1d GET_MapGrid1d(struct _glapi_table *disp) {
   return (_glptr_MapGrid1d) (GET_by_offset(disp, _gloffset_MapGrid1d));
}

static INLINE void SET_MapGrid1d(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLdouble, GLdouble)) {
   SET_by_offset(disp, _gloffset_MapGrid1d, fn);
}

typedef void (GLAPIENTRYP _glptr_MapGrid1f)(GLint, GLfloat, GLfloat);
#define CALL_MapGrid1f(disp, parameters) \
    (* GET_MapGrid1f(disp)) parameters
static INLINE _glptr_MapGrid1f GET_MapGrid1f(struct _glapi_table *disp) {
   return (_glptr_MapGrid1f) (GET_by_offset(disp, _gloffset_MapGrid1f));
}

static INLINE void SET_MapGrid1f(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLfloat, GLfloat)) {
   SET_by_offset(disp, _gloffset_MapGrid1f, fn);
}

typedef void (GLAPIENTRYP _glptr_MapGrid2d)(GLint, GLdouble, GLdouble, GLint, GLdouble, GLdouble);
#define CALL_MapGrid2d(disp, parameters) \
    (* GET_MapGrid2d(disp)) parameters
static INLINE _glptr_MapGrid2d GET_MapGrid2d(struct _glapi_table *disp) {
   return (_glptr_MapGrid2d) (GET_by_offset(disp, _gloffset_MapGrid2d));
}

static INLINE void SET_MapGrid2d(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLdouble, GLdouble, GLint, GLdouble, GLdouble)) {
   SET_by_offset(disp, _gloffset_MapGrid2d, fn);
}

typedef void (GLAPIENTRYP _glptr_MapGrid2f)(GLint, GLfloat, GLfloat, GLint, GLfloat, GLfloat);
#define CALL_MapGrid2f(disp, parameters) \
    (* GET_MapGrid2f(disp)) parameters
static INLINE _glptr_MapGrid2f GET_MapGrid2f(struct _glapi_table *disp) {
   return (_glptr_MapGrid2f) (GET_by_offset(disp, _gloffset_MapGrid2f));
}

static INLINE void SET_MapGrid2f(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLfloat, GLfloat, GLint, GLfloat, GLfloat)) {
   SET_by_offset(disp, _gloffset_MapGrid2f, fn);
}

typedef void (GLAPIENTRYP _glptr_EvalCoord1d)(GLdouble);
#define CALL_EvalCoord1d(disp, parameters) \
    (* GET_EvalCoord1d(disp)) parameters
static INLINE _glptr_EvalCoord1d GET_EvalCoord1d(struct _glapi_table *disp) {
   return (_glptr_EvalCoord1d) (GET_by_offset(disp, _gloffset_EvalCoord1d));
}

static INLINE void SET_EvalCoord1d(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLdouble)) {
   SET_by_offset(disp, _gloffset_EvalCoord1d, fn);
}

typedef void (GLAPIENTRYP _glptr_EvalCoord1dv)(const GLdouble *);
#define CALL_EvalCoord1dv(disp, parameters) \
    (* GET_EvalCoord1dv(disp)) parameters
static INLINE _glptr_EvalCoord1dv GET_EvalCoord1dv(struct _glapi_table *disp) {
   return (_glptr_EvalCoord1dv) (GET_by_offset(disp, _gloffset_EvalCoord1dv));
}

static INLINE void SET_EvalCoord1dv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLdouble *)) {
   SET_by_offset(disp, _gloffset_EvalCoord1dv, fn);
}

typedef void (GLAPIENTRYP _glptr_EvalCoord1f)(GLfloat);
#define CALL_EvalCoord1f(disp, parameters) \
    (* GET_EvalCoord1f(disp)) parameters
static INLINE _glptr_EvalCoord1f GET_EvalCoord1f(struct _glapi_table *disp) {
   return (_glptr_EvalCoord1f) (GET_by_offset(disp, _gloffset_EvalCoord1f));
}

static INLINE void SET_EvalCoord1f(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLfloat)) {
   SET_by_offset(disp, _gloffset_EvalCoord1f, fn);
}

typedef void (GLAPIENTRYP _glptr_EvalCoord1fv)(const GLfloat *);
#define CALL_EvalCoord1fv(disp, parameters) \
    (* GET_EvalCoord1fv(disp)) parameters
static INLINE _glptr_EvalCoord1fv GET_EvalCoord1fv(struct _glapi_table *disp) {
   return (_glptr_EvalCoord1fv) (GET_by_offset(disp, _gloffset_EvalCoord1fv));
}

static INLINE void SET_EvalCoord1fv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLfloat *)) {
   SET_by_offset(disp, _gloffset_EvalCoord1fv, fn);
}

typedef void (GLAPIENTRYP _glptr_EvalCoord2d)(GLdouble, GLdouble);
#define CALL_EvalCoord2d(disp, parameters) \
    (* GET_EvalCoord2d(disp)) parameters
static INLINE _glptr_EvalCoord2d GET_EvalCoord2d(struct _glapi_table *disp) {
   return (_glptr_EvalCoord2d) (GET_by_offset(disp, _gloffset_EvalCoord2d));
}

static INLINE void SET_EvalCoord2d(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLdouble, GLdouble)) {
   SET_by_offset(disp, _gloffset_EvalCoord2d, fn);
}

typedef void (GLAPIENTRYP _glptr_EvalCoord2dv)(const GLdouble *);
#define CALL_EvalCoord2dv(disp, parameters) \
    (* GET_EvalCoord2dv(disp)) parameters
static INLINE _glptr_EvalCoord2dv GET_EvalCoord2dv(struct _glapi_table *disp) {
   return (_glptr_EvalCoord2dv) (GET_by_offset(disp, _gloffset_EvalCoord2dv));
}

static INLINE void SET_EvalCoord2dv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLdouble *)) {
   SET_by_offset(disp, _gloffset_EvalCoord2dv, fn);
}

typedef void (GLAPIENTRYP _glptr_EvalCoord2f)(GLfloat, GLfloat);
#define CALL_EvalCoord2f(disp, parameters) \
    (* GET_EvalCoord2f(disp)) parameters
static INLINE _glptr_EvalCoord2f GET_EvalCoord2f(struct _glapi_table *disp) {
   return (_glptr_EvalCoord2f) (GET_by_offset(disp, _gloffset_EvalCoord2f));
}

static INLINE void SET_EvalCoord2f(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLfloat, GLfloat)) {
   SET_by_offset(disp, _gloffset_EvalCoord2f, fn);
}

typedef void (GLAPIENTRYP _glptr_EvalCoord2fv)(const GLfloat *);
#define CALL_EvalCoord2fv(disp, parameters) \
    (* GET_EvalCoord2fv(disp)) parameters
static INLINE _glptr_EvalCoord2fv GET_EvalCoord2fv(struct _glapi_table *disp) {
   return (_glptr_EvalCoord2fv) (GET_by_offset(disp, _gloffset_EvalCoord2fv));
}

static INLINE void SET_EvalCoord2fv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLfloat *)) {
   SET_by_offset(disp, _gloffset_EvalCoord2fv, fn);
}

typedef void (GLAPIENTRYP _glptr_EvalMesh1)(GLenum, GLint, GLint);
#define CALL_EvalMesh1(disp, parameters) \
    (* GET_EvalMesh1(disp)) parameters
static INLINE _glptr_EvalMesh1 GET_EvalMesh1(struct _glapi_table *disp) {
   return (_glptr_EvalMesh1) (GET_by_offset(disp, _gloffset_EvalMesh1));
}

static INLINE void SET_EvalMesh1(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLint, GLint)) {
   SET_by_offset(disp, _gloffset_EvalMesh1, fn);
}

typedef void (GLAPIENTRYP _glptr_EvalPoint1)(GLint);
#define CALL_EvalPoint1(disp, parameters) \
    (* GET_EvalPoint1(disp)) parameters
static INLINE _glptr_EvalPoint1 GET_EvalPoint1(struct _glapi_table *disp) {
   return (_glptr_EvalPoint1) (GET_by_offset(disp, _gloffset_EvalPoint1));
}

static INLINE void SET_EvalPoint1(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint)) {
   SET_by_offset(disp, _gloffset_EvalPoint1, fn);
}

typedef void (GLAPIENTRYP _glptr_EvalMesh2)(GLenum, GLint, GLint, GLint, GLint);
#define CALL_EvalMesh2(disp, parameters) \
    (* GET_EvalMesh2(disp)) parameters
static INLINE _glptr_EvalMesh2 GET_EvalMesh2(struct _glapi_table *disp) {
   return (_glptr_EvalMesh2) (GET_by_offset(disp, _gloffset_EvalMesh2));
}

static INLINE void SET_EvalMesh2(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLint, GLint, GLint, GLint)) {
   SET_by_offset(disp, _gloffset_EvalMesh2, fn);
}

typedef void (GLAPIENTRYP _glptr_EvalPoint2)(GLint, GLint);
#define CALL_EvalPoint2(disp, parameters) \
    (* GET_EvalPoint2(disp)) parameters
static INLINE _glptr_EvalPoint2 GET_EvalPoint2(struct _glapi_table *disp) {
   return (_glptr_EvalPoint2) (GET_by_offset(disp, _gloffset_EvalPoint2));
}

static INLINE void SET_EvalPoint2(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLint)) {
   SET_by_offset(disp, _gloffset_EvalPoint2, fn);
}

typedef void (GLAPIENTRYP _glptr_AlphaFunc)(GLenum, GLclampf);
#define CALL_AlphaFunc(disp, parameters) \
    (* GET_AlphaFunc(disp)) parameters
static INLINE _glptr_AlphaFunc GET_AlphaFunc(struct _glapi_table *disp) {
   return (_glptr_AlphaFunc) (GET_by_offset(disp, _gloffset_AlphaFunc));
}

static INLINE void SET_AlphaFunc(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLclampf)) {
   SET_by_offset(disp, _gloffset_AlphaFunc, fn);
}

typedef void (GLAPIENTRYP _glptr_BlendFunc)(GLenum, GLenum);
#define CALL_BlendFunc(disp, parameters) \
    (* GET_BlendFunc(disp)) parameters
static INLINE _glptr_BlendFunc GET_BlendFunc(struct _glapi_table *disp) {
   return (_glptr_BlendFunc) (GET_by_offset(disp, _gloffset_BlendFunc));
}

static INLINE void SET_BlendFunc(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum)) {
   SET_by_offset(disp, _gloffset_BlendFunc, fn);
}

typedef void (GLAPIENTRYP _glptr_LogicOp)(GLenum);
#define CALL_LogicOp(disp, parameters) \
    (* GET_LogicOp(disp)) parameters
static INLINE _glptr_LogicOp GET_LogicOp(struct _glapi_table *disp) {
   return (_glptr_LogicOp) (GET_by_offset(disp, _gloffset_LogicOp));
}

static INLINE void SET_LogicOp(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum)) {
   SET_by_offset(disp, _gloffset_LogicOp, fn);
}

typedef void (GLAPIENTRYP _glptr_StencilFunc)(GLenum, GLint, GLuint);
#define CALL_StencilFunc(disp, parameters) \
    (* GET_StencilFunc(disp)) parameters
static INLINE _glptr_StencilFunc GET_StencilFunc(struct _glapi_table *disp) {
   return (_glptr_StencilFunc) (GET_by_offset(disp, _gloffset_StencilFunc));
}

static INLINE void SET_StencilFunc(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLint, GLuint)) {
   SET_by_offset(disp, _gloffset_StencilFunc, fn);
}

typedef void (GLAPIENTRYP _glptr_StencilOp)(GLenum, GLenum, GLenum);
#define CALL_StencilOp(disp, parameters) \
    (* GET_StencilOp(disp)) parameters
static INLINE _glptr_StencilOp GET_StencilOp(struct _glapi_table *disp) {
   return (_glptr_StencilOp) (GET_by_offset(disp, _gloffset_StencilOp));
}

static INLINE void SET_StencilOp(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum)) {
   SET_by_offset(disp, _gloffset_StencilOp, fn);
}

typedef void (GLAPIENTRYP _glptr_DepthFunc)(GLenum);
#define CALL_DepthFunc(disp, parameters) \
    (* GET_DepthFunc(disp)) parameters
static INLINE _glptr_DepthFunc GET_DepthFunc(struct _glapi_table *disp) {
   return (_glptr_DepthFunc) (GET_by_offset(disp, _gloffset_DepthFunc));
}

static INLINE void SET_DepthFunc(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum)) {
   SET_by_offset(disp, _gloffset_DepthFunc, fn);
}

typedef void (GLAPIENTRYP _glptr_PixelZoom)(GLfloat, GLfloat);
#define CALL_PixelZoom(disp, parameters) \
    (* GET_PixelZoom(disp)) parameters
static INLINE _glptr_PixelZoom GET_PixelZoom(struct _glapi_table *disp) {
   return (_glptr_PixelZoom) (GET_by_offset(disp, _gloffset_PixelZoom));
}

static INLINE void SET_PixelZoom(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLfloat, GLfloat)) {
   SET_by_offset(disp, _gloffset_PixelZoom, fn);
}

typedef void (GLAPIENTRYP _glptr_PixelTransferf)(GLenum, GLfloat);
#define CALL_PixelTransferf(disp, parameters) \
    (* GET_PixelTransferf(disp)) parameters
static INLINE _glptr_PixelTransferf GET_PixelTransferf(struct _glapi_table *disp) {
   return (_glptr_PixelTransferf) (GET_by_offset(disp, _gloffset_PixelTransferf));
}

static INLINE void SET_PixelTransferf(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLfloat)) {
   SET_by_offset(disp, _gloffset_PixelTransferf, fn);
}

typedef void (GLAPIENTRYP _glptr_PixelTransferi)(GLenum, GLint);
#define CALL_PixelTransferi(disp, parameters) \
    (* GET_PixelTransferi(disp)) parameters
static INLINE _glptr_PixelTransferi GET_PixelTransferi(struct _glapi_table *disp) {
   return (_glptr_PixelTransferi) (GET_by_offset(disp, _gloffset_PixelTransferi));
}

static INLINE void SET_PixelTransferi(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLint)) {
   SET_by_offset(disp, _gloffset_PixelTransferi, fn);
}

typedef void (GLAPIENTRYP _glptr_PixelStoref)(GLenum, GLfloat);
#define CALL_PixelStoref(disp, parameters) \
    (* GET_PixelStoref(disp)) parameters
static INLINE _glptr_PixelStoref GET_PixelStoref(struct _glapi_table *disp) {
   return (_glptr_PixelStoref) (GET_by_offset(disp, _gloffset_PixelStoref));
}

static INLINE void SET_PixelStoref(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLfloat)) {
   SET_by_offset(disp, _gloffset_PixelStoref, fn);
}

typedef void (GLAPIENTRYP _glptr_PixelStorei)(GLenum, GLint);
#define CALL_PixelStorei(disp, parameters) \
    (* GET_PixelStorei(disp)) parameters
static INLINE _glptr_PixelStorei GET_PixelStorei(struct _glapi_table *disp) {
   return (_glptr_PixelStorei) (GET_by_offset(disp, _gloffset_PixelStorei));
}

static INLINE void SET_PixelStorei(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLint)) {
   SET_by_offset(disp, _gloffset_PixelStorei, fn);
}

typedef void (GLAPIENTRYP _glptr_PixelMapfv)(GLenum, GLsizei, const GLfloat *);
#define CALL_PixelMapfv(disp, parameters) \
    (* GET_PixelMapfv(disp)) parameters
static INLINE _glptr_PixelMapfv GET_PixelMapfv(struct _glapi_table *disp) {
   return (_glptr_PixelMapfv) (GET_by_offset(disp, _gloffset_PixelMapfv));
}

static INLINE void SET_PixelMapfv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLsizei, const GLfloat *)) {
   SET_by_offset(disp, _gloffset_PixelMapfv, fn);
}

typedef void (GLAPIENTRYP _glptr_PixelMapuiv)(GLenum, GLsizei, const GLuint *);
#define CALL_PixelMapuiv(disp, parameters) \
    (* GET_PixelMapuiv(disp)) parameters
static INLINE _glptr_PixelMapuiv GET_PixelMapuiv(struct _glapi_table *disp) {
   return (_glptr_PixelMapuiv) (GET_by_offset(disp, _gloffset_PixelMapuiv));
}

static INLINE void SET_PixelMapuiv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLsizei, const GLuint *)) {
   SET_by_offset(disp, _gloffset_PixelMapuiv, fn);
}

typedef void (GLAPIENTRYP _glptr_PixelMapusv)(GLenum, GLsizei, const GLushort *);
#define CALL_PixelMapusv(disp, parameters) \
    (* GET_PixelMapusv(disp)) parameters
static INLINE _glptr_PixelMapusv GET_PixelMapusv(struct _glapi_table *disp) {
   return (_glptr_PixelMapusv) (GET_by_offset(disp, _gloffset_PixelMapusv));
}

static INLINE void SET_PixelMapusv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLsizei, const GLushort *)) {
   SET_by_offset(disp, _gloffset_PixelMapusv, fn);
}

typedef void (GLAPIENTRYP _glptr_ReadBuffer)(GLenum);
#define CALL_ReadBuffer(disp, parameters) \
    (* GET_ReadBuffer(disp)) parameters
static INLINE _glptr_ReadBuffer GET_ReadBuffer(struct _glapi_table *disp) {
   return (_glptr_ReadBuffer) (GET_by_offset(disp, _gloffset_ReadBuffer));
}

static INLINE void SET_ReadBuffer(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum)) {
   SET_by_offset(disp, _gloffset_ReadBuffer, fn);
}

typedef void (GLAPIENTRYP _glptr_CopyPixels)(GLint, GLint, GLsizei, GLsizei, GLenum);
#define CALL_CopyPixels(disp, parameters) \
    (* GET_CopyPixels(disp)) parameters
static INLINE _glptr_CopyPixels GET_CopyPixels(struct _glapi_table *disp) {
   return (_glptr_CopyPixels) (GET_by_offset(disp, _gloffset_CopyPixels));
}

static INLINE void SET_CopyPixels(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLint, GLsizei, GLsizei, GLenum)) {
   SET_by_offset(disp, _gloffset_CopyPixels, fn);
}

typedef void (GLAPIENTRYP _glptr_ReadPixels)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid *);
#define CALL_ReadPixels(disp, parameters) \
    (* GET_ReadPixels(disp)) parameters
static INLINE _glptr_ReadPixels GET_ReadPixels(struct _glapi_table *disp) {
   return (_glptr_ReadPixels) (GET_by_offset(disp, _gloffset_ReadPixels));
}

static INLINE void SET_ReadPixels(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid *)) {
   SET_by_offset(disp, _gloffset_ReadPixels, fn);
}

typedef void (GLAPIENTRYP _glptr_DrawPixels)(GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);
#define CALL_DrawPixels(disp, parameters) \
    (* GET_DrawPixels(disp)) parameters
static INLINE _glptr_DrawPixels GET_DrawPixels(struct _glapi_table *disp) {
   return (_glptr_DrawPixels) (GET_by_offset(disp, _gloffset_DrawPixels));
}

static INLINE void SET_DrawPixels(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLsizei, GLsizei, GLenum, GLenum, const GLvoid *)) {
   SET_by_offset(disp, _gloffset_DrawPixels, fn);
}

typedef void (GLAPIENTRYP _glptr_GetBooleanv)(GLenum, GLboolean *);
#define CALL_GetBooleanv(disp, parameters) \
    (* GET_GetBooleanv(disp)) parameters
static INLINE _glptr_GetBooleanv GET_GetBooleanv(struct _glapi_table *disp) {
   return (_glptr_GetBooleanv) (GET_by_offset(disp, _gloffset_GetBooleanv));
}

static INLINE void SET_GetBooleanv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLboolean *)) {
   SET_by_offset(disp, _gloffset_GetBooleanv, fn);
}

typedef void (GLAPIENTRYP _glptr_GetClipPlane)(GLenum, GLdouble *);
#define CALL_GetClipPlane(disp, parameters) \
    (* GET_GetClipPlane(disp)) parameters
static INLINE _glptr_GetClipPlane GET_GetClipPlane(struct _glapi_table *disp) {
   return (_glptr_GetClipPlane) (GET_by_offset(disp, _gloffset_GetClipPlane));
}

static INLINE void SET_GetClipPlane(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLdouble *)) {
   SET_by_offset(disp, _gloffset_GetClipPlane, fn);
}

typedef void (GLAPIENTRYP _glptr_GetDoublev)(GLenum, GLdouble *);
#define CALL_GetDoublev(disp, parameters) \
    (* GET_GetDoublev(disp)) parameters
static INLINE _glptr_GetDoublev GET_GetDoublev(struct _glapi_table *disp) {
   return (_glptr_GetDoublev) (GET_by_offset(disp, _gloffset_GetDoublev));
}

static INLINE void SET_GetDoublev(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLdouble *)) {
   SET_by_offset(disp, _gloffset_GetDoublev, fn);
}

typedef GLenum (GLAPIENTRYP _glptr_GetError)(void);
#define CALL_GetError(disp, parameters) \
    (* GET_GetError(disp)) parameters
static INLINE _glptr_GetError GET_GetError(struct _glapi_table *disp) {
   return (_glptr_GetError) (GET_by_offset(disp, _gloffset_GetError));
}

static INLINE void SET_GetError(struct _glapi_table *disp, GLenum (GLAPIENTRYP fn)(void)) {
   SET_by_offset(disp, _gloffset_GetError, fn);
}

typedef void (GLAPIENTRYP _glptr_GetFloatv)(GLenum, GLfloat *);
#define CALL_GetFloatv(disp, parameters) \
    (* GET_GetFloatv(disp)) parameters
static INLINE _glptr_GetFloatv GET_GetFloatv(struct _glapi_table *disp) {
   return (_glptr_GetFloatv) (GET_by_offset(disp, _gloffset_GetFloatv));
}

static INLINE void SET_GetFloatv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLfloat *)) {
   SET_by_offset(disp, _gloffset_GetFloatv, fn);
}

typedef void (GLAPIENTRYP _glptr_GetIntegerv)(GLenum, GLint *);
#define CALL_GetIntegerv(disp, parameters) \
    (* GET_GetIntegerv(disp)) parameters
static INLINE _glptr_GetIntegerv GET_GetIntegerv(struct _glapi_table *disp) {
   return (_glptr_GetIntegerv) (GET_by_offset(disp, _gloffset_GetIntegerv));
}

static INLINE void SET_GetIntegerv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLint *)) {
   SET_by_offset(disp, _gloffset_GetIntegerv, fn);
}

typedef void (GLAPIENTRYP _glptr_GetLightfv)(GLenum, GLenum, GLfloat *);
#define CALL_GetLightfv(disp, parameters) \
    (* GET_GetLightfv(disp)) parameters
static INLINE _glptr_GetLightfv GET_GetLightfv(struct _glapi_table *disp) {
   return (_glptr_GetLightfv) (GET_by_offset(disp, _gloffset_GetLightfv));
}

static INLINE void SET_GetLightfv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLfloat *)) {
   SET_by_offset(disp, _gloffset_GetLightfv, fn);
}

typedef void (GLAPIENTRYP _glptr_GetLightiv)(GLenum, GLenum, GLint *);
#define CALL_GetLightiv(disp, parameters) \
    (* GET_GetLightiv(disp)) parameters
static INLINE _glptr_GetLightiv GET_GetLightiv(struct _glapi_table *disp) {
   return (_glptr_GetLightiv) (GET_by_offset(disp, _gloffset_GetLightiv));
}

static INLINE void SET_GetLightiv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLint *)) {
   SET_by_offset(disp, _gloffset_GetLightiv, fn);
}

typedef void (GLAPIENTRYP _glptr_GetMapdv)(GLenum, GLenum, GLdouble *);
#define CALL_GetMapdv(disp, parameters) \
    (* GET_GetMapdv(disp)) parameters
static INLINE _glptr_GetMapdv GET_GetMapdv(struct _glapi_table *disp) {
   return (_glptr_GetMapdv) (GET_by_offset(disp, _gloffset_GetMapdv));
}

static INLINE void SET_GetMapdv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLdouble *)) {
   SET_by_offset(disp, _gloffset_GetMapdv, fn);
}

typedef void (GLAPIENTRYP _glptr_GetMapfv)(GLenum, GLenum, GLfloat *);
#define CALL_GetMapfv(disp, parameters) \
    (* GET_GetMapfv(disp)) parameters
static INLINE _glptr_GetMapfv GET_GetMapfv(struct _glapi_table *disp) {
   return (_glptr_GetMapfv) (GET_by_offset(disp, _gloffset_GetMapfv));
}

static INLINE void SET_GetMapfv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLfloat *)) {
   SET_by_offset(disp, _gloffset_GetMapfv, fn);
}

typedef void (GLAPIENTRYP _glptr_GetMapiv)(GLenum, GLenum, GLint *);
#define CALL_GetMapiv(disp, parameters) \
    (* GET_GetMapiv(disp)) parameters
static INLINE _glptr_GetMapiv GET_GetMapiv(struct _glapi_table *disp) {
   return (_glptr_GetMapiv) (GET_by_offset(disp, _gloffset_GetMapiv));
}

static INLINE void SET_GetMapiv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLint *)) {
   SET_by_offset(disp, _gloffset_GetMapiv, fn);
}

typedef void (GLAPIENTRYP _glptr_GetMaterialfv)(GLenum, GLenum, GLfloat *);
#define CALL_GetMaterialfv(disp, parameters) \
    (* GET_GetMaterialfv(disp)) parameters
static INLINE _glptr_GetMaterialfv GET_GetMaterialfv(struct _glapi_table *disp) {
   return (_glptr_GetMaterialfv) (GET_by_offset(disp, _gloffset_GetMaterialfv));
}

static INLINE void SET_GetMaterialfv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLfloat *)) {
   SET_by_offset(disp, _gloffset_GetMaterialfv, fn);
}

typedef void (GLAPIENTRYP _glptr_GetMaterialiv)(GLenum, GLenum, GLint *);
#define CALL_GetMaterialiv(disp, parameters) \
    (* GET_GetMaterialiv(disp)) parameters
static INLINE _glptr_GetMaterialiv GET_GetMaterialiv(struct _glapi_table *disp) {
   return (_glptr_GetMaterialiv) (GET_by_offset(disp, _gloffset_GetMaterialiv));
}

static INLINE void SET_GetMaterialiv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLint *)) {
   SET_by_offset(disp, _gloffset_GetMaterialiv, fn);
}

typedef void (GLAPIENTRYP _glptr_GetPixelMapfv)(GLenum, GLfloat *);
#define CALL_GetPixelMapfv(disp, parameters) \
    (* GET_GetPixelMapfv(disp)) parameters
static INLINE _glptr_GetPixelMapfv GET_GetPixelMapfv(struct _glapi_table *disp) {
   return (_glptr_GetPixelMapfv) (GET_by_offset(disp, _gloffset_GetPixelMapfv));
}

static INLINE void SET_GetPixelMapfv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLfloat *)) {
   SET_by_offset(disp, _gloffset_GetPixelMapfv, fn);
}

typedef void (GLAPIENTRYP _glptr_GetPixelMapuiv)(GLenum, GLuint *);
#define CALL_GetPixelMapuiv(disp, parameters) \
    (* GET_GetPixelMapuiv(disp)) parameters
static INLINE _glptr_GetPixelMapuiv GET_GetPixelMapuiv(struct _glapi_table *disp) {
   return (_glptr_GetPixelMapuiv) (GET_by_offset(disp, _gloffset_GetPixelMapuiv));
}

static INLINE void SET_GetPixelMapuiv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLuint *)) {
   SET_by_offset(disp, _gloffset_GetPixelMapuiv, fn);
}

typedef void (GLAPIENTRYP _glptr_GetPixelMapusv)(GLenum, GLushort *);
#define CALL_GetPixelMapusv(disp, parameters) \
    (* GET_GetPixelMapusv(disp)) parameters
static INLINE _glptr_GetPixelMapusv GET_GetPixelMapusv(struct _glapi_table *disp) {
   return (_glptr_GetPixelMapusv) (GET_by_offset(disp, _gloffset_GetPixelMapusv));
}

static INLINE void SET_GetPixelMapusv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLushort *)) {
   SET_by_offset(disp, _gloffset_GetPixelMapusv, fn);
}

typedef void (GLAPIENTRYP _glptr_GetPolygonStipple)(GLubyte *);
#define CALL_GetPolygonStipple(disp, parameters) \
    (* GET_GetPolygonStipple(disp)) parameters
static INLINE _glptr_GetPolygonStipple GET_GetPolygonStipple(struct _glapi_table *disp) {
   return (_glptr_GetPolygonStipple) (GET_by_offset(disp, _gloffset_GetPolygonStipple));
}

static INLINE void SET_GetPolygonStipple(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLubyte *)) {
   SET_by_offset(disp, _gloffset_GetPolygonStipple, fn);
}

typedef const GLubyte * (GLAPIENTRYP _glptr_GetString)(GLenum);
#define CALL_GetString(disp, parameters) \
    (* GET_GetString(disp)) parameters
static INLINE _glptr_GetString GET_GetString(struct _glapi_table *disp) {
   return (_glptr_GetString) (GET_by_offset(disp, _gloffset_GetString));
}

static INLINE void SET_GetString(struct _glapi_table *disp, const GLubyte * (GLAPIENTRYP fn)(GLenum)) {
   SET_by_offset(disp, _gloffset_GetString, fn);
}

typedef void (GLAPIENTRYP _glptr_GetTexEnvfv)(GLenum, GLenum, GLfloat *);
#define CALL_GetTexEnvfv(disp, parameters) \
    (* GET_GetTexEnvfv(disp)) parameters
static INLINE _glptr_GetTexEnvfv GET_GetTexEnvfv(struct _glapi_table *disp) {
   return (_glptr_GetTexEnvfv) (GET_by_offset(disp, _gloffset_GetTexEnvfv));
}

static INLINE void SET_GetTexEnvfv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLfloat *)) {
   SET_by_offset(disp, _gloffset_GetTexEnvfv, fn);
}

typedef void (GLAPIENTRYP _glptr_GetTexEnviv)(GLenum, GLenum, GLint *);
#define CALL_GetTexEnviv(disp, parameters) \
    (* GET_GetTexEnviv(disp)) parameters
static INLINE _glptr_GetTexEnviv GET_GetTexEnviv(struct _glapi_table *disp) {
   return (_glptr_GetTexEnviv) (GET_by_offset(disp, _gloffset_GetTexEnviv));
}

static INLINE void SET_GetTexEnviv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLint *)) {
   SET_by_offset(disp, _gloffset_GetTexEnviv, fn);
}

typedef void (GLAPIENTRYP _glptr_GetTexGendv)(GLenum, GLenum, GLdouble *);
#define CALL_GetTexGendv(disp, parameters) \
    (* GET_GetTexGendv(disp)) parameters
static INLINE _glptr_GetTexGendv GET_GetTexGendv(struct _glapi_table *disp) {
   return (_glptr_GetTexGendv) (GET_by_offset(disp, _gloffset_GetTexGendv));
}

static INLINE void SET_GetTexGendv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLdouble *)) {
   SET_by_offset(disp, _gloffset_GetTexGendv, fn);
}

typedef void (GLAPIENTRYP _glptr_GetTexGenfv)(GLenum, GLenum, GLfloat *);
#define CALL_GetTexGenfv(disp, parameters) \
    (* GET_GetTexGenfv(disp)) parameters
static INLINE _glptr_GetTexGenfv GET_GetTexGenfv(struct _glapi_table *disp) {
   return (_glptr_GetTexGenfv) (GET_by_offset(disp, _gloffset_GetTexGenfv));
}

static INLINE void SET_GetTexGenfv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLfloat *)) {
   SET_by_offset(disp, _gloffset_GetTexGenfv, fn);
}

typedef void (GLAPIENTRYP _glptr_GetTexGeniv)(GLenum, GLenum, GLint *);
#define CALL_GetTexGeniv(disp, parameters) \
    (* GET_GetTexGeniv(disp)) parameters
static INLINE _glptr_GetTexGeniv GET_GetTexGeniv(struct _glapi_table *disp) {
   return (_glptr_GetTexGeniv) (GET_by_offset(disp, _gloffset_GetTexGeniv));
}

static INLINE void SET_GetTexGeniv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLint *)) {
   SET_by_offset(disp, _gloffset_GetTexGeniv, fn);
}

typedef void (GLAPIENTRYP _glptr_GetTexImage)(GLenum, GLint, GLenum, GLenum, GLvoid *);
#define CALL_GetTexImage(disp, parameters) \
    (* GET_GetTexImage(disp)) parameters
static INLINE _glptr_GetTexImage GET_GetTexImage(struct _glapi_table *disp) {
   return (_glptr_GetTexImage) (GET_by_offset(disp, _gloffset_GetTexImage));
}

static INLINE void SET_GetTexImage(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLint, GLenum, GLenum, GLvoid *)) {
   SET_by_offset(disp, _gloffset_GetTexImage, fn);
}

typedef void (GLAPIENTRYP _glptr_GetTexParameterfv)(GLenum, GLenum, GLfloat *);
#define CALL_GetTexParameterfv(disp, parameters) \
    (* GET_GetTexParameterfv(disp)) parameters
static INLINE _glptr_GetTexParameterfv GET_GetTexParameterfv(struct _glapi_table *disp) {
   return (_glptr_GetTexParameterfv) (GET_by_offset(disp, _gloffset_GetTexParameterfv));
}

static INLINE void SET_GetTexParameterfv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLfloat *)) {
   SET_by_offset(disp, _gloffset_GetTexParameterfv, fn);
}

typedef void (GLAPIENTRYP _glptr_GetTexParameteriv)(GLenum, GLenum, GLint *);
#define CALL_GetTexParameteriv(disp, parameters) \
    (* GET_GetTexParameteriv(disp)) parameters
static INLINE _glptr_GetTexParameteriv GET_GetTexParameteriv(struct _glapi_table *disp) {
   return (_glptr_GetTexParameteriv) (GET_by_offset(disp, _gloffset_GetTexParameteriv));
}

static INLINE void SET_GetTexParameteriv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLint *)) {
   SET_by_offset(disp, _gloffset_GetTexParameteriv, fn);
}

typedef void (GLAPIENTRYP _glptr_GetTexLevelParameterfv)(GLenum, GLint, GLenum, GLfloat *);
#define CALL_GetTexLevelParameterfv(disp, parameters) \
    (* GET_GetTexLevelParameterfv(disp)) parameters
static INLINE _glptr_GetTexLevelParameterfv GET_GetTexLevelParameterfv(struct _glapi_table *disp) {
   return (_glptr_GetTexLevelParameterfv) (GET_by_offset(disp, _gloffset_GetTexLevelParameterfv));
}

static INLINE void SET_GetTexLevelParameterfv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLint, GLenum, GLfloat *)) {
   SET_by_offset(disp, _gloffset_GetTexLevelParameterfv, fn);
}

typedef void (GLAPIENTRYP _glptr_GetTexLevelParameteriv)(GLenum, GLint, GLenum, GLint *);
#define CALL_GetTexLevelParameteriv(disp, parameters) \
    (* GET_GetTexLevelParameteriv(disp)) parameters
static INLINE _glptr_GetTexLevelParameteriv GET_GetTexLevelParameteriv(struct _glapi_table *disp) {
   return (_glptr_GetTexLevelParameteriv) (GET_by_offset(disp, _gloffset_GetTexLevelParameteriv));
}

static INLINE void SET_GetTexLevelParameteriv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLint, GLenum, GLint *)) {
   SET_by_offset(disp, _gloffset_GetTexLevelParameteriv, fn);
}

typedef GLboolean (GLAPIENTRYP _glptr_IsEnabled)(GLenum);
#define CALL_IsEnabled(disp, parameters) \
    (* GET_IsEnabled(disp)) parameters
static INLINE _glptr_IsEnabled GET_IsEnabled(struct _glapi_table *disp) {
   return (_glptr_IsEnabled) (GET_by_offset(disp, _gloffset_IsEnabled));
}

static INLINE void SET_IsEnabled(struct _glapi_table *disp, GLboolean (GLAPIENTRYP fn)(GLenum)) {
   SET_by_offset(disp, _gloffset_IsEnabled, fn);
}

typedef GLboolean (GLAPIENTRYP _glptr_IsList)(GLuint);
#define CALL_IsList(disp, parameters) \
    (* GET_IsList(disp)) parameters
static INLINE _glptr_IsList GET_IsList(struct _glapi_table *disp) {
   return (_glptr_IsList) (GET_by_offset(disp, _gloffset_IsList));
}

static INLINE void SET_IsList(struct _glapi_table *disp, GLboolean (GLAPIENTRYP fn)(GLuint)) {
   SET_by_offset(disp, _gloffset_IsList, fn);
}

typedef void (GLAPIENTRYP _glptr_DepthRange)(GLclampd, GLclampd);
#define CALL_DepthRange(disp, parameters) \
    (* GET_DepthRange(disp)) parameters
static INLINE _glptr_DepthRange GET_DepthRange(struct _glapi_table *disp) {
   return (_glptr_DepthRange) (GET_by_offset(disp, _gloffset_DepthRange));
}

static INLINE void SET_DepthRange(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLclampd, GLclampd)) {
   SET_by_offset(disp, _gloffset_DepthRange, fn);
}

typedef void (GLAPIENTRYP _glptr_Frustum)(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble);
#define CALL_Frustum(disp, parameters) \
    (* GET_Frustum(disp)) parameters
static INLINE _glptr_Frustum GET_Frustum(struct _glapi_table *disp) {
   return (_glptr_Frustum) (GET_by_offset(disp, _gloffset_Frustum));
}

static INLINE void SET_Frustum(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble)) {
   SET_by_offset(disp, _gloffset_Frustum, fn);
}

typedef void (GLAPIENTRYP _glptr_LoadIdentity)(void);
#define CALL_LoadIdentity(disp, parameters) \
    (* GET_LoadIdentity(disp)) parameters
static INLINE _glptr_LoadIdentity GET_LoadIdentity(struct _glapi_table *disp) {
   return (_glptr_LoadIdentity) (GET_by_offset(disp, _gloffset_LoadIdentity));
}

static INLINE void SET_LoadIdentity(struct _glapi_table *disp, void (GLAPIENTRYP fn)(void)) {
   SET_by_offset(disp, _gloffset_LoadIdentity, fn);
}

typedef void (GLAPIENTRYP _glptr_LoadMatrixf)(const GLfloat *);
#define CALL_LoadMatrixf(disp, parameters) \
    (* GET_LoadMatrixf(disp)) parameters
static INLINE _glptr_LoadMatrixf GET_LoadMatrixf(struct _glapi_table *disp) {
   return (_glptr_LoadMatrixf) (GET_by_offset(disp, _gloffset_LoadMatrixf));
}

static INLINE void SET_LoadMatrixf(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLfloat *)) {
   SET_by_offset(disp, _gloffset_LoadMatrixf, fn);
}

typedef void (GLAPIENTRYP _glptr_LoadMatrixd)(const GLdouble *);
#define CALL_LoadMatrixd(disp, parameters) \
    (* GET_LoadMatrixd(disp)) parameters
static INLINE _glptr_LoadMatrixd GET_LoadMatrixd(struct _glapi_table *disp) {
   return (_glptr_LoadMatrixd) (GET_by_offset(disp, _gloffset_LoadMatrixd));
}

static INLINE void SET_LoadMatrixd(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLdouble *)) {
   SET_by_offset(disp, _gloffset_LoadMatrixd, fn);
}

typedef void (GLAPIENTRYP _glptr_MatrixMode)(GLenum);
#define CALL_MatrixMode(disp, parameters) \
    (* GET_MatrixMode(disp)) parameters
static INLINE _glptr_MatrixMode GET_MatrixMode(struct _glapi_table *disp) {
   return (_glptr_MatrixMode) (GET_by_offset(disp, _gloffset_MatrixMode));
}

static INLINE void SET_MatrixMode(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum)) {
   SET_by_offset(disp, _gloffset_MatrixMode, fn);
}

typedef void (GLAPIENTRYP _glptr_MultMatrixf)(const GLfloat *);
#define CALL_MultMatrixf(disp, parameters) \
    (* GET_MultMatrixf(disp)) parameters
static INLINE _glptr_MultMatrixf GET_MultMatrixf(struct _glapi_table *disp) {
   return (_glptr_MultMatrixf) (GET_by_offset(disp, _gloffset_MultMatrixf));
}

static INLINE void SET_MultMatrixf(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLfloat *)) {
   SET_by_offset(disp, _gloffset_MultMatrixf, fn);
}

typedef void (GLAPIENTRYP _glptr_MultMatrixd)(const GLdouble *);
#define CALL_MultMatrixd(disp, parameters) \
    (* GET_MultMatrixd(disp)) parameters
static INLINE _glptr_MultMatrixd GET_MultMatrixd(struct _glapi_table *disp) {
   return (_glptr_MultMatrixd) (GET_by_offset(disp, _gloffset_MultMatrixd));
}

static INLINE void SET_MultMatrixd(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLdouble *)) {
   SET_by_offset(disp, _gloffset_MultMatrixd, fn);
}

typedef void (GLAPIENTRYP _glptr_Ortho)(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble);
#define CALL_Ortho(disp, parameters) \
    (* GET_Ortho(disp)) parameters
static INLINE _glptr_Ortho GET_Ortho(struct _glapi_table *disp) {
   return (_glptr_Ortho) (GET_by_offset(disp, _gloffset_Ortho));
}

static INLINE void SET_Ortho(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble)) {
   SET_by_offset(disp, _gloffset_Ortho, fn);
}

typedef void (GLAPIENTRYP _glptr_PopMatrix)(void);
#define CALL_PopMatrix(disp, parameters) \
    (* GET_PopMatrix(disp)) parameters
static INLINE _glptr_PopMatrix GET_PopMatrix(struct _glapi_table *disp) {
   return (_glptr_PopMatrix) (GET_by_offset(disp, _gloffset_PopMatrix));
}

static INLINE void SET_PopMatrix(struct _glapi_table *disp, void (GLAPIENTRYP fn)(void)) {
   SET_by_offset(disp, _gloffset_PopMatrix, fn);
}

typedef void (GLAPIENTRYP _glptr_PushMatrix)(void);
#define CALL_PushMatrix(disp, parameters) \
    (* GET_PushMatrix(disp)) parameters
static INLINE _glptr_PushMatrix GET_PushMatrix(struct _glapi_table *disp) {
   return (_glptr_PushMatrix) (GET_by_offset(disp, _gloffset_PushMatrix));
}

static INLINE void SET_PushMatrix(struct _glapi_table *disp, void (GLAPIENTRYP fn)(void)) {
   SET_by_offset(disp, _gloffset_PushMatrix, fn);
}

typedef void (GLAPIENTRYP _glptr_Rotated)(GLdouble, GLdouble, GLdouble, GLdouble);
#define CALL_Rotated(disp, parameters) \
    (* GET_Rotated(disp)) parameters
static INLINE _glptr_Rotated GET_Rotated(struct _glapi_table *disp) {
   return (_glptr_Rotated) (GET_by_offset(disp, _gloffset_Rotated));
}

static INLINE void SET_Rotated(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLdouble, GLdouble, GLdouble, GLdouble)) {
   SET_by_offset(disp, _gloffset_Rotated, fn);
}

typedef void (GLAPIENTRYP _glptr_Rotatef)(GLfloat, GLfloat, GLfloat, GLfloat);
#define CALL_Rotatef(disp, parameters) \
    (* GET_Rotatef(disp)) parameters
static INLINE _glptr_Rotatef GET_Rotatef(struct _glapi_table *disp) {
   return (_glptr_Rotatef) (GET_by_offset(disp, _gloffset_Rotatef));
}

static INLINE void SET_Rotatef(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat, GLfloat)) {
   SET_by_offset(disp, _gloffset_Rotatef, fn);
}

typedef void (GLAPIENTRYP _glptr_Scaled)(GLdouble, GLdouble, GLdouble);
#define CALL_Scaled(disp, parameters) \
    (* GET_Scaled(disp)) parameters
static INLINE _glptr_Scaled GET_Scaled(struct _glapi_table *disp) {
   return (_glptr_Scaled) (GET_by_offset(disp, _gloffset_Scaled));
}

static INLINE void SET_Scaled(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLdouble, GLdouble, GLdouble)) {
   SET_by_offset(disp, _gloffset_Scaled, fn);
}

typedef void (GLAPIENTRYP _glptr_Scalef)(GLfloat, GLfloat, GLfloat);
#define CALL_Scalef(disp, parameters) \
    (* GET_Scalef(disp)) parameters
static INLINE _glptr_Scalef GET_Scalef(struct _glapi_table *disp) {
   return (_glptr_Scalef) (GET_by_offset(disp, _gloffset_Scalef));
}

static INLINE void SET_Scalef(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat)) {
   SET_by_offset(disp, _gloffset_Scalef, fn);
}

typedef void (GLAPIENTRYP _glptr_Translated)(GLdouble, GLdouble, GLdouble);
#define CALL_Translated(disp, parameters) \
    (* GET_Translated(disp)) parameters
static INLINE _glptr_Translated GET_Translated(struct _glapi_table *disp) {
   return (_glptr_Translated) (GET_by_offset(disp, _gloffset_Translated));
}

static INLINE void SET_Translated(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLdouble, GLdouble, GLdouble)) {
   SET_by_offset(disp, _gloffset_Translated, fn);
}

typedef void (GLAPIENTRYP _glptr_Translatef)(GLfloat, GLfloat, GLfloat);
#define CALL_Translatef(disp, parameters) \
    (* GET_Translatef(disp)) parameters
static INLINE _glptr_Translatef GET_Translatef(struct _glapi_table *disp) {
   return (_glptr_Translatef) (GET_by_offset(disp, _gloffset_Translatef));
}

static INLINE void SET_Translatef(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat)) {
   SET_by_offset(disp, _gloffset_Translatef, fn);
}

typedef void (GLAPIENTRYP _glptr_Viewport)(GLint, GLint, GLsizei, GLsizei);
#define CALL_Viewport(disp, parameters) \
    (* GET_Viewport(disp)) parameters
static INLINE _glptr_Viewport GET_Viewport(struct _glapi_table *disp) {
   return (_glptr_Viewport) (GET_by_offset(disp, _gloffset_Viewport));
}

static INLINE void SET_Viewport(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLint, GLsizei, GLsizei)) {
   SET_by_offset(disp, _gloffset_Viewport, fn);
}

typedef void (GLAPIENTRYP _glptr_ArrayElement)(GLint);
#define CALL_ArrayElement(disp, parameters) \
    (* GET_ArrayElement(disp)) parameters
static INLINE _glptr_ArrayElement GET_ArrayElement(struct _glapi_table *disp) {
   return (_glptr_ArrayElement) (GET_by_offset(disp, _gloffset_ArrayElement));
}

static INLINE void SET_ArrayElement(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint)) {
   SET_by_offset(disp, _gloffset_ArrayElement, fn);
}

typedef void (GLAPIENTRYP _glptr_BindTexture)(GLenum, GLuint);
#define CALL_BindTexture(disp, parameters) \
    (* GET_BindTexture(disp)) parameters
static INLINE _glptr_BindTexture GET_BindTexture(struct _glapi_table *disp) {
   return (_glptr_BindTexture) (GET_by_offset(disp, _gloffset_BindTexture));
}

static INLINE void SET_BindTexture(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLuint)) {
   SET_by_offset(disp, _gloffset_BindTexture, fn);
}

typedef void (GLAPIENTRYP _glptr_ColorPointer)(GLint, GLenum, GLsizei, const GLvoid *);
#define CALL_ColorPointer(disp, parameters) \
    (* GET_ColorPointer(disp)) parameters
static INLINE _glptr_ColorPointer GET_ColorPointer(struct _glapi_table *disp) {
   return (_glptr_ColorPointer) (GET_by_offset(disp, _gloffset_ColorPointer));
}

static INLINE void SET_ColorPointer(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLenum, GLsizei, const GLvoid *)) {
   SET_by_offset(disp, _gloffset_ColorPointer, fn);
}

typedef void (GLAPIENTRYP _glptr_DisableClientState)(GLenum);
#define CALL_DisableClientState(disp, parameters) \
    (* GET_DisableClientState(disp)) parameters
static INLINE _glptr_DisableClientState GET_DisableClientState(struct _glapi_table *disp) {
   return (_glptr_DisableClientState) (GET_by_offset(disp, _gloffset_DisableClientState));
}

static INLINE void SET_DisableClientState(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum)) {
   SET_by_offset(disp, _gloffset_DisableClientState, fn);
}

typedef void (GLAPIENTRYP _glptr_DrawArrays)(GLenum, GLint, GLsizei);
#define CALL_DrawArrays(disp, parameters) \
    (* GET_DrawArrays(disp)) parameters
static INLINE _glptr_DrawArrays GET_DrawArrays(struct _glapi_table *disp) {
   return (_glptr_DrawArrays) (GET_by_offset(disp, _gloffset_DrawArrays));
}

static INLINE void SET_DrawArrays(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLint, GLsizei)) {
   SET_by_offset(disp, _gloffset_DrawArrays, fn);
}

typedef void (GLAPIENTRYP _glptr_DrawElements)(GLenum, GLsizei, GLenum, const GLvoid *);
#define CALL_DrawElements(disp, parameters) \
    (* GET_DrawElements(disp)) parameters
static INLINE _glptr_DrawElements GET_DrawElements(struct _glapi_table *disp) {
   return (_glptr_DrawElements) (GET_by_offset(disp, _gloffset_DrawElements));
}

static INLINE void SET_DrawElements(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLsizei, GLenum, const GLvoid *)) {
   SET_by_offset(disp, _gloffset_DrawElements, fn);
}

typedef void (GLAPIENTRYP _glptr_EdgeFlagPointer)(GLsizei, const GLvoid *);
#define CALL_EdgeFlagPointer(disp, parameters) \
    (* GET_EdgeFlagPointer(disp)) parameters
static INLINE _glptr_EdgeFlagPointer GET_EdgeFlagPointer(struct _glapi_table *disp) {
   return (_glptr_EdgeFlagPointer) (GET_by_offset(disp, _gloffset_EdgeFlagPointer));
}

static INLINE void SET_EdgeFlagPointer(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLsizei, const GLvoid *)) {
   SET_by_offset(disp, _gloffset_EdgeFlagPointer, fn);
}

typedef void (GLAPIENTRYP _glptr_EnableClientState)(GLenum);
#define CALL_EnableClientState(disp, parameters) \
    (* GET_EnableClientState(disp)) parameters
static INLINE _glptr_EnableClientState GET_EnableClientState(struct _glapi_table *disp) {
   return (_glptr_EnableClientState) (GET_by_offset(disp, _gloffset_EnableClientState));
}

static INLINE void SET_EnableClientState(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum)) {
   SET_by_offset(disp, _gloffset_EnableClientState, fn);
}

typedef void (GLAPIENTRYP _glptr_IndexPointer)(GLenum, GLsizei, const GLvoid *);
#define CALL_IndexPointer(disp, parameters) \
    (* GET_IndexPointer(disp)) parameters
static INLINE _glptr_IndexPointer GET_IndexPointer(struct _glapi_table *disp) {
   return (_glptr_IndexPointer) (GET_by_offset(disp, _gloffset_IndexPointer));
}

static INLINE void SET_IndexPointer(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLsizei, const GLvoid *)) {
   SET_by_offset(disp, _gloffset_IndexPointer, fn);
}

typedef void (GLAPIENTRYP _glptr_Indexub)(GLubyte);
#define CALL_Indexub(disp, parameters) \
    (* GET_Indexub(disp)) parameters
static INLINE _glptr_Indexub GET_Indexub(struct _glapi_table *disp) {
   return (_glptr_Indexub) (GET_by_offset(disp, _gloffset_Indexub));
}

static INLINE void SET_Indexub(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLubyte)) {
   SET_by_offset(disp, _gloffset_Indexub, fn);
}

typedef void (GLAPIENTRYP _glptr_Indexubv)(const GLubyte *);
#define CALL_Indexubv(disp, parameters) \
    (* GET_Indexubv(disp)) parameters
static INLINE _glptr_Indexubv GET_Indexubv(struct _glapi_table *disp) {
   return (_glptr_Indexubv) (GET_by_offset(disp, _gloffset_Indexubv));
}

static INLINE void SET_Indexubv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(const GLubyte *)) {
   SET_by_offset(disp, _gloffset_Indexubv, fn);
}

typedef void (GLAPIENTRYP _glptr_InterleavedArrays)(GLenum, GLsizei, const GLvoid *);
#define CALL_InterleavedArrays(disp, parameters) \
    (* GET_InterleavedArrays(disp)) parameters
static INLINE _glptr_InterleavedArrays GET_InterleavedArrays(struct _glapi_table *disp) {
   return (_glptr_InterleavedArrays) (GET_by_offset(disp, _gloffset_InterleavedArrays));
}

static INLINE void SET_InterleavedArrays(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLsizei, const GLvoid *)) {
   SET_by_offset(disp, _gloffset_InterleavedArrays, fn);
}

typedef void (GLAPIENTRYP _glptr_NormalPointer)(GLenum, GLsizei, const GLvoid *);
#define CALL_NormalPointer(disp, parameters) \
    (* GET_NormalPointer(disp)) parameters
static INLINE _glptr_NormalPointer GET_NormalPointer(struct _glapi_table *disp) {
   return (_glptr_NormalPointer) (GET_by_offset(disp, _gloffset_NormalPointer));
}

static INLINE void SET_NormalPointer(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLsizei, const GLvoid *)) {
   SET_by_offset(disp, _gloffset_NormalPointer, fn);
}

typedef void (GLAPIENTRYP _glptr_PolygonOffset)(GLfloat, GLfloat);
#define CALL_PolygonOffset(disp, parameters) \
    (* GET_PolygonOffset(disp)) parameters
static INLINE _glptr_PolygonOffset GET_PolygonOffset(struct _glapi_table *disp) {
   return (_glptr_PolygonOffset) (GET_by_offset(disp, _gloffset_PolygonOffset));
}

static INLINE void SET_PolygonOffset(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLfloat, GLfloat)) {
   SET_by_offset(disp, _gloffset_PolygonOffset, fn);
}

typedef void (GLAPIENTRYP _glptr_TexCoordPointer)(GLint, GLenum, GLsizei, const GLvoid *);
#define CALL_TexCoordPointer(disp, parameters) \
    (* GET_TexCoordPointer(disp)) parameters
static INLINE _glptr_TexCoordPointer GET_TexCoordPointer(struct _glapi_table *disp) {
   return (_glptr_TexCoordPointer) (GET_by_offset(disp, _gloffset_TexCoordPointer));
}

static INLINE void SET_TexCoordPointer(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLenum, GLsizei, const GLvoid *)) {
   SET_by_offset(disp, _gloffset_TexCoordPointer, fn);
}

typedef void (GLAPIENTRYP _glptr_VertexPointer)(GLint, GLenum, GLsizei, const GLvoid *);
#define CALL_VertexPointer(disp, parameters) \
    (* GET_VertexPointer(disp)) parameters
static INLINE _glptr_VertexPointer GET_VertexPointer(struct _glapi_table *disp) {
   return (_glptr_VertexPointer) (GET_by_offset(disp, _gloffset_VertexPointer));
}

static INLINE void SET_VertexPointer(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLenum, GLsizei, const GLvoid *)) {
   SET_by_offset(disp, _gloffset_VertexPointer, fn);
}

typedef GLboolean (GLAPIENTRYP _glptr_AreTexturesResident)(GLsizei, const GLuint *, GLboolean *);
#define CALL_AreTexturesResident(disp, parameters) \
    (* GET_AreTexturesResident(disp)) parameters
static INLINE _glptr_AreTexturesResident GET_AreTexturesResident(struct _glapi_table *disp) {
   return (_glptr_AreTexturesResident) (GET_by_offset(disp, _gloffset_AreTexturesResident));
}

static INLINE void SET_AreTexturesResident(struct _glapi_table *disp, GLboolean (GLAPIENTRYP fn)(GLsizei, const GLuint *, GLboolean *)) {
   SET_by_offset(disp, _gloffset_AreTexturesResident, fn);
}

typedef void (GLAPIENTRYP _glptr_CopyTexImage1D)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint);
#define CALL_CopyTexImage1D(disp, parameters) \
    (* GET_CopyTexImage1D(disp)) parameters
static INLINE _glptr_CopyTexImage1D GET_CopyTexImage1D(struct _glapi_table *disp) {
   return (_glptr_CopyTexImage1D) (GET_by_offset(disp, _gloffset_CopyTexImage1D));
}

static INLINE void SET_CopyTexImage1D(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint)) {
   SET_by_offset(disp, _gloffset_CopyTexImage1D, fn);
}

typedef void (GLAPIENTRYP _glptr_CopyTexImage2D)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint);
#define CALL_CopyTexImage2D(disp, parameters) \
    (* GET_CopyTexImage2D(disp)) parameters
static INLINE _glptr_CopyTexImage2D GET_CopyTexImage2D(struct _glapi_table *disp) {
   return (_glptr_CopyTexImage2D) (GET_by_offset(disp, _gloffset_CopyTexImage2D));
}

static INLINE void SET_CopyTexImage2D(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint)) {
   SET_by_offset(disp, _gloffset_CopyTexImage2D, fn);
}

typedef void (GLAPIENTRYP _glptr_CopyTexSubImage1D)(GLenum, GLint, GLint, GLint, GLint, GLsizei);
#define CALL_CopyTexSubImage1D(disp, parameters) \
    (* GET_CopyTexSubImage1D(disp)) parameters
static INLINE _glptr_CopyTexSubImage1D GET_CopyTexSubImage1D(struct _glapi_table *disp) {
   return (_glptr_CopyTexSubImage1D) (GET_by_offset(disp, _gloffset_CopyTexSubImage1D));
}

static INLINE void SET_CopyTexSubImage1D(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLint, GLint, GLint, GLint, GLsizei)) {
   SET_by_offset(disp, _gloffset_CopyTexSubImage1D, fn);
}

typedef void (GLAPIENTRYP _glptr_CopyTexSubImage2D)(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
#define CALL_CopyTexSubImage2D(disp, parameters) \
    (* GET_CopyTexSubImage2D(disp)) parameters
static INLINE _glptr_CopyTexSubImage2D GET_CopyTexSubImage2D(struct _glapi_table *disp) {
   return (_glptr_CopyTexSubImage2D) (GET_by_offset(disp, _gloffset_CopyTexSubImage2D));
}

static INLINE void SET_CopyTexSubImage2D(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei)) {
   SET_by_offset(disp, _gloffset_CopyTexSubImage2D, fn);
}

typedef void (GLAPIENTRYP _glptr_DeleteTextures)(GLsizei, const GLuint *);
#define CALL_DeleteTextures(disp, parameters) \
    (* GET_DeleteTextures(disp)) parameters
static INLINE _glptr_DeleteTextures GET_DeleteTextures(struct _glapi_table *disp) {
   return (_glptr_DeleteTextures) (GET_by_offset(disp, _gloffset_DeleteTextures));
}

static INLINE void SET_DeleteTextures(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLsizei, const GLuint *)) {
   SET_by_offset(disp, _gloffset_DeleteTextures, fn);
}

typedef void (GLAPIENTRYP _glptr_GenTextures)(GLsizei, GLuint *);
#define CALL_GenTextures(disp, parameters) \
    (* GET_GenTextures(disp)) parameters
static INLINE _glptr_GenTextures GET_GenTextures(struct _glapi_table *disp) {
   return (_glptr_GenTextures) (GET_by_offset(disp, _gloffset_GenTextures));
}

static INLINE void SET_GenTextures(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLsizei, GLuint *)) {
   SET_by_offset(disp, _gloffset_GenTextures, fn);
}

typedef void (GLAPIENTRYP _glptr_GetPointerv)(GLenum, GLvoid **);
#define CALL_GetPointerv(disp, parameters) \
    (* GET_GetPointerv(disp)) parameters
static INLINE _glptr_GetPointerv GET_GetPointerv(struct _glapi_table *disp) {
   return (_glptr_GetPointerv) (GET_by_offset(disp, _gloffset_GetPointerv));
}

static INLINE void SET_GetPointerv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLvoid **)) {
   SET_by_offset(disp, _gloffset_GetPointerv, fn);
}

typedef GLboolean (GLAPIENTRYP _glptr_IsTexture)(GLuint);
#define CALL_IsTexture(disp, parameters) \
    (* GET_IsTexture(disp)) parameters
static INLINE _glptr_IsTexture GET_IsTexture(struct _glapi_table *disp) {
   return (_glptr_IsTexture) (GET_by_offset(disp, _gloffset_IsTexture));
}

static INLINE void SET_IsTexture(struct _glapi_table *disp, GLboolean (GLAPIENTRYP fn)(GLuint)) {
   SET_by_offset(disp, _gloffset_IsTexture, fn);
}

typedef void (GLAPIENTRYP _glptr_PrioritizeTextures)(GLsizei, const GLuint *, const GLclampf *);
#define CALL_PrioritizeTextures(disp, parameters) \
    (* GET_PrioritizeTextures(disp)) parameters
static INLINE _glptr_PrioritizeTextures GET_PrioritizeTextures(struct _glapi_table *disp) {
   return (_glptr_PrioritizeTextures) (GET_by_offset(disp, _gloffset_PrioritizeTextures));
}

static INLINE void SET_PrioritizeTextures(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLsizei, const GLuint *, const GLclampf *)) {
   SET_by_offset(disp, _gloffset_PrioritizeTextures, fn);
}

typedef void (GLAPIENTRYP _glptr_TexSubImage1D)(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *);
#define CALL_TexSubImage1D(disp, parameters) \
    (* GET_TexSubImage1D(disp)) parameters
static INLINE _glptr_TexSubImage1D GET_TexSubImage1D(struct _glapi_table *disp) {
   return (_glptr_TexSubImage1D) (GET_by_offset(disp, _gloffset_TexSubImage1D));
}

static INLINE void SET_TexSubImage1D(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *)) {
   SET_by_offset(disp, _gloffset_TexSubImage1D, fn);
}

typedef void (GLAPIENTRYP _glptr_TexSubImage2D)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);
#define CALL_TexSubImage2D(disp, parameters) \
    (* GET_TexSubImage2D(disp)) parameters
static INLINE _glptr_TexSubImage2D GET_TexSubImage2D(struct _glapi_table *disp) {
   return (_glptr_TexSubImage2D) (GET_by_offset(disp, _gloffset_TexSubImage2D));
}

static INLINE void SET_TexSubImage2D(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *)) {
   SET_by_offset(disp, _gloffset_TexSubImage2D, fn);
}

typedef void (GLAPIENTRYP _glptr_PopClientAttrib)(void);
#define CALL_PopClientAttrib(disp, parameters) \
    (* GET_PopClientAttrib(disp)) parameters
static INLINE _glptr_PopClientAttrib GET_PopClientAttrib(struct _glapi_table *disp) {
   return (_glptr_PopClientAttrib) (GET_by_offset(disp, _gloffset_PopClientAttrib));
}

static INLINE void SET_PopClientAttrib(struct _glapi_table *disp, void (GLAPIENTRYP fn)(void)) {
   SET_by_offset(disp, _gloffset_PopClientAttrib, fn);
}

typedef void (GLAPIENTRYP _glptr_PushClientAttrib)(GLbitfield);
#define CALL_PushClientAttrib(disp, parameters) \
    (* GET_PushClientAttrib(disp)) parameters
static INLINE _glptr_PushClientAttrib GET_PushClientAttrib(struct _glapi_table *disp) {
   return (_glptr_PushClientAttrib) (GET_by_offset(disp, _gloffset_PushClientAttrib));
}

static INLINE void SET_PushClientAttrib(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLbitfield)) {
   SET_by_offset(disp, _gloffset_PushClientAttrib, fn);
}

typedef void (GLAPIENTRYP _glptr_BlendColor)(GLclampf, GLclampf, GLclampf, GLclampf);
#define CALL_BlendColor(disp, parameters) \
    (* GET_BlendColor(disp)) parameters
static INLINE _glptr_BlendColor GET_BlendColor(struct _glapi_table *disp) {
   return (_glptr_BlendColor) (GET_by_offset(disp, _gloffset_BlendColor));
}

static INLINE void SET_BlendColor(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLclampf, GLclampf, GLclampf, GLclampf)) {
   SET_by_offset(disp, _gloffset_BlendColor, fn);
}

typedef void (GLAPIENTRYP _glptr_BlendEquation)(GLenum);
#define CALL_BlendEquation(disp, parameters) \
    (* GET_BlendEquation(disp)) parameters
static INLINE _glptr_BlendEquation GET_BlendEquation(struct _glapi_table *disp) {
   return (_glptr_BlendEquation) (GET_by_offset(disp, _gloffset_BlendEquation));
}

static INLINE void SET_BlendEquation(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum)) {
   SET_by_offset(disp, _gloffset_BlendEquation, fn);
}

typedef void (GLAPIENTRYP _glptr_DrawRangeElements)(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *);
#define CALL_DrawRangeElements(disp, parameters) \
    (* GET_DrawRangeElements(disp)) parameters
static INLINE _glptr_DrawRangeElements GET_DrawRangeElements(struct _glapi_table *disp) {
   return (_glptr_DrawRangeElements) (GET_by_offset(disp, _gloffset_DrawRangeElements));
}

static INLINE void SET_DrawRangeElements(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *)) {
   SET_by_offset(disp, _gloffset_DrawRangeElements, fn);
}

typedef void (GLAPIENTRYP _glptr_ColorTable)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *);
#define CALL_ColorTable(disp, parameters) \
    (* GET_ColorTable(disp)) parameters
static INLINE _glptr_ColorTable GET_ColorTable(struct _glapi_table *disp) {
   return (_glptr_ColorTable) (GET_by_offset(disp, _gloffset_ColorTable));
}

static INLINE void SET_ColorTable(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *)) {
   SET_by_offset(disp, _gloffset_ColorTable, fn);
}

typedef void (GLAPIENTRYP _glptr_ColorTableParameterfv)(GLenum, GLenum, const GLfloat *);
#define CALL_ColorTableParameterfv(disp, parameters) \
    (* GET_ColorTableParameterfv(disp)) parameters
static INLINE _glptr_ColorTableParameterfv GET_ColorTableParameterfv(struct _glapi_table *disp) {
   return (_glptr_ColorTableParameterfv) (GET_by_offset(disp, _gloffset_ColorTableParameterfv));
}

static INLINE void SET_ColorTableParameterfv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, const GLfloat *)) {
   SET_by_offset(disp, _gloffset_ColorTableParameterfv, fn);
}

typedef void (GLAPIENTRYP _glptr_ColorTableParameteriv)(GLenum, GLenum, const GLint *);
#define CALL_ColorTableParameteriv(disp, parameters) \
    (* GET_ColorTableParameteriv(disp)) parameters
static INLINE _glptr_ColorTableParameteriv GET_ColorTableParameteriv(struct _glapi_table *disp) {
   return (_glptr_ColorTableParameteriv) (GET_by_offset(disp, _gloffset_ColorTableParameteriv));
}

static INLINE void SET_ColorTableParameteriv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, const GLint *)) {
   SET_by_offset(disp, _gloffset_ColorTableParameteriv, fn);
}

typedef void (GLAPIENTRYP _glptr_CopyColorTable)(GLenum, GLenum, GLint, GLint, GLsizei);
#define CALL_CopyColorTable(disp, parameters) \
    (* GET_CopyColorTable(disp)) parameters
static INLINE _glptr_CopyColorTable GET_CopyColorTable(struct _glapi_table *disp) {
   return (_glptr_CopyColorTable) (GET_by_offset(disp, _gloffset_CopyColorTable));
}

static INLINE void SET_CopyColorTable(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLint, GLint, GLsizei)) {
   SET_by_offset(disp, _gloffset_CopyColorTable, fn);
}

typedef void (GLAPIENTRYP _glptr_GetColorTable)(GLenum, GLenum, GLenum, GLvoid *);
#define CALL_GetColorTable(disp, parameters) \
    (* GET_GetColorTable(disp)) parameters
static INLINE _glptr_GetColorTable GET_GetColorTable(struct _glapi_table *disp) {
   return (_glptr_GetColorTable) (GET_by_offset(disp, _gloffset_GetColorTable));
}

static INLINE void SET_GetColorTable(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLvoid *)) {
   SET_by_offset(disp, _gloffset_GetColorTable, fn);
}

typedef void (GLAPIENTRYP _glptr_GetColorTableParameterfv)(GLenum, GLenum, GLfloat *);
#define CALL_GetColorTableParameterfv(disp, parameters) \
    (* GET_GetColorTableParameterfv(disp)) parameters
static INLINE _glptr_GetColorTableParameterfv GET_GetColorTableParameterfv(struct _glapi_table *disp) {
   return (_glptr_GetColorTableParameterfv) (GET_by_offset(disp, _gloffset_GetColorTableParameterfv));
}

static INLINE void SET_GetColorTableParameterfv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLfloat *)) {
   SET_by_offset(disp, _gloffset_GetColorTableParameterfv, fn);
}

typedef void (GLAPIENTRYP _glptr_GetColorTableParameteriv)(GLenum, GLenum, GLint *);
#define CALL_GetColorTableParameteriv(disp, parameters) \
    (* GET_GetColorTableParameteriv(disp)) parameters
static INLINE _glptr_GetColorTableParameteriv GET_GetColorTableParameteriv(struct _glapi_table *disp) {
   return (_glptr_GetColorTableParameteriv) (GET_by_offset(disp, _gloffset_GetColorTableParameteriv));
}

static INLINE void SET_GetColorTableParameteriv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLint *)) {
   SET_by_offset(disp, _gloffset_GetColorTableParameteriv, fn);
}

typedef void (GLAPIENTRYP _glptr_ColorSubTable)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);
#define CALL_ColorSubTable(disp, parameters) \
    (* GET_ColorSubTable(disp)) parameters
static INLINE _glptr_ColorSubTable GET_ColorSubTable(struct _glapi_table *disp) {
   return (_glptr_ColorSubTable) (GET_by_offset(disp, _gloffset_ColorSubTable));
}

static INLINE void SET_ColorSubTable(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *)) {
   SET_by_offset(disp, _gloffset_ColorSubTable, fn);
}

typedef void (GLAPIENTRYP _glptr_CopyColorSubTable)(GLenum, GLsizei, GLint, GLint, GLsizei);
#define CALL_CopyColorSubTable(disp, parameters) \
    (* GET_CopyColorSubTable(disp)) parameters
static INLINE _glptr_CopyColorSubTable GET_CopyColorSubTable(struct _glapi_table *disp) {
   return (_glptr_CopyColorSubTable) (GET_by_offset(disp, _gloffset_CopyColorSubTable));
}

static INLINE void SET_CopyColorSubTable(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLsizei, GLint, GLint, GLsizei)) {
   SET_by_offset(disp, _gloffset_CopyColorSubTable, fn);
}

typedef void (GLAPIENTRYP _glptr_ConvolutionFilter1D)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *);
#define CALL_ConvolutionFilter1D(disp, parameters) \
    (* GET_ConvolutionFilter1D(disp)) parameters
static INLINE _glptr_ConvolutionFilter1D GET_ConvolutionFilter1D(struct _glapi_table *disp) {
   return (_glptr_ConvolutionFilter1D) (GET_by_offset(disp, _gloffset_ConvolutionFilter1D));
}

static INLINE void SET_ConvolutionFilter1D(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *)) {
   SET_by_offset(disp, _gloffset_ConvolutionFilter1D, fn);
}

typedef void (GLAPIENTRYP _glptr_ConvolutionFilter2D)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);
#define CALL_ConvolutionFilter2D(disp, parameters) \
    (* GET_ConvolutionFilter2D(disp)) parameters
static INLINE _glptr_ConvolutionFilter2D GET_ConvolutionFilter2D(struct _glapi_table *disp) {
   return (_glptr_ConvolutionFilter2D) (GET_by_offset(disp, _gloffset_ConvolutionFilter2D));
}

static INLINE void SET_ConvolutionFilter2D(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *)) {
   SET_by_offset(disp, _gloffset_ConvolutionFilter2D, fn);
}

typedef void (GLAPIENTRYP _glptr_ConvolutionParameterf)(GLenum, GLenum, GLfloat);
#define CALL_ConvolutionParameterf(disp, parameters) \
    (* GET_ConvolutionParameterf(disp)) parameters
static INLINE _glptr_ConvolutionParameterf GET_ConvolutionParameterf(struct _glapi_table *disp) {
   return (_glptr_ConvolutionParameterf) (GET_by_offset(disp, _gloffset_ConvolutionParameterf));
}

static INLINE void SET_ConvolutionParameterf(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLfloat)) {
   SET_by_offset(disp, _gloffset_ConvolutionParameterf, fn);
}

typedef void (GLAPIENTRYP _glptr_ConvolutionParameterfv)(GLenum, GLenum, const GLfloat *);
#define CALL_ConvolutionParameterfv(disp, parameters) \
    (* GET_ConvolutionParameterfv(disp)) parameters
static INLINE _glptr_ConvolutionParameterfv GET_ConvolutionParameterfv(struct _glapi_table *disp) {
   return (_glptr_ConvolutionParameterfv) (GET_by_offset(disp, _gloffset_ConvolutionParameterfv));
}

static INLINE void SET_ConvolutionParameterfv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, const GLfloat *)) {
   SET_by_offset(disp, _gloffset_ConvolutionParameterfv, fn);
}

typedef void (GLAPIENTRYP _glptr_ConvolutionParameteri)(GLenum, GLenum, GLint);
#define CALL_ConvolutionParameteri(disp, parameters) \
    (* GET_ConvolutionParameteri(disp)) parameters
static INLINE _glptr_ConvolutionParameteri GET_ConvolutionParameteri(struct _glapi_table *disp) {
   return (_glptr_ConvolutionParameteri) (GET_by_offset(disp, _gloffset_ConvolutionParameteri));
}

static INLINE void SET_ConvolutionParameteri(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLint)) {
   SET_by_offset(disp, _gloffset_ConvolutionParameteri, fn);
}

typedef void (GLAPIENTRYP _glptr_ConvolutionParameteriv)(GLenum, GLenum, const GLint *);
#define CALL_ConvolutionParameteriv(disp, parameters) \
    (* GET_ConvolutionParameteriv(disp)) parameters
static INLINE _glptr_ConvolutionParameteriv GET_ConvolutionParameteriv(struct _glapi_table *disp) {
   return (_glptr_ConvolutionParameteriv) (GET_by_offset(disp, _gloffset_ConvolutionParameteriv));
}

static INLINE void SET_ConvolutionParameteriv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, const GLint *)) {
   SET_by_offset(disp, _gloffset_ConvolutionParameteriv, fn);
}

typedef void (GLAPIENTRYP _glptr_CopyConvolutionFilter1D)(GLenum, GLenum, GLint, GLint, GLsizei);
#define CALL_CopyConvolutionFilter1D(disp, parameters) \
    (* GET_CopyConvolutionFilter1D(disp)) parameters
static INLINE _glptr_CopyConvolutionFilter1D GET_CopyConvolutionFilter1D(struct _glapi_table *disp) {
   return (_glptr_CopyConvolutionFilter1D) (GET_by_offset(disp, _gloffset_CopyConvolutionFilter1D));
}

static INLINE void SET_CopyConvolutionFilter1D(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLint, GLint, GLsizei)) {
   SET_by_offset(disp, _gloffset_CopyConvolutionFilter1D, fn);
}

typedef void (GLAPIENTRYP _glptr_CopyConvolutionFilter2D)(GLenum, GLenum, GLint, GLint, GLsizei, GLsizei);
#define CALL_CopyConvolutionFilter2D(disp, parameters) \
    (* GET_CopyConvolutionFilter2D(disp)) parameters
static INLINE _glptr_CopyConvolutionFilter2D GET_CopyConvolutionFilter2D(struct _glapi_table *disp) {
   return (_glptr_CopyConvolutionFilter2D) (GET_by_offset(disp, _gloffset_CopyConvolutionFilter2D));
}

static INLINE void SET_CopyConvolutionFilter2D(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLint, GLint, GLsizei, GLsizei)) {
   SET_by_offset(disp, _gloffset_CopyConvolutionFilter2D, fn);
}

typedef void (GLAPIENTRYP _glptr_GetConvolutionFilter)(GLenum, GLenum, GLenum, GLvoid *);
#define CALL_GetConvolutionFilter(disp, parameters) \
    (* GET_GetConvolutionFilter(disp)) parameters
static INLINE _glptr_GetConvolutionFilter GET_GetConvolutionFilter(struct _glapi_table *disp) {
   return (_glptr_GetConvolutionFilter) (GET_by_offset(disp, _gloffset_GetConvolutionFilter));
}

static INLINE void SET_GetConvolutionFilter(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLvoid *)) {
   SET_by_offset(disp, _gloffset_GetConvolutionFilter, fn);
}

typedef void (GLAPIENTRYP _glptr_GetConvolutionParameterfv)(GLenum, GLenum, GLfloat *);
#define CALL_GetConvolutionParameterfv(disp, parameters) \
    (* GET_GetConvolutionParameterfv(disp)) parameters
static INLINE _glptr_GetConvolutionParameterfv GET_GetConvolutionParameterfv(struct _glapi_table *disp) {
   return (_glptr_GetConvolutionParameterfv) (GET_by_offset(disp, _gloffset_GetConvolutionParameterfv));
}

static INLINE void SET_GetConvolutionParameterfv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLfloat *)) {
   SET_by_offset(disp, _gloffset_GetConvolutionParameterfv, fn);
}

typedef void (GLAPIENTRYP _glptr_GetConvolutionParameteriv)(GLenum, GLenum, GLint *);
#define CALL_GetConvolutionParameteriv(disp, parameters) \
    (* GET_GetConvolutionParameteriv(disp)) parameters
static INLINE _glptr_GetConvolutionParameteriv GET_GetConvolutionParameteriv(struct _glapi_table *disp) {
   return (_glptr_GetConvolutionParameteriv) (GET_by_offset(disp, _gloffset_GetConvolutionParameteriv));
}

static INLINE void SET_GetConvolutionParameteriv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLint *)) {
   SET_by_offset(disp, _gloffset_GetConvolutionParameteriv, fn);
}

typedef void (GLAPIENTRYP _glptr_GetSeparableFilter)(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *);
#define CALL_GetSeparableFilter(disp, parameters) \
    (* GET_GetSeparableFilter(disp)) parameters
static INLINE _glptr_GetSeparableFilter GET_GetSeparableFilter(struct _glapi_table *disp) {
   return (_glptr_GetSeparableFilter) (GET_by_offset(disp, _gloffset_GetSeparableFilter));
}

static INLINE void SET_GetSeparableFilter(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *)) {
   SET_by_offset(disp, _gloffset_GetSeparableFilter, fn);
}

typedef void (GLAPIENTRYP _glptr_SeparableFilter2D)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *);
#define CALL_SeparableFilter2D(disp, parameters) \
    (* GET_SeparableFilter2D(disp)) parameters
static INLINE _glptr_SeparableFilter2D GET_SeparableFilter2D(struct _glapi_table *disp) {
   return (_glptr_SeparableFilter2D) (GET_by_offset(disp, _gloffset_SeparableFilter2D));
}

static INLINE void SET_SeparableFilter2D(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *)) {
   SET_by_offset(disp, _gloffset_SeparableFilter2D, fn);
}

typedef void (GLAPIENTRYP _glptr_GetHistogram)(GLenum, GLboolean, GLenum, GLenum, GLvoid *);
#define CALL_GetHistogram(disp, parameters) \
    (* GET_GetHistogram(disp)) parameters
static INLINE _glptr_GetHistogram GET_GetHistogram(struct _glapi_table *disp) {
   return (_glptr_GetHistogram) (GET_by_offset(disp, _gloffset_GetHistogram));
}

static INLINE void SET_GetHistogram(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLboolean, GLenum, GLenum, GLvoid *)) {
   SET_by_offset(disp, _gloffset_GetHistogram, fn);
}

typedef void (GLAPIENTRYP _glptr_GetHistogramParameterfv)(GLenum, GLenum, GLfloat *);
#define CALL_GetHistogramParameterfv(disp, parameters) \
    (* GET_GetHistogramParameterfv(disp)) parameters
static INLINE _glptr_GetHistogramParameterfv GET_GetHistogramParameterfv(struct _glapi_table *disp) {
   return (_glptr_GetHistogramParameterfv) (GET_by_offset(disp, _gloffset_GetHistogramParameterfv));
}

static INLINE void SET_GetHistogramParameterfv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLfloat *)) {
   SET_by_offset(disp, _gloffset_GetHistogramParameterfv, fn);
}

typedef void (GLAPIENTRYP _glptr_GetHistogramParameteriv)(GLenum, GLenum, GLint *);
#define CALL_GetHistogramParameteriv(disp, parameters) \
    (* GET_GetHistogramParameteriv(disp)) parameters
static INLINE _glptr_GetHistogramParameteriv GET_GetHistogramParameteriv(struct _glapi_table *disp) {
   return (_glptr_GetHistogramParameteriv) (GET_by_offset(disp, _gloffset_GetHistogramParameteriv));
}

static INLINE void SET_GetHistogramParameteriv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLint *)) {
   SET_by_offset(disp, _gloffset_GetHistogramParameteriv, fn);
}

typedef void (GLAPIENTRYP _glptr_GetMinmax)(GLenum, GLboolean, GLenum, GLenum, GLvoid *);
#define CALL_GetMinmax(disp, parameters) \
    (* GET_GetMinmax(disp)) parameters
static INLINE _glptr_GetMinmax GET_GetMinmax(struct _glapi_table *disp) {
   return (_glptr_GetMinmax) (GET_by_offset(disp, _gloffset_GetMinmax));
}

static INLINE void SET_GetMinmax(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLboolean, GLenum, GLenum, GLvoid *)) {
   SET_by_offset(disp, _gloffset_GetMinmax, fn);
}

typedef void (GLAPIENTRYP _glptr_GetMinmaxParameterfv)(GLenum, GLenum, GLfloat *);
#define CALL_GetMinmaxParameterfv(disp, parameters) \
    (* GET_GetMinmaxParameterfv(disp)) parameters
static INLINE _glptr_GetMinmaxParameterfv GET_GetMinmaxParameterfv(struct _glapi_table *disp) {
   return (_glptr_GetMinmaxParameterfv) (GET_by_offset(disp, _gloffset_GetMinmaxParameterfv));
}

static INLINE void SET_GetMinmaxParameterfv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLfloat *)) {
   SET_by_offset(disp, _gloffset_GetMinmaxParameterfv, fn);
}

typedef void (GLAPIENTRYP _glptr_GetMinmaxParameteriv)(GLenum, GLenum, GLint *);
#define CALL_GetMinmaxParameteriv(disp, parameters) \
    (* GET_GetMinmaxParameteriv(disp)) parameters
static INLINE _glptr_GetMinmaxParameteriv GET_GetMinmaxParameteriv(struct _glapi_table *disp) {
   return (_glptr_GetMinmaxParameteriv) (GET_by_offset(disp, _gloffset_GetMinmaxParameteriv));
}

static INLINE void SET_GetMinmaxParameteriv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLint *)) {
   SET_by_offset(disp, _gloffset_GetMinmaxParameteriv, fn);
}

typedef void (GLAPIENTRYP _glptr_Histogram)(GLenum, GLsizei, GLenum, GLboolean);
#define CALL_Histogram(disp, parameters) \
    (* GET_Histogram(disp)) parameters
static INLINE _glptr_Histogram GET_Histogram(struct _glapi_table *disp) {
   return (_glptr_Histogram) (GET_by_offset(disp, _gloffset_Histogram));
}

static INLINE void SET_Histogram(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLsizei, GLenum, GLboolean)) {
   SET_by_offset(disp, _gloffset_Histogram, fn);
}

typedef void (GLAPIENTRYP _glptr_Minmax)(GLenum, GLenum, GLboolean);
#define CALL_Minmax(disp, parameters) \
    (* GET_Minmax(disp)) parameters
static INLINE _glptr_Minmax GET_Minmax(struct _glapi_table *disp) {
   return (_glptr_Minmax) (GET_by_offset(disp, _gloffset_Minmax));
}

static INLINE void SET_Minmax(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLboolean)) {
   SET_by_offset(disp, _gloffset_Minmax, fn);
}

typedef void (GLAPIENTRYP _glptr_ResetHistogram)(GLenum);
#define CALL_ResetHistogram(disp, parameters) \
    (* GET_ResetHistogram(disp)) parameters
static INLINE _glptr_ResetHistogram GET_ResetHistogram(struct _glapi_table *disp) {
   return (_glptr_ResetHistogram) (GET_by_offset(disp, _gloffset_ResetHistogram));
}

static INLINE void SET_ResetHistogram(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum)) {
   SET_by_offset(disp, _gloffset_ResetHistogram, fn);
}

typedef void (GLAPIENTRYP _glptr_ResetMinmax)(GLenum);
#define CALL_ResetMinmax(disp, parameters) \
    (* GET_ResetMinmax(disp)) parameters
static INLINE _glptr_ResetMinmax GET_ResetMinmax(struct _glapi_table *disp) {
   return (_glptr_ResetMinmax) (GET_by_offset(disp, _gloffset_ResetMinmax));
}

static INLINE void SET_ResetMinmax(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum)) {
   SET_by_offset(disp, _gloffset_ResetMinmax, fn);
}

typedef void (GLAPIENTRYP _glptr_TexImage3DOES)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *);
#define CALL_TexImage3DOES(disp, parameters) \
    (* GET_TexImage3DOES(disp)) parameters
static INLINE _glptr_TexImage3DOES GET_TexImage3DOES(struct _glapi_table *disp) {
   return (_glptr_TexImage3DOES) (GET_by_offset(disp, _gloffset_TexImage3DOES));
}

static INLINE void SET_TexImage3DOES(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *)) {
   SET_by_offset(disp, _gloffset_TexImage3DOES, fn);
}

typedef void (GLAPIENTRYP _glptr_TexSubImage3DOES)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);
#define CALL_TexSubImage3DOES(disp, parameters) \
    (* GET_TexSubImage3DOES(disp)) parameters
static INLINE _glptr_TexSubImage3DOES GET_TexSubImage3DOES(struct _glapi_table *disp) {
   return (_glptr_TexSubImage3DOES) (GET_by_offset(disp, _gloffset_TexSubImage3DOES));
}

static INLINE void SET_TexSubImage3DOES(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *)) {
   SET_by_offset(disp, _gloffset_TexSubImage3DOES, fn);
}

typedef void (GLAPIENTRYP _glptr_CopyTexSubImage3DOES)(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
#define CALL_CopyTexSubImage3DOES(disp, parameters) \
    (* GET_CopyTexSubImage3DOES(disp)) parameters
static INLINE _glptr_CopyTexSubImage3DOES GET_CopyTexSubImage3DOES(struct _glapi_table *disp) {
   return (_glptr_CopyTexSubImage3DOES) (GET_by_offset(disp, _gloffset_CopyTexSubImage3DOES));
}

static INLINE void SET_CopyTexSubImage3DOES(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei)) {
   SET_by_offset(disp, _gloffset_CopyTexSubImage3DOES, fn);
}

typedef void (GLAPIENTRYP _glptr_ActiveTexture)(GLenum);
#define CALL_ActiveTexture(disp, parameters) \
    (* GET_ActiveTexture(disp)) parameters
static INLINE _glptr_ActiveTexture GET_ActiveTexture(struct _glapi_table *disp) {
   return (_glptr_ActiveTexture) (GET_by_offset(disp, _gloffset_ActiveTexture));
}

static INLINE void SET_ActiveTexture(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum)) {
   SET_by_offset(disp, _gloffset_ActiveTexture, fn);
}

typedef void (GLAPIENTRYP _glptr_ClientActiveTextureARB)(GLenum);
#define CALL_ClientActiveTextureARB(disp, parameters) \
    (* GET_ClientActiveTextureARB(disp)) parameters
static INLINE _glptr_ClientActiveTextureARB GET_ClientActiveTextureARB(struct _glapi_table *disp) {
   return (_glptr_ClientActiveTextureARB) (GET_by_offset(disp, _gloffset_ClientActiveTextureARB));
}

static INLINE void SET_ClientActiveTextureARB(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum)) {
   SET_by_offset(disp, _gloffset_ClientActiveTextureARB, fn);
}

typedef void (GLAPIENTRYP _glptr_MultiTexCoord1dARB)(GLenum, GLdouble);
#define CALL_MultiTexCoord1dARB(disp, parameters) \
    (* GET_MultiTexCoord1dARB(disp)) parameters
static INLINE _glptr_MultiTexCoord1dARB GET_MultiTexCoord1dARB(struct _glapi_table *disp) {
   return (_glptr_MultiTexCoord1dARB) (GET_by_offset(disp, _gloffset_MultiTexCoord1dARB));
}

static INLINE void SET_MultiTexCoord1dARB(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLdouble)) {
   SET_by_offset(disp, _gloffset_MultiTexCoord1dARB, fn);
}

typedef void (GLAPIENTRYP _glptr_MultiTexCoord1dvARB)(GLenum, const GLdouble *);
#define CALL_MultiTexCoord1dvARB(disp, parameters) \
    (* GET_MultiTexCoord1dvARB(disp)) parameters
static INLINE _glptr_MultiTexCoord1dvARB GET_MultiTexCoord1dvARB(struct _glapi_table *disp) {
   return (_glptr_MultiTexCoord1dvARB) (GET_by_offset(disp, _gloffset_MultiTexCoord1dvARB));
}

static INLINE void SET_MultiTexCoord1dvARB(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, const GLdouble *)) {
   SET_by_offset(disp, _gloffset_MultiTexCoord1dvARB, fn);
}

typedef void (GLAPIENTRYP _glptr_MultiTexCoord1fARB)(GLenum, GLfloat);
#define CALL_MultiTexCoord1fARB(disp, parameters) \
    (* GET_MultiTexCoord1fARB(disp)) parameters
static INLINE _glptr_MultiTexCoord1fARB GET_MultiTexCoord1fARB(struct _glapi_table *disp) {
   return (_glptr_MultiTexCoord1fARB) (GET_by_offset(disp, _gloffset_MultiTexCoord1fARB));
}

static INLINE void SET_MultiTexCoord1fARB(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLfloat)) {
   SET_by_offset(disp, _gloffset_MultiTexCoord1fARB, fn);
}

typedef void (GLAPIENTRYP _glptr_MultiTexCoord1fvARB)(GLenum, const GLfloat *);
#define CALL_MultiTexCoord1fvARB(disp, parameters) \
    (* GET_MultiTexCoord1fvARB(disp)) parameters
static INLINE _glptr_MultiTexCoord1fvARB GET_MultiTexCoord1fvARB(struct _glapi_table *disp) {
   return (_glptr_MultiTexCoord1fvARB) (GET_by_offset(disp, _gloffset_MultiTexCoord1fvARB));
}

static INLINE void SET_MultiTexCoord1fvARB(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, const GLfloat *)) {
   SET_by_offset(disp, _gloffset_MultiTexCoord1fvARB, fn);
}

typedef void (GLAPIENTRYP _glptr_MultiTexCoord1iARB)(GLenum, GLint);
#define CALL_MultiTexCoord1iARB(disp, parameters) \
    (* GET_MultiTexCoord1iARB(disp)) parameters
static INLINE _glptr_MultiTexCoord1iARB GET_MultiTexCoord1iARB(struct _glapi_table *disp) {
   return (_glptr_MultiTexCoord1iARB) (GET_by_offset(disp, _gloffset_MultiTexCoord1iARB));
}

static INLINE void SET_MultiTexCoord1iARB(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLint)) {
   SET_by_offset(disp, _gloffset_MultiTexCoord1iARB, fn);
}

typedef void (GLAPIENTRYP _glptr_MultiTexCoord1ivARB)(GLenum, const GLint *);
#define CALL_MultiTexCoord1ivARB(disp, parameters) \
    (* GET_MultiTexCoord1ivARB(disp)) parameters
static INLINE _glptr_MultiTexCoord1ivARB GET_MultiTexCoord1ivARB(struct _glapi_table *disp) {
   return (_glptr_MultiTexCoord1ivARB) (GET_by_offset(disp, _gloffset_MultiTexCoord1ivARB));
}

static INLINE void SET_MultiTexCoord1ivARB(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, const GLint *)) {
   SET_by_offset(disp, _gloffset_MultiTexCoord1ivARB, fn);
}

typedef void (GLAPIENTRYP _glptr_MultiTexCoord1sARB)(GLenum, GLshort);
#define CALL_MultiTexCoord1sARB(disp, parameters) \
    (* GET_MultiTexCoord1sARB(disp)) parameters
static INLINE _glptr_MultiTexCoord1sARB GET_MultiTexCoord1sARB(struct _glapi_table *disp) {
   return (_glptr_MultiTexCoord1sARB) (GET_by_offset(disp, _gloffset_MultiTexCoord1sARB));
}

static INLINE void SET_MultiTexCoord1sARB(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLshort)) {
   SET_by_offset(disp, _gloffset_MultiTexCoord1sARB, fn);
}

typedef void (GLAPIENTRYP _glptr_MultiTexCoord1svARB)(GLenum, const GLshort *);
#define CALL_MultiTexCoord1svARB(disp, parameters) \
    (* GET_MultiTexCoord1svARB(disp)) parameters
static INLINE _glptr_MultiTexCoord1svARB GET_MultiTexCoord1svARB(struct _glapi_table *disp) {
   return (_glptr_MultiTexCoord1svARB) (GET_by_offset(disp, _gloffset_MultiTexCoord1svARB));
}

static INLINE void SET_MultiTexCoord1svARB(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, const GLshort *)) {
   SET_by_offset(disp, _gloffset_MultiTexCoord1svARB, fn);
}

typedef void (GLAPIENTRYP _glptr_MultiTexCoord2dARB)(GLenum, GLdouble, GLdouble);
#define CALL_MultiTexCoord2dARB(disp, parameters) \
    (* GET_MultiTexCoord2dARB(disp)) parameters
static INLINE _glptr_MultiTexCoord2dARB GET_MultiTexCoord2dARB(struct _glapi_table *disp) {
   return (_glptr_MultiTexCoord2dARB) (GET_by_offset(disp, _gloffset_MultiTexCoord2dARB));
}

static INLINE void SET_MultiTexCoord2dARB(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLdouble, GLdouble)) {
   SET_by_offset(disp, _gloffset_MultiTexCoord2dARB, fn);
}

typedef void (GLAPIENTRYP _glptr_MultiTexCoord2dvARB)(GLenum, const GLdouble *);
#define CALL_MultiTexCoord2dvARB(disp, parameters) \
    (* GET_MultiTexCoord2dvARB(disp)) parameters
static INLINE _glptr_MultiTexCoord2dvARB GET_MultiTexCoord2dvARB(struct _glapi_table *disp) {
   return (_glptr_MultiTexCoord2dvARB) (GET_by_offset(disp, _gloffset_MultiTexCoord2dvARB));
}

static INLINE void SET_MultiTexCoord2dvARB(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, const GLdouble *)) {
   SET_by_offset(disp, _gloffset_MultiTexCoord2dvARB, fn);
}

typedef void (GLAPIENTRYP _glptr_MultiTexCoord2fARB)(GLenum, GLfloat, GLfloat);
#define CALL_MultiTexCoord2fARB(disp, parameters) \
    (* GET_MultiTexCoord2fARB(disp)) parameters
static INLINE _glptr_MultiTexCoord2fARB GET_MultiTexCoord2fARB(struct _glapi_table *disp) {
   return (_glptr_MultiTexCoord2fARB) (GET_by_offset(disp, _gloffset_MultiTexCoord2fARB));
}

static INLINE void SET_MultiTexCoord2fARB(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLfloat, GLfloat)) {
   SET_by_offset(disp, _gloffset_MultiTexCoord2fARB, fn);
}

typedef void (GLAPIENTRYP _glptr_MultiTexCoord2fvARB)(GLenum, const GLfloat *);
#define CALL_MultiTexCoord2fvARB(disp, parameters) \
    (* GET_MultiTexCoord2fvARB(disp)) parameters
static INLINE _glptr_MultiTexCoord2fvARB GET_MultiTexCoord2fvARB(struct _glapi_table *disp) {
   return (_glptr_MultiTexCoord2fvARB) (GET_by_offset(disp, _gloffset_MultiTexCoord2fvARB));
}

static INLINE void SET_MultiTexCoord2fvARB(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, const GLfloat *)) {
   SET_by_offset(disp, _gloffset_MultiTexCoord2fvARB, fn);
}

typedef void (GLAPIENTRYP _glptr_MultiTexCoord2iARB)(GLenum, GLint, GLint);
#define CALL_MultiTexCoord2iARB(disp, parameters) \
    (* GET_MultiTexCoord2iARB(disp)) parameters
static INLINE _glptr_MultiTexCoord2iARB GET_MultiTexCoord2iARB(struct _glapi_table *disp) {
   return (_glptr_MultiTexCoord2iARB) (GET_by_offset(disp, _gloffset_MultiTexCoord2iARB));
}

static INLINE void SET_MultiTexCoord2iARB(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLint, GLint)) {
   SET_by_offset(disp, _gloffset_MultiTexCoord2iARB, fn);
}

typedef void (GLAPIENTRYP _glptr_MultiTexCoord2ivARB)(GLenum, const GLint *);
#define CALL_MultiTexCoord2ivARB(disp, parameters) \
    (* GET_MultiTexCoord2ivARB(disp)) parameters
static INLINE _glptr_MultiTexCoord2ivARB GET_MultiTexCoord2ivARB(struct _glapi_table *disp) {
   return (_glptr_MultiTexCoord2ivARB) (GET_by_offset(disp, _gloffset_MultiTexCoord2ivARB));
}

static INLINE void SET_MultiTexCoord2ivARB(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, const GLint *)) {
   SET_by_offset(disp, _gloffset_MultiTexCoord2ivARB, fn);
}

typedef void (GLAPIENTRYP _glptr_MultiTexCoord2sARB)(GLenum, GLshort, GLshort);
#define CALL_MultiTexCoord2sARB(disp, parameters) \
    (* GET_MultiTexCoord2sARB(disp)) parameters
static INLINE _glptr_MultiTexCoord2sARB GET_MultiTexCoord2sARB(struct _glapi_table *disp) {
   return (_glptr_MultiTexCoord2sARB) (GET_by_offset(disp, _gloffset_MultiTexCoord2sARB));
}

static INLINE void SET_MultiTexCoord2sARB(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLshort, GLshort)) {
   SET_by_offset(disp, _gloffset_MultiTexCoord2sARB, fn);
}

typedef void (GLAPIENTRYP _glptr_MultiTexCoord2svARB)(GLenum, const GLshort *);
#define CALL_MultiTexCoord2svARB(disp, parameters) \
    (* GET_MultiTexCoord2svARB(disp)) parameters
static INLINE _glptr_MultiTexCoord2svARB GET_MultiTexCoord2svARB(struct _glapi_table *disp) {
   return (_glptr_MultiTexCoord2svARB) (GET_by_offset(disp, _gloffset_MultiTexCoord2svARB));
}

static INLINE void SET_MultiTexCoord2svARB(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, const GLshort *)) {
   SET_by_offset(disp, _gloffset_MultiTexCoord2svARB, fn);
}

typedef void (GLAPIENTRYP _glptr_MultiTexCoord3dARB)(GLenum, GLdouble, GLdouble, GLdouble);
#define CALL_MultiTexCoord3dARB(disp, parameters) \
    (* GET_MultiTexCoord3dARB(disp)) parameters
static INLINE _glptr_MultiTexCoord3dARB GET_MultiTexCoord3dARB(struct _glapi_table *disp) {
   return (_glptr_MultiTexCoord3dARB) (GET_by_offset(disp, _gloffset_MultiTexCoord3dARB));
}

static INLINE void SET_MultiTexCoord3dARB(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLdouble, GLdouble, GLdouble)) {
   SET_by_offset(disp, _gloffset_MultiTexCoord3dARB, fn);
}

typedef void (GLAPIENTRYP _glptr_MultiTexCoord3dvARB)(GLenum, const GLdouble *);
#define CALL_MultiTexCoord3dvARB(disp, parameters) \
    (* GET_MultiTexCoord3dvARB(disp)) parameters
static INLINE _glptr_MultiTexCoord3dvARB GET_MultiTexCoord3dvARB(struct _glapi_table *disp) {
   return (_glptr_MultiTexCoord3dvARB) (GET_by_offset(disp, _gloffset_MultiTexCoord3dvARB));
}

static INLINE void SET_MultiTexCoord3dvARB(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, const GLdouble *)) {
   SET_by_offset(disp, _gloffset_MultiTexCoord3dvARB, fn);
}

typedef void (GLAPIENTRYP _glptr_MultiTexCoord3fARB)(GLenum, GLfloat, GLfloat, GLfloat);
#define CALL_MultiTexCoord3fARB(disp, parameters) \
    (* GET_MultiTexCoord3fARB(disp)) parameters
static INLINE _glptr_MultiTexCoord3fARB GET_MultiTexCoord3fARB(struct _glapi_table *disp) {
   return (_glptr_MultiTexCoord3fARB) (GET_by_offset(disp, _gloffset_MultiTexCoord3fARB));
}

static INLINE void SET_MultiTexCoord3fARB(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLfloat, GLfloat, GLfloat)) {
   SET_by_offset(disp, _gloffset_MultiTexCoord3fARB, fn);
}

typedef void (GLAPIENTRYP _glptr_MultiTexCoord3fvARB)(GLenum, const GLfloat *);
#define CALL_MultiTexCoord3fvARB(disp, parameters) \
    (* GET_MultiTexCoord3fvARB(disp)) parameters
static INLINE _glptr_MultiTexCoord3fvARB GET_MultiTexCoord3fvARB(struct _glapi_table *disp) {
   return (_glptr_MultiTexCoord3fvARB) (GET_by_offset(disp, _gloffset_MultiTexCoord3fvARB));
}

static INLINE void SET_MultiTexCoord3fvARB(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, const GLfloat *)) {
   SET_by_offset(disp, _gloffset_MultiTexCoord3fvARB, fn);
}

typedef void (GLAPIENTRYP _glptr_MultiTexCoord3iARB)(GLenum, GLint, GLint, GLint);
#define CALL_MultiTexCoord3iARB(disp, parameters) \
    (* GET_MultiTexCoord3iARB(disp)) parameters
static INLINE _glptr_MultiTexCoord3iARB GET_MultiTexCoord3iARB(struct _glapi_table *disp) {
   return (_glptr_MultiTexCoord3iARB) (GET_by_offset(disp, _gloffset_MultiTexCoord3iARB));
}

static INLINE void SET_MultiTexCoord3iARB(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLint, GLint, GLint)) {
   SET_by_offset(disp, _gloffset_MultiTexCoord3iARB, fn);
}

typedef void (GLAPIENTRYP _glptr_MultiTexCoord3ivARB)(GLenum, const GLint *);
#define CALL_MultiTexCoord3ivARB(disp, parameters) \
    (* GET_MultiTexCoord3ivARB(disp)) parameters
static INLINE _glptr_MultiTexCoord3ivARB GET_MultiTexCoord3ivARB(struct _glapi_table *disp) {
   return (_glptr_MultiTexCoord3ivARB) (GET_by_offset(disp, _gloffset_MultiTexCoord3ivARB));
}

static INLINE void SET_MultiTexCoord3ivARB(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, const GLint *)) {
   SET_by_offset(disp, _gloffset_MultiTexCoord3ivARB, fn);
}

typedef void (GLAPIENTRYP _glptr_MultiTexCoord3sARB)(GLenum, GLshort, GLshort, GLshort);
#define CALL_MultiTexCoord3sARB(disp, parameters) \
    (* GET_MultiTexCoord3sARB(disp)) parameters
static INLINE _glptr_MultiTexCoord3sARB GET_MultiTexCoord3sARB(struct _glapi_table *disp) {
   return (_glptr_MultiTexCoord3sARB) (GET_by_offset(disp, _gloffset_MultiTexCoord3sARB));
}

static INLINE void SET_MultiTexCoord3sARB(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLshort, GLshort, GLshort)) {
   SET_by_offset(disp, _gloffset_MultiTexCoord3sARB, fn);
}

typedef void (GLAPIENTRYP _glptr_MultiTexCoord3svARB)(GLenum, const GLshort *);
#define CALL_MultiTexCoord3svARB(disp, parameters) \
    (* GET_MultiTexCoord3svARB(disp)) parameters
static INLINE _glptr_MultiTexCoord3svARB GET_MultiTexCoord3svARB(struct _glapi_table *disp) {
   return (_glptr_MultiTexCoord3svARB) (GET_by_offset(disp, _gloffset_MultiTexCoord3svARB));
}

static INLINE void SET_MultiTexCoord3svARB(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, const GLshort *)) {
   SET_by_offset(disp, _gloffset_MultiTexCoord3svARB, fn);
}

typedef void (GLAPIENTRYP _glptr_MultiTexCoord4dARB)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble);
#define CALL_MultiTexCoord4dARB(disp, parameters) \
    (* GET_MultiTexCoord4dARB(disp)) parameters
static INLINE _glptr_MultiTexCoord4dARB GET_MultiTexCoord4dARB(struct _glapi_table *disp) {
   return (_glptr_MultiTexCoord4dARB) (GET_by_offset(disp, _gloffset_MultiTexCoord4dARB));
}

static INLINE void SET_MultiTexCoord4dARB(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble)) {
   SET_by_offset(disp, _gloffset_MultiTexCoord4dARB, fn);
}

typedef void (GLAPIENTRYP _glptr_MultiTexCoord4dvARB)(GLenum, const GLdouble *);
#define CALL_MultiTexCoord4dvARB(disp, parameters) \
    (* GET_MultiTexCoord4dvARB(disp)) parameters
static INLINE _glptr_MultiTexCoord4dvARB GET_MultiTexCoord4dvARB(struct _glapi_table *disp) {
   return (_glptr_MultiTexCoord4dvARB) (GET_by_offset(disp, _gloffset_MultiTexCoord4dvARB));
}

static INLINE void SET_MultiTexCoord4dvARB(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, const GLdouble *)) {
   SET_by_offset(disp, _gloffset_MultiTexCoord4dvARB, fn);
}

typedef void (GLAPIENTRYP _glptr_MultiTexCoord4fARB)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat);
#define CALL_MultiTexCoord4fARB(disp, parameters) \
    (* GET_MultiTexCoord4fARB(disp)) parameters
static INLINE _glptr_MultiTexCoord4fARB GET_MultiTexCoord4fARB(struct _glapi_table *disp) {
   return (_glptr_MultiTexCoord4fARB) (GET_by_offset(disp, _gloffset_MultiTexCoord4fARB));
}

static INLINE void SET_MultiTexCoord4fARB(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat)) {
   SET_by_offset(disp, _gloffset_MultiTexCoord4fARB, fn);
}

typedef void (GLAPIENTRYP _glptr_MultiTexCoord4fvARB)(GLenum, const GLfloat *);
#define CALL_MultiTexCoord4fvARB(disp, parameters) \
    (* GET_MultiTexCoord4fvARB(disp)) parameters
static INLINE _glptr_MultiTexCoord4fvARB GET_MultiTexCoord4fvARB(struct _glapi_table *disp) {
   return (_glptr_MultiTexCoord4fvARB) (GET_by_offset(disp, _gloffset_MultiTexCoord4fvARB));
}

static INLINE void SET_MultiTexCoord4fvARB(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, const GLfloat *)) {
   SET_by_offset(disp, _gloffset_MultiTexCoord4fvARB, fn);
}

typedef void (GLAPIENTRYP _glptr_MultiTexCoord4iARB)(GLenum, GLint, GLint, GLint, GLint);
#define CALL_MultiTexCoord4iARB(disp, parameters) \
    (* GET_MultiTexCoord4iARB(disp)) parameters
static INLINE _glptr_MultiTexCoord4iARB GET_MultiTexCoord4iARB(struct _glapi_table *disp) {
   return (_glptr_MultiTexCoord4iARB) (GET_by_offset(disp, _gloffset_MultiTexCoord4iARB));
}

static INLINE void SET_MultiTexCoord4iARB(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLint, GLint, GLint, GLint)) {
   SET_by_offset(disp, _gloffset_MultiTexCoord4iARB, fn);
}

typedef void (GLAPIENTRYP _glptr_MultiTexCoord4ivARB)(GLenum, const GLint *);
#define CALL_MultiTexCoord4ivARB(disp, parameters) \
    (* GET_MultiTexCoord4ivARB(disp)) parameters
static INLINE _glptr_MultiTexCoord4ivARB GET_MultiTexCoord4ivARB(struct _glapi_table *disp) {
   return (_glptr_MultiTexCoord4ivARB) (GET_by_offset(disp, _gloffset_MultiTexCoord4ivARB));
}

static INLINE void SET_MultiTexCoord4ivARB(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, const GLint *)) {
   SET_by_offset(disp, _gloffset_MultiTexCoord4ivARB, fn);
}

typedef void (GLAPIENTRYP _glptr_MultiTexCoord4sARB)(GLenum, GLshort, GLshort, GLshort, GLshort);
#define CALL_MultiTexCoord4sARB(disp, parameters) \
    (* GET_MultiTexCoord4sARB(disp)) parameters
static INLINE _glptr_MultiTexCoord4sARB GET_MultiTexCoord4sARB(struct _glapi_table *disp) {
   return (_glptr_MultiTexCoord4sARB) (GET_by_offset(disp, _gloffset_MultiTexCoord4sARB));
}

static INLINE void SET_MultiTexCoord4sARB(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLshort, GLshort, GLshort, GLshort)) {
   SET_by_offset(disp, _gloffset_MultiTexCoord4sARB, fn);
}

typedef void (GLAPIENTRYP _glptr_MultiTexCoord4svARB)(GLenum, const GLshort *);
#define CALL_MultiTexCoord4svARB(disp, parameters) \
    (* GET_MultiTexCoord4svARB(disp)) parameters
static INLINE _glptr_MultiTexCoord4svARB GET_MultiTexCoord4svARB(struct _glapi_table *disp) {
   return (_glptr_MultiTexCoord4svARB) (GET_by_offset(disp, _gloffset_MultiTexCoord4svARB));
}

static INLINE void SET_MultiTexCoord4svARB(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, const GLshort *)) {
   SET_by_offset(disp, _gloffset_MultiTexCoord4svARB, fn);
}

typedef void (GLAPIENTRYP _glptr_GetBufferPointervOES)(GLenum, GLenum, GLvoid **);
#define CALL_GetBufferPointervOES(disp, parameters) \
    (* GET_GetBufferPointervOES(disp)) parameters
static INLINE _glptr_GetBufferPointervOES GET_GetBufferPointervOES(struct _glapi_table *disp) {
   return (_glptr_GetBufferPointervOES) (GET_by_offset(disp, _gloffset_GetBufferPointervOES));
}

static INLINE void SET_GetBufferPointervOES(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLvoid **)) {
   SET_by_offset(disp, _gloffset_GetBufferPointervOES, fn);
}

typedef GLvoid * (GLAPIENTRYP _glptr_MapBufferOES)(GLenum, GLenum);
#define CALL_MapBufferOES(disp, parameters) \
    (* GET_MapBufferOES(disp)) parameters
static INLINE _glptr_MapBufferOES GET_MapBufferOES(struct _glapi_table *disp) {
   return (_glptr_MapBufferOES) (GET_by_offset(disp, _gloffset_MapBufferOES));
}

static INLINE void SET_MapBufferOES(struct _glapi_table *disp, GLvoid * (GLAPIENTRYP fn)(GLenum, GLenum)) {
   SET_by_offset(disp, _gloffset_MapBufferOES, fn);
}

typedef GLboolean (GLAPIENTRYP _glptr_UnmapBufferOES)(GLenum);
#define CALL_UnmapBufferOES(disp, parameters) \
    (* GET_UnmapBufferOES(disp)) parameters
static INLINE _glptr_UnmapBufferOES GET_UnmapBufferOES(struct _glapi_table *disp) {
   return (_glptr_UnmapBufferOES) (GET_by_offset(disp, _gloffset_UnmapBufferOES));
}

static INLINE void SET_UnmapBufferOES(struct _glapi_table *disp, GLboolean (GLAPIENTRYP fn)(GLenum)) {
   SET_by_offset(disp, _gloffset_UnmapBufferOES, fn);
}

typedef void (GLAPIENTRYP _glptr_CompressedTexImage3DOES)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *);
#define CALL_CompressedTexImage3DOES(disp, parameters) \
    (* GET_CompressedTexImage3DOES(disp)) parameters
static INLINE _glptr_CompressedTexImage3DOES GET_CompressedTexImage3DOES(struct _glapi_table *disp) {
   return (_glptr_CompressedTexImage3DOES) (GET_by_offset(disp, _gloffset_CompressedTexImage3DOES));
}

static INLINE void SET_CompressedTexImage3DOES(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *)) {
   SET_by_offset(disp, _gloffset_CompressedTexImage3DOES, fn);
}

typedef void (GLAPIENTRYP _glptr_CompressedTexSubImage3DOES)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *);
#define CALL_CompressedTexSubImage3DOES(disp, parameters) \
    (* GET_CompressedTexSubImage3DOES(disp)) parameters
static INLINE _glptr_CompressedTexSubImage3DOES GET_CompressedTexSubImage3DOES(struct _glapi_table *disp) {
   return (_glptr_CompressedTexSubImage3DOES) (GET_by_offset(disp, _gloffset_CompressedTexSubImage3DOES));
}

static INLINE void SET_CompressedTexSubImage3DOES(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *)) {
   SET_by_offset(disp, _gloffset_CompressedTexSubImage3DOES, fn);
}

typedef void (GLAPIENTRYP _glptr_FramebufferTexture3DOES)(GLenum, GLenum, GLenum, GLuint, GLint, GLint);
#define CALL_FramebufferTexture3DOES(disp, parameters) \
    (* GET_FramebufferTexture3DOES(disp)) parameters
static INLINE _glptr_FramebufferTexture3DOES GET_FramebufferTexture3DOES(struct _glapi_table *disp) {
   return (_glptr_FramebufferTexture3DOES) (GET_by_offset(disp, _gloffset_FramebufferTexture3DOES));
}

static INLINE void SET_FramebufferTexture3DOES(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLuint, GLint, GLint)) {
   SET_by_offset(disp, _gloffset_FramebufferTexture3DOES, fn);
}

typedef void (GLAPIENTRYP _glptr_GetProgramBinaryOES)(GLuint, GLsizei, GLsizei *, GLenum *, GLvoid *);
#define CALL_GetProgramBinaryOES(disp, parameters) \
    (* GET_GetProgramBinaryOES(disp)) parameters
static INLINE _glptr_GetProgramBinaryOES GET_GetProgramBinaryOES(struct _glapi_table *disp) {
   return (_glptr_GetProgramBinaryOES) (GET_by_offset(disp, _gloffset_GetProgramBinaryOES));
}

static INLINE void SET_GetProgramBinaryOES(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint, GLsizei, GLsizei *, GLenum *, GLvoid *)) {
   SET_by_offset(disp, _gloffset_GetProgramBinaryOES, fn);
}

typedef void (GLAPIENTRYP _glptr_ProgramBinaryOES)(GLuint, GLenum, const GLvoid *, GLint);
#define CALL_ProgramBinaryOES(disp, parameters) \
    (* GET_ProgramBinaryOES(disp)) parameters
static INLINE _glptr_ProgramBinaryOES GET_ProgramBinaryOES(struct _glapi_table *disp) {
   return (_glptr_ProgramBinaryOES) (GET_by_offset(disp, _gloffset_ProgramBinaryOES));
}

static INLINE void SET_ProgramBinaryOES(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint, GLenum, const GLvoid *, GLint)) {
   SET_by_offset(disp, _gloffset_ProgramBinaryOES, fn);
}

typedef void (GLAPIENTRYP _glptr_MultiDrawArraysEXT)(GLenum, const GLint *, const GLsizei *, GLsizei);
#define CALL_MultiDrawArraysEXT(disp, parameters) \
    (* GET_MultiDrawArraysEXT(disp)) parameters
static INLINE _glptr_MultiDrawArraysEXT GET_MultiDrawArraysEXT(struct _glapi_table *disp) {
   return (_glptr_MultiDrawArraysEXT) (GET_by_offset(disp, _gloffset_MultiDrawArraysEXT));
}

static INLINE void SET_MultiDrawArraysEXT(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, const GLint *, const GLsizei *, GLsizei)) {
   SET_by_offset(disp, _gloffset_MultiDrawArraysEXT, fn);
}

typedef void (GLAPIENTRYP _glptr_MultiDrawElementsEXT)(GLenum, const GLsizei *, GLenum, const GLvoid **, GLsizei);
#define CALL_MultiDrawElementsEXT(disp, parameters) \
    (* GET_MultiDrawElementsEXT(disp)) parameters
static INLINE _glptr_MultiDrawElementsEXT GET_MultiDrawElementsEXT(struct _glapi_table *disp) {
   return (_glptr_MultiDrawElementsEXT) (GET_by_offset(disp, _gloffset_MultiDrawElementsEXT));
}

static INLINE void SET_MultiDrawElementsEXT(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, const GLsizei *, GLenum, const GLvoid **, GLsizei)) {
   SET_by_offset(disp, _gloffset_MultiDrawElementsEXT, fn);
}

typedef void (GLAPIENTRYP _glptr_BindVertexArrayAPPLE)(GLuint);
#define CALL_BindVertexArrayAPPLE(disp, parameters) \
    (* GET_BindVertexArrayAPPLE(disp)) parameters
static INLINE _glptr_BindVertexArrayAPPLE GET_BindVertexArrayAPPLE(struct _glapi_table *disp) {
   return (_glptr_BindVertexArrayAPPLE) (GET_by_offset(disp, _gloffset_BindVertexArrayAPPLE));
}

static INLINE void SET_BindVertexArrayAPPLE(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint)) {
   SET_by_offset(disp, _gloffset_BindVertexArrayAPPLE, fn);
}

typedef void (GLAPIENTRYP _glptr_DeleteVertexArraysAPPLE)(GLsizei, const GLuint *);
#define CALL_DeleteVertexArraysAPPLE(disp, parameters) \
    (* GET_DeleteVertexArraysAPPLE(disp)) parameters
static INLINE _glptr_DeleteVertexArraysAPPLE GET_DeleteVertexArraysAPPLE(struct _glapi_table *disp) {
   return (_glptr_DeleteVertexArraysAPPLE) (GET_by_offset(disp, _gloffset_DeleteVertexArraysAPPLE));
}

static INLINE void SET_DeleteVertexArraysAPPLE(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLsizei, const GLuint *)) {
   SET_by_offset(disp, _gloffset_DeleteVertexArraysAPPLE, fn);
}

typedef void (GLAPIENTRYP _glptr_GenVertexArraysAPPLE)(GLsizei, GLuint *);
#define CALL_GenVertexArraysAPPLE(disp, parameters) \
    (* GET_GenVertexArraysAPPLE(disp)) parameters
static INLINE _glptr_GenVertexArraysAPPLE GET_GenVertexArraysAPPLE(struct _glapi_table *disp) {
   return (_glptr_GenVertexArraysAPPLE) (GET_by_offset(disp, _gloffset_GenVertexArraysAPPLE));
}

static INLINE void SET_GenVertexArraysAPPLE(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLsizei, GLuint *)) {
   SET_by_offset(disp, _gloffset_GenVertexArraysAPPLE, fn);
}

typedef GLboolean (GLAPIENTRYP _glptr_IsVertexArrayAPPLE)(GLuint);
#define CALL_IsVertexArrayAPPLE(disp, parameters) \
    (* GET_IsVertexArrayAPPLE(disp)) parameters
static INLINE _glptr_IsVertexArrayAPPLE GET_IsVertexArrayAPPLE(struct _glapi_table *disp) {
   return (_glptr_IsVertexArrayAPPLE) (GET_by_offset(disp, _gloffset_IsVertexArrayAPPLE));
}

static INLINE void SET_IsVertexArrayAPPLE(struct _glapi_table *disp, GLboolean (GLAPIENTRYP fn)(GLuint)) {
   SET_by_offset(disp, _gloffset_IsVertexArrayAPPLE, fn);
}

typedef void (GLAPIENTRYP _glptr_EGLImageTargetRenderbufferStorageOES)(GLenum, GLvoid *);
#define CALL_EGLImageTargetRenderbufferStorageOES(disp, parameters) \
    (* GET_EGLImageTargetRenderbufferStorageOES(disp)) parameters
static INLINE _glptr_EGLImageTargetRenderbufferStorageOES GET_EGLImageTargetRenderbufferStorageOES(struct _glapi_table *disp) {
   return (_glptr_EGLImageTargetRenderbufferStorageOES) (GET_by_offset(disp, _gloffset_EGLImageTargetRenderbufferStorageOES));
}

static INLINE void SET_EGLImageTargetRenderbufferStorageOES(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLvoid *)) {
   SET_by_offset(disp, _gloffset_EGLImageTargetRenderbufferStorageOES, fn);
}

typedef void (GLAPIENTRYP _glptr_EGLImageTargetTexture2DOES)(GLenum, GLvoid *);
#define CALL_EGLImageTargetTexture2DOES(disp, parameters) \
    (* GET_EGLImageTargetTexture2DOES(disp)) parameters
static INLINE _glptr_EGLImageTargetTexture2DOES GET_EGLImageTargetTexture2DOES(struct _glapi_table *disp) {
   return (_glptr_EGLImageTargetTexture2DOES) (GET_by_offset(disp, _gloffset_EGLImageTargetTexture2DOES));
}

static INLINE void SET_EGLImageTargetTexture2DOES(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLvoid *)) {
   SET_by_offset(disp, _gloffset_EGLImageTargetTexture2DOES, fn);
}

typedef void (GLAPIENTRYP _glptr_CompressedTexImage2D)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *);
#define CALL_CompressedTexImage2D(disp, parameters) \
    (* GET_CompressedTexImage2D(disp)) parameters
static INLINE _glptr_CompressedTexImage2D GET_CompressedTexImage2D(struct _glapi_table *disp) {
   return (_glptr_CompressedTexImage2D) (GET_by_offset(disp, _gloffset_CompressedTexImage2D));
}

static INLINE void SET_CompressedTexImage2D(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *)) {
   SET_by_offset(disp, _gloffset_CompressedTexImage2D, fn);
}

typedef void (GLAPIENTRYP _glptr_CompressedTexSubImage2D)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *);
#define CALL_CompressedTexSubImage2D(disp, parameters) \
    (* GET_CompressedTexSubImage2D(disp)) parameters
static INLINE _glptr_CompressedTexSubImage2D GET_CompressedTexSubImage2D(struct _glapi_table *disp) {
   return (_glptr_CompressedTexSubImage2D) (GET_by_offset(disp, _gloffset_CompressedTexSubImage2D));
}

static INLINE void SET_CompressedTexSubImage2D(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *)) {
   SET_by_offset(disp, _gloffset_CompressedTexSubImage2D, fn);
}

typedef void (GLAPIENTRYP _glptr_SampleCoverage)(GLclampf, GLboolean);
#define CALL_SampleCoverage(disp, parameters) \
    (* GET_SampleCoverage(disp)) parameters
static INLINE _glptr_SampleCoverage GET_SampleCoverage(struct _glapi_table *disp) {
   return (_glptr_SampleCoverage) (GET_by_offset(disp, _gloffset_SampleCoverage));
}

static INLINE void SET_SampleCoverage(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLclampf, GLboolean)) {
   SET_by_offset(disp, _gloffset_SampleCoverage, fn);
}

typedef void (GLAPIENTRYP _glptr_BindBuffer)(GLenum, GLuint);
#define CALL_BindBuffer(disp, parameters) \
    (* GET_BindBuffer(disp)) parameters
static INLINE _glptr_BindBuffer GET_BindBuffer(struct _glapi_table *disp) {
   return (_glptr_BindBuffer) (GET_by_offset(disp, _gloffset_BindBuffer));
}

static INLINE void SET_BindBuffer(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLuint)) {
   SET_by_offset(disp, _gloffset_BindBuffer, fn);
}

typedef void (GLAPIENTRYP _glptr_BufferData)(GLenum, GLsizeiptr, const GLvoid *, GLenum);
#define CALL_BufferData(disp, parameters) \
    (* GET_BufferData(disp)) parameters
static INLINE _glptr_BufferData GET_BufferData(struct _glapi_table *disp) {
   return (_glptr_BufferData) (GET_by_offset(disp, _gloffset_BufferData));
}

static INLINE void SET_BufferData(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLsizeiptr, const GLvoid *, GLenum)) {
   SET_by_offset(disp, _gloffset_BufferData, fn);
}

typedef void (GLAPIENTRYP _glptr_BufferSubData)(GLenum, GLintptr, GLsizeiptr, const GLvoid *);
#define CALL_BufferSubData(disp, parameters) \
    (* GET_BufferSubData(disp)) parameters
static INLINE _glptr_BufferSubData GET_BufferSubData(struct _glapi_table *disp) {
   return (_glptr_BufferSubData) (GET_by_offset(disp, _gloffset_BufferSubData));
}

static INLINE void SET_BufferSubData(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLintptr, GLsizeiptr, const GLvoid *)) {
   SET_by_offset(disp, _gloffset_BufferSubData, fn);
}

typedef void (GLAPIENTRYP _glptr_DeleteBuffers)(GLsizei, const GLuint *);
#define CALL_DeleteBuffers(disp, parameters) \
    (* GET_DeleteBuffers(disp)) parameters
static INLINE _glptr_DeleteBuffers GET_DeleteBuffers(struct _glapi_table *disp) {
   return (_glptr_DeleteBuffers) (GET_by_offset(disp, _gloffset_DeleteBuffers));
}

static INLINE void SET_DeleteBuffers(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLsizei, const GLuint *)) {
   SET_by_offset(disp, _gloffset_DeleteBuffers, fn);
}

typedef void (GLAPIENTRYP _glptr_GenBuffers)(GLsizei, GLuint *);
#define CALL_GenBuffers(disp, parameters) \
    (* GET_GenBuffers(disp)) parameters
static INLINE _glptr_GenBuffers GET_GenBuffers(struct _glapi_table *disp) {
   return (_glptr_GenBuffers) (GET_by_offset(disp, _gloffset_GenBuffers));
}

static INLINE void SET_GenBuffers(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLsizei, GLuint *)) {
   SET_by_offset(disp, _gloffset_GenBuffers, fn);
}

typedef void (GLAPIENTRYP _glptr_GetBufferParameteriv)(GLenum, GLenum, GLint *);
#define CALL_GetBufferParameteriv(disp, parameters) \
    (* GET_GetBufferParameteriv(disp)) parameters
static INLINE _glptr_GetBufferParameteriv GET_GetBufferParameteriv(struct _glapi_table *disp) {
   return (_glptr_GetBufferParameteriv) (GET_by_offset(disp, _gloffset_GetBufferParameteriv));
}

static INLINE void SET_GetBufferParameteriv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLint *)) {
   SET_by_offset(disp, _gloffset_GetBufferParameteriv, fn);
}

typedef GLboolean (GLAPIENTRYP _glptr_IsBuffer)(GLuint);
#define CALL_IsBuffer(disp, parameters) \
    (* GET_IsBuffer(disp)) parameters
static INLINE _glptr_IsBuffer GET_IsBuffer(struct _glapi_table *disp) {
   return (_glptr_IsBuffer) (GET_by_offset(disp, _gloffset_IsBuffer));
}

static INLINE void SET_IsBuffer(struct _glapi_table *disp, GLboolean (GLAPIENTRYP fn)(GLuint)) {
   SET_by_offset(disp, _gloffset_IsBuffer, fn);
}

typedef void (GLAPIENTRYP _glptr_AttachShader)(GLuint, GLuint);
#define CALL_AttachShader(disp, parameters) \
    (* GET_AttachShader(disp)) parameters
static INLINE _glptr_AttachShader GET_AttachShader(struct _glapi_table *disp) {
   return (_glptr_AttachShader) (GET_by_offset(disp, _gloffset_AttachShader));
}

static INLINE void SET_AttachShader(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint, GLuint)) {
   SET_by_offset(disp, _gloffset_AttachShader, fn);
}

typedef void (GLAPIENTRYP _glptr_BindAttribLocation)(GLuint, GLuint, const GLchar *);
#define CALL_BindAttribLocation(disp, parameters) \
    (* GET_BindAttribLocation(disp)) parameters
static INLINE _glptr_BindAttribLocation GET_BindAttribLocation(struct _glapi_table *disp) {
   return (_glptr_BindAttribLocation) (GET_by_offset(disp, _gloffset_BindAttribLocation));
}

static INLINE void SET_BindAttribLocation(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint, GLuint, const GLchar *)) {
   SET_by_offset(disp, _gloffset_BindAttribLocation, fn);
}

typedef void (GLAPIENTRYP _glptr_BlendEquationSeparate)(GLenum, GLenum);
#define CALL_BlendEquationSeparate(disp, parameters) \
    (* GET_BlendEquationSeparate(disp)) parameters
static INLINE _glptr_BlendEquationSeparate GET_BlendEquationSeparate(struct _glapi_table *disp) {
   return (_glptr_BlendEquationSeparate) (GET_by_offset(disp, _gloffset_BlendEquationSeparate));
}

static INLINE void SET_BlendEquationSeparate(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum)) {
   SET_by_offset(disp, _gloffset_BlendEquationSeparate, fn);
}

typedef void (GLAPIENTRYP _glptr_CompileShader)(GLuint);
#define CALL_CompileShader(disp, parameters) \
    (* GET_CompileShader(disp)) parameters
static INLINE _glptr_CompileShader GET_CompileShader(struct _glapi_table *disp) {
   return (_glptr_CompileShader) (GET_by_offset(disp, _gloffset_CompileShader));
}

static INLINE void SET_CompileShader(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint)) {
   SET_by_offset(disp, _gloffset_CompileShader, fn);
}

typedef GLuint (GLAPIENTRYP _glptr_CreateProgram)(void);
#define CALL_CreateProgram(disp, parameters) \
    (* GET_CreateProgram(disp)) parameters
static INLINE _glptr_CreateProgram GET_CreateProgram(struct _glapi_table *disp) {
   return (_glptr_CreateProgram) (GET_by_offset(disp, _gloffset_CreateProgram));
}

static INLINE void SET_CreateProgram(struct _glapi_table *disp, GLuint (GLAPIENTRYP fn)(void)) {
   SET_by_offset(disp, _gloffset_CreateProgram, fn);
}

typedef GLuint (GLAPIENTRYP _glptr_CreateShader)(GLenum);
#define CALL_CreateShader(disp, parameters) \
    (* GET_CreateShader(disp)) parameters
static INLINE _glptr_CreateShader GET_CreateShader(struct _glapi_table *disp) {
   return (_glptr_CreateShader) (GET_by_offset(disp, _gloffset_CreateShader));
}

static INLINE void SET_CreateShader(struct _glapi_table *disp, GLuint (GLAPIENTRYP fn)(GLenum)) {
   SET_by_offset(disp, _gloffset_CreateShader, fn);
}

typedef void (GLAPIENTRYP _glptr_DeleteProgram)(GLuint);
#define CALL_DeleteProgram(disp, parameters) \
    (* GET_DeleteProgram(disp)) parameters
static INLINE _glptr_DeleteProgram GET_DeleteProgram(struct _glapi_table *disp) {
   return (_glptr_DeleteProgram) (GET_by_offset(disp, _gloffset_DeleteProgram));
}

static INLINE void SET_DeleteProgram(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint)) {
   SET_by_offset(disp, _gloffset_DeleteProgram, fn);
}

typedef void (GLAPIENTRYP _glptr_DeleteShader)(GLuint);
#define CALL_DeleteShader(disp, parameters) \
    (* GET_DeleteShader(disp)) parameters
static INLINE _glptr_DeleteShader GET_DeleteShader(struct _glapi_table *disp) {
   return (_glptr_DeleteShader) (GET_by_offset(disp, _gloffset_DeleteShader));
}

static INLINE void SET_DeleteShader(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint)) {
   SET_by_offset(disp, _gloffset_DeleteShader, fn);
}

typedef void (GLAPIENTRYP _glptr_DetachShader)(GLuint, GLuint);
#define CALL_DetachShader(disp, parameters) \
    (* GET_DetachShader(disp)) parameters
static INLINE _glptr_DetachShader GET_DetachShader(struct _glapi_table *disp) {
   return (_glptr_DetachShader) (GET_by_offset(disp, _gloffset_DetachShader));
}

static INLINE void SET_DetachShader(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint, GLuint)) {
   SET_by_offset(disp, _gloffset_DetachShader, fn);
}

typedef void (GLAPIENTRYP _glptr_DisableVertexAttribArray)(GLuint);
#define CALL_DisableVertexAttribArray(disp, parameters) \
    (* GET_DisableVertexAttribArray(disp)) parameters
static INLINE _glptr_DisableVertexAttribArray GET_DisableVertexAttribArray(struct _glapi_table *disp) {
   return (_glptr_DisableVertexAttribArray) (GET_by_offset(disp, _gloffset_DisableVertexAttribArray));
}

static INLINE void SET_DisableVertexAttribArray(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint)) {
   SET_by_offset(disp, _gloffset_DisableVertexAttribArray, fn);
}

typedef void (GLAPIENTRYP _glptr_EnableVertexAttribArray)(GLuint);
#define CALL_EnableVertexAttribArray(disp, parameters) \
    (* GET_EnableVertexAttribArray(disp)) parameters
static INLINE _glptr_EnableVertexAttribArray GET_EnableVertexAttribArray(struct _glapi_table *disp) {
   return (_glptr_EnableVertexAttribArray) (GET_by_offset(disp, _gloffset_EnableVertexAttribArray));
}

static INLINE void SET_EnableVertexAttribArray(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint)) {
   SET_by_offset(disp, _gloffset_EnableVertexAttribArray, fn);
}

typedef void (GLAPIENTRYP _glptr_GetActiveAttrib)(GLuint, GLuint, GLsizei , GLsizei *, GLint *, GLenum *, GLchar *);
#define CALL_GetActiveAttrib(disp, parameters) \
    (* GET_GetActiveAttrib(disp)) parameters
static INLINE _glptr_GetActiveAttrib GET_GetActiveAttrib(struct _glapi_table *disp) {
   return (_glptr_GetActiveAttrib) (GET_by_offset(disp, _gloffset_GetActiveAttrib));
}

static INLINE void SET_GetActiveAttrib(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint, GLuint, GLsizei , GLsizei *, GLint *, GLenum *, GLchar *)) {
   SET_by_offset(disp, _gloffset_GetActiveAttrib, fn);
}

typedef void (GLAPIENTRYP _glptr_GetActiveUniform)(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *);
#define CALL_GetActiveUniform(disp, parameters) \
    (* GET_GetActiveUniform(disp)) parameters
static INLINE _glptr_GetActiveUniform GET_GetActiveUniform(struct _glapi_table *disp) {
   return (_glptr_GetActiveUniform) (GET_by_offset(disp, _gloffset_GetActiveUniform));
}

static INLINE void SET_GetActiveUniform(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *)) {
   SET_by_offset(disp, _gloffset_GetActiveUniform, fn);
}

typedef void (GLAPIENTRYP _glptr_GetAttachedShaders)(GLuint, GLsizei, GLsizei *, GLuint *);
#define CALL_GetAttachedShaders(disp, parameters) \
    (* GET_GetAttachedShaders(disp)) parameters
static INLINE _glptr_GetAttachedShaders GET_GetAttachedShaders(struct _glapi_table *disp) {
   return (_glptr_GetAttachedShaders) (GET_by_offset(disp, _gloffset_GetAttachedShaders));
}

static INLINE void SET_GetAttachedShaders(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint, GLsizei, GLsizei *, GLuint *)) {
   SET_by_offset(disp, _gloffset_GetAttachedShaders, fn);
}

typedef GLint (GLAPIENTRYP _glptr_GetAttribLocation)(GLuint, const GLchar *);
#define CALL_GetAttribLocation(disp, parameters) \
    (* GET_GetAttribLocation(disp)) parameters
static INLINE _glptr_GetAttribLocation GET_GetAttribLocation(struct _glapi_table *disp) {
   return (_glptr_GetAttribLocation) (GET_by_offset(disp, _gloffset_GetAttribLocation));
}

static INLINE void SET_GetAttribLocation(struct _glapi_table *disp, GLint (GLAPIENTRYP fn)(GLuint, const GLchar *)) {
   SET_by_offset(disp, _gloffset_GetAttribLocation, fn);
}

typedef void (GLAPIENTRYP _glptr_GetProgramInfoLog)(GLuint, GLsizei, GLsizei *, GLchar *);
#define CALL_GetProgramInfoLog(disp, parameters) \
    (* GET_GetProgramInfoLog(disp)) parameters
static INLINE _glptr_GetProgramInfoLog GET_GetProgramInfoLog(struct _glapi_table *disp) {
   return (_glptr_GetProgramInfoLog) (GET_by_offset(disp, _gloffset_GetProgramInfoLog));
}

static INLINE void SET_GetProgramInfoLog(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint, GLsizei, GLsizei *, GLchar *)) {
   SET_by_offset(disp, _gloffset_GetProgramInfoLog, fn);
}

typedef void (GLAPIENTRYP _glptr_GetProgramiv)(GLuint, GLenum, GLint *);
#define CALL_GetProgramiv(disp, parameters) \
    (* GET_GetProgramiv(disp)) parameters
static INLINE _glptr_GetProgramiv GET_GetProgramiv(struct _glapi_table *disp) {
   return (_glptr_GetProgramiv) (GET_by_offset(disp, _gloffset_GetProgramiv));
}

static INLINE void SET_GetProgramiv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint, GLenum, GLint *)) {
   SET_by_offset(disp, _gloffset_GetProgramiv, fn);
}

typedef void (GLAPIENTRYP _glptr_GetShaderInfoLog)(GLuint, GLsizei, GLsizei *, GLchar *);
#define CALL_GetShaderInfoLog(disp, parameters) \
    (* GET_GetShaderInfoLog(disp)) parameters
static INLINE _glptr_GetShaderInfoLog GET_GetShaderInfoLog(struct _glapi_table *disp) {
   return (_glptr_GetShaderInfoLog) (GET_by_offset(disp, _gloffset_GetShaderInfoLog));
}

static INLINE void SET_GetShaderInfoLog(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint, GLsizei, GLsizei *, GLchar *)) {
   SET_by_offset(disp, _gloffset_GetShaderInfoLog, fn);
}

typedef void (GLAPIENTRYP _glptr_GetShaderSource)(GLuint, GLsizei, GLsizei *, GLchar *);
#define CALL_GetShaderSource(disp, parameters) \
    (* GET_GetShaderSource(disp)) parameters
static INLINE _glptr_GetShaderSource GET_GetShaderSource(struct _glapi_table *disp) {
   return (_glptr_GetShaderSource) (GET_by_offset(disp, _gloffset_GetShaderSource));
}

static INLINE void SET_GetShaderSource(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint, GLsizei, GLsizei *, GLchar *)) {
   SET_by_offset(disp, _gloffset_GetShaderSource, fn);
}

typedef void (GLAPIENTRYP _glptr_GetShaderiv)(GLuint, GLenum, GLint *);
#define CALL_GetShaderiv(disp, parameters) \
    (* GET_GetShaderiv(disp)) parameters
static INLINE _glptr_GetShaderiv GET_GetShaderiv(struct _glapi_table *disp) {
   return (_glptr_GetShaderiv) (GET_by_offset(disp, _gloffset_GetShaderiv));
}

static INLINE void SET_GetShaderiv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint, GLenum, GLint *)) {
   SET_by_offset(disp, _gloffset_GetShaderiv, fn);
}

typedef GLint (GLAPIENTRYP _glptr_GetUniformLocation)(GLuint, const GLchar *);
#define CALL_GetUniformLocation(disp, parameters) \
    (* GET_GetUniformLocation(disp)) parameters
static INLINE _glptr_GetUniformLocation GET_GetUniformLocation(struct _glapi_table *disp) {
   return (_glptr_GetUniformLocation) (GET_by_offset(disp, _gloffset_GetUniformLocation));
}

static INLINE void SET_GetUniformLocation(struct _glapi_table *disp, GLint (GLAPIENTRYP fn)(GLuint, const GLchar *)) {
   SET_by_offset(disp, _gloffset_GetUniformLocation, fn);
}

typedef void (GLAPIENTRYP _glptr_GetUniformfv)(GLuint, GLint, GLfloat *);
#define CALL_GetUniformfv(disp, parameters) \
    (* GET_GetUniformfv(disp)) parameters
static INLINE _glptr_GetUniformfv GET_GetUniformfv(struct _glapi_table *disp) {
   return (_glptr_GetUniformfv) (GET_by_offset(disp, _gloffset_GetUniformfv));
}

static INLINE void SET_GetUniformfv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint, GLint, GLfloat *)) {
   SET_by_offset(disp, _gloffset_GetUniformfv, fn);
}

typedef void (GLAPIENTRYP _glptr_GetUniformiv)(GLuint, GLint, GLint *);
#define CALL_GetUniformiv(disp, parameters) \
    (* GET_GetUniformiv(disp)) parameters
static INLINE _glptr_GetUniformiv GET_GetUniformiv(struct _glapi_table *disp) {
   return (_glptr_GetUniformiv) (GET_by_offset(disp, _gloffset_GetUniformiv));
}

static INLINE void SET_GetUniformiv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint, GLint, GLint *)) {
   SET_by_offset(disp, _gloffset_GetUniformiv, fn);
}

typedef void (GLAPIENTRYP _glptr_GetVertexAttribPointerv)(GLuint, GLenum, GLvoid **);
#define CALL_GetVertexAttribPointerv(disp, parameters) \
    (* GET_GetVertexAttribPointerv(disp)) parameters
static INLINE _glptr_GetVertexAttribPointerv GET_GetVertexAttribPointerv(struct _glapi_table *disp) {
   return (_glptr_GetVertexAttribPointerv) (GET_by_offset(disp, _gloffset_GetVertexAttribPointerv));
}

static INLINE void SET_GetVertexAttribPointerv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint, GLenum, GLvoid **)) {
   SET_by_offset(disp, _gloffset_GetVertexAttribPointerv, fn);
}

typedef void (GLAPIENTRYP _glptr_GetVertexAttribfv)(GLuint, GLenum, GLfloat *);
#define CALL_GetVertexAttribfv(disp, parameters) \
    (* GET_GetVertexAttribfv(disp)) parameters
static INLINE _glptr_GetVertexAttribfv GET_GetVertexAttribfv(struct _glapi_table *disp) {
   return (_glptr_GetVertexAttribfv) (GET_by_offset(disp, _gloffset_GetVertexAttribfv));
}

static INLINE void SET_GetVertexAttribfv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint, GLenum, GLfloat *)) {
   SET_by_offset(disp, _gloffset_GetVertexAttribfv, fn);
}

typedef void (GLAPIENTRYP _glptr_GetVertexAttribiv)(GLuint, GLenum, GLint *);
#define CALL_GetVertexAttribiv(disp, parameters) \
    (* GET_GetVertexAttribiv(disp)) parameters
static INLINE _glptr_GetVertexAttribiv GET_GetVertexAttribiv(struct _glapi_table *disp) {
   return (_glptr_GetVertexAttribiv) (GET_by_offset(disp, _gloffset_GetVertexAttribiv));
}

static INLINE void SET_GetVertexAttribiv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint, GLenum, GLint *)) {
   SET_by_offset(disp, _gloffset_GetVertexAttribiv, fn);
}

typedef GLboolean (GLAPIENTRYP _glptr_IsProgram)(GLuint);
#define CALL_IsProgram(disp, parameters) \
    (* GET_IsProgram(disp)) parameters
static INLINE _glptr_IsProgram GET_IsProgram(struct _glapi_table *disp) {
   return (_glptr_IsProgram) (GET_by_offset(disp, _gloffset_IsProgram));
}

static INLINE void SET_IsProgram(struct _glapi_table *disp, GLboolean (GLAPIENTRYP fn)(GLuint)) {
   SET_by_offset(disp, _gloffset_IsProgram, fn);
}

typedef GLboolean (GLAPIENTRYP _glptr_IsShader)(GLuint);
#define CALL_IsShader(disp, parameters) \
    (* GET_IsShader(disp)) parameters
static INLINE _glptr_IsShader GET_IsShader(struct _glapi_table *disp) {
   return (_glptr_IsShader) (GET_by_offset(disp, _gloffset_IsShader));
}

static INLINE void SET_IsShader(struct _glapi_table *disp, GLboolean (GLAPIENTRYP fn)(GLuint)) {
   SET_by_offset(disp, _gloffset_IsShader, fn);
}

typedef void (GLAPIENTRYP _glptr_LinkProgram)(GLuint);
#define CALL_LinkProgram(disp, parameters) \
    (* GET_LinkProgram(disp)) parameters
static INLINE _glptr_LinkProgram GET_LinkProgram(struct _glapi_table *disp) {
   return (_glptr_LinkProgram) (GET_by_offset(disp, _gloffset_LinkProgram));
}

static INLINE void SET_LinkProgram(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint)) {
   SET_by_offset(disp, _gloffset_LinkProgram, fn);
}

typedef void (GLAPIENTRYP _glptr_ShaderSource)(GLuint, GLsizei, const GLchar **, const GLint *);
#define CALL_ShaderSource(disp, parameters) \
    (* GET_ShaderSource(disp)) parameters
static INLINE _glptr_ShaderSource GET_ShaderSource(struct _glapi_table *disp) {
   return (_glptr_ShaderSource) (GET_by_offset(disp, _gloffset_ShaderSource));
}

static INLINE void SET_ShaderSource(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLchar **, const GLint *)) {
   SET_by_offset(disp, _gloffset_ShaderSource, fn);
}

typedef void (GLAPIENTRYP _glptr_StencilFuncSeparate)(GLenum, GLenum, GLint, GLuint);
#define CALL_StencilFuncSeparate(disp, parameters) \
    (* GET_StencilFuncSeparate(disp)) parameters
static INLINE _glptr_StencilFuncSeparate GET_StencilFuncSeparate(struct _glapi_table *disp) {
   return (_glptr_StencilFuncSeparate) (GET_by_offset(disp, _gloffset_StencilFuncSeparate));
}

static INLINE void SET_StencilFuncSeparate(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLint, GLuint)) {
   SET_by_offset(disp, _gloffset_StencilFuncSeparate, fn);
}

typedef void (GLAPIENTRYP _glptr_StencilMaskSeparate)(GLenum, GLuint);
#define CALL_StencilMaskSeparate(disp, parameters) \
    (* GET_StencilMaskSeparate(disp)) parameters
static INLINE _glptr_StencilMaskSeparate GET_StencilMaskSeparate(struct _glapi_table *disp) {
   return (_glptr_StencilMaskSeparate) (GET_by_offset(disp, _gloffset_StencilMaskSeparate));
}

static INLINE void SET_StencilMaskSeparate(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLuint)) {
   SET_by_offset(disp, _gloffset_StencilMaskSeparate, fn);
}

typedef void (GLAPIENTRYP _glptr_StencilOpSeparate)(GLenum, GLenum, GLenum, GLenum);
#define CALL_StencilOpSeparate(disp, parameters) \
    (* GET_StencilOpSeparate(disp)) parameters
static INLINE _glptr_StencilOpSeparate GET_StencilOpSeparate(struct _glapi_table *disp) {
   return (_glptr_StencilOpSeparate) (GET_by_offset(disp, _gloffset_StencilOpSeparate));
}

static INLINE void SET_StencilOpSeparate(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLenum)) {
   SET_by_offset(disp, _gloffset_StencilOpSeparate, fn);
}

typedef void (GLAPIENTRYP _glptr_Uniform1f)(GLint, GLfloat);
#define CALL_Uniform1f(disp, parameters) \
    (* GET_Uniform1f(disp)) parameters
static INLINE _glptr_Uniform1f GET_Uniform1f(struct _glapi_table *disp) {
   return (_glptr_Uniform1f) (GET_by_offset(disp, _gloffset_Uniform1f));
}

static INLINE void SET_Uniform1f(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLfloat)) {
   SET_by_offset(disp, _gloffset_Uniform1f, fn);
}

typedef void (GLAPIENTRYP _glptr_Uniform1fv)(GLint, GLsizei, const GLfloat *);
#define CALL_Uniform1fv(disp, parameters) \
    (* GET_Uniform1fv(disp)) parameters
static INLINE _glptr_Uniform1fv GET_Uniform1fv(struct _glapi_table *disp) {
   return (_glptr_Uniform1fv) (GET_by_offset(disp, _gloffset_Uniform1fv));
}

static INLINE void SET_Uniform1fv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLsizei, const GLfloat *)) {
   SET_by_offset(disp, _gloffset_Uniform1fv, fn);
}

typedef void (GLAPIENTRYP _glptr_Uniform1i)(GLint, GLint);
#define CALL_Uniform1i(disp, parameters) \
    (* GET_Uniform1i(disp)) parameters
static INLINE _glptr_Uniform1i GET_Uniform1i(struct _glapi_table *disp) {
   return (_glptr_Uniform1i) (GET_by_offset(disp, _gloffset_Uniform1i));
}

static INLINE void SET_Uniform1i(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLint)) {
   SET_by_offset(disp, _gloffset_Uniform1i, fn);
}

typedef void (GLAPIENTRYP _glptr_Uniform1iv)(GLint, GLsizei, const GLint *);
#define CALL_Uniform1iv(disp, parameters) \
    (* GET_Uniform1iv(disp)) parameters
static INLINE _glptr_Uniform1iv GET_Uniform1iv(struct _glapi_table *disp) {
   return (_glptr_Uniform1iv) (GET_by_offset(disp, _gloffset_Uniform1iv));
}

static INLINE void SET_Uniform1iv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLsizei, const GLint *)) {
   SET_by_offset(disp, _gloffset_Uniform1iv, fn);
}

typedef void (GLAPIENTRYP _glptr_Uniform2f)(GLint, GLfloat, GLfloat);
#define CALL_Uniform2f(disp, parameters) \
    (* GET_Uniform2f(disp)) parameters
static INLINE _glptr_Uniform2f GET_Uniform2f(struct _glapi_table *disp) {
   return (_glptr_Uniform2f) (GET_by_offset(disp, _gloffset_Uniform2f));
}

static INLINE void SET_Uniform2f(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLfloat, GLfloat)) {
   SET_by_offset(disp, _gloffset_Uniform2f, fn);
}

typedef void (GLAPIENTRYP _glptr_Uniform2fv)(GLint, GLsizei, const GLfloat *);
#define CALL_Uniform2fv(disp, parameters) \
    (* GET_Uniform2fv(disp)) parameters
static INLINE _glptr_Uniform2fv GET_Uniform2fv(struct _glapi_table *disp) {
   return (_glptr_Uniform2fv) (GET_by_offset(disp, _gloffset_Uniform2fv));
}

static INLINE void SET_Uniform2fv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLsizei, const GLfloat *)) {
   SET_by_offset(disp, _gloffset_Uniform2fv, fn);
}

typedef void (GLAPIENTRYP _glptr_Uniform2i)(GLint, GLint, GLint);
#define CALL_Uniform2i(disp, parameters) \
    (* GET_Uniform2i(disp)) parameters
static INLINE _glptr_Uniform2i GET_Uniform2i(struct _glapi_table *disp) {
   return (_glptr_Uniform2i) (GET_by_offset(disp, _gloffset_Uniform2i));
}

static INLINE void SET_Uniform2i(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLint, GLint)) {
   SET_by_offset(disp, _gloffset_Uniform2i, fn);
}

typedef void (GLAPIENTRYP _glptr_Uniform2iv)(GLint, GLsizei, const GLint *);
#define CALL_Uniform2iv(disp, parameters) \
    (* GET_Uniform2iv(disp)) parameters
static INLINE _glptr_Uniform2iv GET_Uniform2iv(struct _glapi_table *disp) {
   return (_glptr_Uniform2iv) (GET_by_offset(disp, _gloffset_Uniform2iv));
}

static INLINE void SET_Uniform2iv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLsizei, const GLint *)) {
   SET_by_offset(disp, _gloffset_Uniform2iv, fn);
}

typedef void (GLAPIENTRYP _glptr_Uniform3f)(GLint, GLfloat, GLfloat, GLfloat);
#define CALL_Uniform3f(disp, parameters) \
    (* GET_Uniform3f(disp)) parameters
static INLINE _glptr_Uniform3f GET_Uniform3f(struct _glapi_table *disp) {
   return (_glptr_Uniform3f) (GET_by_offset(disp, _gloffset_Uniform3f));
}

static INLINE void SET_Uniform3f(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLfloat, GLfloat, GLfloat)) {
   SET_by_offset(disp, _gloffset_Uniform3f, fn);
}

typedef void (GLAPIENTRYP _glptr_Uniform3fv)(GLint, GLsizei, const GLfloat *);
#define CALL_Uniform3fv(disp, parameters) \
    (* GET_Uniform3fv(disp)) parameters
static INLINE _glptr_Uniform3fv GET_Uniform3fv(struct _glapi_table *disp) {
   return (_glptr_Uniform3fv) (GET_by_offset(disp, _gloffset_Uniform3fv));
}

static INLINE void SET_Uniform3fv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLsizei, const GLfloat *)) {
   SET_by_offset(disp, _gloffset_Uniform3fv, fn);
}

typedef void (GLAPIENTRYP _glptr_Uniform3i)(GLint, GLint, GLint, GLint);
#define CALL_Uniform3i(disp, parameters) \
    (* GET_Uniform3i(disp)) parameters
static INLINE _glptr_Uniform3i GET_Uniform3i(struct _glapi_table *disp) {
   return (_glptr_Uniform3i) (GET_by_offset(disp, _gloffset_Uniform3i));
}

static INLINE void SET_Uniform3i(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLint, GLint, GLint)) {
   SET_by_offset(disp, _gloffset_Uniform3i, fn);
}

typedef void (GLAPIENTRYP _glptr_Uniform3iv)(GLint, GLsizei, const GLint *);
#define CALL_Uniform3iv(disp, parameters) \
    (* GET_Uniform3iv(disp)) parameters
static INLINE _glptr_Uniform3iv GET_Uniform3iv(struct _glapi_table *disp) {
   return (_glptr_Uniform3iv) (GET_by_offset(disp, _gloffset_Uniform3iv));
}

static INLINE void SET_Uniform3iv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLsizei, const GLint *)) {
   SET_by_offset(disp, _gloffset_Uniform3iv, fn);
}

typedef void (GLAPIENTRYP _glptr_Uniform4f)(GLint, GLfloat, GLfloat, GLfloat, GLfloat);
#define CALL_Uniform4f(disp, parameters) \
    (* GET_Uniform4f(disp)) parameters
static INLINE _glptr_Uniform4f GET_Uniform4f(struct _glapi_table *disp) {
   return (_glptr_Uniform4f) (GET_by_offset(disp, _gloffset_Uniform4f));
}

static INLINE void SET_Uniform4f(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLfloat, GLfloat, GLfloat, GLfloat)) {
   SET_by_offset(disp, _gloffset_Uniform4f, fn);
}

typedef void (GLAPIENTRYP _glptr_Uniform4fv)(GLint, GLsizei, const GLfloat *);
#define CALL_Uniform4fv(disp, parameters) \
    (* GET_Uniform4fv(disp)) parameters
static INLINE _glptr_Uniform4fv GET_Uniform4fv(struct _glapi_table *disp) {
   return (_glptr_Uniform4fv) (GET_by_offset(disp, _gloffset_Uniform4fv));
}

static INLINE void SET_Uniform4fv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLsizei, const GLfloat *)) {
   SET_by_offset(disp, _gloffset_Uniform4fv, fn);
}

typedef void (GLAPIENTRYP _glptr_Uniform4i)(GLint, GLint, GLint, GLint, GLint);
#define CALL_Uniform4i(disp, parameters) \
    (* GET_Uniform4i(disp)) parameters
static INLINE _glptr_Uniform4i GET_Uniform4i(struct _glapi_table *disp) {
   return (_glptr_Uniform4i) (GET_by_offset(disp, _gloffset_Uniform4i));
}

static INLINE void SET_Uniform4i(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLint, GLint, GLint, GLint)) {
   SET_by_offset(disp, _gloffset_Uniform4i, fn);
}

typedef void (GLAPIENTRYP _glptr_Uniform4iv)(GLint, GLsizei, const GLint *);
#define CALL_Uniform4iv(disp, parameters) \
    (* GET_Uniform4iv(disp)) parameters
static INLINE _glptr_Uniform4iv GET_Uniform4iv(struct _glapi_table *disp) {
   return (_glptr_Uniform4iv) (GET_by_offset(disp, _gloffset_Uniform4iv));
}

static INLINE void SET_Uniform4iv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLsizei, const GLint *)) {
   SET_by_offset(disp, _gloffset_Uniform4iv, fn);
}

typedef void (GLAPIENTRYP _glptr_UniformMatrix2fv)(GLint, GLsizei, GLboolean, const GLfloat *);
#define CALL_UniformMatrix2fv(disp, parameters) \
    (* GET_UniformMatrix2fv(disp)) parameters
static INLINE _glptr_UniformMatrix2fv GET_UniformMatrix2fv(struct _glapi_table *disp) {
   return (_glptr_UniformMatrix2fv) (GET_by_offset(disp, _gloffset_UniformMatrix2fv));
}

static INLINE void SET_UniformMatrix2fv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLsizei, GLboolean, const GLfloat *)) {
   SET_by_offset(disp, _gloffset_UniformMatrix2fv, fn);
}

typedef void (GLAPIENTRYP _glptr_UniformMatrix3fv)(GLint, GLsizei, GLboolean, const GLfloat *);
#define CALL_UniformMatrix3fv(disp, parameters) \
    (* GET_UniformMatrix3fv(disp)) parameters
static INLINE _glptr_UniformMatrix3fv GET_UniformMatrix3fv(struct _glapi_table *disp) {
   return (_glptr_UniformMatrix3fv) (GET_by_offset(disp, _gloffset_UniformMatrix3fv));
}

static INLINE void SET_UniformMatrix3fv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLsizei, GLboolean, const GLfloat *)) {
   SET_by_offset(disp, _gloffset_UniformMatrix3fv, fn);
}

typedef void (GLAPIENTRYP _glptr_UniformMatrix4fv)(GLint, GLsizei, GLboolean, const GLfloat *);
#define CALL_UniformMatrix4fv(disp, parameters) \
    (* GET_UniformMatrix4fv(disp)) parameters
static INLINE _glptr_UniformMatrix4fv GET_UniformMatrix4fv(struct _glapi_table *disp) {
   return (_glptr_UniformMatrix4fv) (GET_by_offset(disp, _gloffset_UniformMatrix4fv));
}

static INLINE void SET_UniformMatrix4fv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLint, GLsizei, GLboolean, const GLfloat *)) {
   SET_by_offset(disp, _gloffset_UniformMatrix4fv, fn);
}

typedef void (GLAPIENTRYP _glptr_UseProgram)(GLuint);
#define CALL_UseProgram(disp, parameters) \
    (* GET_UseProgram(disp)) parameters
static INLINE _glptr_UseProgram GET_UseProgram(struct _glapi_table *disp) {
   return (_glptr_UseProgram) (GET_by_offset(disp, _gloffset_UseProgram));
}

static INLINE void SET_UseProgram(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint)) {
   SET_by_offset(disp, _gloffset_UseProgram, fn);
}

typedef void (GLAPIENTRYP _glptr_ValidateProgram)(GLuint);
#define CALL_ValidateProgram(disp, parameters) \
    (* GET_ValidateProgram(disp)) parameters
static INLINE _glptr_ValidateProgram GET_ValidateProgram(struct _glapi_table *disp) {
   return (_glptr_ValidateProgram) (GET_by_offset(disp, _gloffset_ValidateProgram));
}

static INLINE void SET_ValidateProgram(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint)) {
   SET_by_offset(disp, _gloffset_ValidateProgram, fn);
}

typedef void (GLAPIENTRYP _glptr_VertexAttrib1f)(GLuint, GLfloat);
#define CALL_VertexAttrib1f(disp, parameters) \
    (* GET_VertexAttrib1f(disp)) parameters
static INLINE _glptr_VertexAttrib1f GET_VertexAttrib1f(struct _glapi_table *disp) {
   return (_glptr_VertexAttrib1f) (GET_by_offset(disp, _gloffset_VertexAttrib1f));
}

static INLINE void SET_VertexAttrib1f(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint, GLfloat)) {
   SET_by_offset(disp, _gloffset_VertexAttrib1f, fn);
}

typedef void (GLAPIENTRYP _glptr_VertexAttrib1fv)(GLuint, const GLfloat *);
#define CALL_VertexAttrib1fv(disp, parameters) \
    (* GET_VertexAttrib1fv(disp)) parameters
static INLINE _glptr_VertexAttrib1fv GET_VertexAttrib1fv(struct _glapi_table *disp) {
   return (_glptr_VertexAttrib1fv) (GET_by_offset(disp, _gloffset_VertexAttrib1fv));
}

static INLINE void SET_VertexAttrib1fv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint, const GLfloat *)) {
   SET_by_offset(disp, _gloffset_VertexAttrib1fv, fn);
}

typedef void (GLAPIENTRYP _glptr_VertexAttrib2f)(GLuint, GLfloat, GLfloat);
#define CALL_VertexAttrib2f(disp, parameters) \
    (* GET_VertexAttrib2f(disp)) parameters
static INLINE _glptr_VertexAttrib2f GET_VertexAttrib2f(struct _glapi_table *disp) {
   return (_glptr_VertexAttrib2f) (GET_by_offset(disp, _gloffset_VertexAttrib2f));
}

static INLINE void SET_VertexAttrib2f(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint, GLfloat, GLfloat)) {
   SET_by_offset(disp, _gloffset_VertexAttrib2f, fn);
}

typedef void (GLAPIENTRYP _glptr_VertexAttrib2fv)(GLuint, const GLfloat *);
#define CALL_VertexAttrib2fv(disp, parameters) \
    (* GET_VertexAttrib2fv(disp)) parameters
static INLINE _glptr_VertexAttrib2fv GET_VertexAttrib2fv(struct _glapi_table *disp) {
   return (_glptr_VertexAttrib2fv) (GET_by_offset(disp, _gloffset_VertexAttrib2fv));
}

static INLINE void SET_VertexAttrib2fv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint, const GLfloat *)) {
   SET_by_offset(disp, _gloffset_VertexAttrib2fv, fn);
}

typedef void (GLAPIENTRYP _glptr_VertexAttrib3f)(GLuint, GLfloat, GLfloat, GLfloat);
#define CALL_VertexAttrib3f(disp, parameters) \
    (* GET_VertexAttrib3f(disp)) parameters
static INLINE _glptr_VertexAttrib3f GET_VertexAttrib3f(struct _glapi_table *disp) {
   return (_glptr_VertexAttrib3f) (GET_by_offset(disp, _gloffset_VertexAttrib3f));
}

static INLINE void SET_VertexAttrib3f(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint, GLfloat, GLfloat, GLfloat)) {
   SET_by_offset(disp, _gloffset_VertexAttrib3f, fn);
}

typedef void (GLAPIENTRYP _glptr_VertexAttrib3fv)(GLuint, const GLfloat *);
#define CALL_VertexAttrib3fv(disp, parameters) \
    (* GET_VertexAttrib3fv(disp)) parameters
static INLINE _glptr_VertexAttrib3fv GET_VertexAttrib3fv(struct _glapi_table *disp) {
   return (_glptr_VertexAttrib3fv) (GET_by_offset(disp, _gloffset_VertexAttrib3fv));
}

static INLINE void SET_VertexAttrib3fv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint, const GLfloat *)) {
   SET_by_offset(disp, _gloffset_VertexAttrib3fv, fn);
}

typedef void (GLAPIENTRYP _glptr_VertexAttrib4f)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat);
#define CALL_VertexAttrib4f(disp, parameters) \
    (* GET_VertexAttrib4f(disp)) parameters
static INLINE _glptr_VertexAttrib4f GET_VertexAttrib4f(struct _glapi_table *disp) {
   return (_glptr_VertexAttrib4f) (GET_by_offset(disp, _gloffset_VertexAttrib4f));
}

static INLINE void SET_VertexAttrib4f(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat)) {
   SET_by_offset(disp, _gloffset_VertexAttrib4f, fn);
}

typedef void (GLAPIENTRYP _glptr_VertexAttrib4fv)(GLuint, const GLfloat *);
#define CALL_VertexAttrib4fv(disp, parameters) \
    (* GET_VertexAttrib4fv(disp)) parameters
static INLINE _glptr_VertexAttrib4fv GET_VertexAttrib4fv(struct _glapi_table *disp) {
   return (_glptr_VertexAttrib4fv) (GET_by_offset(disp, _gloffset_VertexAttrib4fv));
}

static INLINE void SET_VertexAttrib4fv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint, const GLfloat *)) {
   SET_by_offset(disp, _gloffset_VertexAttrib4fv, fn);
}

typedef void (GLAPIENTRYP _glptr_VertexAttribPointer)(GLuint, GLint, GLenum, GLboolean, GLsizei, const GLvoid *);
#define CALL_VertexAttribPointer(disp, parameters) \
    (* GET_VertexAttribPointer(disp)) parameters
static INLINE _glptr_VertexAttribPointer GET_VertexAttribPointer(struct _glapi_table *disp) {
   return (_glptr_VertexAttribPointer) (GET_by_offset(disp, _gloffset_VertexAttribPointer));
}

static INLINE void SET_VertexAttribPointer(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLuint, GLint, GLenum, GLboolean, GLsizei, const GLvoid *)) {
   SET_by_offset(disp, _gloffset_VertexAttribPointer, fn);
}

typedef void (GLAPIENTRYP _glptr_BlendFuncSeparate)(GLenum, GLenum, GLenum, GLenum);
#define CALL_BlendFuncSeparate(disp, parameters) \
    (* GET_BlendFuncSeparate(disp)) parameters
static INLINE _glptr_BlendFuncSeparate GET_BlendFuncSeparate(struct _glapi_table *disp) {
   return (_glptr_BlendFuncSeparate) (GET_by_offset(disp, _gloffset_BlendFuncSeparate));
}

static INLINE void SET_BlendFuncSeparate(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLenum)) {
   SET_by_offset(disp, _gloffset_BlendFuncSeparate, fn);
}

typedef void (GLAPIENTRYP _glptr_BindFramebuffer)(GLenum, GLuint);
#define CALL_BindFramebuffer(disp, parameters) \
    (* GET_BindFramebuffer(disp)) parameters
static INLINE _glptr_BindFramebuffer GET_BindFramebuffer(struct _glapi_table *disp) {
   return (_glptr_BindFramebuffer) (GET_by_offset(disp, _gloffset_BindFramebuffer));
}

static INLINE void SET_BindFramebuffer(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLuint)) {
   SET_by_offset(disp, _gloffset_BindFramebuffer, fn);
}

typedef void (GLAPIENTRYP _glptr_BindRenderbuffer)(GLenum, GLuint);
#define CALL_BindRenderbuffer(disp, parameters) \
    (* GET_BindRenderbuffer(disp)) parameters
static INLINE _glptr_BindRenderbuffer GET_BindRenderbuffer(struct _glapi_table *disp) {
   return (_glptr_BindRenderbuffer) (GET_by_offset(disp, _gloffset_BindRenderbuffer));
}

static INLINE void SET_BindRenderbuffer(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLuint)) {
   SET_by_offset(disp, _gloffset_BindRenderbuffer, fn);
}

typedef GLenum (GLAPIENTRYP _glptr_CheckFramebufferStatus)(GLenum);
#define CALL_CheckFramebufferStatus(disp, parameters) \
    (* GET_CheckFramebufferStatus(disp)) parameters
static INLINE _glptr_CheckFramebufferStatus GET_CheckFramebufferStatus(struct _glapi_table *disp) {
   return (_glptr_CheckFramebufferStatus) (GET_by_offset(disp, _gloffset_CheckFramebufferStatus));
}

static INLINE void SET_CheckFramebufferStatus(struct _glapi_table *disp, GLenum (GLAPIENTRYP fn)(GLenum)) {
   SET_by_offset(disp, _gloffset_CheckFramebufferStatus, fn);
}

typedef void (GLAPIENTRYP _glptr_ClearDepthf)(GLclampf);
#define CALL_ClearDepthf(disp, parameters) \
    (* GET_ClearDepthf(disp)) parameters
static INLINE _glptr_ClearDepthf GET_ClearDepthf(struct _glapi_table *disp) {
   return (_glptr_ClearDepthf) (GET_by_offset(disp, _gloffset_ClearDepthf));
}

static INLINE void SET_ClearDepthf(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLclampf)) {
   SET_by_offset(disp, _gloffset_ClearDepthf, fn);
}

typedef void (GLAPIENTRYP _glptr_DeleteFramebuffers)(GLsizei, const GLuint *);
#define CALL_DeleteFramebuffers(disp, parameters) \
    (* GET_DeleteFramebuffers(disp)) parameters
static INLINE _glptr_DeleteFramebuffers GET_DeleteFramebuffers(struct _glapi_table *disp) {
   return (_glptr_DeleteFramebuffers) (GET_by_offset(disp, _gloffset_DeleteFramebuffers));
}

static INLINE void SET_DeleteFramebuffers(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLsizei, const GLuint *)) {
   SET_by_offset(disp, _gloffset_DeleteFramebuffers, fn);
}

typedef void (GLAPIENTRYP _glptr_DeleteRenderbuffers)(GLsizei, const GLuint *);
#define CALL_DeleteRenderbuffers(disp, parameters) \
    (* GET_DeleteRenderbuffers(disp)) parameters
static INLINE _glptr_DeleteRenderbuffers GET_DeleteRenderbuffers(struct _glapi_table *disp) {
   return (_glptr_DeleteRenderbuffers) (GET_by_offset(disp, _gloffset_DeleteRenderbuffers));
}

static INLINE void SET_DeleteRenderbuffers(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLsizei, const GLuint *)) {
   SET_by_offset(disp, _gloffset_DeleteRenderbuffers, fn);
}

typedef void (GLAPIENTRYP _glptr_DepthRangef)(GLclampf, GLclampf);
#define CALL_DepthRangef(disp, parameters) \
    (* GET_DepthRangef(disp)) parameters
static INLINE _glptr_DepthRangef GET_DepthRangef(struct _glapi_table *disp) {
   return (_glptr_DepthRangef) (GET_by_offset(disp, _gloffset_DepthRangef));
}

static INLINE void SET_DepthRangef(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLclampf, GLclampf)) {
   SET_by_offset(disp, _gloffset_DepthRangef, fn);
}

typedef void (GLAPIENTRYP _glptr_FramebufferRenderbuffer)(GLenum, GLenum, GLenum, GLuint);
#define CALL_FramebufferRenderbuffer(disp, parameters) \
    (* GET_FramebufferRenderbuffer(disp)) parameters
static INLINE _glptr_FramebufferRenderbuffer GET_FramebufferRenderbuffer(struct _glapi_table *disp) {
   return (_glptr_FramebufferRenderbuffer) (GET_by_offset(disp, _gloffset_FramebufferRenderbuffer));
}

static INLINE void SET_FramebufferRenderbuffer(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLuint)) {
   SET_by_offset(disp, _gloffset_FramebufferRenderbuffer, fn);
}

typedef void (GLAPIENTRYP _glptr_FramebufferTexture2D)(GLenum, GLenum, GLenum, GLuint, GLint);
#define CALL_FramebufferTexture2D(disp, parameters) \
    (* GET_FramebufferTexture2D(disp)) parameters
static INLINE _glptr_FramebufferTexture2D GET_FramebufferTexture2D(struct _glapi_table *disp) {
   return (_glptr_FramebufferTexture2D) (GET_by_offset(disp, _gloffset_FramebufferTexture2D));
}

static INLINE void SET_FramebufferTexture2D(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLuint, GLint)) {
   SET_by_offset(disp, _gloffset_FramebufferTexture2D, fn);
}

typedef void (GLAPIENTRYP _glptr_GenFramebuffers)(GLsizei, GLuint *);
#define CALL_GenFramebuffers(disp, parameters) \
    (* GET_GenFramebuffers(disp)) parameters
static INLINE _glptr_GenFramebuffers GET_GenFramebuffers(struct _glapi_table *disp) {
   return (_glptr_GenFramebuffers) (GET_by_offset(disp, _gloffset_GenFramebuffers));
}

static INLINE void SET_GenFramebuffers(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLsizei, GLuint *)) {
   SET_by_offset(disp, _gloffset_GenFramebuffers, fn);
}

typedef void (GLAPIENTRYP _glptr_GenRenderbuffers)(GLsizei, GLuint *);
#define CALL_GenRenderbuffers(disp, parameters) \
    (* GET_GenRenderbuffers(disp)) parameters
static INLINE _glptr_GenRenderbuffers GET_GenRenderbuffers(struct _glapi_table *disp) {
   return (_glptr_GenRenderbuffers) (GET_by_offset(disp, _gloffset_GenRenderbuffers));
}

static INLINE void SET_GenRenderbuffers(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLsizei, GLuint *)) {
   SET_by_offset(disp, _gloffset_GenRenderbuffers, fn);
}

typedef void (GLAPIENTRYP _glptr_GenerateMipmap)(GLenum);
#define CALL_GenerateMipmap(disp, parameters) \
    (* GET_GenerateMipmap(disp)) parameters
static INLINE _glptr_GenerateMipmap GET_GenerateMipmap(struct _glapi_table *disp) {
   return (_glptr_GenerateMipmap) (GET_by_offset(disp, _gloffset_GenerateMipmap));
}

static INLINE void SET_GenerateMipmap(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum)) {
   SET_by_offset(disp, _gloffset_GenerateMipmap, fn);
}

typedef void (GLAPIENTRYP _glptr_GetFramebufferAttachmentParameteriv)(GLenum, GLenum, GLenum, GLint *);
#define CALL_GetFramebufferAttachmentParameteriv(disp, parameters) \
    (* GET_GetFramebufferAttachmentParameteriv(disp)) parameters
static INLINE _glptr_GetFramebufferAttachmentParameteriv GET_GetFramebufferAttachmentParameteriv(struct _glapi_table *disp) {
   return (_glptr_GetFramebufferAttachmentParameteriv) (GET_by_offset(disp, _gloffset_GetFramebufferAttachmentParameteriv));
}

static INLINE void SET_GetFramebufferAttachmentParameteriv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLint *)) {
   SET_by_offset(disp, _gloffset_GetFramebufferAttachmentParameteriv, fn);
}

typedef void (GLAPIENTRYP _glptr_GetRenderbufferParameteriv)(GLenum, GLenum, GLint *);
#define CALL_GetRenderbufferParameteriv(disp, parameters) \
    (* GET_GetRenderbufferParameteriv(disp)) parameters
static INLINE _glptr_GetRenderbufferParameteriv GET_GetRenderbufferParameteriv(struct _glapi_table *disp) {
   return (_glptr_GetRenderbufferParameteriv) (GET_by_offset(disp, _gloffset_GetRenderbufferParameteriv));
}

static INLINE void SET_GetRenderbufferParameteriv(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLint *)) {
   SET_by_offset(disp, _gloffset_GetRenderbufferParameteriv, fn);
}

typedef void (GLAPIENTRYP _glptr_GetShaderPrecisionFormat)(GLenum, GLenum, GLint *, GLint *);
#define CALL_GetShaderPrecisionFormat(disp, parameters) \
    (* GET_GetShaderPrecisionFormat(disp)) parameters
static INLINE _glptr_GetShaderPrecisionFormat GET_GetShaderPrecisionFormat(struct _glapi_table *disp) {
   return (_glptr_GetShaderPrecisionFormat) (GET_by_offset(disp, _gloffset_GetShaderPrecisionFormat));
}

static INLINE void SET_GetShaderPrecisionFormat(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLint *, GLint *)) {
   SET_by_offset(disp, _gloffset_GetShaderPrecisionFormat, fn);
}

typedef GLboolean (GLAPIENTRYP _glptr_IsFramebuffer)(GLuint);
#define CALL_IsFramebuffer(disp, parameters) \
    (* GET_IsFramebuffer(disp)) parameters
static INLINE _glptr_IsFramebuffer GET_IsFramebuffer(struct _glapi_table *disp) {
   return (_glptr_IsFramebuffer) (GET_by_offset(disp, _gloffset_IsFramebuffer));
}

static INLINE void SET_IsFramebuffer(struct _glapi_table *disp, GLboolean (GLAPIENTRYP fn)(GLuint)) {
   SET_by_offset(disp, _gloffset_IsFramebuffer, fn);
}

typedef GLboolean (GLAPIENTRYP _glptr_IsRenderbuffer)(GLuint);
#define CALL_IsRenderbuffer(disp, parameters) \
    (* GET_IsRenderbuffer(disp)) parameters
static INLINE _glptr_IsRenderbuffer GET_IsRenderbuffer(struct _glapi_table *disp) {
   return (_glptr_IsRenderbuffer) (GET_by_offset(disp, _gloffset_IsRenderbuffer));
}

static INLINE void SET_IsRenderbuffer(struct _glapi_table *disp, GLboolean (GLAPIENTRYP fn)(GLuint)) {
   SET_by_offset(disp, _gloffset_IsRenderbuffer, fn);
}

typedef void (GLAPIENTRYP _glptr_ReleaseShaderCompiler)(void);
#define CALL_ReleaseShaderCompiler(disp, parameters) \
    (* GET_ReleaseShaderCompiler(disp)) parameters
static INLINE _glptr_ReleaseShaderCompiler GET_ReleaseShaderCompiler(struct _glapi_table *disp) {
   return (_glptr_ReleaseShaderCompiler) (GET_by_offset(disp, _gloffset_ReleaseShaderCompiler));
}

static INLINE void SET_ReleaseShaderCompiler(struct _glapi_table *disp, void (GLAPIENTRYP fn)(void)) {
   SET_by_offset(disp, _gloffset_ReleaseShaderCompiler, fn);
}

typedef void (GLAPIENTRYP _glptr_RenderbufferStorage)(GLenum, GLenum, GLsizei, GLsizei);
#define CALL_RenderbufferStorage(disp, parameters) \
    (* GET_RenderbufferStorage(disp)) parameters
static INLINE _glptr_RenderbufferStorage GET_RenderbufferStorage(struct _glapi_table *disp) {
   return (_glptr_RenderbufferStorage) (GET_by_offset(disp, _gloffset_RenderbufferStorage));
}

static INLINE void SET_RenderbufferStorage(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLenum, GLenum, GLsizei, GLsizei)) {
   SET_by_offset(disp, _gloffset_RenderbufferStorage, fn);
}

typedef void (GLAPIENTRYP _glptr_ShaderBinary)(GLsizei, const GLuint *, GLenum, const GLvoid *, GLsizei);
#define CALL_ShaderBinary(disp, parameters) \
    (* GET_ShaderBinary(disp)) parameters
static INLINE _glptr_ShaderBinary GET_ShaderBinary(struct _glapi_table *disp) {
   return (_glptr_ShaderBinary) (GET_by_offset(disp, _gloffset_ShaderBinary));
}

static INLINE void SET_ShaderBinary(struct _glapi_table *disp, void (GLAPIENTRYP fn)(GLsizei, const GLuint *, GLenum, const GLvoid *, GLsizei)) {
   SET_by_offset(disp, _gloffset_ShaderBinary, fn);
}


/* define aliases for compatibility */
#define CALL_TexImage3D(disp, parameters) CALL_TexImage3DOES(disp, parameters)
#define GET_TexImage3D(disp) GET_TexImage3DOES(disp)
#define SET_TexImage3D(disp, fn) SET_TexImage3DOES(disp, fn)
#define CALL_TexSubImage3D(disp, parameters) CALL_TexSubImage3DOES(disp, parameters)
#define GET_TexSubImage3D(disp) GET_TexSubImage3DOES(disp)
#define SET_TexSubImage3D(disp, fn) SET_TexSubImage3DOES(disp, fn)
#define CALL_CopyTexSubImage3D(disp, parameters) CALL_CopyTexSubImage3DOES(disp, parameters)
#define GET_CopyTexSubImage3D(disp) GET_CopyTexSubImage3DOES(disp)
#define SET_CopyTexSubImage3D(disp, fn) SET_CopyTexSubImage3DOES(disp, fn)
#define CALL_ActiveTextureARB(disp, parameters) CALL_ActiveTexture(disp, parameters)
#define GET_ActiveTextureARB(disp) GET_ActiveTexture(disp)
#define SET_ActiveTextureARB(disp, fn) SET_ActiveTexture(disp, fn)

#if FEATURE_remap_table
#define TexImage3D_remap_index TexImage3DOES_remap_index
#define TexSubImage3D_remap_index TexSubImage3DOES_remap_index
#define CopyTexSubImage3D_remap_index CopyTexSubImage3DOES_remap_index
#define ActiveTextureARB_remap_index ActiveTexture_remap_index
#endif /* FEATURE_remap_table */


#endif /* !defined( _DISPATCH_H_ ) */
