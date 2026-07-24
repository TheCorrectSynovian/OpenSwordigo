/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00665dc0
 * Function: FUN_00665dc0
 * Signature: undefined FUN_00665dc0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00665dc0(exception *param_1)

{
                    /* try { // try from 00665dc8 to 00765dd7 has its CatchHandler @ 00666324 */
  *(undefined ***)param_1 = &PTR_FUN_007b8000;
                    /* try { // try from 00665dd8 to 00765e5f has its CatchHandler @ 00665968 */
  std::exception::~exception(param_1);
  operator_delete(param_1);
  return;
}


