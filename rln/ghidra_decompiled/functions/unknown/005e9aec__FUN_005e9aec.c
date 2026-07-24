/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e9aec
 * Function: FUN_005e9aec
 * Signature: undefined FUN_005e9aec(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005e9aec(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x28) == *(long *)(param_1 + 0x50)) {
    puVar2 = (undefined8 *)(param_1 + 0x78);
  }
  else {
    puVar2 = (undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
  }
  lVar1 = FUN_005ed3b8(param_1,0,*puVar2);
  *(undefined8 *)(lVar1 + 0x20) = *param_2;
  plVar3 = *(long **)(param_1 + 0x10);
  *plVar3 = lVar1;
  *(undefined4 *)(plVar3 + 1) = 6;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  uVar4 = param_2[1];
  *(undefined4 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_005ec63c(param_1,lVar1 + -0x10,0);
  return;
}


