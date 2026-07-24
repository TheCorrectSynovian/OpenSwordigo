/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ed7dc
 * Function: FUN_005ed7dc
 * Signature: undefined FUN_005ed7dc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005ed7dc(undefined8 param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  
  bVar2 = *(char *)(param_2 + 10) == '\0';
  lVar1 = 0x10;
  if (bVar2) {
    lVar1 = 8;
  }
  lVar3 = 0x38;
  if (bVar2) {
    lVar3 = 0x30;
  }
  FUN_005eed74(param_1,param_2,lVar3 + ((ulong)*(byte *)(param_2 + 0xb) - 1) * lVar1,0);
  return;
}


