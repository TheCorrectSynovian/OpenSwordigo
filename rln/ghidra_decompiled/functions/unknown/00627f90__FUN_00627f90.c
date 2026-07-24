/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00627f90
 * Function: FUN_00627f90
 * Signature: undefined FUN_00627f90(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00627f90(long *param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  
                    /* try { // try from 00627f98 to 00727f9b has its CatchHandler @ 00628668 */
  lVar2 = *(long *)(*param_1 + -0x18);
  if (*(char *)((long)param_1 + lVar2 + 0xe4) != '\0') {
                    /* try { // try from 00627fbc to 00727fbf has its CatchHandler @ 00628658 */
    *(undefined4 *)((long)param_1 + lVar2 + 0xe0) = param_2;
    return param_1;
  }
  plVar1 = *(long **)((long)param_1 + lVar2 + 0xf0);
  if (plVar1 != (long *)0x0) {
                    /* try { // try from 00627fe0 to 00727fe3 has its CatchHandler @ 00628648 */
    (**(code **)(*plVar1 + 0x50))(plVar1,0x20);
    *(undefined4 *)((long)param_1 + lVar2 + 0xe0) = param_2;
    *(undefined1 *)((long)param_1 + lVar2 + 0xe4) = 1;
                    /* try { // try from 00628004 to 00728007 has its CatchHandler @ 00628638 */
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006652c8();
}


