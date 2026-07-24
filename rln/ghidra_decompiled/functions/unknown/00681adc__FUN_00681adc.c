/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00681adc
 * Function: FUN_00681adc
 * Signature: undefined FUN_00681adc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00681adc(code *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_a40 [960];
  undefined1 auStack_680 [1664];
  
                    /* catch() { ... } // from try @ 00681774 with catch @ 00681b18 */
  FUN_0068128c(auStack_a40,&stack0x00000000);
                    /* catch() { ... } // from try @ 00681768 with catch @ 00681b50 */
                    /* catch() { ... } // from try @ 00681710 with catch @ 00681b54 */
  while (((iVar1 = FUN_006806a8(auStack_a40,auStack_680), iVar1 == 5 || (iVar1 == 0)) &&
         (iVar2 = (*param_1)(auStack_a40,param_2), iVar2 == 0))) {
    if (iVar1 == 5) {
      return 5;
    }
    FUN_00681368(auStack_a40,auStack_680);
  }
  return 3;
}


