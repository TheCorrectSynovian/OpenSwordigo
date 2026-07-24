/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006161d8
 * Function: PVRTStringStripWhiteSpaceFromStartOf
 * Signature: undefined __cdecl PVRTStringStripWhiteSpaceFromStartOf(CPVRTString * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTStringStripWhiteSpaceFromStartOf(CPVRTString const&) */

void PVRTStringStripWhiteSpaceFromStartOf(CPVRTString *param_1)

{
  void *__src;
  ulong __n;
  void *pvVar1;
  long *in_x8;
  size_t __n_00;
  ulong uVar2;
  
  __src = *(void **)(param_1 + 8);
  __n = *(ulong *)(param_1 + 0x10);
  if (__n != 0) {
    uVar2 = 0;
    do {
      if (((*(char *)((long)__src + uVar2) != ' ') && (*(char *)((long)__src + uVar2) != '\t')) &&
         (*(char *)((long)__src + uVar2) != '\t')) {
                    /* try { // try from 00616288 to 00716293 has its CatchHandler @ 00616688 */
        __n_00 = __n - uVar2;
        if (__n + 2 != uVar2) {
          __n_00 = __n_00 + 1;
        }
                    /* try { // try from 00616294 to 007162a7 has its CatchHandler @ 00616624 */
        *in_x8 = (long)(PTR_vtable_007e7538 + 0x10);
        in_x8[1] = 0;
        pvVar1 = malloc(__n_00 + 1);
                    /* try { // try from 006162a8 to 007162bb has its CatchHandler @ 006165e4 */
        in_x8[2] = __n_00;
        in_x8[3] = __n_00 + 1;
        memmove(pvVar1,(void *)((long)__src + uVar2),__n_00);
        *(undefined1 *)((long)pvVar1 + __n_00) = 0;
        if (pvVar1 == (void *)0x0) {
          return;
        }
        in_x8[1] = (long)pvVar1;
        return;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < __n);
  }
                    /* try { // try from 00616238 to 00716273 has its CatchHandler @ 00616238
                       catch() { ... } // from try @ 00616238 with catch @ 00616238
                       catch() { ... } // from try @ 00616328 with catch @ 00616238
                       catch() { ... } // from try @ 006165dc with catch @ 00616238 */
  *in_x8 = (long)(PTR_vtable_007e7538 + 0x10);
  in_x8[1] = 0;
  pvVar1 = malloc(__n + 1);
  in_x8[2] = __n;
  in_x8[3] = __n + 1;
  memmove(pvVar1,__src,__n);
  *(undefined1 *)((long)pvVar1 + __n) = 0;
  if (pvVar1 != (void *)0x0) {
    in_x8[1] = (long)pvVar1;
  }
                    /* try { // try from 00616274 to 00716287 has its CatchHandler @ 006166e8 */
  return;
}


