/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D1C50
 * Mangled: _ZN5Caver5Proto18Texture_Subtexture4SwapEPS1_
 * Demangled: Caver::Proto::Texture_Subtexture::Swap(Caver::Proto::Texture_Subtexture*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x00000000002D1C50 string=0x00000000002D1C54 " "
 *   insn=0x00000000002D1C54 string=0x00000000002D1C58 "(@"
 *   insn=0x00000000002D1C58 string=0x00000000002D1C5C "\t@"
 *   insn=0x00000000002D1C5C string=0x00000000002D1C60 ""
 *   insn=0x00000000002D1C60 string=0x00000000002D1C64 ")"
 *   insn=0x00000000002D1C64 string=0x00000000002D1C68 "("
 *   insn=0x00000000002D1C68 string=0x00000000002D1C6C "\t"
 *   insn=0x00000000002D1C6C string=0x00000000002D1C70 ""
 *   insn=0x00000000002D1C70 string=0x00000000002D1C74 ")"
 *   insn=0x00000000002D1C74 string=0x00000000002D1C78 "("
 *   insn=0x00000000002D1C78 string=0x00000000002D1C7C "\t"
 *   insn=0x00000000002D1C7C string=0x00000000002D1C80 ""
 *   insn=0x00000000002D1C80 string=0x00000000002D1C84 ")"
 *   insn=0x00000000002D1C84 string=0x00000000002D1C88 "(@"
 *   insn=0x00000000002D1C88 string=0x00000000002D1C8C "\t@"
 *   insn=0x00000000002D1C8C string=0x00000000002D1C90 ""
 *   insn=0x00000000002D1C90 string=0x00000000002D1C94 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Texture_Subtexture::Swap(__int64 this, Caver::Proto::Texture_Subtexture *a2)
{
  __int64 v2; // x9
  __int64 v3; // x9
  __int64 v4; // x9

  if ( a2 != (Caver::Proto::Texture_Subtexture *)this )
  {
    v2 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v2;
    v3 = *(_QWORD *)(this + 24);
    *(_QWORD *)(this + 24) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = v3;
    v4 = *(_QWORD *)(this + 32);
    *(_QWORD *)(this + 32) = *((_QWORD *)a2 + 4);
    *((_QWORD *)a2 + 4) = v4;
    LODWORD(v4) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v4;
  }
  return this;
}

