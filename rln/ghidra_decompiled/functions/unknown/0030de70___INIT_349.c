/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0030de70
 * Function: _INIT_349
 * Signature: undefined _INIT_349(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void _INIT_349(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_ReadPath_007e5db8;
  CPVRTString::CPVRTString((CPVRTString *)PTR_s_ReadPath_007e5db8);
  __cxa_atexit(PTR__CPVRTString_007e66d8,puVar1,&PTR_LOOP_007e8000);
  __cxa_atexit(PTR__CAtExit_007e49e0,PTR_s_AtExit_007e6bc0,&PTR_LOOP_007e8000);
  return;
}


