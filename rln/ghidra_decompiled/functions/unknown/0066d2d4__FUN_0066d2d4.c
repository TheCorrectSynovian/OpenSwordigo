/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066d2d4
 * Function: FUN_0066d2d4
 * Signature: undefined FUN_0066d2d4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined * FUN_0066d2d4(undefined8 *param_1,ulong param_2)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)*param_1;
  if (param_2 < *(ulong *)(puVar1 + -0x18)) {
    if ((-1 < *(int *)(puVar1 + -8)) && (puVar1 != &DAT_007fd318)) {
      if (*(int *)(puVar1 + -8) != 0) {
                    /* try { // try from 0066d324 to 0076d34b has its CatchHandler @ 0066d3ec */
        FUN_0066c650(param_1,0,0,0);
        puVar1 = (undefined *)*param_1;
      }
      *(undefined4 *)(puVar1 + -8) = 0xffffffff;
    }
    return puVar1 + param_2 * 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006656b4("basic_string::at: __n (which is %zu) >= this->size() (which is %zu)");
}


