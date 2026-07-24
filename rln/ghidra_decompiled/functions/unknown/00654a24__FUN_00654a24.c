/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00654a24
 * Function: FUN_00654a24
 * Signature: undefined FUN_00654a24(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_00654a24(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar1 = FUN_0063c4d0(&DAT_007fd2a8);
  lVar4 = *(long *)(*param_2 + 0x18);
  lVar2 = *(long *)(lVar4 + lVar1 * 8);
  if (lVar2 != 0) {
    return lVar2;
  }
  puVar3 = operator_new(0x150);
  *(undefined4 *)(puVar3 + 1) = 0;
  *puVar3 = &PTR_FUN_007b7c80;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined1 *)(puVar3 + 4) = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined4 *)(puVar3 + 9) = 0;
  *(undefined4 *)((long)puVar3 + 0x4c) = 0;
  *(undefined1 *)(puVar3 + 0x29) = 0;
  FUN_0064fe98(puVar3,param_2);
  FUN_0063c340(*param_2,puVar3,lVar1);
  return *(long *)(lVar4 + lVar1 * 8);
}


