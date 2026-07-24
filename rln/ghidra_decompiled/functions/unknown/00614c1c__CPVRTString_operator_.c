/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00614c1c
 * Function: CPVRTString::operator==
 * Signature: undefined __thiscall operator==(CPVRTString * this, CPVRTString * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::TEMPNAMEPLACEHOLDERVALUE(CPVRTString const&) const */

bool __thiscall CPVRTString::operator==(CPVRTString *this,CPVRTString *param_1)

{
  int iVar1;
  
  iVar1 = strcmp(*(char **)(this + 8),*(char **)(param_1 + 8));
  return iVar1 == 0;
}


