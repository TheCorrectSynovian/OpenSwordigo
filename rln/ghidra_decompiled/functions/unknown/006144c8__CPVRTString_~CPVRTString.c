/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006144c8
 * Function: CPVRTString::~CPVRTString
 * Signature: undefined __thiscall ~CPVRTString(CPVRTString * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::~CPVRTString() */

void __thiscall CPVRTString::~CPVRTString(CPVRTString *this)

{
  *(undefined **)this = PTR_vtable_007e7538 + 0x10;
  free(*(void **)(this + 8));
  return;
}


