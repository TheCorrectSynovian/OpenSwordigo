/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00641e30
 * Function: FUN_00641e30
 * Signature: undefined FUN_00641e30(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00641e30(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
  lVar1 = (**(code **)(*plVar2 + 0x60))(plVar2);
  if (param_3 != lVar1) {
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    FUN_006215c0(lVar1,*(uint *)(lVar1 + 0x20) | 1);
    return;
  }
  return;
}


