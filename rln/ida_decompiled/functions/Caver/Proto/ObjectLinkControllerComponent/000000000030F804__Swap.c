/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030F804
 * Mangled: _ZN5Caver5Proto29ObjectLinkControllerComponent4SwapEPS1_
 * Demangled: Caver::Proto::ObjectLinkControllerComponent::Swap(Caver::Proto::ObjectLinkControllerComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 28
 *   insn=0x000000000030F808 string=0x000000000030F80C "(@"
 *   insn=0x000000000030F80C string=0x000000000030F810 "\t@"
 *   insn=0x000000000030F810 string=0x000000000030F814 ""
 *   insn=0x000000000030F814 string=0x000000000030F818 ")"
 *   insn=0x000000000030F818 string=0x000000000030F81C "("
 *   insn=0x000000000030F81C string=0x000000000030F820 "\t"
 *   insn=0x000000000030F820 string=0x000000000030F824 ""
 *   insn=0x000000000030F824 string=0x000000000030F828 ")"
 *   insn=0x000000000030F828 string=0x000000000030F82C "("
 *   insn=0x000000000030F82C string=0x000000000030F830 "\t"
 *   insn=0x000000000030F830 string=0x000000000030F834 ""
 *   insn=0x000000000030F834 string=0x000000000030F838 ")"
 *   insn=0x000000000030F838 string=0x000000000030F83C "("
 *   insn=0x000000000030F83C string=0x000000000030F840 "\t"
 *   insn=0x000000000030F840 string=0x000000000030F844 ""
 *   insn=0x000000000030F844 string=0x000000000030F848 ")"
 *   insn=0x000000000030F848 string=0x000000000030F84C "("
 *   insn=0x000000000030F84C string=0x000000000030F850 "\t"
 *   insn=0x000000000030F850 string=0x000000000030F854 ""
 *   insn=0x000000000030F854 string=0x000000000030F858 ")"
 *   insn=0x000000000030F858 string=0x000000000030F85C "(8@"
 *   insn=0x000000000030F85C string=0x000000000030F860 "\t8@"
 *   insn=0x000000000030F860 string=0x000000000030F864 "8"
 *   insn=0x000000000030F864 string=0x000000000030F868 ")8"
 *   insn=0x000000000030F868 string=0x000000000030F86C "(@"
 *   insn=0x000000000030F86C string=0x000000000030F870 "\t@"
 *   insn=0x000000000030F870 string=0x000000000030F874 ""
 *   insn=0x000000000030F874 string=0x000000000030F878 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ObjectLinkControllerComponent::Swap(
        __int64 this,
        Caver::Proto::ObjectLinkControllerComponent *a2)
{
  __int64 v2; // x9
  __int64 v3; // x9
  __int64 v4; // x9
  __int64 v5; // x9
  __int64 v6; // x9

  if ( a2 != (Caver::Proto::ObjectLinkControllerComponent *)this )
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
    v5 = *(_QWORD *)(this + 40);
    *(_QWORD *)(this + 40) = *((_QWORD *)a2 + 5);
    *((_QWORD *)a2 + 5) = v5;
    v6 = *(_QWORD *)(this + 48);
    *(_QWORD *)(this + 48) = *((_QWORD *)a2 + 6);
    *((_QWORD *)a2 + 6) = v6;
    LODWORD(v6) = *(_DWORD *)(this + 56);
    *(_DWORD *)(this + 56) = *((_DWORD *)a2 + 14);
    *((_DWORD *)a2 + 14) = v6;
    LODWORD(v6) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v6;
  }
  return this;
}

