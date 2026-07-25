/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CF1B0
 * Mangled: _ZN5Caver5Proto9Rectangle4SwapEPS1_
 * Demangled: Caver::Proto::Rectangle::Swap(Caver::Proto::Rectangle*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 20
 *   insn=0x00000000002CF1B4 string=0x00000000002CF1B8 "("
 *   insn=0x00000000002CF1B8 string=0x00000000002CF1BC "\t"
 *   insn=0x00000000002CF1BC string=0x00000000002CF1C0 ""
 *   insn=0x00000000002CF1C0 string=0x00000000002CF1C4 ")"
 *   insn=0x00000000002CF1C4 string=0x00000000002CF1C8 "("
 *   insn=0x00000000002CF1C8 string=0x00000000002CF1CC "\t"
 *   insn=0x00000000002CF1CC string=0x00000000002CF1D0 ""
 *   insn=0x00000000002CF1D0 string=0x00000000002CF1D4 ")"
 *   insn=0x00000000002CF1D4 string=0x00000000002CF1D8 "("
 *   insn=0x00000000002CF1D8 string=0x00000000002CF1DC "\t"
 *   insn=0x00000000002CF1DC string=0x00000000002CF1E0 ""
 *   insn=0x00000000002CF1E0 string=0x00000000002CF1E4 ")"
 *   insn=0x00000000002CF1E4 string=0x00000000002CF1E8 "("
 *   insn=0x00000000002CF1E8 string=0x00000000002CF1EC "\t"
 *   insn=0x00000000002CF1EC string=0x00000000002CF1F0 ""
 *   insn=0x00000000002CF1F0 string=0x00000000002CF1F4 ")"
 *   insn=0x00000000002CF1F4 string=0x00000000002CF1F8 "("
 *   insn=0x00000000002CF1F8 string=0x00000000002CF1FC "\t"
 *   insn=0x00000000002CF1FC string=0x00000000002CF200 ""
 *   insn=0x00000000002CF200 string=0x00000000002CF204 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Rectangle::Swap(__int64 this, Caver::Proto::Rectangle *a2)
{
  int v2; // w9
  __int64 v3; // x9

  if ( a2 != (Caver::Proto::Rectangle *)this )
  {
    v2 = *(_DWORD *)(this + 28);
    *(_DWORD *)(this + 28) = *((_DWORD *)a2 + 7);
    *((_DWORD *)a2 + 7) = v2;
    v3 = *(_QWORD *)(this + 8);
    *(_QWORD *)(this + 8) = *((_QWORD *)a2 + 1);
    *((_QWORD *)a2 + 1) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 16);
    *(_DWORD *)(this + 16) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 20);
    *(_DWORD *)(this + 20) = *((_DWORD *)a2 + 5);
    *((_DWORD *)a2 + 5) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 24);
    *(_DWORD *)(this + 24) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v3;
  }
  return this;
}

