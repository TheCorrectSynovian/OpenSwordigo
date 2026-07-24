/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00614e00
 * Function: CPVRTString::resize
 * Signature: undefined __thiscall resize(CPVRTString * this, ulong param_1, char param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::resize(unsigned long, char) */

void __thiscall CPVRTString::resize(CPVRTString *this,ulong param_1,char param_2)

{
  ulong __size;
  void *__dest;
  undefined1 *__s;
  void *__src;
  size_t __n;
  ulong uVar1;
  
                    /* try { // try from 00614e00 to 00714e37 has its CatchHandler @ 00614c08 */
                    /* catch() { ... } // from try @ 00614c4c with catch @ 00614e14 */
  uVar1 = *(ulong *)(this + 0x10);
  if (uVar1 < param_1) {
    __src = *(void **)(this + 8);
                    /* try { // try from 00614e38 to 0071501f has its CatchHandler @ 00615028 */
    __size = param_1 + 1;
    __n = param_1 - uVar1;
    __dest = __src;
    if (*(ulong *)(this + 0x18) < __size) {
      __dest = malloc(__size);
      *(ulong *)(this + 0x18) = __size;
      memmove(__dest,__src,uVar1 + 1);
                    /* catch() { ... } // from try @ 00614dd8 with catch @ 00614e64 */
    }
    __s = (undefined1 *)((long)__dest + uVar1);
                    /* catch() { ... } // from try @ 00614d90 with catch @ 00614e6c */
    if (__n != 0) {
      memset(__s,(uint)(byte)param_2,__n);
                    /* catch() { ... } // from try @ 00614d48 with catch @ 00614e7c */
      __s = (undefined1 *)((long)__dest + param_1);
    }
    *__s = 0;
                    /* catch() { ... } // from try @ 00614d00 with catch @ 00614e8c */
    *(size_t *)(this + 0x10) = *(long *)(this + 0x10) + __n;
    if (__dest != *(void **)(this + 8)) {
      free(*(void **)(this + 8));
                    /* catch() { ... } // from try @ 00614cb8 with catch @ 00614e9c */
      *(void **)(this + 8) = __dest;
    }
  }
  else {
    *(ulong *)(this + 0x10) = param_1;
                    /* catch() { ... } // from try @ 00614c70 with catch @ 00614eac */
    *(undefined1 *)(*(long *)(this + 8) + param_1) = 0;
  }
  return;
}


