/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d60b8
 * Function: Caver::Proto::GUIMargins::GUIMargins
 * Signature: undefined __thiscall GUIMargins(GUIMargins * this, GUIMargins * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GUIMargins::GUIMargins(Caver::Proto::GUIMargins const&) */

void __thiscall Caver::Proto::GUIMargins::GUIMargins(GUIMargins *this,GUIMargins *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e4930;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  MergeFrom(this,param_1);
  return;
}


