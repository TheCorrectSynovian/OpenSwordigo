/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ba66c
 * Function: Caver::GUITextFieldImpl::setTextMargins
 * Signature: undefined __thiscall setTextMargins(GUITextFieldImpl * this, GUIMargins * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextFieldImpl::setTextMargins(Caver::GUIMargins const&) */

void __thiscall Caver::GUITextFieldImpl::setTextMargins(GUITextFieldImpl *this,GUIMargins *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(this + 0x17c) = *(undefined4 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x174) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x16c) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x005ba688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x58))();
  return;
}


