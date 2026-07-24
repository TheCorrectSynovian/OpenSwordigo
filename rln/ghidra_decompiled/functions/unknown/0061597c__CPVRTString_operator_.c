/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061597c
 * Function: CPVRTString::operator=
 * Signature: undefined __thiscall operator=(CPVRTString * this, CPVRTString * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::TEMPNAMEPLACEHOLDERVALUE(CPVRTString const&) */

CPVRTString * __thiscall CPVRTString::operator=(CPVRTString *this,CPVRTString *param_1)

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
  *(ulong *)(this + 0x10) = __n;
  memmove(__dest,__src,__n);
  *(undefined1 *)((long)__dest + *(long *)(this + 0x10)) = 0;
  if (__dest != *(void **)(this + 8)) {
    free(*(void **)(this + 8));
    *(void **)(this + 8) = __dest;
  }
  return this;
}


