/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0030dee0
 * Function: _INIT_351
 * Signature: undefined _INIT_351(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void _INIT_351(void)

{
  int iVar1;
  
  DAT_007fbd0c = false;
  if (PTR_pthread_create_007e4e78 != (undefined *)0x0) {
    iVar1 = pthread_key_create(&DAT_007fbd08,FUN_0061d484);
    DAT_007fbd0c = iVar1 == 0;
  }
  __cxa_atexit(FUN_0061d468,&DAT_007fbd08,&PTR_LOOP_007e8000);
  return;
}


