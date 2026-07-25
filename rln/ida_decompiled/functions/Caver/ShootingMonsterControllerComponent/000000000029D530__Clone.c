/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029D530
 * Mangled: _ZNK5Caver34ShootingMonsterControllerComponent5CloneEv
 * Demangled: Caver::ShootingMonsterControllerComponent::Clone(void)
 *
 * Callers: 1
 *   0x000000000029D350  Caver::ShootingMonsterControllerComponent::~ShootingMonsterControllerComponent()
 *
 * Callees: 6
 *   0x00000000001F4020  Caver::MonsterControllerComponent::InitWithComponent(Caver::MonsterControllerComponent const*)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200960  Caver::ShootingMonsterControllerComponent::ShootingMonsterControllerComponent(void)
 *   0x000000000029D590  Caver::ShootingMonsterControllerComponent::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x000000000029D540 string=0x000000000029D544 "'`"
 *   insn=0x000000000029D544 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000029D558 string=0x000000000029D55C "h"
 *   insn=0x000000000029D558 string=0x00000000001F4020 "P'"
 *   insn=0x000000000029D568 string=0x000000000029D56C "h"
 *   insn=0x000000000029D580 string=0x000000000029D584 "Kg"
 *   insn=0x000000000029D584 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::ShootingMonsterControllerComponent *__fastcall Caver::ShootingMonsterControllerComponent::Clone(
        Caver::ShootingMonsterControllerComponent *this)
{
  Caver::ShootingMonsterControllerComponent *v2; // x20
  Caver::ShootingMonsterControllerComponent *result; // x0

  v2 = (Caver::ShootingMonsterControllerComponent *)operator new(0x128u);
  Caver::ShootingMonsterControllerComponent::ShootingMonsterControllerComponent(v2);
  Caver::MonsterControllerComponent::InitWithComponent();
  result = v2;
  *((_DWORD *)v2 + 54) = *((_DWORD *)this + 54);
  *((_DWORD *)v2 + 60) = *((_DWORD *)this + 60);
  return result;
}

