/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00614898
 * Function: CPVRTString::assign
 * Signature: undefined __thiscall assign(CPVRTString * this, CPVRTString * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::assign(CPVRTString const&) */

CPVRTString * __thiscall CPVRTString::assign(CPVRTString *this,CPVRTString *param_1)

{
  void *__src;
  ulong __n;
  void *__dest;
  
  __src = *(void **)(param_1 + 8);
  __n = *(ulong *)(param_1 + 0x10);
  if (__n < *(ulong *)(this + 0x18)) {
    __dest = *(void **)(this + 8);
  }
  else {
    __dest = malloc(__n + 1);
    *(ulong *)(this + 0x18) = __n + 1;
  }
                    /* try { // try from 006148dc to 007148e7 has its CatchHandler @ 00612d28 */
                    /* catch() { ... } // from try @ 00613f98 with catch @ 006148e4
                       catch() { ... } // from try @ 006147fc with catch @ 006148e4 */
                    /* catch() { ... } // from try @ 006149a8 with catch @ 006148e8 */
  *(ulong *)(this + 0x10) = __n;
  memmove(__dest,__src,__n);
  *(undefined1 *)((long)__dest + *(long *)(this + 0x10)) = 0;
  if (__dest != *(void **)(this + 8)) {
    free(*(void **)(this + 8));
    *(void **)(this + 8) = __dest;
  }
                    /* try { // try from 00614920 to 00714927 has its CatchHandler @ 006149dc */
  return this;
}


