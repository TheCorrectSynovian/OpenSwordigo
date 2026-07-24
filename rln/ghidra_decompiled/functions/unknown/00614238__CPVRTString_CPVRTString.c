/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00614238
 * Function: CPVRTString::CPVRTString
 * Signature: undefined __thiscall CPVRTString(CPVRTString * this, CPVRTString * param_1, ulong param_2, ulong param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::CPVRTString(CPVRTString const&, unsigned long, unsigned long) */

void __thiscall
CPVRTString::CPVRTString(CPVRTString *this,CPVRTString *param_1,ulong param_2,ulong param_3)

{
  size_t __n;
  long lVar1;
  undefined *puVar2;
  void *__dest;
  
  puVar2 = PTR_vtable_007e7538;
                    /* catch() { ... } // from try @ 006134dc with catch @ 00614248 */
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined **)this = puVar2 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  lVar1 = *(long *)(param_1 + 8);
  __n = *(long *)(param_1 + 0x10) - param_2;
  if (param_3 != 0xffffffffffffffff) {
    __n = param_3;
  }
  __dest = malloc(__n + 1);
  *(size_t *)(this + 0x10) = __n;
  *(size_t *)(this + 0x18) = __n + 1;
  memmove(__dest,(void *)(lVar1 + param_2),__n);
  *(undefined1 *)((long)__dest + __n) = 0;
  if (__dest != (void *)0x0) {
    *(void **)(this + 8) = __dest;
  }
  return;
}


