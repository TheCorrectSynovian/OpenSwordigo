/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030DFE0
 * Mangled: _ZN5Caver5Proto15HealthComponent4SwapEPS1_
 * Demangled: Caver::Proto::HealthComponent::Swap(Caver::Proto::HealthComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 20
 *   insn=0x000000000030DFE4 string=0x000000000030DFE8 "("
 *   insn=0x000000000030DFE8 string=0x000000000030DFEC "\t"
 *   insn=0x000000000030DFEC string=0x000000000030DFF0 ""
 *   insn=0x000000000030DFF0 string=0x000000000030DFF4 ")"
 *   insn=0x000000000030DFF4 string=0x000000000030DFF8 "("
 *   insn=0x000000000030DFF8 string=0x000000000030DFFC "\t"
 *   insn=0x000000000030DFFC string=0x000000000030E000 ""
 *   insn=0x000000000030E000 string=0x000000000030E004 ")"
 *   insn=0x000000000030E004 string=0x000000000030E008 "("
 *   insn=0x000000000030E008 string=0x000000000030E00C "\t"
 *   insn=0x000000000030E00C string=0x000000000030E010 ""
 *   insn=0x000000000030E010 string=0x000000000030E014 ")"
 *   insn=0x000000000030E014 string=0x000000000030E018 "( @"
 *   insn=0x000000000030E018 string=0x000000000030E01C "\t @"
 *   insn=0x000000000030E01C string=0x000000000030E020 " "
 *   insn=0x000000000030E020 string=0x000000000030E024 ") "
 *   insn=0x000000000030E024 string=0x000000000030E028 "(@"
 *   insn=0x000000000030E028 string=0x000000000030E02C "\t@"
 *   insn=0x000000000030E02C string=0x000000000030E030 ""
 *   insn=0x000000000030E030 string=0x000000000030E034 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::HealthComponent::Swap(__int64 this, Caver::Proto::HealthComponent *a2)
{
  int v2; // w9
  int v3; // w9
  __int64 v4; // x9

  if ( a2 != (Caver::Proto::HealthComponent *)this )
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
    LODWORD(v4) = *(_DWORD *)(this + 32);
    *(_DWORD *)(this + 32) = *((_DWORD *)a2 + 8);
    *((_DWORD *)a2 + 8) = v4;
    LODWORD(v4) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v4;
  }
  return this;
}

