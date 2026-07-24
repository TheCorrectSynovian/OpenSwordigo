/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00614d00
 * Function: CPVRTString::erase
 * Signature: undefined __thiscall erase(CPVRTString * this, ulong param_1, ulong param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::erase(unsigned long, unsigned long) */

CPVRTString * __thiscall CPVRTString::erase(CPVRTString *this,ulong param_1,ulong param_2)

{
  ulong uVar1;
  void *__dest;
  undefined1 *__s;
  void *__src;
  size_t __n;
  ulong uVar2;
  
                    /* try { // try from 00614d00 to 00714d27 has its CatchHandler @ 00614e8c */
  if (param_2 == 0xffffffffffffffff) {
    uVar2 = *(ulong *)(this + 0x10);
  }
  else {
    uVar2 = *(ulong *)(this + 0x10);
    uVar1 = param_2 + param_1;
    if (uVar1 < uVar2) {
                    /* try { // try from 00614d48 to 00714d6f has its CatchHandler @ 00614e7c */
      memmove((void *)(*(long *)(this + 8) + param_1),(void *)(*(long *)(this + 8) + uVar1),
              (1 - uVar1) + uVar2);
      return this;
    }
  }
  if (uVar2 < param_1) {
    __src = *(void **)(this + 8);
    uVar1 = param_1 + 1;
    __n = param_1 - uVar2;
    __dest = __src;
    if (*(ulong *)(this + 0x18) < uVar1) {
      __dest = malloc(uVar1);
                    /* try { // try from 00614d90 to 00714db7 has its CatchHandler @ 00614e6c */
      *(ulong *)(this + 0x18) = uVar1;
      memmove(__dest,__src,uVar2 + 1);
    }
    __s = (undefined1 *)((long)__dest + uVar2);
    if (__n != 0) {
      memset(__s,0,__n);
      __s = (undefined1 *)((long)__dest + param_1);
    }
    *__s = 0;
    *(size_t *)(this + 0x10) = *(long *)(this + 0x10) + __n;
    if (__dest != *(void **)(this + 8)) {
      free(*(void **)(this + 8));
      *(void **)(this + 8) = __dest;
    }
  }
  else {
                    /* try { // try from 00614dd8 to 00714dff has its CatchHandler @ 00614e64 */
    *(ulong *)(this + 0x10) = param_1;
    *(undefined1 *)(*(long *)(this + 8) + param_1) = 0;
  }
  return this;
}


