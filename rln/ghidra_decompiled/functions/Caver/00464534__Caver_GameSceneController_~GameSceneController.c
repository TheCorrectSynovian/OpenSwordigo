/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00464534
 * Function: Caver::GameSceneController::~GameSceneController
 * Signature: undefined __thiscall ~GameSceneController(GameSceneController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneController::~GameSceneController() */

void __thiscall Caver::GameSceneController::~GameSceneController(GameSceneController *this)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
                    /* try { // try from 00464534 to 0056456f has its CatchHandler @ 00464fa0 */
  plVar2 = *(long **)(this + 0x170);
  *(undefined **)this = PTR_vtable_007e5738 + 0x10;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(this + 0x160);
                    /* try { // try from 00464590 to 005645a3 has its CatchHandler @ 00464f9c */
  if ((plVar2 != (long *)0x0) && (lVar3 = plVar2[1], plVar2[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar3 = plVar2[2];
    plVar2[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
                    /* try { // try from 004645b4 to 005645bf has its CatchHandler @ 00464f64 */
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  HeroEquipmentManager::~HeroEquipmentManager((HeroEquipmentManager *)(this + 0x100));
  plVar2 = *(long **)(this + 0xd8);
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
                    /* try { // try from 004645e8 to 00564623 has its CatchHandler @ 00464f08 */
    (**(code **)(*plVar2 + 8))();
  }
  CameraController::~CameraController((CameraController *)(this + 0x38));
  plVar2 = *(long **)(this + 0x28);
  if ((plVar2 != (long *)0x0) && (lVar3 = plVar2[1], plVar2[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar3 = plVar2[2];
    plVar2[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x10);
                    /* try { // try from 00464644 to 00564657 has its CatchHandler @ 00464f04 */
  if ((plVar2 != (long *)0x0) && (lVar3 = plVar2[1], plVar2[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* try { // try from 00464668 to 00564673 has its CatchHandler @ 00464ecc */
    lVar3 = plVar2[2];
    plVar2[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
                    /* try { // try from 00464694 to 005646cf has its CatchHandler @ 00464e70 */
                    /* WARNING: Could not recover jumptable at 0x004646a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))(plVar2);
      return;
    }
  }
  return;
}


