/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006429b8
 * Function: FUN_006429b8
 * Signature: undefined FUN_006429b8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006429b8(long *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xf0);
  if (plVar2 != (long *)0x0) {
                    /* try { // try from 006429e0 to 007429e3 has its CatchHandler @ 00642a40 */
                    /* try { // try from 006429e4 to 00742a5f has its CatchHandler @ 00642974 */
    uVar1 = (**(code **)(*plVar2 + 0x50))(plVar2,10);
    FUN_00642648(param_1,uVar1);
    FUN_00641e9c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006652c8();
}


