/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00670d4c
 * Function: FUN_00670d4c
 * Signature: undefined FUN_00670d4c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_00670d4c(undefined8 param_1,mbstate_t *param_2,char *param_3,char *param_4,long param_5)

{
  size_t sVar1;
  int iVar2;
  mbstate_t local_8;
  
                    /* catch() { ... } // from try @ 00670d24 with catch @ 00670d4c */
                    /* catch() { ... } // from try @ 00670ce8 with catch @ 00670d68 */
  local_8 = *param_2;
                    /* catch() { ... } // from try @ 00670cbc with catch @ 00670d70 */
  iVar2 = 0;
  if ((param_3 < param_4) && (param_5 != 0)) {
                    /* catch() { ... } // from try @ 00670b4c with catch @ 00670dbc */
                    /* catch() { ... } // from try @ 00670b20 with catch @ 00670dc4 */
    while (sVar1 = mbrtowc((wchar_t *)0x0,param_3,(long)param_4 - (long)param_3,&local_8),
          1 < sVar1 + 2) {
      if (sVar1 == 0) {
        param_3 = param_3 + 1;
        *param_2 = local_8;
        iVar2 = iVar2 + 1;
      }
      else {
                    /* try { // try from 00670d94 to 00770def has its CatchHandler @ 00670e88 */
        param_3 = param_3 + sVar1;
                    /* catch() { ... } // from try @ 00670be0 with catch @ 00670da0 */
        *param_2 = local_8;
                    /* catch() { ... } // from try @ 00670ab4 with catch @ 00670da4
                       catch() { ... } // from try @ 00670c28 with catch @ 00670da4 */
                    /* catch() { ... } // from try @ 00670c5c with catch @ 00670da8 */
        iVar2 = (int)sVar1 + iVar2;
      }
      if (param_4 <= param_3) {
        return iVar2;
      }
      param_5 = param_5 + -1;
      if (param_5 == 0) {
        return iVar2;
      }
    }
  }
  return iVar2;
}


