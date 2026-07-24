/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0067ff08
 * Function: FUN_0067ff08
 * Signature: undefined FUN_0067ff08(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 * FUN_0067ff08(long param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x62) {
    puVar1 = *(undefined8 **)(param_1 + (long)param_2 * 8);
    if (((*(ulong *)(param_1 + 0x340) >> 0x3e & 1) == 0) ||
       (*(char *)(param_1 + param_2 + 0x358) == '\0')) {
                    /* try { // try from 0067ff4c to 0077fff3 has its CatchHandler @ 0067fb9c */
      if ((&DAT_007fe360)[param_2] != '\b') goto LAB_0067ff18;
      puVar1 = (undefined8 *)*puVar1;
    }
    return puVar1;
  }
LAB_0067ff18:
                    /* WARNING: Subroutine does not return */
  abort();
}


