/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ac838
 * Function: Caver::CharacterState::ExperiencePointsForKillingMonster
 * Signature: undefined __thiscall ExperiencePointsForKillingMonster(CharacterState * this, int param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharacterState::ExperiencePointsForKillingMonster(int, int) */

int __thiscall
Caver::CharacterState::ExperiencePointsForKillingMonster
          (CharacterState *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  fVar4 = (float)GameData::EntityHealthMultiplierAtLevel(*(GameData **)this,param_1);
  iVar1 = *(int *)(this + 0xa8);
  iVar3 = (int)((float)((param_1 + 3) * param_2) / fVar4);
  iVar2 = iVar1 - param_1;
  if (iVar1 < param_1) {
    fVar4 = DAT_006882c0;
    if (param_1 - iVar1 < 5) {
                    /* catch() { ... } // from try @ 004ac8e0 with catch @ 004ac8b0 */
      fVar4 = (float)(param_1 - iVar1) * DAT_0068798c + 1.0;
    }
  }
  else {
    if (iVar2 == 0 || iVar1 < param_1) {
      return iVar3;
    }
    if ((param_1 < 1) || (4 < iVar2)) {
      return 0;
    }
                    /* try { // try from 004ac8cc to 005ac8df has its CatchHandler @ 004ac904 */
    fVar4 = (float)iVar2 / 6.0;
    if (1.0 < fVar4) {
      fVar4 = 1.0;
    }
                    /* try { // try from 004ac8e0 to 005ac907 has its CatchHandler @ 004ac8b0 */
    fVar4 = 1.0 - fVar4;
  }
  return (int)(fVar4 * (float)iVar3);
}


