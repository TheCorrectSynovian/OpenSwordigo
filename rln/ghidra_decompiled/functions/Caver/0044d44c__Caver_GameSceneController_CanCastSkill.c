/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044d44c
 * Function: Caver::GameSceneController::CanCastSkill
 * Signature: undefined __thiscall CanCastSkill(GameSceneController * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneController::CanCastSkill(boost::shared_ptr<Caver::Skill> const&) */

bool __thiscall
Caver::GameSceneController::CanCastSkill(GameSceneController *this,shared_ptr *param_1)

{
  int iVar1;
  int iVar2;
  
                    /* try { // try from 0044d454 to 0054d4ab has its CatchHandler @ 00447cc4 */
  iVar1 = *(int *)(*(long *)(this + 0xf8) + 0x74);
  iVar2 = ManaCostForSkill(this,param_1);
  return iVar2 < iVar1;
}


