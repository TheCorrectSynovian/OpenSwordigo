/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00614974
 * Function: CPVRTString::compare
 * Signature: undefined __thiscall compare(CPVRTString * this, CPVRTString * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::compare(CPVRTString const&) const */

int __thiscall CPVRTString::compare(CPVRTString *this,CPVRTString *param_1)

{
  int iVar1;
  
  iVar1 = strcmp(*(char **)(this + 8),*(char **)(param_1 + 8));
  return iVar1;
}


