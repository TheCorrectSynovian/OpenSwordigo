/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00614c84
 * Function: CPVRTString::operator!=
 * Signature: undefined __thiscall operator!=(CPVRTString * this, char * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::TEMPNAMEPLACEHOLDERVALUE(char const*) const */

bool __thiscall CPVRTString::operator!=(CPVRTString *this,char *param_1)

{
  int iVar1;
  
  iVar1 = strcmp(*(char **)(this + 8),param_1);
  return iVar1 != 0;
}


