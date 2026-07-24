/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00615fe4
 * Function: PVRTStringGetContainingDirectoryPath
 * Signature: undefined __cdecl PVRTStringGetContainingDirectoryPath(CPVRTString * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTStringGetContainingDirectoryPath(CPVRTString const&) */

void PVRTStringGetContainingDirectoryPath(CPVRTString *param_1)

{
  void *__src;
  size_t __n;
  void *pvVar1;
  long *in_x8;
  size_t sVar2;
  size_t sVar3;
  
  __src = *(void **)(param_1 + 8);
  __n = *(size_t *)(param_1 + 0x10);
  if (__n != 0) {
    sVar2 = __n - 1;
    sVar3 = sVar2;
    do {
      if (*(char *)((long)__src + sVar3) == '/') goto LAB_00616080;
      sVar3 = sVar3 - 1;
    } while (sVar3 < __n);
    do {
      sVar3 = sVar2;
      if (*(char *)((long)__src + sVar2) == '\\') {
LAB_00616080:
        if (sVar3 != 0xffffffffffffffff) {
          __n = sVar3;
        }
        *in_x8 = (long)(PTR_vtable_007e7538 + 0x10);
        in_x8[1] = 0;
        pvVar1 = malloc(__n + 1);
        in_x8[2] = __n;
        in_x8[3] = __n + 1;
        memmove(pvVar1,__src,__n);
        *(undefined1 *)((long)pvVar1 + __n) = 0;
        if (pvVar1 == (void *)0x0) {
          return;
        }
        in_x8[1] = (long)pvVar1;
        return;
      }
      sVar2 = sVar2 - 1;
    } while (sVar2 < __n);
  }
  *in_x8 = (long)(PTR_vtable_007e7538 + 0x10);
  in_x8[1] = 0;
  pvVar1 = malloc(__n + 1);
  in_x8[2] = __n;
  in_x8[3] = __n + 1;
  memmove(pvVar1,__src,__n);
  *(undefined1 *)((long)pvVar1 + __n) = 0;
                    /* catch() { ... } // from try @ 00615ed8 with catch @ 00616070 */
  if (pvVar1 != (void *)0x0) {
    in_x8[1] = (long)pvVar1;
  }
                    /* catch() { ... } // from try @ 00615ed0 with catch @ 006160cc */
  return;
}


