/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006142b8
 * Function: CPVRTString::assign
 * Signature: undefined __thiscall assign(CPVRTString * this, CPVRTString * param_1, ulong param_2, ulong param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::assign(CPVRTString const&, unsigned long, unsigned long) */

CPVRTString * __thiscall
CPVRTString::assign(CPVRTString *this,CPVRTString *param_1,ulong param_2,ulong param_3)

{
  ulong __n;
  long lVar1;
  void *__dest;
  
                    /* catch() { ... } // from try @ 006134d4 with catch @ 006142b8 */
                    /* catch() { ... } // from try @ 006134a0 with catch @ 006142bc */
  lVar1 = *(long *)(param_1 + 8);
  __n = *(long *)(param_1 + 0x10) - param_2;
  if (param_3 != 0xffffffffffffffff) {
    __n = param_3;
  }
  if (__n < *(ulong *)(this + 0x18)) {
    __dest = *(void **)(this + 8);
                    /* catch() { ... } // from try @ 0061348c with catch @ 006142f4 */
  }
  else {
                    /* catch() { ... } // from try @ 00613430 with catch @ 006142f8 */
    __dest = malloc(__n + 1);
    *(ulong *)(this + 0x18) = __n + 1;
  }
  *(ulong *)(this + 0x10) = __n;
  memmove(__dest,(void *)(lVar1 + param_2),__n);
  *(undefined1 *)((long)__dest + *(long *)(this + 0x10)) = 0;
  if (__dest != *(void **)(this + 8)) {
    free(*(void **)(this + 8));
    *(void **)(this + 8) = __dest;
  }
                    /* catch() { ... } // from try @ 006133ec with catch @ 00614348 */
  return this;
}


