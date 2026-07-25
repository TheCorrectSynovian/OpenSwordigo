/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F25CC
 * Mangled: _ZN5Caver5Proto10LevelState4SwapEPS1_
 * Demangled: Caver::Proto::LevelState::Swap(Caver::Proto::LevelState*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 28
 *   insn=0x00000000002F25D0 string=0x00000000002F25D4 "(@"
 *   insn=0x00000000002F25D4 string=0x00000000002F25D8 "\t@"
 *   insn=0x00000000002F25D8 string=0x00000000002F25DC ""
 *   insn=0x00000000002F25DC string=0x00000000002F25E0 ")"
 *   insn=0x00000000002F25E0 string=0x00000000002F25E4 "(`@9\t`@9`"
 *   insn=0x00000000002F25E4 string=0x00000000002F25E8 "\t`@9`"
 *   insn=0x00000000002F25E8 string=0x00000000002F25EC "`"
 *   insn=0x00000000002F25EC string=0x00000000002F25F0 ")`"
 *   insn=0x00000000002F25F0 string=0x00000000002F25F4 "("
 *   insn=0x00000000002F25F4 string=0x00000000002F25F8 "\t"
 *   insn=0x00000000002F25F8 string=0x00000000002F25FC ""
 *   insn=0x00000000002F25FC string=0x00000000002F2600 ")"
 *   insn=0x00000000002F2600 string=0x00000000002F2604 "((@"
 *   insn=0x00000000002F2604 string=0x00000000002F2608 "\t(@"
 *   insn=0x00000000002F2608 string=0x00000000002F260C "("
 *   insn=0x00000000002F260C string=0x00000000002F2610 ")("
 *   insn=0x00000000002F2610 string=0x00000000002F2614 "(,@"
 *   insn=0x00000000002F2614 string=0x00000000002F2618 "\t,@"
 *   insn=0x00000000002F2618 string=0x00000000002F261C ","
 *   insn=0x00000000002F261C string=0x00000000002F2620 "),"
 *   insn=0x00000000002F2620 string=0x00000000002F2624 "(0@"
 *   insn=0x00000000002F2624 string=0x00000000002F2628 "\t0@"
 *   insn=0x00000000002F2628 string=0x00000000002F262C "0"
 *   insn=0x00000000002F262C string=0x00000000002F2630 ")0"
 *   insn=0x00000000002F2630 string=0x00000000002F2634 "(@"
 *   insn=0x00000000002F2634 string=0x00000000002F2638 "\t@"
 *   insn=0x00000000002F2638 string=0x00000000002F263C ""
 *   insn=0x00000000002F263C string=0x00000000002F2640 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::LevelState::Swap(__int64 this, Caver::Proto::LevelState *a2)
{
  __int64 v2; // x9
  __int64 v3; // x9

  if ( a2 != (Caver::Proto::LevelState *)this )
  {
    v2 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v2;
    LOBYTE(v2) = *(_BYTE *)(this + 24);
    *(_BYTE *)(this + 24) = *((_BYTE *)a2 + 24);
    *((_BYTE *)a2 + 24) = v2;
    v3 = *(_QWORD *)(this + 32);
    *(_QWORD *)(this + 32) = *((_QWORD *)a2 + 4);
    *((_QWORD *)a2 + 4) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 40);
    *(_DWORD *)(this + 40) = *((_DWORD *)a2 + 10);
    *((_DWORD *)a2 + 10) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 44);
    *(_DWORD *)(this + 44) = *((_DWORD *)a2 + 11);
    *((_DWORD *)a2 + 11) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 48);
    *(_DWORD *)(this + 48) = *((_DWORD *)a2 + 12);
    *((_DWORD *)a2 + 12) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v3;
  }
  return this;
}

