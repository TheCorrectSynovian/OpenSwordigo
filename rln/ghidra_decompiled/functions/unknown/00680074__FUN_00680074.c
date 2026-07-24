/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00680074
 * Function: FUN_00680074
 * Signature: undefined FUN_00680074(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00680074(long param_1,int param_2,undefined8 param_3)

{
  if (0x61 < param_2) {
LAB_00680084:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (((*(ulong *)(param_1 + 0x340) >> 0x3e & 1) == 0) ||
     (*(char *)(param_1 + param_2 + 0x358) == '\0')) {
    if ((&DAT_007fe360)[param_2] != '\b') goto LAB_00680084;
    **(undefined8 **)(param_1 + (long)param_2 * 8) = param_3;
  }
  else {
    *(undefined8 *)(param_1 + (long)param_2 * 8) = param_3;
  }
  return;
}


