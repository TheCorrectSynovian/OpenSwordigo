/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061cdf0
 * Function: FUN_0061cdf0
 * Signature: undefined FUN_0061cdf0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0061cdf0(exception *param_1)

{
                    /* try { // try from 0061cdfc to 0071ce2b has its CatchHandler @ 0061ce34 */
  *(undefined ***)param_1 = &PTR_FUN_007b6a90;
  std::exception::~exception(param_1);
  operator_delete(param_1);
  return;
}


