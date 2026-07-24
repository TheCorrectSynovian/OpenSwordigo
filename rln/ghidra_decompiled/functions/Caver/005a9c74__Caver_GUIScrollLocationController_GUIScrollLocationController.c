/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a9c74
 * Function: Caver::GUIScrollLocationController::GUIScrollLocationController
 * Signature: undefined __thiscall GUIScrollLocationController(GUIScrollLocationController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::GUIScrollLocationController::GUIScrollLocationController() */

void __thiscall
Caver::GUIScrollLocationController::GUIScrollLocationController(GUIScrollLocationController *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_00697248;
                    /* try { // try from 005a9c74 to 006a9d33 has its CatchHandler @ 005a9a78 */
  uVar1 = _DAT_00697240;
  *this = (GUIScrollLocationController)0x0;
  *(undefined4 *)(this + 4) = 0;
  this[8] = (GUIScrollLocationController)0x0;
  *(undefined8 *)(this + 0x1c) = 0x41a0000043160000;
  *(undefined8 *)(this + 0x14) = uVar2;
  *(undefined8 *)(this + 0xc) = uVar1;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


