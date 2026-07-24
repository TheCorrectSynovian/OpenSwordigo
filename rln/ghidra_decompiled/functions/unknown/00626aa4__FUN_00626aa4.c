/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00626aa4
 * Function: FUN_00626aa4
 * Signature: undefined FUN_00626aa4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00626aa4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long *plVar2;
  
                    /* try { // try from 00626aa4 to 00726aab has its CatchHandler @ 006274f0 */
  plVar2 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xf0);
  if (plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x50))(plVar2,10);
                    /* try { // try from 00626af0 to 00726af7 has its CatchHandler @ 00627628 */
    FUN_006268a0(param_1,param_2,param_3,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006652c8();
}


