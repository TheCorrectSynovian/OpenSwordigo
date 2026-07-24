/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00615608
 * Function: CPVRTString::swap
 * Signature: undefined __thiscall swap(CPVRTString * this, CPVRTString * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::swap(CPVRTString&) */

void __thiscall CPVRTString::swap(CPVRTString *this,CPVRTString *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 0x18);
  uVar2 = *(undefined8 *)(this + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined8 *)(this + 0x10) = uVar4;
  *(undefined8 *)(this + 8) = uVar3;
  return;
}


