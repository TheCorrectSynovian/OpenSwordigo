/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f3708
 * Function: FUN_005f3708
 * Signature: undefined FUN_005f3708(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005f3708(long param_1,ulong param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  
  if (0xffffffffffffffd5 < param_2) {
    FUN_005eede0(param_1);
  }
  puVar2 = (undefined8 *)FUN_005eed74(param_1,0,0,param_2 + 0x28);
  bVar1 = *(byte *)(*(long *)(param_1 + 0x20) + 0x20);
  *(undefined1 *)(puVar2 + 1) = 7;
  puVar2[3] = param_3;
  puVar2[4] = param_2;
  puVar2[2] = 0;
  *(byte *)((long)puVar2 + 9) = bVar1 & 3;
  *puVar2 = **(undefined8 **)(*(long *)(param_1 + 0x20) + 0xb0);
  **(long **)(*(long *)(param_1 + 0x20) + 0xb0) = (long)puVar2;
  return;
}


