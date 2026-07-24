/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006716ec
 * Function: FUN_006716ec
 * Signature: undefined FUN_006716ec(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006716ec(void *param_1)

{
  *(undefined **)((long)param_1 + 0x18) = PTR_DAT_007e5a78 + 0x10;
                    /* try { // try from 00671710 to 00771747 has its CatchHandler @ 00671a1c */
  FUN_006221dc((long)param_1 + 0x18);
  operator_delete(param_1);
  return;
}


