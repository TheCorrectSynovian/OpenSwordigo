/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00620f38
 * Function: FUN_00620f38
 * Signature: undefined FUN_00620f38(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1 FUN_00620f38(long param_1,undefined1 param_2)

{
  undefined1 uVar1;
  long *plVar2;
  
                    /* try { // try from 00620f54 to 00720f5b has its CatchHandler @ 0062205c */
  if (*(char *)(param_1 + 0xe1) != '\0') {
    uVar1 = *(undefined1 *)(param_1 + 0xe0);
    *(undefined1 *)(param_1 + 0xe0) = param_2;
                    /* try { // try from 00620f90 to 00720ff3 has its CatchHandler @ 00622644 */
    return uVar1;
  }
  plVar2 = *(long **)(param_1 + 0xf0);
  if (plVar2 != (long *)0x0) {
    if ((char)plVar2[7] == '\0') {
      FUN_0061fea0(plVar2);
      uVar1 = (**(code **)(*plVar2 + 0x30))(plVar2,0x20);
    }
    else {
      uVar1 = *(undefined1 *)((long)plVar2 + 0x59);
    }
    *(undefined1 *)(param_1 + 0xe0) = param_2;
                    /* try { // try from 00620f74 to 00720f7b has its CatchHandler @ 006223bc */
    *(undefined1 *)(param_1 + 0xe1) = 1;
                    /* try { // try from 00620f7c to 00720f8f has its CatchHandler @ 006223b8 */
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006652c8();
}


