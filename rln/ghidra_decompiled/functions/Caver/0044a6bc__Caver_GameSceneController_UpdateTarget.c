/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044a6bc
 * Function: Caver::GameSceneController::UpdateTarget
 * Signature: undefined __thiscall UpdateTarget(GameSceneController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneController::UpdateTarget() */

void __thiscall Caver::GameSceneController::UpdateTarget(GameSceneController *this)

{
  int iVar1;
  SceneObject *this_00;
  long lVar2;
  long *plVar3;
  float fVar4;
  
                    /* try { // try from 0044a6c4 to 0054a6d7 has its CatchHandler @ 0044d904 */
  this_00 = *(SceneObject **)(this + 0x170);
  if (((this_00 != (SceneObject *)0x0) && (this_00[0xf0] != (SceneObject)0x0)) &&
     (*(long *)(this_00 + 0x20) != 0)) {
                    /* try { // try from 0044a6ec to 0054a6fb has its CatchHandler @ 0044cd90 */
    lVar2 = SceneObject::ComponentWithInterface(this_00,(long)PTR_Interface_007e7450);
    if (lVar2 == 0) {
      fVar4 = 1.0;
    }
    else {
                    /* try { // try from 0044a708 to 0054a717 has its CatchHandler @ 0044d8a0 */
      fVar4 = (float)*(int *)(lVar2 + 0x80) / (float)*(int *)(lVar2 + 0x7c);
    }
    TargetFrame::SetHealth(*(TargetFrame **)(*(long *)(this + 0x30) + 0x208),fVar4);
    return;
  }
  TargetFrame::Hide(*(TargetFrame **)(*(long *)(this + 0x30) + 0x208));
  plVar3 = *(long **)(this + 0x170);
  *(undefined8 *)(this + 0x170) = 0;
                    /* try { // try from 0044a730 to 0054a73f has its CatchHandler @ 0044cd90 */
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0044a754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 0044a754 to 0054a767 has its CatchHandler @ 0044d89c */
    (**(code **)(*plVar3 + 8))();
    return;
  }
  return;
}


