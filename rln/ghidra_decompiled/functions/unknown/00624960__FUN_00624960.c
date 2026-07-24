/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00624960
 * Function: FUN_00624960
 * Signature: undefined FUN_00624960(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00624960(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  char local_8 [8];
  
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_00620c14(lVar1,*(uint *)(lVar1 + 0x20) & 0xfffffffd);
  FUN_006230e4(local_8,param_1,1);
  if (((local_8[0] != '\0') &&
      ((*(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x20) & 5) == 0)) &&
     (plVar2 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8),
     lVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,param_2,param_3,8), lVar1 == -1)) {
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    FUN_00620c14(lVar1,*(uint *)(lVar1 + 0x20) | 4);
    return param_1;
  }
  return param_1;
}


