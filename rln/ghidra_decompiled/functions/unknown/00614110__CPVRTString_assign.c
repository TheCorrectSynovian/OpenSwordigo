/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00614110
 * Function: CPVRTString::assign
 * Signature: undefined __thiscall assign(CPVRTString * this, char * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::assign(char const*) */

CPVRTString * __thiscall CPVRTString::assign(CPVRTString *this,char *param_1)

{
  size_t __n;
  void *__dest;
  
                    /* catch() { ... } // from try @ 00613990 with catch @ 00614118 */
  __n = strlen(param_1);
  if (__n < *(ulong *)(this + 0x18)) {
    __dest = *(void **)(this + 8);
  }
  else {
    __dest = malloc(__n + 1);
    *(size_t *)(this + 0x18) = __n + 1;
  }
  *(size_t *)(this + 0x10) = __n;
  memmove(__dest,param_1,__n);
                    /* catch() { ... } // from try @ 00613930 with catch @ 00614174 */
  *(undefined1 *)((long)__dest + *(long *)(this + 0x10)) = 0;
  if (__dest != *(void **)(this + 8)) {
    free(*(void **)(this + 8));
    *(void **)(this + 8) = __dest;
  }
  return this;
}


