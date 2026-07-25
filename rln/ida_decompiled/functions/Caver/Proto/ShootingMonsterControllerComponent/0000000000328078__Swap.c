/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000328078
 * Mangled: _ZN5Caver5Proto34ShootingMonsterControllerComponent4SwapEPS1_
 * Demangled: Caver::Proto::ShootingMonsterControllerComponent::Swap(Caver::Proto::ShootingMonsterControllerComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x0000000000328078 string=0x000000000032807C " "
 *   insn=0x000000000032807C string=0x0000000000328080 "("
 *   insn=0x0000000000328080 string=0x0000000000328084 "\t"
 *   insn=0x0000000000328084 string=0x0000000000328088 ""
 *   insn=0x0000000000328088 string=0x000000000032808C ")"
 *   insn=0x000000000032808C string=0x0000000000328090 "("
 *   insn=0x0000000000328090 string=0x0000000000328094 "\t"
 *   insn=0x0000000000328094 string=0x0000000000328098 ""
 *   insn=0x0000000000328098 string=0x000000000032809C ")"
 *   insn=0x000000000032809C string=0x00000000003280A0 "("
 *   insn=0x00000000003280A0 string=0x00000000003280A4 "\t"
 *   insn=0x00000000003280A4 string=0x00000000003280A8 ""
 *   insn=0x00000000003280A8 string=0x00000000003280AC ")"
 *   insn=0x00000000003280AC string=0x00000000003280B0 "(@"
 *   insn=0x00000000003280B0 string=0x00000000003280B4 "\t@"
 *   insn=0x00000000003280B4 string=0x00000000003280B8 ""
 *   insn=0x00000000003280B8 string=0x00000000003280BC ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto::ShootingMonsterControllerComponent *__fastcall Caver::Proto::ShootingMonsterControllerComponent::Swap(
        Caver::Proto::ShootingMonsterControllerComponent *this,
        Caver::Proto::ShootingMonsterControllerComponent *a2)
{
  int v2; // w9
  int v3; // w9
  int v4; // w9
  int v5; // w9

  if ( a2 != this )
  {
    v2 = *((_DWORD *)this + 3);
    *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    v3 = *((_DWORD *)this + 4);
    *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v3;
    v4 = *((_DWORD *)this + 5);
    *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
    *((_DWORD *)a2 + 5) = v4;
    v5 = *((_DWORD *)this + 2);
    *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v5;
  }
  return this;
}

