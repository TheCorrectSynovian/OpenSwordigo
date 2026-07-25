/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D412C
 * Mangled: _ZN5Caver5Proto10Font_Glyph4SwapEPS1_
 * Demangled: Caver::Proto::Font_Glyph::Swap(Caver::Proto::Font_Glyph*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 25
 *   insn=0x00000000002D412C string=0x00000000002D4130 " "
 *   insn=0x00000000002D4130 string=0x00000000002D4134 "("
 *   insn=0x00000000002D4134 string=0x00000000002D4138 "\t"
 *   insn=0x00000000002D4138 string=0x00000000002D413C ""
 *   insn=0x00000000002D413C string=0x00000000002D4140 ")"
 *   insn=0x00000000002D4140 string=0x00000000002D4144 "(@"
 *   insn=0x00000000002D4144 string=0x00000000002D4148 "\t@"
 *   insn=0x00000000002D4148 string=0x00000000002D414C ""
 *   insn=0x00000000002D414C string=0x00000000002D4150 ")"
 *   insn=0x00000000002D4150 string=0x00000000002D4154 "("
 *   insn=0x00000000002D4154 string=0x00000000002D4158 "\t"
 *   insn=0x00000000002D4158 string=0x00000000002D415C ""
 *   insn=0x00000000002D415C string=0x00000000002D4160 ")"
 *   insn=0x00000000002D4160 string=0x00000000002D4164 "("
 *   insn=0x00000000002D4164 string=0x00000000002D4168 "\t"
 *   insn=0x00000000002D4168 string=0x00000000002D416C ""
 *   insn=0x00000000002D416C string=0x00000000002D4170 ")"
 *   insn=0x00000000002D4170 string=0x00000000002D4174 "((@"
 *   insn=0x00000000002D4174 string=0x00000000002D4178 "\t(@"
 *   insn=0x00000000002D4178 string=0x00000000002D417C "("
 *   insn=0x00000000002D417C string=0x00000000002D4180 ")("
 *   insn=0x00000000002D4180 string=0x00000000002D4184 "(@"
 *   insn=0x00000000002D4184 string=0x00000000002D4188 "\t@"
 *   insn=0x00000000002D4188 string=0x00000000002D418C ""
 *   insn=0x00000000002D418C string=0x00000000002D4190 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Font_Glyph::Swap(__int64 this, Caver::Proto::Font_Glyph *a2)
{
  int v2; // w9
  __int64 v3; // x9
  __int64 v4; // x9

  if ( a2 != (Caver::Proto::Font_Glyph *)this )
  {
    v2 = *(_DWORD *)(this + 12);
    *(_DWORD *)(this + 12) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    v3 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 24);
    *(_DWORD *)(this + 24) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v3;
    v4 = *(_QWORD *)(this + 32);
    *(_QWORD *)(this + 32) = *((_QWORD *)a2 + 4);
    *((_QWORD *)a2 + 4) = v4;
    LODWORD(v4) = *(_DWORD *)(this + 40);
    *(_DWORD *)(this + 40) = *((_DWORD *)a2 + 10);
    *((_DWORD *)a2 + 10) = v4;
    LODWORD(v4) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v4;
  }
  return this;
}

