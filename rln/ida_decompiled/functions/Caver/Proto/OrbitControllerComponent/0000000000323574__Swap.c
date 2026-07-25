/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000323574
 * Mangled: _ZN5Caver5Proto24OrbitControllerComponent4SwapEPS1_
 * Demangled: Caver::Proto::OrbitControllerComponent::Swap(Caver::Proto::OrbitControllerComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x0000000000323574 string=0x0000000000323578 " "
 *   insn=0x0000000000323578 string=0x000000000032357C "(@"
 *   insn=0x000000000032357C string=0x0000000000323580 "\t@"
 *   insn=0x0000000000323580 string=0x0000000000323584 ""
 *   insn=0x0000000000323584 string=0x0000000000323588 ")"
 *   insn=0x0000000000323588 string=0x000000000032358C "("
 *   insn=0x000000000032358C string=0x0000000000323590 "\t"
 *   insn=0x0000000000323590 string=0x0000000000323594 ""
 *   insn=0x0000000000323594 string=0x0000000000323598 ")"
 *   insn=0x0000000000323598 string=0x000000000032359C "("
 *   insn=0x000000000032359C string=0x00000000003235A0 "\t"
 *   insn=0x00000000003235A0 string=0x00000000003235A4 ""
 *   insn=0x00000000003235A4 string=0x00000000003235A8 ")"
 *   insn=0x00000000003235A8 string=0x00000000003235AC "(@"
 *   insn=0x00000000003235AC string=0x00000000003235B0 "\t@"
 *   insn=0x00000000003235B0 string=0x00000000003235B4 ""
 *   insn=0x00000000003235B4 string=0x00000000003235B8 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::OrbitControllerComponent::Swap(
        __int64 this,
        Caver::Proto::OrbitControllerComponent *a2)
{
  __int64 v2; // x9
  __int64 v3; // x9

  if ( a2 != (Caver::Proto::OrbitControllerComponent *)this )
  {
    v2 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v2;
    LODWORD(v2) = *(_DWORD *)(this + 24);
    *(_DWORD *)(this + 24) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v2;
    v3 = *(_QWORD *)(this + 28);
    *(_QWORD *)(this + 28) = *(_QWORD *)((char *)a2 + 28);
    *(_QWORD *)((char *)a2 + 28) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v3;
  }
  return this;
}

