/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00615f18
 * Function: PVRTStringGetFileExtension
 * Signature: undefined __cdecl PVRTStringGetFileExtension(CPVRTString * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVRTStringGetFileExtension(CPVRTString const&) */

void PVRTStringGetFileExtension(CPVRTString *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  void *__dest;
  long *in_x8;
  ulong uVar3;
  size_t __n;
  long lVar4;
  ulong uVar5;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  if (uVar3 != 0) {
    lVar4 = *(long *)(param_1 + 8);
    uVar5 = uVar3 - 1;
    __n = 1;
    do {
      if (*(char *)(lVar4 + uVar5) == '.') {
        *in_x8 = (long)(PTR_vtable_007e7538 + 0x10);
        in_x8[1] = 0;
        __dest = malloc(__n + 1);
        in_x8[2] = __n;
        in_x8[3] = __n + 1;
        memmove(__dest,(void *)(lVar4 + uVar5),__n);
        *(undefined1 *)((long)__dest + __n) = 0;
        if (__dest == (void *)0x0) {
          return;
        }
        in_x8[1] = (long)__dest;
        return;
      }
      uVar5 = uVar5 - 1;
      __n = __n + 1;
    } while (uVar5 < uVar3);
  }
  *in_x8 = (long)(PTR_vtable_007e7538 + 0x10);
  in_x8[1] = 0;
  puVar2 = malloc(1);
  lVar1 = _UNK_0068b488;
  lVar4 = _DAT_0068b480;
  *puVar2 = 0;
  in_x8[3] = lVar1;
  in_x8[2] = lVar4;
  if (puVar2 != (undefined1 *)0x0) {
    in_x8[1] = (long)puVar2;
  }
  return;
}


