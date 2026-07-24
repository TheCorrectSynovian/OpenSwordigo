/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00615a08
 * Function: CPVRTString::operator[]
 * Signature: undefined __thiscall operator[](CPVRTString * this, ulong param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::operator[](unsigned long) */

long __thiscall CPVRTString::operator[](CPVRTString *this,ulong param_1)

{
  return *(long *)(this + 8) + param_1;
}


