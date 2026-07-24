/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006145d4
 * Function: CPVRTString::append
 * Signature: undefined __thiscall append(CPVRTString * this, char * param_1, ulong param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::append(char const*, unsigned long) */

CPVRTString * __thiscall CPVRTString::append(CPVRTString *this,char *param_1,ulong param_2)

{
  ulong __size;
  size_t __n;
  void *__dest;
  long lVar1;
  void *__src;
  
                    /* catch() { ... } // from try @ 00613814 with catch @ 006145d8
                       catch() { ... } // from try @ 006138a0 with catch @ 006145d8 */
                    /* catch() { ... } // from try @ 00613550 with catch @ 006145e8
                       catch() { ... } // from try @ 00613630 with catch @ 006145e8
                       catch() { ... } // from try @ 0061372c with catch @ 006145e8 */
  __n = *(size_t *)(this + 0x10);
  __src = *(void **)(this + 8);
  __size = __n + param_2 + 1;
  __dest = __src;
  if (*(ulong *)(this + 0x18) < __size) {
    __dest = malloc(__size);
    *(ulong *)(this + 0x18) = __size;
    memmove(__dest,__src,__n);
    *(undefined1 *)((long)__dest + __n + param_2) = 0;
  }
                    /* try { // try from 00614634 to 007147fb has its CatchHandler @ 00612d28 */
                    /* catch() { ... } // from try @ 00612fc8 with catch @ 00614638 */
                    /* catch() { ... } // from try @ 00612f48 with catch @ 0061463c */
  memmove((void *)((long)__dest + __n),param_1,param_2);
  lVar1 = *(long *)(this + 0x10);
  *(ulong *)(this + 0x10) = lVar1 + param_2;
  *(undefined1 *)((long)__dest + lVar1 + param_2) = 0;
                    /* catch() { ... } // from try @ 00612f0c with catch @ 00614654 */
  if (__dest != *(void **)(this + 8)) {
    free(*(void **)(this + 8));
    *(void **)(this + 8) = __dest;
  }
  return this;
}


