/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00614730
 * Function: CPVRTString::append
 * Signature: undefined __thiscall append(CPVRTString * this, CPVRTString * param_1, ulong param_2, ulong param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::append(CPVRTString const&, unsigned long, unsigned long) */

CPVRTString * __thiscall
CPVRTString::append(CPVRTString *this,CPVRTString *param_1,ulong param_2,ulong param_3)

{
  ulong __size;
  void *__src;
  size_t __n;
  void *__dest;
  long lVar1;
  
                    /* catch() { ... } // from try @ 00612eb8 with catch @ 00614730 */
                    /* catch() { ... } // from try @ 00612ea8 with catch @ 00614734 */
                    /* catch() { ... } // from try @ 00612da0 with catch @ 00614738 */
  __src = *(void **)(this + 8);
  __n = *(size_t *)(this + 0x10);
  lVar1 = *(long *)(param_1 + 8);
  __size = __n + param_3 + 1;
  __dest = __src;
  if (*(ulong *)(this + 0x18) < __size) {
    __dest = malloc(__size);
    *(ulong *)(this + 0x18) = __size;
    memmove(__dest,__src,__n);
    *(undefined1 *)((long)__dest + __n + param_3) = 0;
  }
  memmove((void *)((long)__dest + __n),(void *)(lVar1 + param_2),param_3);
  lVar1 = *(long *)(this + 0x10);
                    /* catch() { ... } // from try @ 00612d8c with catch @ 006147a8 */
                    /* catch() { ... } // from try @ 00612ef0 with catch @ 006147ac
                       catch() { ... } // from try @ 00613ab4 with catch @ 006147ac */
  *(ulong *)(this + 0x10) = lVar1 + param_3;
  *(undefined1 *)((long)__dest + lVar1 + param_3) = 0;
                    /* catch() { ... } // from try @ 00612eb0 with catch @ 006147bc
                       catch() { ... } // from try @ 00613ad8 with catch @ 006147bc */
  if (__dest != *(void **)(this + 8)) {
                    /* catch() { ... } // from try @ 00612dd0 with catch @ 006147c0 */
    free(*(void **)(this + 8));
    *(void **)(this + 8) = __dest;
  }
                    /* catch() { ... } // from try @ 00612f3c with catch @ 006147d0
                       catch() { ... } // from try @ 00612f54 with catch @ 006147d0
                       catch() { ... } // from try @ 00612fd4 with catch @ 006147d0 */
                    /* catch() { ... } // from try @ 006132f8 with catch @ 006147d4 */
                    /* catch() { ... } // from try @ 0061311c with catch @ 006147d8 */
  return this;
}


