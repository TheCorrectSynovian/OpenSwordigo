/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00642a14
 * Function: FUN_00642a14
 * Signature: undefined FUN_00642a14(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00642a14(long *param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(*param_1 + -0x18);
  if (*(char *)((long)param_1 + lVar2 + 0xe4) != '\0') {
                    /* catch() { ... } // from try @ 006429e0 with catch @ 00642a40 */
    *(undefined4 *)((long)param_1 + lVar2 + 0xe0) = param_2;
    return param_1;
  }
  plVar1 = *(long **)((long)param_1 + lVar2 + 0xf0);
  if (plVar1 != (long *)0x0) {
                    /* try { // try from 00642a60 to 00742a87 has its CatchHandler @ 00642a90 */
    (**(code **)(*plVar1 + 0x50))(plVar1,0x20);
    *(undefined4 *)((long)param_1 + lVar2 + 0xe0) = param_2;
    *(undefined1 *)((long)param_1 + lVar2 + 0xe4) = 1;
                    /* try { // try from 00642a88 to 00742a93 has its CatchHandler @ 00642974 */
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00642a60 with catch @ 00642a90 */
  FUN_006652c8();
}


