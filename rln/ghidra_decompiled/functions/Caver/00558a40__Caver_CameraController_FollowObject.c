/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00558a40
 * Function: Caver::CameraController::FollowObject
 * Signature: undefined __thiscall FollowObject(CameraController * this, intrusive_ptr * param_1, Vector3 * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CameraController::FollowObject(boost::intrusive_ptr<Caver::SceneObject> const&,
   Caver::Vector3 const&) */

void __thiscall
Caver::CameraController::FollowObject
          (CameraController *this,intrusive_ptr *param_1,Vector3 *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
                    /* catch() { ... } // from try @ 00558a14 with catch @ 00558a44 */
                    /* catch() { ... } // from try @ 005589a4 with catch @ 00558a48 */
  plVar2 = *(long **)(this + 0x68);
                    /* try { // try from 00558a58 to 00658a63 has its CatchHandler @ 00558a64 */
  *(undefined8 *)(this + 0x68) = 0;
                    /* catch() { ... } // from try @ 00558a58 with catch @ 00558a64 */
                    /* try { // try from 00558a68 to 00658a6b has its CatchHandler @ 00558a70 */
                    /* catch() { ... } // from try @ 00558a68 with catch @ 00558a70 */
                    /* catch() { ... } // from try @ 00558b08 with catch @ 00558a74
                       catch() { ... } // from try @ 00558b94 with catch @ 00558a74
                       catch() { ... } // from try @ 00558c28 with catch @ 00558a74
                       catch() { ... } // from try @ 00558ee8 with catch @ 00558a74
                       catch() { ... } // from try @ 00559328 with catch @ 00558a74 */
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(this + 0x70);
  *(undefined8 *)(this + 0x70) = 0;
  if ((plVar2 == (long *)0x0) ||
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 != 0)) {
    lVar3 = *(long *)param_1;
  }
  else {
                    /* try { // try from 00558b00 to 00658b07 has its CatchHandler @ 00559110 */
    (**(code **)(*plVar2 + 8))();
                    /* try { // try from 00558b08 to 00658b6f has its CatchHandler @ 00558a74 */
    lVar3 = *(long *)param_1;
  }
  if (lVar3 != 0) {
                    /* try { // try from 00558aac to 00658abf has its CatchHandler @ 005591bc */
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  plVar2 = *(long **)(this + 0x68);
  *(long *)(this + 0x68) = lVar3;
                    /* try { // try from 00558ac4 to 00658acb has its CatchHandler @ 0055914c */
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined8 *)(this + 0x78) = *(undefined8 *)param_2;
                    /* try { // try from 00558ae8 to 00658afb has its CatchHandler @ 00559148 */
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_2 + 8);
  return;
}


