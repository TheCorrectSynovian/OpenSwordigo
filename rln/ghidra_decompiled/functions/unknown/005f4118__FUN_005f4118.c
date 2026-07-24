/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f4118
 * Function: FUN_005f4118
 * Signature: undefined FUN_005f4118(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 * FUN_005f4118(long param_1,double *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  double dVar6;
  double dVar7;
  
                    /* catch() { ... } // from try @ 005f3dd4 with catch @ 005f4144 */
  switch(*(uint *)(param_2 + 1)) {
  case 0:
    goto switchD_005f4150_caseD_0;
  case 1:
    puVar5 = (undefined8 *)
             (*(long *)(param_1 + 0x20) +
             (long)(int)((1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f)) - 1U & *(uint *)param_2) *
             0x28);
    break;
  default:
    uVar1 = (1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f)) - 1U | 1;
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = *(uint *)param_2 / uVar1;
    }
                    /* catch() { ... } // from try @ 005f3dc0 with catch @ 005f41a4 */
    puVar5 = (undefined8 *)
             (*(long *)(param_1 + 0x20) + (ulong)(*(uint *)param_2 - uVar2 * uVar1) * 0x28);
    break;
  case 3:
    dVar7 = *param_2;
    iVar4 = (int)dVar7;
    dVar6 = (double)iVar4;
    if (dVar7 == dVar6) {
      if (iVar4 - 1U < *(uint *)(param_1 + 0x38)) {
        return (undefined8 *)(*(long *)(param_1 + 0x18) + (long)(int)(iVar4 - 1U) * 0x10);
      }
      if (iVar4 == 0) {
        puVar5 = *(undefined8 **)(param_1 + 0x20);
      }
      else {
        uVar1 = (int)((ulong)dVar6 >> 0x20) + SUB84(dVar6,0);
        uVar2 = (1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f)) - 1U | 1;
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar1 / uVar2;
        }
        puVar5 = (undefined8 *)(*(long *)(param_1 + 0x20) + (ulong)(uVar1 - uVar3 * uVar2) * 0x28);
      }
      while ((*(int *)(puVar5 + 3) != 3 || ((double)puVar5[2] != dVar6))) {
        puVar5 = (undefined8 *)puVar5[4];
        if (puVar5 == (undefined8 *)0x0) {
          return &DAT_00699bc8;
        }
      }
      return puVar5;
    }
    if (dVar7 == 0.0) {
      puVar5 = *(undefined8 **)(param_1 + 0x20);
    }
    else {
      uVar1 = (int)((ulong)dVar7 >> 0x20) + SUB84(dVar7,0);
      uVar2 = (1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f)) - 1U | 1;
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x20) + (ulong)(uVar1 - uVar3 * uVar2) * 0x28);
    }
    break;
  case 4:
                    /* try { // try from 005f4210 to 006f43df has its CatchHandler @ 005f4210
                       catch() { ... } // from try @ 005f4210 with catch @ 005f4210
                       catch() { ... } // from try @ 005f4688 with catch @ 005f4210
                       catch() { ... } // from try @ 005f4a30 with catch @ 005f4210 */
    puVar5 = (undefined8 *)
             (*(long *)(param_1 + 0x20) +
             (long)(int)((1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f)) - 1U &
                        *(uint *)((long)*param_2 + 0xc)) * 0x28);
    do {
      if ((*(int *)(puVar5 + 3) == 4) && ((double)puVar5[2] == *param_2)) {
        return puVar5;
      }
      puVar5 = (undefined8 *)puVar5[4];
    } while (puVar5 != (undefined8 *)0x0);
    goto switchD_005f4150_caseD_0;
  }
  do {
    iVar4 = FUN_005eee84(puVar5 + 2,param_2);
    if (iVar4 != 0) {
      return puVar5;
    }
    puVar5 = (undefined8 *)puVar5[4];
  } while (puVar5 != (undefined8 *)0x0);
switchD_005f4150_caseD_0:
  return &DAT_00699bc8;
}


