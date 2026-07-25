/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CBFD8
 * Mangled: _ZN5Caver7Texture6UnloadEv
 * Demangled: Caver::Texture::Unload(void)
 *
 * Callers: 2
 *   0x0000000000200370  Caver::Texture::Unload(void)
 *   0x00000000004CBFD8  Caver::Texture::Unload(void)
 *
 * Callees: 1
 *   0x00000000001FBFC0  .glDeleteTextures
 *
 * Referenced strings: 10
 *   insn=0x00000000004CBFE8 string=0x00000000004CBFEC "h:@"
 *   insn=0x00000000004CBFEC string=0x00000000004CBFF0 "h"
 *   insn=0x00000000004CBFF0 string=0x00000000004CBFF4 "h"
 *   insn=0x00000000004CBFF0 string=0x00000000004CBFFC "t"
 *   insn=0x00000000004CC018 string=0x00000000004CC01C "("
 *   insn=0x00000000004CC020 string=0x00000000004CC038 "`"
 *   insn=0x00000000004CC028 string=0x00000000001FBFC0 "0'"
 *   insn=0x00000000004CC02C string=0x00000000004CC030 "h""
 *   insn=0x00000000004CC03C string=0x00000000004CC040 ""
 *   insn=0x00000000004CC054 string=0x00000000004CC058 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Texture::Unload(Caver::Texture *this)
{
  char *v2; // x8
  Caver::Texture **v3; // x20
  Caver::Texture **v4; // x21
  Caver::Texture *v5; // t1
  __int64 result; // x0

  if ( *((_QWORD *)this + 14) )
  {
    v2 = (char *)this + 56;
LABEL_7:
    *(_DWORD *)v2 = 0;
    goto LABEL_8;
  }
  v3 = (Caver::Texture **)*((_QWORD *)this + 15);
  v4 = (Caver::Texture **)*((_QWORD *)this + 16);
  while ( v4 != v3 )
  {
    v5 = *v3++;
    Caver::Texture::Unload(v5);
  }
  if ( *((_DWORD *)this + 14) )
  {
    glDeleteTextures();
    *((_DWORD *)this + 14) = 0;
    v2 = (char *)this + 72;
    goto LABEL_7;
  }
LABEL_8:
  result = *((_QWORD *)this + 3);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64, Caver::Texture *))(*(_QWORD *)result + 8LL))(result, this);
  return result;
}

