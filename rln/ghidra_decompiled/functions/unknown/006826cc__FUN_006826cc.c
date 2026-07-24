/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006826cc
 * Function: FUN_006826cc
 * Signature: undefined FUN_006826cc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_006826cc(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong local_10;
  ulong local_8;
  
  uVar2 = FUN_006822a0(param_2);
  uVar3 = FUN_00681e04(uVar2,param_1);
  FUN_00681ec4(uVar2,uVar3,param_2 + 8,&local_10);
  uVar2 = FUN_006822a0(param_3);
  uVar3 = FUN_00681e04(uVar2,param_1);
  FUN_00681ec4(uVar2,uVar3,param_3 + 8,&local_8);
                    /* catch() { ... } // from try @ 00682670 with catch @ 00682748 */
  iVar1 = -(uint)(local_10 < local_8);
  if (local_8 < local_10) {
    iVar1 = 1;
  }
  return iVar1;
}


