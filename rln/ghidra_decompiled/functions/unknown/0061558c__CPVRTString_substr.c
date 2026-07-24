/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061558c
 * Function: CPVRTString::substr
 * Signature: undefined __cdecl substr(ulong param_1, ulong param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::substr(unsigned long, unsigned long) const */

void CPVRTString::substr(ulong param_1,ulong param_2)

{
  size_t __n;
  long lVar1;
  void *__dest;
  size_t in_x2;
  long *in_x8;
  
  *in_x8 = (long)(PTR_vtable_007e7538 + 0x10);
  in_x8[1] = 0;
  lVar1 = *(long *)(param_1 + 8);
  __n = *(long *)(param_1 + 0x10) - param_2;
  if (in_x2 != 0xffffffffffffffff) {
    __n = in_x2;
  }
  __dest = malloc(__n + 1);
  in_x8[2] = __n;
  in_x8[3] = __n + 1;
  memmove(__dest,(void *)(lVar1 + param_2),__n);
  *(undefined1 *)((long)__dest + __n) = 0;
  if (__dest != (void *)0x0) {
    in_x8[1] = (long)__dest;
  }
  return;
}


