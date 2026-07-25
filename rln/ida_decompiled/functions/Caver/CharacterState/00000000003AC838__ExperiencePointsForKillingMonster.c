/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003AC838
 * Mangled: _ZN5Caver14CharacterState33ExperiencePointsForKillingMonsterEii
 * Demangled: Caver::CharacterState::ExperiencePointsForKillingMonster(int,int)
 *
 * Callers: 1
 *   0x00000000001FF110  Caver::CharacterState::ExperiencePointsForKillingMonster(int,int)
 *
 * Callees: 1
 *   0x00000000001FCF90  Caver::GameData::EntityHealthMultiplierAtLevel(int)
 *
 * Referenced strings: 18
 *   insn=0x00000000003AC850 string=0x00000000003AC854 "h"
 *   insn=0x00000000003AC854 string=0x00000000003AC858 "}"
 *   insn=0x00000000003AC858 string=0x00000000003AC85C ""
 *   insn=0x00000000003AC860 string=0x00000000001FCF90 "0'"
 *   insn=0x00000000003AC86C string=0x00000000003AC870 "("
 *   insn=0x00000000003AC870 string=0x00000000003AC874 "\n"
 *   insn=0x00000000003AC874 string=0x00000000003AC878 "h"
 *   insn=0x00000000003AC880 string=0x00000000003AC884 "m"
 *   insn=0x00000000003AC890 string=0x00000000003AC8E8 "  "
 *   insn=0x00000000003AC898 string=0x00000000003AC89C "k"
 *   insn=0x00000000003AC8A0 string=0x00000000003AC8A4 "M"
 *   insn=0x00000000003AC8B0 string=0x00000000003AC8B4 "!"
 *   insn=0x00000000003AC8B8 string=0x00000000003AC8BC "A!"
 *   insn=0x00000000003AC8C0 string=0x00000000003AC8C4 "!(""
 *   insn=0x00000000003AC8C4 string=0x00000000003AC8C8 ""
 *   insn=0x00000000003AC8D0 string=0x00000000003AC8D4 "!"
 *   insn=0x00000000003AC8D8 string=0x00000000003AC8DC "!X""
 *   insn=0x00000000003AC8E0 string=0x00000000003AC8E4 "A8!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int __fastcall Caver::CharacterState::ExperiencePointsForKillingMonster(Caver::GameData **this, int a2, int a3)
{
  float v5; // s8
  int v6; // w9
  float v7; // s0
  int result; // w0
  int v9; // w8
  float v10; // s0
  float v11; // s1

  v5 = (float)((a2 + 3) * a3);
  Caver::GameData::EntityHealthMultiplierAtLevel(*this, a2);
  v6 = *((_DWORD *)this + 42);
  result = llroundf(v5 / v7);
  v9 = v6 - a2;
  if ( v6 >= a2 )
  {
    if ( v6 <= a2 )
      return result;
    if ( a2 < 1 || v9 > 4 )
      return 0;
    v10 = (float)result;
    v11 = 1.0 - fminf((float)v9 / 6.0, 1.0);
  }
  else
  {
    v10 = (float)result;
    if ( a2 - v6 <= 4 )
      v11 = (float)((float)(a2 - v6) * 0.05) + 1.0;
    else
      v11 = 1.2;
  }
  return llroundf(v11 * v10);
}

