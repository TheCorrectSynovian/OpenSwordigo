/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032A828
 * Mangled: _ZN5Caver5Proto24SwingableWeaponComponent4SwapEPS1_
 * Demangled: Caver::Proto::SwingableWeaponComponent::Swap(Caver::Proto::SwingableWeaponComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 52
 *   insn=0x000000000032A82C string=0x000000000032A830 "("
 *   insn=0x000000000032A830 string=0x000000000032A834 "\t"
 *   insn=0x000000000032A834 string=0x000000000032A838 ""
 *   insn=0x000000000032A838 string=0x000000000032A83C ")"
 *   insn=0x000000000032A83C string=0x000000000032A840 "(@"
 *   insn=0x000000000032A840 string=0x000000000032A844 "\t@"
 *   insn=0x000000000032A844 string=0x000000000032A848 ""
 *   insn=0x000000000032A848 string=0x000000000032A84C ")"
 *   insn=0x000000000032A84C string=0x000000000032A850 "("
 *   insn=0x000000000032A850 string=0x000000000032A854 "\t"
 *   insn=0x000000000032A854 string=0x000000000032A858 ""
 *   insn=0x000000000032A858 string=0x000000000032A85C ")"
 *   insn=0x000000000032A85C string=0x000000000032A860 "("
 *   insn=0x000000000032A860 string=0x000000000032A864 "\t"
 *   insn=0x000000000032A864 string=0x000000000032A868 ""
 *   insn=0x000000000032A868 string=0x000000000032A86C ")"
 *   insn=0x000000000032A86C string=0x000000000032A870 "("
 *   insn=0x000000000032A870 string=0x000000000032A874 "\t"
 *   insn=0x000000000032A874 string=0x000000000032A878 ""
 *   insn=0x000000000032A878 string=0x000000000032A87C ")"
 *   insn=0x000000000032A87C string=0x000000000032A880 "("
 *   insn=0x000000000032A880 string=0x000000000032A884 "\t"
 *   insn=0x000000000032A884 string=0x000000000032A888 ""
 *   insn=0x000000000032A888 string=0x000000000032A88C ")"
 *   insn=0x000000000032A88C string=0x000000000032A890 "(0@"
 *   insn=0x000000000032A890 string=0x000000000032A894 "\t0@"
 *   insn=0x000000000032A894 string=0x000000000032A898 "0"
 *   insn=0x000000000032A898 string=0x000000000032A89C ")0"
 *   insn=0x000000000032A89C string=0x000000000032A8A0 "(4@"
 *   insn=0x000000000032A8A0 string=0x000000000032A8A4 "\t4@"
 *   insn=0x000000000032A8A4 string=0x000000000032A8A8 "4"
 *   insn=0x000000000032A8A8 string=0x000000000032A8AC ")4"
 *   insn=0x000000000032A8AC string=0x000000000032A8B0 "(8@"
 *   insn=0x000000000032A8B0 string=0x000000000032A8B4 "\t8@"
 *   insn=0x000000000032A8B4 string=0x000000000032A8B8 "8"
 *   insn=0x000000000032A8B8 string=0x000000000032A8BC ")8"
 *   insn=0x000000000032A8BC string=0x000000000032A8C0 "(<@"
 *   insn=0x000000000032A8C0 string=0x000000000032A8C4 "\t<@"
 *   insn=0x000000000032A8C4 string=0x000000000032A8C8 "<"
 *   insn=0x000000000032A8C8 string=0x000000000032A8CC ")<"
 *   insn=0x000000000032A8CC string=0x000000000032A8D0 "(@@"
 *   insn=0x000000000032A8D0 string=0x000000000032A8D4 "\t@@"
 *   insn=0x000000000032A8D4 string=0x000000000032A8D8 "@"
 *   insn=0x000000000032A8D8 string=0x000000000032A8DC ")@"
 *   insn=0x000000000032A8DC string=0x000000000032A8E0 "(D@"
 *   insn=0x000000000032A8E0 string=0x000000000032A8E4 "\tD@"
 *   insn=0x000000000032A8E4 string=0x000000000032A8E8 "D"
 *   insn=0x000000000032A8E8 string=0x000000000032A8EC ")D"
 *   insn=0x000000000032A8EC string=0x000000000032A8F0 "(@"
 *   insn=0x000000000032A8F0 string=0x000000000032A8F4 "\t@"
 *   insn=0x000000000032A8F4 string=0x000000000032A8F8 ""
 *   insn=0x000000000032A8F8 string=0x000000000032A8FC ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SwingableWeaponComponent::Swap(
        __int64 this,
        Caver::Proto::SwingableWeaponComponent *a2)
{
  int v2; // w9
  __int64 v3; // x9
  __int64 v4; // x9
  __int64 v5; // x9

  if ( a2 != (Caver::Proto::SwingableWeaponComponent *)this )
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
    LODWORD(v3) = *(_DWORD *)(this + 28);
    *(_DWORD *)(this + 28) = *((_DWORD *)a2 + 7);
    *((_DWORD *)a2 + 7) = v3;
    v4 = *(_QWORD *)(this + 32);
    *(_QWORD *)(this + 32) = *((_QWORD *)a2 + 4);
    *((_QWORD *)a2 + 4) = v4;
    v5 = *(_QWORD *)(this + 40);
    *(_QWORD *)(this + 40) = *((_QWORD *)a2 + 5);
    *((_QWORD *)a2 + 5) = v5;
    LODWORD(v5) = *(_DWORD *)(this + 48);
    *(_DWORD *)(this + 48) = *((_DWORD *)a2 + 12);
    *((_DWORD *)a2 + 12) = v5;
    LODWORD(v5) = *(_DWORD *)(this + 52);
    *(_DWORD *)(this + 52) = *((_DWORD *)a2 + 13);
    *((_DWORD *)a2 + 13) = v5;
    LODWORD(v5) = *(_DWORD *)(this + 56);
    *(_DWORD *)(this + 56) = *((_DWORD *)a2 + 14);
    *((_DWORD *)a2 + 14) = v5;
    LODWORD(v5) = *(_DWORD *)(this + 60);
    *(_DWORD *)(this + 60) = *((_DWORD *)a2 + 15);
    *((_DWORD *)a2 + 15) = v5;
    LODWORD(v5) = *(_DWORD *)(this + 64);
    *(_DWORD *)(this + 64) = *((_DWORD *)a2 + 16);
    *((_DWORD *)a2 + 16) = v5;
    LODWORD(v5) = *(_DWORD *)(this + 68);
    *(_DWORD *)(this + 68) = *((_DWORD *)a2 + 17);
    *((_DWORD *)a2 + 17) = v5;
    LODWORD(v5) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v5;
  }
  return this;
}

