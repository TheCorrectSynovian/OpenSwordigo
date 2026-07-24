/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00457900
 * Function: Caver::GameViewController::LevelUpViewControllerDidFinish
 * Signature: undefined __thiscall LevelUpViewControllerDidFinish(GameViewController * this, LevelUpViewController * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::LevelUpViewControllerDidFinish(Caver::LevelUpViewController*) */

void __thiscall
Caver::GameViewController::LevelUpViewControllerDidFinish
          (GameViewController *this,LevelUpViewController *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  GameSceneController *this_00;
  
  this_00 = *(GameSceneController **)(this + 200);
  iVar1 = LevelUpViewController::NumPointsForAttribute(param_1,0);
  iVar2 = LevelUpViewController::NumPointsForAttribute(param_1,1);
  iVar3 = LevelUpViewController::NumPointsForAttribute(param_1,2);
  GameSceneController::ApplyLevelUp(this_00,iVar1,iVar2,iVar3);
  ExperienceBar::UpdateExperience
            (*(ExperienceBar **)(*(long *)(*(long *)(this + 0xd8) + 0x100) + 0x218));
  GUIViewController::DismissModalViewController((GUIViewController *)this);
  return;
}


