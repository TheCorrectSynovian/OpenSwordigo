/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032CBFC
 * Mangled: _ZN5Caver5Proto20WeaponTrailComponent4SwapEPS1_
 * Demangled: Caver::Proto::WeaponTrailComponent::Swap(Caver::Proto::WeaponTrailComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x000000000032CC00 string=0x000000000032CC04 "(@"
 *   insn=0x000000000032CC04 string=0x000000000032CC08 "\t@"
 *   insn=0x000000000032CC08 string=0x000000000032CC0C ""
 *   insn=0x000000000032CC0C string=0x000000000032CC10 ")"
 *   insn=0x000000000032CC10 string=0x000000000032CC14 "("
 *   insn=0x000000000032CC14 string=0x000000000032CC18 "\t"
 *   insn=0x000000000032CC18 string=0x000000000032CC1C ""
 *   insn=0x000000000032CC1C string=0x000000000032CC20 ")"
 *   insn=0x000000000032CC20 string=0x000000000032CC24 "(@"
 *   insn=0x000000000032CC24 string=0x000000000032CC28 "\t@"
 *   insn=0x000000000032CC28 string=0x000000000032CC2C ""
 *   insn=0x000000000032CC2C string=0x000000000032CC30 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::WeaponTrailComponent::Swap(__int64 this, Caver::Proto::WeaponTrailComponent *a2)
{
  __int64 v2; // x9

  if ( a2 != (Caver::Proto::WeaponTrailComponent *)this )
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

