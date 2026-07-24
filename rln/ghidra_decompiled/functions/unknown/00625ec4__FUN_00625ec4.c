/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00625ec4
 * Function: FUN_00625ec4
 * Signature: undefined FUN_00625ec4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00625ec4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xf0);
  if (plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x50))(plVar2,10);
    FUN_00629f14(param_1,param_2,param_3,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006652c8();
}


