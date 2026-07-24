/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066e634
 * Function: FUN_0066e634
 * Signature: undefined FUN_0066e634(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0066e634(undefined8 *param_1,wchar_t *param_2,ulong param_3)

{
  ulong uVar1;
  wchar_t *__s1;
  long lVar2;
  wchar_t *pwVar3;
  
                    /* try { // try from 0066e63c to 0076e64b has its CatchHandler @ 0066e7ec */
  pwVar3 = (wchar_t *)*param_1;
                    /* try { // try from 0066e64c to 0076e65f has its CatchHandler @ 0066e788 */
  lVar2 = *(long *)(pwVar3 + -6);
                    /* try { // try from 0066e660 to 0076e757 has its CatchHandler @ 0066e364 */
  if (0xffffffffffffffeU - lVar2 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_0066554c("basic_string::append");
  }
  uVar1 = param_3 + lVar2;
  if ((*(ulong *)(pwVar3 + -4) < uVar1) || (L'\0' < pwVar3[-2])) {
    if ((pwVar3 <= param_2) && (param_2 <= pwVar3 + lVar2)) {
      lVar2 = (long)param_2 - (long)pwVar3;
      FUN_0066e318(param_1,uVar1);
      pwVar3 = (wchar_t *)*param_1;
      param_2 = (wchar_t *)((long)pwVar3 + lVar2);
      lVar2 = *(long *)(pwVar3 + -6);
      __s1 = pwVar3 + lVar2;
      goto joined_r0x0066e724;
    }
    FUN_0066e318(param_1,uVar1);
    pwVar3 = (wchar_t *)*param_1;
    lVar2 = *(long *)(pwVar3 + -6);
  }
  __s1 = pwVar3 + lVar2;
joined_r0x0066e724:
  if (param_3 == 1) {
    pwVar3[lVar2] = *param_2;
  }
  else {
    wmemcpy(__s1,param_2,param_3);
    pwVar3 = (wchar_t *)*param_1;
                    /* catch() { ... } // from try @ 0066e5b4 with catch @ 0066e734 */
  }
  if (pwVar3 == (wchar_t *)&DAT_007fd318) {
    return 0;
  }
  *(ulong *)(pwVar3 + -6) = uVar1;
  pwVar3[-2] = L'\0';
  pwVar3[uVar1] = L'\0';
                    /* try { // try from 0066e758 to 0076e77f has its CatchHandler @ 0066e784 */
  return 0;
}


