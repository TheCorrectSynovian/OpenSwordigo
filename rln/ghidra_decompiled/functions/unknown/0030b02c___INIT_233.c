/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0030b02c
 * Function: _INIT_233
 * Signature: undefined _INIT_233(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void _INIT_233(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_00622294(&DAT_007e9a10);
  __cxa_atexit(PTR_FUN_007e6580,&DAT_007e9a10,&PTR_LOOP_007e8000);
  puVar2 = PTR__shared_ptr_007e6f80;
  puVar1 = PTR_staticCube__007e6248;
  *(undefined8 *)PTR_staticCube__007e6248 = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  __cxa_atexit(puVar2,puVar1,&PTR_LOOP_007e8000);
  return;
}


