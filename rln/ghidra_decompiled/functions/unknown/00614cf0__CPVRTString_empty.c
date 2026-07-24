/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00614cf0
 * Function: CPVRTString::empty
 * Signature: undefined __thiscall empty(CPVRTString * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::empty() const */

bool __thiscall CPVRTString::empty(CPVRTString *this)

{
  return *(long *)(this + 0x10) == 0;
}


