/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006218c4
 * Function: FUN_006218c4
 * Signature: undefined FUN_006218c4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_006218c4(long param_1,undefined4 param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  
                    /* try { // try from 006218c8 to 007218d3 has its CatchHandler @ 00622210 */
  if (*(char *)(param_1 + 0xe4) != '\0') {
    uVar1 = *(uint *)(param_1 + 0xe0);
    *(undefined4 *)(param_1 + 0xe0) = param_2;
    return (ulong)uVar1;
  }
  plVar2 = *(long **)(param_1 + 0xf0);
  if (plVar2 != (long *)0x0) {
                    /* try { // try from 006218f4 to 007218f7 has its CatchHandler @ 00622468 */
    uVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,0x20);
                    /* try { // try from 006218f8 to 00721e9f has its CatchHandler @ 0062080c */
    *(undefined4 *)(param_1 + 0xe0) = param_2;
    *(undefined1 *)(param_1 + 0xe4) = 1;
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006652c8();
}


