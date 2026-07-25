/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031C434
 * Mangled: _ZN5Caver5Proto19BackgroundComponent4SwapEPS1_
 * Demangled: Caver::Proto::BackgroundComponent::Swap(Caver::Proto::BackgroundComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x000000000031C438 string=0x000000000031C43C "(@"
 *   insn=0x000000000031C43C string=0x000000000031C440 "\t@"
 *   insn=0x000000000031C440 string=0x000000000031C444 ""
 *   insn=0x000000000031C444 string=0x000000000031C448 ")"
 *   insn=0x000000000031C448 string=0x000000000031C44C "("
 *   insn=0x000000000031C44C string=0x000000000031C450 "\t"
 *   insn=0x000000000031C450 string=0x000000000031C454 ""
 *   insn=0x000000000031C454 string=0x000000000031C458 ")"
 *   insn=0x000000000031C458 string=0x000000000031C45C "(@"
 *   insn=0x000000000031C45C string=0x000000000031C460 "\t@"
 *   insn=0x000000000031C460 string=0x000000000031C464 ""
 *   insn=0x000000000031C464 string=0x000000000031C468 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BackgroundComponent::Swap(__int64 this, Caver::Proto::BackgroundComponent *a2)
{
  __int64 v2; // x9

  if ( a2 != (Caver::Proto::BackgroundComponent *)this )
  {
    v2 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v2;
    LODWORD(v2) = *(_DWORD *)(this + 24);
    *(_DWORD *)(this + 24) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v2;
    LODWORD(v2) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v2;
  }
  return this;
}

