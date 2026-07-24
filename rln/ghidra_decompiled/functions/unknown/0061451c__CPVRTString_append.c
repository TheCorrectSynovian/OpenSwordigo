/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061451c
 * Function: CPVRTString::append
 * Signature: undefined __thiscall append(CPVRTString * this, char * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::append(char const*) */

CPVRTString * __thiscall CPVRTString::append(CPVRTString *this,char *param_1)

{
  ulong __size;
  size_t __n;
  size_t __n_00;
  void *__dest;
  long lVar1;
  void *__src;
  
  __n_00 = strlen(param_1);
  __n = *(size_t *)(this + 0x10);
  __src = *(void **)(this + 8);
  __size = __n + __n_00 + 1;
  __dest = __src;
  if (*(ulong *)(this + 0x18) < __size) {
    __dest = malloc(__size);
    *(ulong *)(this + 0x18) = __size;
    memmove(__dest,__src,__n);
    *(undefined1 *)((long)__dest + __n + __n_00) = 0;
  }
  memmove((void *)((long)__dest + __n),param_1,__n_00);
  lVar1 = *(long *)(this + 0x10);
  *(size_t *)(this + 0x10) = lVar1 + __n_00;
  *(undefined1 *)((long)__dest + lVar1 + __n_00) = 0;
  if (__dest != *(void **)(this + 8)) {
    free(*(void **)(this + 8));
    *(void **)(this + 8) = __dest;
  }
  return this;
}


