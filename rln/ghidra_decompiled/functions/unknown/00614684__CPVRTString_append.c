/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00614684
 * Function: CPVRTString::append
 * Signature: undefined __thiscall append(CPVRTString * this, CPVRTString * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::append(CPVRTString const&) */

CPVRTString * __thiscall CPVRTString::append(CPVRTString *this,CPVRTString *param_1)

{
  ulong __size;
  void *__src;
  size_t __n;
  size_t __n_00;
  void *__dest;
  long lVar1;
  void *__src_00;
  
  __src = *(void **)(param_1 + 8);
  __n_00 = *(size_t *)(param_1 + 0x10);
  __n = *(size_t *)(this + 0x10);
  __src_00 = *(void **)(this + 8);
  __size = __n + __n_00 + 1;
  __dest = __src_00;
  if (*(ulong *)(this + 0x18) < __size) {
                    /* catch() { ... } // from try @ 00612ef8 with catch @ 006146c0 */
    __dest = malloc(__size);
                    /* catch() { ... } // from try @ 00612ecc with catch @ 006146c4 */
    *(ulong *)(this + 0x18) = __size;
    memmove(__dest,__src_00,__n);
    *(undefined1 *)((long)__dest + __n + __n_00) = 0;
  }
  memmove((void *)((long)__dest + __n),__src,__n_00);
  lVar1 = *(long *)(this + 0x10);
  *(size_t *)(this + 0x10) = lVar1 + __n_00;
  *(undefined1 *)((long)__dest + lVar1 + __n_00) = 0;
  if (__dest != *(void **)(this + 8)) {
    free(*(void **)(this + 8));
    *(void **)(this + 8) = __dest;
  }
  return this;
}


