/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D11B0
 * Mangled: _ZN5Caver5Proto10FloatColor4SwapEPS1_
 * Demangled: Caver::Proto::FloatColor::Swap(Caver::Proto::FloatColor*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 20
 *   insn=0x00000000002D11B4 string=0x00000000002D11B8 "("
 *   insn=0x00000000002D11B8 string=0x00000000002D11BC "\t"
 *   insn=0x00000000002D11BC string=0x00000000002D11C0 ""
 *   insn=0x00000000002D11C0 string=0x00000000002D11C4 ")"
 *   insn=0x00000000002D11C4 string=0x00000000002D11C8 "("
 *   insn=0x00000000002D11C8 string=0x00000000002D11CC "\t"
 *   insn=0x00000000002D11CC string=0x00000000002D11D0 ""
 *   insn=0x00000000002D11D0 string=0x00000000002D11D4 ")"
 *   insn=0x00000000002D11D4 string=0x00000000002D11D8 "("
 *   insn=0x00000000002D11D8 string=0x00000000002D11DC "\t"
 *   insn=0x00000000002D11DC string=0x00000000002D11E0 ""
 *   insn=0x00000000002D11E0 string=0x00000000002D11E4 ")"
 *   insn=0x00000000002D11E4 string=0x00000000002D11E8 "("
 *   insn=0x00000000002D11E8 string=0x00000000002D11EC "\t"
 *   insn=0x00000000002D11EC string=0x00000000002D11F0 ""
 *   insn=0x00000000002D11F0 string=0x00000000002D11F4 ")"
 *   insn=0x00000000002D11F4 string=0x00000000002D11F8 "("
 *   insn=0x00000000002D11F8 string=0x00000000002D11FC "\t"
 *   insn=0x00000000002D11FC string=0x00000000002D1200 ""
 *   insn=0x00000000002D1200 string=0x00000000002D1204 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::FloatColor::Swap(__int64 this, Caver::Proto::FloatColor *a2)
{
  int v2; // w9
  __int64 v3; // x9

  if ( a2 != (Caver::Proto::FloatColor *)this )
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

