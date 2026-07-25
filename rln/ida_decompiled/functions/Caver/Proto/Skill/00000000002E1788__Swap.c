/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E1788
 * Mangled: _ZN5Caver5Proto5Skill4SwapEPS1_
 * Demangled: Caver::Proto::Skill::Swap(Caver::Proto::Skill*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 33
 *   insn=0x00000000002E1788 string=0x00000000002E178C " "
 *   insn=0x00000000002E178C string=0x00000000002E1790 "(@"
 *   insn=0x00000000002E1790 string=0x00000000002E1794 "\t@"
 *   insn=0x00000000002E1794 string=0x00000000002E1798 ""
 *   insn=0x00000000002E1798 string=0x00000000002E179C ")"
 *   insn=0x00000000002E179C string=0x00000000002E17A0 "("
 *   insn=0x00000000002E17A0 string=0x00000000002E17A4 "\t"
 *   insn=0x00000000002E17A4 string=0x00000000002E17A8 ""
 *   insn=0x00000000002E17A8 string=0x00000000002E17AC ")"
 *   insn=0x00000000002E17AC string=0x00000000002E17B0 "("
 *   insn=0x00000000002E17B0 string=0x00000000002E17B4 "\t"
 *   insn=0x00000000002E17B4 string=0x00000000002E17B8 ""
 *   insn=0x00000000002E17B8 string=0x00000000002E17BC ")"
 *   insn=0x00000000002E17BC string=0x00000000002E17C0 "((@"
 *   insn=0x00000000002E17C0 string=0x00000000002E17C4 "\t(@"
 *   insn=0x00000000002E17C4 string=0x00000000002E17C8 "("
 *   insn=0x00000000002E17C8 string=0x00000000002E17CC ")("
 *   insn=0x00000000002E17CC string=0x00000000002E17D0 "(,@"
 *   insn=0x00000000002E17D0 string=0x00000000002E17D4 "\t,@"
 *   insn=0x00000000002E17D4 string=0x00000000002E17D8 ","
 *   insn=0x00000000002E17D8 string=0x00000000002E17DC "),"
 *   insn=0x00000000002E17DC string=0x00000000002E17E0 "(0@"
 *   insn=0x00000000002E17E0 string=0x00000000002E17E4 "\t0@"
 *   insn=0x00000000002E17E4 string=0x00000000002E17E8 "0"
 *   insn=0x00000000002E17E8 string=0x00000000002E17EC ")0"
 *   insn=0x00000000002E17EC string=0x00000000002E17F0 "(4@"
 *   insn=0x00000000002E17F0 string=0x00000000002E17F4 "\t4@"
 *   insn=0x00000000002E17F4 string=0x00000000002E17F8 "4"
 *   insn=0x00000000002E17F8 string=0x00000000002E17FC ")4"
 *   insn=0x00000000002E17FC string=0x00000000002E1800 "(@"
 *   insn=0x00000000002E1800 string=0x00000000002E1804 "\t@"
 *   insn=0x00000000002E1804 string=0x00000000002E1808 ""
 *   insn=0x00000000002E1808 string=0x00000000002E180C ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Skill::Swap(__int64 this, Caver::Proto::Skill *a2)
{
  __int64 v2; // x9
  __int64 v3; // x9
  __int64 v4; // x9

  if ( a2 != (Caver::Proto::Skill *)this )
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
    LODWORD(v4) = *(_DWORD *)(this + 40);
    *(_DWORD *)(this + 40) = *((_DWORD *)a2 + 10);
    *((_DWORD *)a2 + 10) = v4;
    LODWORD(v4) = *(_DWORD *)(this + 44);
    *(_DWORD *)(this + 44) = *((_DWORD *)a2 + 11);
    *((_DWORD *)a2 + 11) = v4;
    LODWORD(v4) = *(_DWORD *)(this + 48);
    *(_DWORD *)(this + 48) = *((_DWORD *)a2 + 12);
    *((_DWORD *)a2 + 12) = v4;
    LODWORD(v4) = *(_DWORD *)(this + 52);
    *(_DWORD *)(this + 52) = *((_DWORD *)a2 + 13);
    *((_DWORD *)a2 + 13) = v4;
    LODWORD(v4) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v4;
  }
  return this;
}

