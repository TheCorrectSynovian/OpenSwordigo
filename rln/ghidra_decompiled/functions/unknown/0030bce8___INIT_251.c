/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0030bce8
 * Function: _INIT_251
 * Signature: undefined _INIT_251(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void _INIT_251(void)

{
  FUN_00622294(&DAT_007e9ba8);
  __cxa_atexit(PTR_FUN_007e6580,&DAT_007e9ba8,&PTR_LOOP_007e8000);
  DAT_007e9bb0 = PTR_DAT_007e5de8 + 0x18;
  __cxa_atexit(PTR_FUN_007e6cc8,&DAT_007e9bb0,&PTR_LOOP_007e8000);
  DAT_007e9bc8 = 0;
  DAT_007e9be0 = 0;
  DAT_007e9bc0 = 0;
  DAT_007e9bd8 = &DAT_007e9bc0;
  DAT_007e9bd0 = &DAT_007e9bc0;
  __cxa_atexit(PTR__map_007e53f0,&DAT_007e9bb8,&PTR_LOOP_007e8000);
  return;
}


