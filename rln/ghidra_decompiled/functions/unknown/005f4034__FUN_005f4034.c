/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f4034
 * Function: FUN_005f4034
 * Signature: undefined FUN_005f4034(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 * FUN_005f4034(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  double dVar5;
  
  if (param_2 - 1U < *(uint *)(param_1 + 0x38)) {
    return (undefined8 *)(*(long *)(param_1 + 0x18) + (long)(int)(param_2 - 1U) * 0x10);
  }
  dVar5 = (double)param_2;
  if (param_2 == 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x20);
  }
  else {
    uVar1 = (int)((ulong)dVar5 >> 0x20) + SUB84(dVar5,0);
    uVar2 = (1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f)) - 1U | 1;
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar1 / uVar2;
    }
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x20) + (ulong)(uVar1 - uVar3 * uVar2) * 0x28);
  }
                    /* catch() { ... } // from try @ 005f3e5c with catch @ 005f4098 */
                    /* catch() { ... } // from try @ 005f3d50 with catch @ 005f409c */
                    /* catch() { ... } // from try @ 005f3df4 with catch @ 005f40a0 */
  while ((*(int *)(puVar4 + 3) != 3 || ((double)puVar4[2] != dVar5))) {
    puVar4 = (undefined8 *)puVar4[4];
    if (puVar4 == (undefined8 *)0x0) {
      return &DAT_00699bc8;
    }
  }
  return puVar4;
}


