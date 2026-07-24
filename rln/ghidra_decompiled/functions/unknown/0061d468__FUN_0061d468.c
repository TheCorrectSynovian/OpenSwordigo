/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061d468
 * Function: FUN_0061d468
 * Signature: undefined FUN_0061d468(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


pthread_key_t * FUN_0061d468(pthread_key_t *param_1)

{
  code *pcVar1;
  uint uVar2;
  
  if (param_1 == (pthread_key_t *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1000,0x61d484);
    (*pcVar1)();
  }
  if ((char)param_1[1] == '\0') {
    return param_1;
  }
  uVar2 = pthread_key_delete(*param_1);
  return (pthread_key_t *)(ulong)uVar2;
}


