/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00615544
 * Function: CPVRTString::reserve
 * Signature: undefined __thiscall reserve(CPVRTString * this, ulong param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::reserve(unsigned long) */

void __thiscall CPVRTString::reserve(CPVRTString *this,ulong param_1)

{
  void *pvVar1;
  
  if (*(ulong *)(this + 0x18) <= param_1) {
                    /* try { // try from 00615568 to 00715627 has its CatchHandler @ 00615dd0 */
    pvVar1 = realloc(*(void **)(this + 8),param_1 + 1);
    *(void **)(this + 8) = pvVar1;
    *(ulong *)(this + 0x18) = param_1 + 1;
  }
  return;
}


