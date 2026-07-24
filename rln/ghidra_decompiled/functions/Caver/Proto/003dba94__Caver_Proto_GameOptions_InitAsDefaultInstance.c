/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003dba94
 * Function: Caver::Proto::GameOptions::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(GameOptions * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GameOptions::InitAsDefaultInstance() */

void __thiscall Caver::Proto::GameOptions::InitAsDefaultInstance(GameOptions *this)

{
  undefined8 uVar1;
  
  uVar1 = GUIViewLayout::default_instance();
  *(undefined8 *)(this + 0x58) = uVar1;
  uVar1 = GUIViewLayout::default_instance();
  *(undefined8 *)(this + 0x60) = uVar1;
  return;
}


