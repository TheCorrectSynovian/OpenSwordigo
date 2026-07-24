/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00627920
 * Function: FUN_00627920
 * Signature: undefined FUN_00627920(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00627920(long *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  char local_8 [8];
  
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_006215c0(lVar1,*(uint *)(lVar1 + 0x20) & 0xfffffffd);
  FUN_00625fe4(local_8,param_1,1);
  if (((local_8[0] != '\0') &&
      ((*(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x20) & 5) == 0)) &&
     (plVar2 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8),
     lVar1 = (**(code **)(*plVar2 + 0x20))(plVar2,param_2,param_3,8), lVar1 == -1)) {
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    FUN_006215c0(lVar1,*(uint *)(lVar1 + 0x20) | 4);
    return param_1;
  }
  return param_1;
}


