/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006206f8
 * Function: FUN_006206f8
 * Signature: undefined FUN_006206f8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_006206f8(long param_1,byte param_2,wint_t param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  wctype_t *pwVar4;
  
                    /* try { // try from 00620714 to 0072073b has its CatchHandler @ 0062074c */
  pbVar3 = (byte *)(param_1 + 0x49c);
  pwVar4 = (wctype_t *)(param_1 + 0x4b0);
                    /* try { // try from 0062073c to 0072074f has its CatchHandler @ 006206d4 */
                    /* catch() { ... } // from try @ 00620714 with catch @ 0062074c */
  while ((bVar1 = *pbVar3, pbVar3 = pbVar3 + 1, (param_2 & bVar1) == 0 ||
         (iVar2 = iswctype(param_3,*pwVar4), iVar2 == 0))) {
    pwVar4 = pwVar4 + 1;
    if (pbVar3 == (byte *)(param_1 + 0x4ac)) {
      return 0;
    }
  }
                    /* try { // try from 00620750 to 00720757 has its CatchHandler @ 00620760 */
                    /* try { // try from 00620758 to 00720763 has its CatchHandler @ 006206d4 */
                    /* catch() { ... } // from try @ 00620750 with catch @ 00620760 */
                    /* catch() { ... } // from try @ 006207f0 with catch @ 00620764 */
  return 1;
}


