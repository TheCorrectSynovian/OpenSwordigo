/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00558b14
 * Function: Caver::CameraController::FollowShape
 * Signature: undefined __thiscall FollowShape(CameraController * this, intrusive_ptr * param_1, Rectangle * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CameraController::FollowShape(boost::intrusive_ptr<Caver::ShapeComponent> const&,
   Caver::Rectangle const&) */

void __thiscall
Caver::CameraController::FollowShape
          (CameraController *this,intrusive_ptr *param_1,Rectangle *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar2 = *(long **)(this + 0x68);
  *(undefined8 *)(this + 0x68) = 0;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(this + 0x70);
  *(undefined8 *)(this + 0x70) = 0;
                    /* try { // try from 00558b70 to 00658b83 has its CatchHandler @ 005590f4 */
  if ((plVar2 == (long *)0x0) ||
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 != 0)) {
    lVar3 = *(long *)param_1;
  }
  else {
    (**(code **)(*plVar2 + 8))();
    lVar3 = *(long *)param_1;
  }
  if (lVar3 != 0) {
                    /* try { // try from 00558b84 to 00658b93 has its CatchHandler @ 005590bc */
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  plVar2 = *(long **)(this + 0x70);
  *(long *)(this + 0x70) = lVar3;
                    /* try { // try from 00558b94 to 00658bfb has its CatchHandler @ 00558a74 */
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar2 + 8))();
  }
  uVar4 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x8c) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x84) = uVar4;
  return;
}


