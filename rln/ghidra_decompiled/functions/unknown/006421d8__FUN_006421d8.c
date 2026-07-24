/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006421d8
 * Function: FUN_006421d8
 * Signature: undefined FUN_006421d8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_006421d8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  
  if (((*(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x20) & 5) == 0) &&
     (plVar2 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8),
     lVar1 = (**(code **)(*plVar2 + 0x20))(plVar2,param_2,param_3,0x10), lVar1 == -1)) {
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    FUN_006215c0(lVar1,*(uint *)(lVar1 + 0x20) | 4);
    return param_1;
  }
  return param_1;
}


