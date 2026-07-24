/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ac800
 * Function: Caver::CharacterState::BaseExperienceForKillingMonster
 * Signature: undefined __thiscall BaseExperienceForKillingMonster(CharacterState * this, int param_1, int param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharacterState::BaseExperienceForKillingMonster(int, int, int) */

int __thiscall
Caver::CharacterState::BaseExperienceForKillingMonster
          (CharacterState *this,int param_1,int param_2,int param_3)

{
  float fVar1;
  
  fVar1 = (float)GameData::EntityHealthMultiplierAtLevel(*(GameData **)this,param_2);
  return (int)((float)((param_2 + 3) * param_3) / fVar1);
}


