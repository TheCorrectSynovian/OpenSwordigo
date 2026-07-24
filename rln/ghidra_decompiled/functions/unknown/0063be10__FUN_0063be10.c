/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063be10
 * Function: FUN_0063be10
 * Signature: undefined FUN_0063be10(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_0063be10(void)

{
  if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
    if (DAT_007fbe28 == 0) {
      FUN_00670710(&DAT_007fbe28,&DAT_0069e440,0);
    }
  }
  else {
    pthread_once((pthread_once_t *)&DAT_007fbe50,FUN_0063b7c4);
  }
  return DAT_007fbe28;
}


