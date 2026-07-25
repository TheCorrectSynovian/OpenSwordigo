/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003AC800
 * Mangled: _ZN5Caver14CharacterState31BaseExperienceForKillingMonsterEiii
 * Demangled: Caver::CharacterState::BaseExperienceForKillingMonster(int,int,int)
 *
 * Callers: 1
 *   0x00000000003AC040  Caver::CharacterState::SaveToProtobufMessage(Caver::Proto::CharacterState *)
 *
 * Callees: 1
 *   0x00000000001FCF90  Caver::GameData::EntityHealthMultiplierAtLevel(int)
 *
 * Referenced strings: 4
 *   insn=0x00000000003AC80C string=0x00000000003AC810 "H"
 *   insn=0x00000000003AC810 string=0x00000000003AC814 "}"
 *   insn=0x00000000003AC818 string=0x00000000003AC81C ""
 *   insn=0x00000000003AC820 string=0x00000000001FCF90 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned int __fastcall Caver::CharacterState::BaseExperienceForKillingMonster(
        Caver::GameData **this,
        int a2,
        int a3,
        int a4)
{
  float v4; // s8
  float v5; // s0

  v4 = (float)((a3 + 3) * a4);
  Caver::GameData::EntityHealthMultiplierAtLevel(*this, a3);
  return llroundf(v4 / v5);
}

