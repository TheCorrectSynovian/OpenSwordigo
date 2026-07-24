/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00642fb8
 * Function: FUN_00642fb8
 * Signature: undefined FUN_00642fb8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00642fb8(long *param_1,undefined1 param_2)

{
  long *plVar1;
  undefined4 local_4;
  
                    /* try { // try from 00642fc4 to 0074306f has its CatchHandler @ 00642a94 */
                    /* catch() { ... } // from try @ 00642d88 with catch @ 00642fcc
                       catch() { ... } // from try @ 00642f34 with catch @ 00642fcc
                       catch() { ... } // from try @ 00642f94 with catch @ 00642fcc */
                    /* catch() { ... } // from try @ 00642bf0 with catch @ 00642fd8 */
  plVar1 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xf0);
  if (plVar1 != (long *)0x0) {
    local_4 = (**(code **)(*plVar1 + 0x50))();
    FUN_00642b74(param_1,&local_4,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006652c8(0,param_2);
}


