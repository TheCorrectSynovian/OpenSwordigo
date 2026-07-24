/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f49e8
 * Function: FUN_005f49e8
 * Signature: undefined FUN_005f49e8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 * FUN_005f49e8(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  double dVar6;
  double local_38;
  undefined4 local_30;
  long local_28;
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  if (param_3 - 1U < *(uint *)(param_2 + 0x38)) {
    puVar5 = (undefined8 *)(*(long *)(param_2 + 0x18) + (long)(int)(param_3 - 1U) * 0x10);
LAB_005f4a88:
    if (puVar5 != &DAT_00699bc8) goto LAB_005f4ab4;
  }
  else {
    dVar6 = (double)param_3;
    if (param_3 == 0) {
      puVar5 = *(undefined8 **)(param_2 + 0x20);
    }
    else {
                    /* try { // try from 005f4a30 to 006f4b13 has its CatchHandler @ 005f4210 */
                    /* catch() { ... } // from try @ 005f4834 with catch @ 005f4a34 */
                    /* catch() { ... } // from try @ 005f4408 with catch @ 005f4a38 */
      uVar1 = (int)((ulong)dVar6 >> 0x20) + SUB84(dVar6,0);
      uVar2 = (1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f)) - 1U | 1;
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      puVar5 = (undefined8 *)(*(long *)(param_2 + 0x20) + (ulong)(uVar1 - uVar3 * uVar2) * 0x28);
    }
    do {
      if ((*(int *)(puVar5 + 3) == 3) && ((double)puVar5[2] == dVar6)) goto LAB_005f4a88;
      puVar5 = (undefined8 *)puVar5[4];
    } while (puVar5 != (undefined8 *)0x0);
  }
                    /* catch() { ... } // from try @ 005f43f4 with catch @ 005f4a9c */
  local_38 = (double)param_3;
  local_30 = 3;
  puVar5 = (undefined8 *)FUN_005f43c0(param_1,param_2,&local_38);
LAB_005f4ab4:
  if (*(long *)(lVar4 + 0x28) == local_28) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


