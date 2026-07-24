/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00622f8c
 * Function: FUN_00622f8c
 * Signature: undefined FUN_00622f8c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00622f8c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long *plVar2;
  
                    /* catch() { ... } // from try @ 00622ea0 with catch @ 00622f90 */
  plVar2 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xf0);
                    /* try { // try from 00622fb4 to 0072317f has its CatchHandler @ 00622fb4
                       catch() { ... } // from try @ 00622fb4 with catch @ 00622fb4
                       catch() { ... } // from try @ 00623184 with catch @ 00622fb4
                       catch() { ... } // from try @ 00623280 with catch @ 00622fb4
                       catch() { ... } // from try @ 006234d0 with catch @ 00622fb4
                       catch() { ... } // from try @ 00623650 with catch @ 00622fb4
                       catch() { ... } // from try @ 00623be0 with catch @ 00622fb4
                       catch() { ... } // from try @ 00623d0c with catch @ 00622fb4
                       catch() { ... } // from try @ 00623f14 with catch @ 00622fb4 */
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_006652c8();
  }
  if ((char)plVar2[7] != '\0') {
    FUN_00628e58(param_1,param_2,param_3,*(undefined1 *)((long)plVar2 + 0x43));
    return;
  }
  FUN_0061fea0(plVar2);
  uVar1 = (**(code **)(*plVar2 + 0x30))(plVar2,10);
  FUN_00628e58(param_1,param_2,param_3,uVar1);
  return;
}


