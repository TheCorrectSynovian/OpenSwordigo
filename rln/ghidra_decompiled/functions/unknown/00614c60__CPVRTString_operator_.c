/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00614c60
 * Function: CPVRTString::operator!=
 * Signature: undefined __thiscall operator!=(CPVRTString * this, CPVRTString * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::TEMPNAMEPLACEHOLDERVALUE(CPVRTString const&) const */

bool __thiscall CPVRTString::operator!=(CPVRTString *this,CPVRTString *param_1)

{
  int iVar1;
  
                    /* try { // try from 00614c70 to 00714c97 has its CatchHandler @ 00614eac */
  iVar1 = strcmp(*(char **)(this + 8),*(char **)(param_1 + 8));
  return iVar1 != 0;
}


