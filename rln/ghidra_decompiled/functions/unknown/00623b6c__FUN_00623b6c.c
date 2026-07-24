/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00623b6c
 * Function: FUN_00623b6c
 * Signature: undefined FUN_00623b6c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00623b6c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xf0);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_006652c8();
  }
  if ((char)plVar2[7] != '\0') {
                    /* try { // try from 00623bb8 to 00723bdf has its CatchHandler @ 00623c24 */
    FUN_0062395c(param_1,param_2,param_3,*(undefined1 *)((long)plVar2 + 0x43));
    return;
  }
  FUN_0061fea0(plVar2);
  uVar1 = (**(code **)(*plVar2 + 0x30))(plVar2,10);
                    /* try { // try from 00623be0 to 00723c47 has its CatchHandler @ 00622fb4 */
  FUN_0062395c(param_1,param_2,param_3,uVar1);
  return;
}


