/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061c420
 * Function: CPVRTglesExt::LoadExtensions
 * Signature: undefined __thiscall LoadExtensions(CPVRTglesExt * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTglesExt::LoadExtensions() */

void __thiscall CPVRTglesExt::LoadExtensions(CPVRTglesExt *this)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  memset(this,0,0x1c8);
  pcVar1 = (char *)glGetString(0x1f03);
  pcVar2 = strstr(pcVar1,"GL_OES_matrix_palette");
  if (pcVar2 != (char *)0x0) {
    uVar3 = eglGetProcAddress("glCurrentPaletteMatrixOES");
    *(undefined8 *)this = uVar3;
    uVar3 = eglGetProcAddress("glLoadPaletteFromModelViewMatrixOES");
    *(undefined8 *)(this + 8) = uVar3;
    uVar3 = eglGetProcAddress("glMatrixIndexPointerOES");
    *(undefined8 *)(this + 0x10) = uVar3;
    uVar3 = eglGetProcAddress("glWeightPointerOES");
                    /* try { // try from 0061c494 to 0071c5c7 has its CatchHandler @ 0061b220 */
    *(undefined8 *)(this + 0x18) = uVar3;
  }
  pcVar2 = strstr(pcVar1,"GL_OES_draw_texture");
  if (pcVar2 != (char *)0x0) {
    uVar3 = eglGetProcAddress("glDrawTexiOES");
    *(undefined8 *)(this + 0xc0) = uVar3;
    uVar3 = eglGetProcAddress("glDrawTexivOES");
    *(undefined8 *)(this + 200) = uVar3;
    uVar3 = eglGetProcAddress("glDrawTexsOES");
    *(undefined8 *)(this + 0xd0) = uVar3;
    uVar3 = eglGetProcAddress("glDrawTexsvOES");
    *(undefined8 *)(this + 0xd8) = uVar3;
    uVar3 = eglGetProcAddress("glDrawTexxOES");
    *(undefined8 *)(this + 0xe0) = uVar3;
    uVar3 = eglGetProcAddress("glDrawTexxvOES");
    *(undefined8 *)(this + 0xe8) = uVar3;
    uVar3 = eglGetProcAddress("glDrawTexfOES");
    *(undefined8 *)(this + 0xf0) = uVar3;
    uVar3 = eglGetProcAddress("glDrawTexfvOES");
    *(undefined8 *)(this + 0xf8) = uVar3;
  }
  pcVar2 = strstr(pcVar1,"GL_OES_mapbuffer");
  if (pcVar2 != (char *)0x0) {
    uVar3 = eglGetProcAddress("glMapBufferOES");
    *(undefined8 *)(this + 0x128) = uVar3;
    uVar3 = eglGetProcAddress("glUnmapBufferOES");
    *(undefined8 *)(this + 0x130) = uVar3;
    uVar3 = eglGetProcAddress("glGetBufferPointervOES");
    *(undefined8 *)(this + 0x138) = uVar3;
  }
  pcVar2 = strstr(pcVar1,"GL_OES_framebuffer_object");
  if (pcVar2 != (char *)0x0) {
    uVar3 = eglGetProcAddress("glIsRenderbufferOES");
    *(undefined8 *)(this + 0x140) = uVar3;
    uVar3 = eglGetProcAddress("glBindRenderbufferOES");
    *(undefined8 *)(this + 0x148) = uVar3;
    uVar3 = eglGetProcAddress("glDeleteRenderbuffersOES");
    *(undefined8 *)(this + 0x150) = uVar3;
    uVar3 = eglGetProcAddress("glGenRenderbuffersOES");
    *(undefined8 *)(this + 0x158) = uVar3;
                    /* catch() { ... } // from try @ 0061c004 with catch @ 0061c5c4
                       catch() { ... } // from try @ 0061c19c with catch @ 0061c5c4 */
    uVar3 = eglGetProcAddress("glRenderbufferStorageOES");
    *(undefined8 *)(this + 0x160) = uVar3;
    uVar3 = eglGetProcAddress("glGetRenderbufferParameterivOES");
    *(undefined8 *)(this + 0x168) = uVar3;
    uVar3 = eglGetProcAddress("glIsFramebufferOES");
    *(undefined8 *)(this + 0x170) = uVar3;
    uVar3 = eglGetProcAddress("glBindFramebufferOES");
    *(undefined8 *)(this + 0x178) = uVar3;
    uVar3 = eglGetProcAddress("glDeleteFramebuffersOES");
    *(undefined8 *)(this + 0x180) = uVar3;
    uVar3 = eglGetProcAddress("glGenFramebuffersOES");
    *(undefined8 *)(this + 0x188) = uVar3;
    uVar3 = eglGetProcAddress("glCheckFramebufferStatusOES");
    *(undefined8 *)(this + 400) = uVar3;
    uVar3 = eglGetProcAddress("glFramebufferTexture2DOES");
    *(undefined8 *)(this + 0x198) = uVar3;
    uVar3 = eglGetProcAddress("glFramebufferRenderbufferOES");
    *(undefined8 *)(this + 0x1a0) = uVar3;
    uVar3 = eglGetProcAddress("glGetFramebufferAttachmentParameterivOES");
    *(undefined8 *)(this + 0x1a8) = uVar3;
    uVar3 = eglGetProcAddress("glGenerateMipmapOES");
    *(undefined8 *)(this + 0x1b0) = uVar3;
  }
  pcVar2 = strstr(pcVar1,"GL_OES_point_size_array");
  if (pcVar2 != (char *)0x0) {
    uVar3 = eglGetProcAddress("glPointSizePointerOES");
    *(undefined8 *)(this + 0x1b8) = uVar3;
  }
  pcVar2 = strstr(pcVar1,"GL_IMG_user_clip_plane");
  if (pcVar2 != (char *)0x0) {
    uVar3 = eglGetProcAddress("glClipPlanexIMG");
    *(undefined8 *)(this + 0x28) = uVar3;
    uVar3 = eglGetProcAddress("glClipPlanefIMG");
    *(undefined8 *)(this + 0x20) = uVar3;
  }
  pcVar2 = strstr(pcVar1,"GL_IMG_vertex_program");
  if (pcVar2 != (char *)0x0) {
    uVar3 = eglGetProcAddress("glVertexAttribPointerARB");
    *(undefined8 *)(this + 0x30) = uVar3;
    uVar3 = eglGetProcAddress("glEnableVertexAttribArrayARB");
    *(undefined8 *)(this + 0x38) = uVar3;
    uVar3 = eglGetProcAddress("glDisableVertexAttribArrayARB");
    *(undefined8 *)(this + 0x40) = uVar3;
    uVar3 = eglGetProcAddress("glProgramStringARB");
    *(undefined8 *)(this + 0x48) = uVar3;
    uVar3 = eglGetProcAddress("glBindProgramARB");
    *(undefined8 *)(this + 0x50) = uVar3;
    uVar3 = eglGetProcAddress("glDeleteProgramsARB");
    *(undefined8 *)(this + 0x58) = uVar3;
    uVar3 = eglGetProcAddress("glIsProgramARB");
    *(undefined8 *)(this + 0x68) = uVar3;
    uVar3 = eglGetProcAddress("glGenProgramsARB");
    *(undefined8 *)(this + 0x60) = uVar3;
    uVar3 = eglGetProcAddress("glVertexAttrib4fvARB");
    *(undefined8 *)(this + 0x90) = uVar3;
    uVar3 = eglGetProcAddress("glVertexAttrib4xvIMG");
    *(undefined8 *)(this + 0x98) = uVar3;
    uVar3 = eglGetProcAddress("glProgramLocalParameter4xIMG");
    *(undefined8 *)(this + 0xa0) = uVar3;
    uVar3 = eglGetProcAddress("glProgramLocalParameter4xvIMG");
    *(undefined8 *)(this + 0xa8) = uVar3;
    uVar3 = eglGetProcAddress("glProgramEnvParameter4xIMG");
    *(undefined8 *)(this + 0xb0) = uVar3;
    uVar3 = eglGetProcAddress("glProgramEnvParameter4xvIMG");
    *(undefined8 *)(this + 0xb8) = uVar3;
    uVar3 = eglGetProcAddress("glProgramEnvParameter4fARB");
    *(undefined8 *)(this + 0x70) = uVar3;
                    /* catch() { ... } // from try @ 0061c890 with catch @ 0061c7d4
                       catch() { ... } // from try @ 0061c958 with catch @ 0061c7d4 */
    uVar3 = eglGetProcAddress("glProgramEnvParameter4fvARB");
    *(undefined8 *)(this + 0x78) = uVar3;
    uVar3 = eglGetProcAddress("glProgramLocalParameter4fARB");
    *(undefined8 *)(this + 0x80) = uVar3;
    uVar3 = eglGetProcAddress("glProgramLocalParameter4fvARB");
                    /* try { // try from 0061c7fc to 0071c7ff has its CatchHandler @ 0061c8bc */
    *(undefined8 *)(this + 0x88) = uVar3;
  }
  pcVar2 = strstr(pcVar1,"GL_IMG_texture_stream");
  if (pcVar2 != (char *)0x0) {
    uVar3 = eglGetProcAddress("glGetTexStreamDeviceAttribivIMG");
                    /* try { // try from 0061c820 to 0071c847 has its CatchHandler @ 0061c8ac */
    *(undefined8 *)(this + 0x100) = uVar3;
    uVar3 = eglGetProcAddress("glTexBindStreamIMG");
    *(undefined8 *)(this + 0x108) = uVar3;
    uVar3 = eglGetProcAddress("glGetTexStreamDeviceNameIMG");
    *(undefined8 *)(this + 0x110) = uVar3;
  }
  pcVar2 = strstr(pcVar1,"GL_EXT_multi_draw_arrays");
  if (pcVar2 != (char *)0x0) {
    uVar3 = eglGetProcAddress("glMultiDrawElementsEXT");
    *(undefined8 *)(this + 0x118) = uVar3;
                    /* try { // try from 0061c868 to 0071c88f has its CatchHandler @ 0061c8a4 */
    uVar3 = eglGetProcAddress("glMultiDrawArraysEXT");
    *(undefined8 *)(this + 0x120) = uVar3;
  }
  pcVar1 = strstr(pcVar1,"GL_OES_query_matrix");
  if (pcVar1 != (char *)0x0) {
                    /* try { // try from 0061c890 to 0071c8df has its CatchHandler @ 0061c7d4 */
    uVar3 = eglGetProcAddress("glQueryMatrixxOES");
    *(undefined8 *)(this + 0x1c0) = uVar3;
  }
                    /* catch() { ... } // from try @ 0061c868 with catch @ 0061c8a4 */
  return;
}


