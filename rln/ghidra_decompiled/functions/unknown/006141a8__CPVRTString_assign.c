/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006141a8
 * Function: CPVRTString::assign
 * Signature: undefined __thiscall assign(CPVRTString * this, char * param_1, ulong param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::assign(char const*, unsigned long) */

CPVRTString * __thiscall CPVRTString::assign(CPVRTString *this,char *param_1,ulong param_2)

{
  void *__dest;
  
                    /* catch() { ... } // from try @ 00613924 with catch @ 006141cc */
  if (param_2 < *(ulong *)(this + 0x18)) {
                    /* catch() { ... } // from try @ 00613910 with catch @ 006141d4 */
    __dest = *(void **)(this + 8);
  }
  else {
                    /* catch() { ... } // from try @ 00613908 with catch @ 006141dc */
                    /* catch() { ... } // from try @ 006138d4 with catch @ 006141e0 */
                    /* catch() { ... } // from try @ 00613720 with catch @ 006141e4 */
    __dest = malloc(param_2 + 1);
                    /* catch() { ... } // from try @ 00613624 with catch @ 006141e8 */
                    /* catch() { ... } // from try @ 006134f0 with catch @ 006141ec */
    *(ulong *)(this + 0x18) = param_2 + 1;
  }
  *(ulong *)(this + 0x10) = param_2;
  memmove(__dest,param_1,param_2);
  *(undefined1 *)((long)__dest + *(long *)(this + 0x10)) = 0;
  if (__dest != *(void **)(this + 8)) {
    free(*(void **)(this + 8));
    *(void **)(this + 8) = __dest;
  }
  return this;
}


