/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000321B88
 * Mangled: _ZN5Caver5Proto20FireEmitterComponent4SwapEPS1_
 * Demangled: Caver::Proto::FireEmitterComponent::Swap(Caver::Proto::FireEmitterComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 41
 *   insn=0x0000000000321B88 string=0x0000000000321B8C " "
 *   insn=0x0000000000321B8C string=0x0000000000321B90 "("
 *   insn=0x0000000000321B90 string=0x0000000000321B94 "\t"
 *   insn=0x0000000000321B94 string=0x0000000000321B98 ""
 *   insn=0x0000000000321B98 string=0x0000000000321B9C ")"
 *   insn=0x0000000000321B9C string=0x0000000000321BA0 "("
 *   insn=0x0000000000321BA0 string=0x0000000000321BA4 "\t"
 *   insn=0x0000000000321BA4 string=0x0000000000321BA8 ""
 *   insn=0x0000000000321BA8 string=0x0000000000321BAC ")"
 *   insn=0x0000000000321BAC string=0x0000000000321BB0 "("
 *   insn=0x0000000000321BB0 string=0x0000000000321BB4 "\t"
 *   insn=0x0000000000321BB4 string=0x0000000000321BB8 ""
 *   insn=0x0000000000321BB8 string=0x0000000000321BBC ")"
 *   insn=0x0000000000321BBC string=0x0000000000321BC0 "("
 *   insn=0x0000000000321BC0 string=0x0000000000321BC4 "\t"
 *   insn=0x0000000000321BC4 string=0x0000000000321BC8 ""
 *   insn=0x0000000000321BC8 string=0x0000000000321BCC ")"
 *   insn=0x0000000000321BCC string=0x0000000000321BD0 "("
 *   insn=0x0000000000321BD0 string=0x0000000000321BD4 "\t"
 *   insn=0x0000000000321BD4 string=0x0000000000321BD8 ""
 *   insn=0x0000000000321BD8 string=0x0000000000321BDC ")"
 *   insn=0x0000000000321BDC string=0x0000000000321BE0 "(0@"
 *   insn=0x0000000000321BE0 string=0x0000000000321BE4 "\t0@"
 *   insn=0x0000000000321BE4 string=0x0000000000321BE8 "0"
 *   insn=0x0000000000321BE8 string=0x0000000000321BEC ")0"
 *   insn=0x0000000000321BEC string=0x0000000000321BF0 "(4@"
 *   insn=0x0000000000321BF0 string=0x0000000000321BF4 "\t4@"
 *   insn=0x0000000000321BF4 string=0x0000000000321BF8 "4"
 *   insn=0x0000000000321BF8 string=0x0000000000321BFC ")4"
 *   insn=0x0000000000321BFC string=0x0000000000321C00 "("
 *   insn=0x0000000000321C00 string=0x0000000000321C04 "\t"
 *   insn=0x0000000000321C04 string=0x0000000000321C08 ""
 *   insn=0x0000000000321C08 string=0x0000000000321C0C ")"
 *   insn=0x0000000000321C0C string=0x0000000000321C10 "(@@"
 *   insn=0x0000000000321C10 string=0x0000000000321C14 "\t@@"
 *   insn=0x0000000000321C14 string=0x0000000000321C18 "@"
 *   insn=0x0000000000321C18 string=0x0000000000321C1C ")@"
 *   insn=0x0000000000321C1C string=0x0000000000321C20 "(@"
 *   insn=0x0000000000321C20 string=0x0000000000321C24 "\t@"
 *   insn=0x0000000000321C24 string=0x0000000000321C28 ""
 *   insn=0x0000000000321C28 string=0x0000000000321C2C ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::FireEmitterComponent::Swap(__int64 this, Caver::Proto::FireEmitterComponent *a2)
{
  int v2; // w9
  int v3; // w9
  __int64 v4; // x9
  __int64 v5; // x9
  __int64 v6; // x9
  __int64 v7; // x9

  if ( a2 != (Caver::Proto::FireEmitterComponent *)this )
  {
    v2 = *(_DWORD *)(this + 12);
    *(_DWORD *)(this + 12) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    v3 = *(_DWORD *)(this + 16);
    *(_DWORD *)(this + 16) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v3;
    v4 = *(_QWORD *)(this + 24);
    *(_QWORD *)(this + 24) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = v4;
    v5 = *(_QWORD *)(this + 32);
    *(_QWORD *)(this + 32) = *((_QWORD *)a2 + 4);
    *((_QWORD *)a2 + 4) = v5;
    v6 = *(_QWORD *)(this + 40);
    *(_QWORD *)(this + 40) = *((_QWORD *)a2 + 5);
    *((_QWORD *)a2 + 5) = v6;
    LODWORD(v6) = *(_DWORD *)(this + 48);
    *(_DWORD *)(this + 48) = *((_DWORD *)a2 + 12);
    *((_DWORD *)a2 + 12) = v6;
    LODWORD(v6) = *(_DWORD *)(this + 52);
    *(_DWORD *)(this + 52) = *((_DWORD *)a2 + 13);
    *((_DWORD *)a2 + 13) = v6;
    v7 = *(_QWORD *)(this + 56);
    *(_QWORD *)(this + 56) = *((_QWORD *)a2 + 7);
    *((_QWORD *)a2 + 7) = v7;
    LODWORD(v7) = *(_DWORD *)(this + 64);
    *(_DWORD *)(this + 64) = *((_DWORD *)a2 + 16);
    *((_DWORD *)a2 + 16) = v7;
    LODWORD(v7) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v7;
  }
  return this;
}

