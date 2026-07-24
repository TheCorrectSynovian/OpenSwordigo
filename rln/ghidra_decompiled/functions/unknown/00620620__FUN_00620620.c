/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00620620
 * Function: FUN_00620620
 * Signature: undefined FUN_00620620(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


wint_t * FUN_00620620(undefined8 param_1,wint_t *param_2,wint_t *param_3)

{
  wint_t *pwVar1;
  wint_t wVar2;
  wint_t *pwVar3;
  wint_t *pwVar4;
  
  if (param_2 < param_3) {
    pwVar1 = param_2 + 1;
    pwVar4 = param_2;
    do {
      pwVar3 = pwVar1;
      wVar2 = towupper(*pwVar4);
      *pwVar4 = wVar2;
      pwVar1 = pwVar3 + 1;
      pwVar4 = pwVar3;
    } while (pwVar3 != (wint_t *)
                       ((long)param_2 +
                       ((long)param_3 + (3 - (long)(param_2 + 1)) & 0xfffffffffffffffcU) + 4));
  }
  return param_3;
}


