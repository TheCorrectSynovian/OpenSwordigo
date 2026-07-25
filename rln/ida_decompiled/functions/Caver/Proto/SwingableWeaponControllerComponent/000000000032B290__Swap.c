/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032B290
 * Mangled: _ZN5Caver5Proto34SwingableWeaponControllerComponent4SwapEPS1_
 * Demangled: Caver::Proto::SwingableWeaponControllerComponent::Swap(Caver::Proto::SwingableWeaponControllerComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 20
 *   insn=0x000000000032B294 string=0x000000000032B298 "("
 *   insn=0x000000000032B298 string=0x000000000032B29C "\t"
 *   insn=0x000000000032B29C string=0x000000000032B2A0 ""
 *   insn=0x000000000032B2A0 string=0x000000000032B2A4 ")"
 *   insn=0x000000000032B2A4 string=0x000000000032B2A8 "(@"
 *   insn=0x000000000032B2A8 string=0x000000000032B2AC "\t@"
 *   insn=0x000000000032B2AC string=0x000000000032B2B0 ""
 *   insn=0x000000000032B2B0 string=0x000000000032B2B4 ")"
 *   insn=0x000000000032B2B4 string=0x000000000032B2B8 "("
 *   insn=0x000000000032B2B8 string=0x000000000032B2BC "\t"
 *   insn=0x000000000032B2BC string=0x000000000032B2C0 ""
 *   insn=0x000000000032B2C0 string=0x000000000032B2C4 ")"
 *   insn=0x000000000032B2C4 string=0x000000000032B2C8 "( @"
 *   insn=0x000000000032B2C8 string=0x000000000032B2CC "\t @"
 *   insn=0x000000000032B2CC string=0x000000000032B2D0 " "
 *   insn=0x000000000032B2D0 string=0x000000000032B2D4 ") "
 *   insn=0x000000000032B2D4 string=0x000000000032B2D8 "(@"
 *   insn=0x000000000032B2D8 string=0x000000000032B2DC "\t@"
 *   insn=0x000000000032B2DC string=0x000000000032B2E0 ""
 *   insn=0x000000000032B2E0 string=0x000000000032B2E4 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SwingableWeaponControllerComponent::Swap(
        __int64 this,
        Caver::Proto::SwingableWeaponControllerComponent *a2)
{
  int v2; // w9
  __int64 v3; // x9
  __int64 v4; // x9

  if ( a2 != (Caver::Proto::SwingableWeaponControllerComponent *)this )
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
    LODWORD(v4) = *(_DWORD *)(this + 32);
    *(_DWORD *)(this + 32) = *((_DWORD *)a2 + 8);
    *((_DWORD *)a2 + 8) = v4;
    LODWORD(v4) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v4;
  }
  return this;
}

