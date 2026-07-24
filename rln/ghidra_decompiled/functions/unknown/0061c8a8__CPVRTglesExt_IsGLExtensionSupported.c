/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061c8a8
 * Function: CPVRTglesExt::IsGLExtensionSupported
 * Signature: undefined __cdecl IsGLExtensionSupported(char * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTglesExt::IsGLExtensionSupported(char const*) */

bool CPVRTglesExt::IsGLExtensionSupported(char *param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  byte *__haystack;
  byte *pbVar4;
  size_t sVar5;
  
                    /* catch() { ... } // from try @ 0061c820 with catch @ 0061c8ac */
                    /* catch() { ... } // from try @ 0061c7fc with catch @ 0061c8bc */
  pcVar3 = strchr(param_1,0x20);
                    /* try { // try from 0061c8e0 to 0071c957 has its CatchHandler @ 0061c960 */
  if ((pcVar3 == (char *)0x0) && (*param_1 != '\0')) {
    __haystack = (byte *)glGetString(0x1f03);
    if (__haystack == (byte *)0x0) {
                    /* try { // try from 0061c958 to 0071c963 has its CatchHandler @ 0061c7d4 */
                    /* catch() { ... } // from try @ 0061c8e0 with catch @ 0061c960 */
      iVar2 = strcmp(param_1,"GL_IMG_texture_compression_pvrtc");
                    /* catch() { ... } // from try @ 0061c978 with catch @ 0061c964 */
      bVar1 = iVar2 != 0;
    }
    else {
      pbVar4 = (byte *)strstr((char *)__haystack,param_1);
      bVar1 = false;
      if (pbVar4 != (byte *)0x0) {
        sVar5 = strlen(param_1);
        do {
          bVar1 = pbVar4 == __haystack;
          __haystack = pbVar4 + sVar5;
          if (((bVar1) || (pbVar4[-1] == 0x20)) && ((*__haystack | 0x20) == 0x20)) {
            return true;
          }
          pbVar4 = (byte *)strstr((char *)__haystack,param_1);
        } while (pbVar4 != (byte *)0x0);
        bVar1 = false;
      }
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


