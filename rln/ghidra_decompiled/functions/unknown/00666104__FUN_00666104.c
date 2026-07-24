/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00666104
 * Function: FUN_00666104
 * Signature: undefined FUN_00666104(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00666104(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_007db8d0;
  std::__exception_ptr::exception_ptr::~exception_ptr((exception_ptr *)(param_1 + 1));
  operator_delete(param_1);
  return;
}


