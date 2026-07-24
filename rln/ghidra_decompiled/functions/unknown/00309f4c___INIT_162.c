/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00309f4c
 * Function: _INIT_162
 * Signature: undefined _INIT_162(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void _INIT_162(void)

{
  undefined *puVar1;
  
  FUN_00622294(&DAT_007e9990);
  __cxa_atexit(PTR_FUN_007e6580,&DAT_007e9990,&PTR_LOOP_007e8000);
  puVar1 = PTR__shared_ptr_007e73b8;
  DAT_007e9998 = 0;
  DAT_007e99a0 = 0;
  __cxa_atexit(PTR__shared_ptr_007e73b8,&DAT_007e9998,&PTR_LOOP_007e8000);
  DAT_007e99a8 = 0;
  DAT_007e99b0 = 0;
  __cxa_atexit(puVar1,&DAT_007e99a8,&PTR_LOOP_007e8000);
  return;
}


