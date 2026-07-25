/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051C420
 * Mangled: _ZN12CPVRTglesExt14LoadExtensionsEv
 * Demangled: CPVRTglesExt::LoadExtensions(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F8CA0  .eglGetProcAddress
 *   0x00000000001FBC40  .memset
 *   0x00000000001FC810  .strstr
 *   0x00000000002007B0  .glGetString
 *
 * Referenced strings: 158
 *   insn=0x000000000051C438 string=0x000000000051C43C "`"
 *   insn=0x000000000051C438 string=0x00000000001FBC40 "0'"
 *   insn=0x000000000051C444 string=0x000000000059C2E0 "GL_OES_matrix_palette"
 *   insn=0x000000000051C450 string=0x000000000051C454 " "
 *   insn=0x000000000051C450 string=0x00000000001FC810 "0'"
 *   insn=0x000000000051C458 string=0x000000000059C2F6 "glCurrentPaletteMatrixOES"
 *   insn=0x000000000051C460 string=0x000000000051C464 "`"
 *   insn=0x000000000051C460 string=0x00000000001F8CA0 "0'"
 *   insn=0x000000000051C468 string=0x000000000059C310 "glLoadPaletteFromModelViewMatrixOES"
 *   insn=0x000000000051C470 string=0x000000000051C474 "`"
 *   insn=0x000000000051C478 string=0x000000000051C480 "r"
 *   insn=0x000000000051C478 string=0x000000000059C334 "glMatrixIndexPointerOES"
 *   insn=0x000000000051C480 string=0x000000000051C484 "`\n"
 *   insn=0x000000000051C488 string=0x000000000059C34C "glWeightPointerOES"
 *   insn=0x000000000051C490 string=0x000000000051C494 "`"
 *   insn=0x000000000051C498 string=0x000000000059C35F "GL_OES_draw_texture"
 *   insn=0x000000000051C4A4 string=0x000000000051C4A8 " "
 *   insn=0x000000000051C4AC string=0x000000000059C373 "glDrawTexiOES"
 *   insn=0x000000000051C4B4 string=0x000000000051C4B8 "`b"
 *   insn=0x000000000051C4BC string=0x000000000059C381 "glDrawTexivOES"
 *   insn=0x000000000051C4C4 string=0x000000000051C4C8 "`f"
 *   insn=0x000000000051C4CC string=0x000000000059C390 "glDrawTexsOES"
 *   insn=0x000000000051C4D4 string=0x000000000051C4D8 "`j"
 *   insn=0x000000000051C4DC string=0x000000000059C39E "glDrawTexsvOES"
 *   insn=0x000000000051C4E4 string=0x000000000051C4E8 "`n"
 *   insn=0x000000000051C4EC string=0x000000000059C3AD "glDrawTexxOES"
 *   insn=0x000000000051C4F4 string=0x000000000051C4F8 "`r"
 *   insn=0x000000000051C4FC string=0x000000000059C3BB "glDrawTexxvOES"
 *   insn=0x000000000051C504 string=0x000000000051C508 "`v"
 *   insn=0x000000000051C50C string=0x000000000059C3CA "glDrawTexfOES"
 *   insn=0x000000000051C514 string=0x000000000051C518 "`z"
 *   insn=0x000000000051C51C string=0x000000000059C3D8 "glDrawTexfvOES"
 *   insn=0x000000000051C524 string=0x000000000051C528 "`~"
 *   insn=0x000000000051C52C string=0x000000000059C3E7 "GL_OES_mapbuffer"
 *   insn=0x000000000051C540 string=0x000000000059C3F8 "glMapBufferOES"
 *   insn=0x000000000051C548 string=0x000000000051C54C "`"
 *   insn=0x000000000051C550 string=0x000000000059C407 "glUnmapBufferOES"
 *   insn=0x000000000051C558 string=0x000000000051C55C "`"
 *   insn=0x000000000051C560 string=0x000000000059C418 "glGetBufferPointervOES"
 *   insn=0x000000000051C568 string=0x000000000051C56C "`"
 *   insn=0x000000000051C570 string=0x000000000059C42F "GL_OES_framebuffer_object"
 *   insn=0x000000000051C584 string=0x000000000059C449 "glIsRenderbufferOES"
 *   insn=0x000000000051C58C string=0x000000000051C590 "`"
 *   insn=0x000000000051C594 string=0x000000000059C45D "glBindRenderbufferOES"
 *   insn=0x000000000051C59C string=0x000000000051C5A0 "`"
 *   insn=0x000000000051C5A4 string=0x000000000059C473 "glDeleteRenderbuffersOES"
 *   insn=0x000000000051C5AC string=0x000000000051C5B0 "`"
 *   insn=0x000000000051C5B4 string=0x000000000059C48C "glGenRenderbuffersOES"
 *   insn=0x000000000051C5BC string=0x000000000051C5C0 "`"
 *   insn=0x000000000051C5C4 string=0x000000000059C4A2 "glRenderbufferStorageOES"
 *   insn=0x000000000051C5CC string=0x000000000051C5D0 "`"
 *   insn=0x000000000051C5D4 string=0x000000000059C4BB "glGetRenderbufferParameterivOES"
 *   insn=0x000000000051C5DC string=0x000000000051C5E0 "`"
 *   insn=0x000000000051C5E4 string=0x000000000059C4DB "glIsFramebufferOES"
 *   insn=0x000000000051C5EC string=0x000000000051C5F0 "`"
 *   insn=0x000000000051C5F4 string=0x000000000059C4EE "glBindFramebufferOES"
 *   insn=0x000000000051C5FC string=0x000000000051C600 "`"
 *   insn=0x000000000051C604 string=0x000000000059C503 "glDeleteFramebuffersOES"
 *   insn=0x000000000051C60C string=0x000000000051C610 "`"
 *   insn=0x000000000051C614 string=0x000000000059C51B "glGenFramebuffersOES"
 *   insn=0x000000000051C61C string=0x000000000051C620 "`"
 *   insn=0x000000000051C624 string=0x000000000059C530 "glCheckFramebufferStatusOES"
 *   insn=0x000000000051C62C string=0x000000000051C630 "`"
 *   insn=0x000000000051C634 string=0x000000000059C54C "glFramebufferTexture2DOES"
 *   insn=0x000000000051C63C string=0x000000000051C640 "`"
 *   insn=0x000000000051C644 string=0x000000000059C566 "glFramebufferRenderbufferOES"
 *   insn=0x000000000051C64C string=0x000000000051C650 "`"
 *   insn=0x000000000051C654 string=0x000000000059C583 "glGetFramebufferAttachmentParameterivOES"
 *   insn=0x000000000051C65C string=0x000000000051C660 "`"
 *   insn=0x000000000051C664 string=0x000000000059C5AC "glGenerateMipmapOES"
 *   insn=0x000000000051C66C string=0x000000000051C670 "`"
 *   insn=0x000000000051C674 string=0x000000000059C5C0 "GL_OES_point_size_array"
 *   insn=0x000000000051C67C string=0x000000000051C680 "d"
 *   insn=0x000000000051C688 string=0x000000000059C5D8 "glPointSizePointerOES"
 *   insn=0x000000000051C690 string=0x000000000051C694 "`"
 *   insn=0x000000000051C698 string=0x000000000059C5EE "GL_IMG_user_clip_plane"
 *   insn=0x000000000051C6A0 string=0x000000000051C6A4 "["
 *   insn=0x000000000051C6A4 string=0x000000000051C6A8 " "
 *   insn=0x000000000051C6AC string=0x000000000051C6B4 "{q"
 *   insn=0x000000000051C6AC string=0x000000000059C605 "glClipPlanexIMG"
 *   insn=0x000000000051C6B4 string=0x000000000051C6B8 "`"
 *   insn=0x000000000051C6BC string=0x000000000051C6C4 "wq"
 *   insn=0x000000000051C6BC string=0x000000000059C615 "glClipPlanefIMG"
 *   insn=0x000000000051C6C4 string=0x000000000051C6C8 "`"
 *   insn=0x000000000051C6CC string=0x000000000059C625 "GL_IMG_vertex_program"
 *   insn=0x000000000051C6D4 string=0x000000000051C6D8 "N"
 *   insn=0x000000000051C6D8 string=0x000000000051C6DC " \t"
 *   insn=0x000000000051C6E0 string=0x000000000051C6E8 "nq"
 *   insn=0x000000000051C6E0 string=0x000000000059C63B "glVertexAttribPointerARB"
 *   insn=0x000000000051C6E8 string=0x000000000051C6EC "`"
 *   insn=0x000000000051C6F0 string=0x000000000051C6F8 "jq"
 *   insn=0x000000000051C6F0 string=0x000000000059C654 "glEnableVertexAttribArrayARB"
 *   insn=0x000000000051C6F8 string=0x000000000051C6FC "`"
 *   insn=0x000000000051C700 string=0x000000000051C708 "fq"
 *   insn=0x000000000051C700 string=0x000000000059C671 "glDisableVertexAttribArrayARB"
 *   insn=0x000000000051C708 string=0x000000000051C70C "`""
 *   insn=0x000000000051C710 string=0x000000000051C718 "bq"
 *   insn=0x000000000051C710 string=0x000000000059C68F "glProgramStringARB"
 *   insn=0x000000000051C718 string=0x000000000051C71C "`&"
 *   insn=0x000000000051C720 string=0x000000000051C728 "^q"
 *   insn=0x000000000051C720 string=0x000000000059C6A2 "glBindProgramARB"
 *   insn=0x000000000051C728 string=0x000000000051C72C "`*"
 *   insn=0x000000000051C730 string=0x000000000051C738 "Zq"
 *   insn=0x000000000051C730 string=0x000000000059C6B3 "glDeleteProgramsARB"
 *   insn=0x000000000051C738 string=0x000000000051C73C "`."
 *   insn=0x000000000051C740 string=0x000000000051C748 "Vq"
 *   insn=0x000000000051C740 string=0x000000000059C6C7 "glIsProgramARB"
 *   insn=0x000000000051C748 string=0x000000000051C74C "`6"
 *   insn=0x000000000051C750 string=0x000000000051C758 "Rq"
 *   insn=0x000000000051C750 string=0x000000000059C6D6 "glGenProgramsARB"
 *   insn=0x000000000051C758 string=0x000000000051C75C "`2"
 *   insn=0x000000000051C760 string=0x000000000051C768 "Nq"
 *   insn=0x000000000051C760 string=0x000000000059C6E7 "glVertexAttrib4fvARB"
 *   insn=0x000000000051C768 string=0x000000000051C76C "`J"
 *   insn=0x000000000051C770 string=0x000000000051C778 "Jq"
 *   insn=0x000000000051C770 string=0x000000000059C6FC "glVertexAttrib4xvIMG"
 *   insn=0x000000000051C778 string=0x000000000051C77C "`N"
 *   insn=0x000000000051C780 string=0x000000000051C788 "Fq"
 *   insn=0x000000000051C780 string=0x000000000059C711 "glProgramLocalParameter4xIMG"
 *   insn=0x000000000051C788 string=0x000000000051C78C "`R"
 *   insn=0x000000000051C790 string=0x000000000051C798 "Bq"
 *   insn=0x000000000051C790 string=0x000000000059C72E "glProgramLocalParameter4xvIMG"
 *   insn=0x000000000051C798 string=0x000000000051C79C "`V"
 *   insn=0x000000000051C7A0 string=0x000000000051C7A8 ">q"
 *   insn=0x000000000051C7A0 string=0x000000000059C74C "glProgramEnvParameter4xIMG"
 *   insn=0x000000000051C7A8 string=0x000000000051C7AC "`Z"
 *   insn=0x000000000051C7B0 string=0x000000000051C7B8 ":q"
 *   insn=0x000000000051C7B0 string=0x000000000059C767 "glProgramEnvParameter4xvIMG"
 *   insn=0x000000000051C7B8 string=0x000000000051C7BC "`^"
 *   insn=0x000000000051C7C0 string=0x000000000051C7C8 "6q"
 *   insn=0x000000000051C7C0 string=0x000000000059C783 "glProgramEnvParameter4fARB"
 *   insn=0x000000000051C7C8 string=0x000000000051C7CC "`:"
 *   insn=0x000000000051C7D0 string=0x000000000051C7D8 "2q"
 *   insn=0x000000000051C7D0 string=0x000000000059C79E "glProgramEnvParameter4fvARB"
 *   insn=0x000000000051C7D8 string=0x000000000051C7DC "`>"
 *   insn=0x000000000051C7E0 string=0x000000000051C7E8 ".q"
 *   insn=0x000000000051C7E0 string=0x000000000059C7BA "glProgramLocalParameter4fARB"
 *   insn=0x000000000051C7E8 string=0x000000000051C7EC "`B"
 *   insn=0x000000000051C7F0 string=0x000000000051C7F8 "*q"
 *   insn=0x000000000051C7F0 string=0x000000000059C7D7 "glProgramLocalParameter4fvARB"
 *   insn=0x000000000051C7F8 string=0x000000000051C7FC "`F"
 *   insn=0x000000000051C800 string=0x000000000059C7F5 "GL_IMG_texture_stream"
 *   insn=0x000000000051C814 string=0x000000000051C81C "!q"
 *   insn=0x000000000051C814 string=0x000000000059C80B "glGetTexStreamDeviceAttribivIMG"
 *   insn=0x000000000051C81C string=0x000000000051C820 "`"
 *   insn=0x000000000051C824 string=0x000000000059C82B "glTexBindStreamIMG"
 *   insn=0x000000000051C82C string=0x000000000051C830 "`"
 *   insn=0x000000000051C834 string=0x000000000059C83E "glGetTexStreamDeviceNameIMG"
 *   insn=0x000000000051C83C string=0x000000000051C840 "`"
 *   insn=0x000000000051C844 string=0x000000000059C85A "GL_EXT_multi_draw_arrays"
 *   insn=0x000000000051C850 string=0x000000000051C854 " "
 *   insn=0x000000000051C858 string=0x000000000059C873 "glMultiDrawElementsEXT"
 *   insn=0x000000000051C860 string=0x000000000051C864 "`"
 *   insn=0x000000000051C868 string=0x000000000059C88A "glMultiDrawArraysEXT"
 *   insn=0x000000000051C870 string=0x000000000051C874 "`"
 *   insn=0x000000000051C878 string=0x000000000059C89F "GL_OES_query_matrix"
 *   insn=0x000000000051C88C string=0x000000000059C8B3 "glQueryMatrixxOES"
 *   insn=0x000000000051C894 string=0x000000000051C898 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall CPVRTglesExt::LoadExtensions(CPVRTglesExt *this)
{
  const char *String; // x20
  __int64 result; // x0

  memset(this, 0, 0x1C8u);
  String = (const char *)glGetString();
  if ( strstr(String, "GL_OES_matrix_palette") )
  {
    *(_QWORD *)this = eglGetProcAddress();
    *((_QWORD *)this + 1) = eglGetProcAddress();
    *((_QWORD *)this + 2) = eglGetProcAddress();
    *((_QWORD *)this + 3) = eglGetProcAddress();
  }
  if ( strstr(String, "GL_OES_draw_texture") )
  {
    *((_QWORD *)this + 24) = eglGetProcAddress();
    *((_QWORD *)this + 25) = eglGetProcAddress();
    *((_QWORD *)this + 26) = eglGetProcAddress();
    *((_QWORD *)this + 27) = eglGetProcAddress();
    *((_QWORD *)this + 28) = eglGetProcAddress();
    *((_QWORD *)this + 29) = eglGetProcAddress();
    *((_QWORD *)this + 30) = eglGetProcAddress();
    *((_QWORD *)this + 31) = eglGetProcAddress();
  }
  if ( strstr(String, "GL_OES_mapbuffer") )
  {
    *((_QWORD *)this + 37) = eglGetProcAddress();
    *((_QWORD *)this + 38) = eglGetProcAddress();
    *((_QWORD *)this + 39) = eglGetProcAddress();
  }
  if ( strstr(String, "GL_OES_framebuffer_object") )
  {
    *((_QWORD *)this + 40) = eglGetProcAddress();
    *((_QWORD *)this + 41) = eglGetProcAddress();
    *((_QWORD *)this + 42) = eglGetProcAddress();
    *((_QWORD *)this + 43) = eglGetProcAddress();
    *((_QWORD *)this + 44) = eglGetProcAddress();
    *((_QWORD *)this + 45) = eglGetProcAddress();
    *((_QWORD *)this + 46) = eglGetProcAddress();
    *((_QWORD *)this + 47) = eglGetProcAddress();
    *((_QWORD *)this + 48) = eglGetProcAddress();
    *((_QWORD *)this + 49) = eglGetProcAddress();
    *((_QWORD *)this + 50) = eglGetProcAddress();
    *((_QWORD *)this + 51) = eglGetProcAddress();
    *((_QWORD *)this + 52) = eglGetProcAddress();
    *((_QWORD *)this + 53) = eglGetProcAddress();
    *((_QWORD *)this + 54) = eglGetProcAddress();
  }
  if ( strstr(String, "GL_OES_point_size_array") )
    *((_QWORD *)this + 55) = eglGetProcAddress();
  if ( strstr(String, "GL_IMG_user_clip_plane") )
  {
    *((_QWORD *)this + 5) = eglGetProcAddress();
    *((_QWORD *)this + 4) = eglGetProcAddress();
  }
  if ( strstr(String, "GL_IMG_vertex_program") )
  {
    *((_QWORD *)this + 6) = eglGetProcAddress();
    *((_QWORD *)this + 7) = eglGetProcAddress();
    *((_QWORD *)this + 8) = eglGetProcAddress();
    *((_QWORD *)this + 9) = eglGetProcAddress();
    *((_QWORD *)this + 10) = eglGetProcAddress();
    *((_QWORD *)this + 11) = eglGetProcAddress();
    *((_QWORD *)this + 13) = eglGetProcAddress();
    *((_QWORD *)this + 12) = eglGetProcAddress();
    *((_QWORD *)this + 18) = eglGetProcAddress();
    *((_QWORD *)this + 19) = eglGetProcAddress();
    *((_QWORD *)this + 20) = eglGetProcAddress();
    *((_QWORD *)this + 21) = eglGetProcAddress();
    *((_QWORD *)this + 22) = eglGetProcAddress();
    *((_QWORD *)this + 23) = eglGetProcAddress();
    *((_QWORD *)this + 14) = eglGetProcAddress();
    *((_QWORD *)this + 15) = eglGetProcAddress();
    *((_QWORD *)this + 16) = eglGetProcAddress();
    *((_QWORD *)this + 17) = eglGetProcAddress();
  }
  if ( strstr(String, "GL_IMG_texture_stream") )
  {
    *((_QWORD *)this + 32) = eglGetProcAddress();
    *((_QWORD *)this + 33) = eglGetProcAddress();
    *((_QWORD *)this + 34) = eglGetProcAddress();
  }
  if ( strstr(String, "GL_EXT_multi_draw_arrays") )
  {
    *((_QWORD *)this + 35) = eglGetProcAddress();
    *((_QWORD *)this + 36) = eglGetProcAddress();
  }
  result = (__int64)strstr(String, "GL_OES_query_matrix");
  if ( result )
  {
    result = eglGetProcAddress();
    *((_QWORD *)this + 56) = result;
  }
  return result;
}

