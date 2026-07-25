/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051C8A8
 * Mangled: _ZN12CPVRTglesExt22IsGLExtensionSupportedEPKc
 * Demangled: CPVRTglesExt::IsGLExtensionSupported(char const*)
 *
 * Callers: 1
 *   0x00000000001FADE0  CPVRTglesExt::IsGLExtensionSupported(char const*)
 *
 * Callees: 5
 *   0x00000000001FA030  .strchr
 *   0x00000000001FA120  .strcmp
 *   0x00000000001FC810  .strstr
 *   0x00000000002007B0  .glGetString
 *   0x0000000000203230  .strlen
 *
 * Referenced strings: 12
 *   insn=0x000000000051C8C0 string=0x00000000001FA030 "0'"
 *   insn=0x000000000051C8C4 string=0x000000000051C8DC "h"
 *   insn=0x000000000051C8DC string=0x000000000051C8E0 "H"
 *   insn=0x000000000051C8E0 string=0x000000000051C8E4 "`"
 *   insn=0x000000000051C8EC string=0x000000000051C8F0 "4"
 *   insn=0x000000000051C8FC string=0x00000000001FC810 "0'"
 *   insn=0x000000000051C900 string=0x000000000051C904 "V"
 *   insn=0x000000000051C908 string=0x000000000051C90C "I"
 *   insn=0x000000000051C92C string=0x000000000051C930 ""
 *   insn=0x000000000051C948 string=0x000000000051C94C "V"
 *   insn=0x000000000051C954 string=0x000000000059BB5C "GL_IMG_texture_compression_pvrtc"
 *   insn=0x000000000051C960 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

char *__fastcall CPVRTglesExt::IsGLExtensionSupported(CPVRTglesExt *this, const char *a2)
{
  char *result; // x0
  const char *String; // x0
  char *v5; // x20
  char *v6; // x22
  size_t v7; // x21
  bool v8; // zf

  if ( strchr((const char *)this, 32) || !*(_BYTE *)this )
    return 0;
  String = (const char *)glGetString();
  v5 = (char *)String;
  if ( !String )
    return (char *)(strcmp((const char *)this, "GL_IMG_texture_compression_pvrtc") != 0);
  result = strstr(String, (const char *)this);
  v6 = result;
  if ( result )
  {
    v7 = strlen((const char *)this);
    while ( 1 )
    {
      v8 = v6 == v5;
      v5 = &v6[v7];
      if ( (v8 || *(v6 - 1) == 32) && ((unsigned __int8)*v5 | 0x20) == 0x20 )
        break;
      result = strstr(&v6[v7], (const char *)this);
      v6 = result;
      if ( !result )
        return result;
    }
    return (_BYTE *)(&dword_0 + 1);
  }
  return result;
}

