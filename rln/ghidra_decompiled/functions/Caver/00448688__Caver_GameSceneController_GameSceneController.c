/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00448688
 * Function: Caver::GameSceneController::GameSceneController
 * Signature: undefined __thiscall GameSceneController(GameSceneController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneController::GameSceneController() */

void __thiscall Caver::GameSceneController::GameSceneController(GameSceneController *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e5738;
                    /* try { // try from 00448694 to 005486a3 has its CatchHandler @ 0044cf30 */
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
                    /* try { // try from 004486b8 to 005486c7 has its CatchHandler @ 0044edec */
  *(undefined **)this = puVar1 + 0x10;
  CameraController::CameraController((CameraController *)(this + 0x38));
  *(undefined8 *)(this + 0xd8) = 0;
  HeroEquipmentManager::HeroEquipmentManager((HeroEquipmentManager *)(this + 0x100));
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
                    /* try { // try from 004486e0 to 005486ef has its CatchHandler @ 0044cf30 */
  *(undefined8 *)(this + 0x170) = 0;
  this[0x178] = (GameSceneController)0x0;
  this[0x180] = (GameSceneController)0x0;
  *(undefined4 *)(this + 0x17c) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x184) = 0;
  return;
}


