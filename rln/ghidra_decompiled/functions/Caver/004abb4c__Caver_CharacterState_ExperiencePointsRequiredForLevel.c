/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004abb4c
 * Function: Caver::CharacterState::ExperiencePointsRequiredForLevel
 * Signature: undefined __thiscall ExperiencePointsRequiredForLevel(CharacterState * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharacterState::ExperiencePointsRequiredForLevel(int) */

int __thiscall
Caver::CharacterState::ExperiencePointsRequiredForLevel(CharacterState *this,int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  iVar3 = 0;
  if (1 < param_1) {
    do {
      iVar2 = param_1 + -1;
      fVar4 = (float)GameData::EntityHealthMultiplierAtLevel(*(GameData **)this,iVar2);
      fVar5 = (float)GameData::EntityHealthMultiplierAtLevel(*(GameData **)this,iVar2);
      iVar3 = iVar3 + (int)(((float)param_1 * 8.0 + 24.0) *
                           (float)(int)((float)((param_1 + 2) * (int)fVar4) / fVar5));
      bVar1 = 2 < param_1;
      param_1 = iVar2;
    } while (bVar1);
  }
  return iVar3;
}


