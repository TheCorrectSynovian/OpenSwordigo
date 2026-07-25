/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032C554
 * Mangled: _ZN5Caver5Proto19WeaponGlowComponent4SwapEPS1_
 * Demangled: Caver::Proto::WeaponGlowComponent::Swap(Caver::Proto::WeaponGlowComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 20
 *   insn=0x000000000032C558 string=0x000000000032C55C "("
 *   insn=0x000000000032C55C string=0x000000000032C560 "\t"
 *   insn=0x000000000032C560 string=0x000000000032C564 ""
 *   insn=0x000000000032C564 string=0x000000000032C568 ")"
 *   insn=0x000000000032C568 string=0x000000000032C56C "(@"
 *   insn=0x000000000032C56C string=0x000000000032C570 "\t@"
 *   insn=0x000000000032C570 string=0x000000000032C574 ""
 *   insn=0x000000000032C574 string=0x000000000032C578 ")"
 *   insn=0x000000000032C578 string=0x000000000032C57C "("
 *   insn=0x000000000032C57C string=0x000000000032C580 "\t"
 *   insn=0x000000000032C580 string=0x000000000032C584 ""
 *   insn=0x000000000032C584 string=0x000000000032C588 ")"
 *   insn=0x000000000032C588 string=0x000000000032C58C "("
 *   insn=0x000000000032C58C string=0x000000000032C590 "\t"
 *   insn=0x000000000032C590 string=0x000000000032C594 ""
 *   insn=0x000000000032C594 string=0x000000000032C598 ")"
 *   insn=0x000000000032C598 string=0x000000000032C59C "(@"
 *   insn=0x000000000032C59C string=0x000000000032C5A0 "\t@"
 *   insn=0x000000000032C5A0 string=0x000000000032C5A4 ""
 *   insn=0x000000000032C5A4 string=0x000000000032C5A8 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::WeaponGlowComponent::Swap(__int64 this, Caver::Proto::WeaponGlowComponent *a2)
{
  int v2; // w9
  __int64 v3; // x9
  __int64 v4; // x9
  __int64 v5; // x9

  if ( a2 != (Caver::Proto::WeaponGlowComponent *)this )
  {
    v2 = *(_DWORD *)(this + 12);
    *(_DWORD *)(this + 12) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    v3 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v3;
    v4 = *(_QWORD *)(this + 24);
    *(_QWORD *)(this + 24) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = v4;
    v5 = *(_QWORD *)(this + 32);
    *(_QWORD *)(this + 32) = *((_QWORD *)a2 + 4);
    *((_QWORD *)a2 + 4) = v5;
    LODWORD(v5) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v5;
  }
  return this;
}

