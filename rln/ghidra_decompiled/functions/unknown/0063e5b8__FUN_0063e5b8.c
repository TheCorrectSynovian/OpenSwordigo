/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063e5b8
 * Function: FUN_0063e5b8
 * Signature: undefined FUN_0063e5b8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063e5b8(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xf0);
                    /* try { // try from 0063e5dc to 0073e627 has its CatchHandler @ 0063e508 */
  if (plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x50))(plVar2,10);
                    /* catch() { ... } // from try @ 0063e5b4 with catch @ 0063e5f0 */
                    /* catch() { ... } // from try @ 0063e56c with catch @ 0063e5f8 */
    FUN_0062a554(param_1,param_2,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0063e548 with catch @ 0063e608 */
  FUN_006652c8();
}


