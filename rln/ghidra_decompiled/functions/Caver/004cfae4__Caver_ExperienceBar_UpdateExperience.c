/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004cfae4
 * Function: Caver::ExperienceBar::UpdateExperience
 * Signature: undefined __thiscall UpdateExperience(ExperienceBar * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ExperienceBar::UpdateExperience() */

void __thiscall Caver::ExperienceBar::UpdateExperience(ExperienceBar *this)

{
  CharacterState *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = *(long *)(this + 0x100);
  iVar1 = *(int *)(lVar5 + 0xb4);
  this_00 = (CharacterState *)(lVar5 + 0x10);
  iVar4 = *(int *)(lVar5 + 0xb8);
  if (*(int *)(lVar5 + 0xb8) <= *(int *)(this + 0x114)) {
    iVar4 = *(int *)(this + 0x114);
  }
                    /* try { // try from 004cfb18 to 005cfb33 has its CatchHandler @ 004cfbdc */
  if (iVar4 == 99) {
    iVar2 = CharacterState::ExperiencePointsRequiredForLevel(this_00,0x62);
                    /* try { // try from 004cfb34 to 005cfbdf has its CatchHandler @ 004cfad0 */
    iVar3 = CharacterState::ExperiencePointsRequiredForLevel(this_00,99);
    iVar4 = 99;
  }
  else {
    iVar2 = CharacterState::ExperiencePointsRequiredForLevel(this_00,iVar4);
    iVar3 = CharacterState::ExperiencePointsRequiredForLevel(this_00,iVar4 + 1);
  }
  SetExperience(this,iVar4,iVar1,iVar2,iVar3);
  return;
}


