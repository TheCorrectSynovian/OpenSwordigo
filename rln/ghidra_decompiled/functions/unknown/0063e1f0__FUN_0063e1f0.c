/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063e1f0
 * Function: FUN_0063e1f0
 * Signature: undefined FUN_0063e1f0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063e1f0(long *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long *plVar2;
  
                    /* try { // try from 0063e214 to 0073e21f has its CatchHandler @ 0063e070 */
  plVar2 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xf0);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_006652c8();
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0063e1ec with catch @ 0063e21c
                        */
  if ((char)plVar2[7] != '\0') {
    FUN_00629bc0(param_1,param_2,*(undefined1 *)((long)plVar2 + 0x43));
    return;
  }
  FUN_0061fea0(plVar2);
  uVar1 = (**(code **)(*plVar2 + 0x30))(plVar2,10);
  FUN_00629bc0(param_1,param_2,uVar1);
  return;
}


