/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF110
 * Mangled: ._ZN5Caver14CharacterState33ExperiencePointsForKillingMonsterEii
 * Demangled: Caver::CharacterState::ExperiencePointsForKillingMonster(int,int)
 *
 * Callers: 1
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *
 * Callees: 1
 *   0x00000000003AC838  Caver::CharacterState::ExperiencePointsForKillingMonster(int,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF118 string=0x00000000001FF11C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharacterState::ExperiencePointsForKillingMonster(
        Caver::CharacterState *this,
        int a2,
        int a3)
{
  return _ZN5Caver14CharacterState33ExperiencePointsForKillingMonsterEii(this, a2, a3);
}

