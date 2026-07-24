/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00632808
 * Function: FUN_00632808
 * Signature: undefined FUN_00632808(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_00632808(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  if (plVar2 == (long *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (ulong)*(uint *)(param_1 + 1);
    if (*(uint *)(param_1 + 1) == 0xffffffff) {
      if ((byte *)plVar2[2] < (byte *)plVar2[3]) {
        uVar1 = (ulong)*(byte *)plVar2[2];
      }
      else {
        uVar1 = (**(code **)(*plVar2 + 0x48))(plVar2);
        if ((int)uVar1 == -1) {
          *param_1 = 0;
                    /* try { // try from 00632884 to 007328ab has its CatchHandler @ 006329ec */
          return uVar1;
        }
      }
      *(int *)(param_1 + 1) = (int)uVar1;
      return uVar1;
    }
  }
                    /* try { // try from 00632830 to 00732857 has its CatchHandler @ 006328ec */
  return uVar1;
}


