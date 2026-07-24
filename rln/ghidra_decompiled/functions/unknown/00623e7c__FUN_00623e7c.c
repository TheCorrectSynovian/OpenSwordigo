/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00623e7c
 * Function: FUN_00623e7c
 * Signature: undefined FUN_00623e7c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00623e7c(long *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long *plVar2;
  
                    /* catch() { ... } // from try @ 006231d4 with catch @ 00623e80 */
  plVar2 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xf0);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_006652c8();
  }
  if ((char)plVar2[7] != '\0') {
    FUN_00623c00(param_1,param_2,*(undefined1 *)((long)plVar2 + 0x43));
    return;
  }
  FUN_0061fea0(plVar2);
  uVar1 = (**(code **)(*plVar2 + 0x30))(plVar2,10);
  FUN_00623c00(param_1,param_2,uVar1);
  return;
}


