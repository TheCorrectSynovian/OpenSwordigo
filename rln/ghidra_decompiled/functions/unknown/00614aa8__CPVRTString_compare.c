/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00614aa8
 * Function: CPVRTString::compare
 * Signature: undefined __thiscall compare(CPVRTString * this, char * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::compare(char const*) const */

int __thiscall CPVRTString::compare(CPVRTString *this,char *param_1)

{
  int iVar1;
  
  iVar1 = strcmp(*(char **)(this + 8),param_1);
  return iVar1;
}


