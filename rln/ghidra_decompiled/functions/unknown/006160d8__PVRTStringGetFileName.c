/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006160d8
 * Function: PVRTStringGetFileName
 * Signature: undefined __cdecl PVRTStringGetFileName(CPVRTString * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTStringGetFileName(CPVRTString const&) */

void PVRTStringGetFileName(CPVRTString *param_1)

{
  long lVar1;
  void *__src;
  ulong __n;
  void *pvVar2;
  long *in_x8;
  ulong uVar3;
  ulong uVar4;
  size_t __n_00;
  
  __src = *(void **)(param_1 + 8);
  __n = *(ulong *)(param_1 + 0x10);
  if (__n != 0) {
    uVar3 = __n - 1;
    uVar4 = uVar3;
    do {
      if (*(char *)((long)__src + uVar4) == '/') goto LAB_00616174;
      uVar4 = uVar4 - 1;
    } while (uVar4 < __n);
    do {
      uVar4 = uVar3;
      if (*(char *)((long)__src + uVar3) == '\\') {
LAB_00616174:
        lVar1 = 0;
        if (__n == 0xffffffffffffffff) {
          lVar1 = uVar4 + 1;
        }
        __n_00 = __n - lVar1;
        *in_x8 = (long)(PTR_vtable_007e7538 + 0x10);
        in_x8[1] = 0;
        pvVar2 = malloc(__n_00 + 1);
        in_x8[2] = __n_00;
        in_x8[3] = __n_00 + 1;
        memmove(pvVar2,(void *)((long)__src + uVar4 + 1),__n_00);
        *(undefined1 *)((long)pvVar2 + __n_00) = 0;
        if (pvVar2 == (void *)0x0) {
          return;
        }
        in_x8[1] = (long)pvVar2;
        return;
      }
      uVar3 = uVar3 - 1;
    } while (uVar3 < __n);
  }
                    /* catch() { ... } // from try @ 00615ec0 with catch @ 00616134 */
  *in_x8 = (long)(PTR_vtable_007e7538 + 0x10);
  in_x8[1] = 0;
  pvVar2 = malloc(__n + 1);
                    /* try { // try from 00616158 to 0071615b has its CatchHandler @ 00616160 */
  in_x8[2] = __n;
  in_x8[3] = __n + 1;
                    /* try { // try from 0061615c to 00716237 has its CatchHandler @ 00615e28 */
  memmove(pvVar2,__src,__n);
                    /* catch() { ... } // from try @ 00616158 with catch @ 00616160 */
  *(undefined1 *)((long)pvVar2 + __n) = 0;
                    /* catch() { ... } // from try @ 00615e7c with catch @ 00616164 */
  if (pvVar2 != (void *)0x0) {
    in_x8[1] = (long)pvVar2;
  }
                    /* catch() { ... } // from try @ 00615e68 with catch @ 006161c8 */
  return;
}


