/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066998c
 * Function: FUN_0066998c
 * Signature: undefined FUN_0066998c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1 * FUN_0066998c(undefined8 *param_1,ulong param_2)

{
  undefined1 *puVar1;
  
                    /* try { // try from 00669990 to 0076999b has its CatchHandler @ 00669a50 */
  puVar1 = (undefined1 *)*param_1;
                    /* try { // try from 0066999c to 00769ac3 has its CatchHandler @ 00669950 */
  if (param_2 < *(ulong *)(puVar1 + -0x18)) {
    if ((-1 < *(int *)(puVar1 + -8)) && (puVar1 != &DAT_007fd2f8)) {
      if (*(int *)(puVar1 + -8) != 0) {
        FUN_00668cb8(param_1,0,0,0);
        puVar1 = (undefined1 *)*param_1;
      }
      *(undefined4 *)(puVar1 + -8) = 0xffffffff;
    }
    return puVar1 + param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006656b4("basic_string::at: __n (which is %zu) >= this->size() (which is %zu)");
}


