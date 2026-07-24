/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00621868
 * Function: FUN_00621868
 * Signature: undefined FUN_00621868(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_00621868(long param_1)

{
  long *plVar1;
  ulong uVar2;
  
  if (*(char *)(param_1 + 0xe4) != '\0') {
    return (ulong)*(uint *)(param_1 + 0xe0);
  }
                    /* try { // try from 0062187c to 00721883 has its CatchHandler @ 00621e7c */
  plVar1 = *(long **)(param_1 + 0xf0);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x20);
    *(int *)(param_1 + 0xe0) = (int)uVar2;
                    /* try { // try from 0062189c to 007218b3 has its CatchHandler @ 006228a4 */
    *(undefined1 *)(param_1 + 0xe4) = 1;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006652c8();
}


