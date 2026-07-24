/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00670ab4
 * Function: FUN_00670ab4
 * Signature: undefined FUN_00670ab4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1
FUN_00670ab4(undefined8 param_1,mbstate_t *param_2,wchar_t *param_3,wchar_t *param_4,ulong *param_5,
            char *param_6,char *param_7,ulong *param_8)

{
  undefined1 uVar1;
  size_t sVar2;
  char acStack_10 [8];
  mbstate_t local_8;
  
                    /* try { // try from 00670ab4 to 00770abf has its CatchHandler @ 00670da4 */
  local_8 = *param_2;
  sVar2 = __ctype_get_mb_cur_max();
  if (param_6 + (sVar2 * ((long)param_4 - (long)param_3 >> 2) - (long)param_7) == (char *)0x0) {
    if (param_3 < param_4) {
      do {
        sVar2 = wcrtomb(param_6,*param_3,&local_8);
                    /* try { // try from 00670be0 to 00770be3 has its CatchHandler @ 00670da0 */
        if (sVar2 == 0xffffffffffffffff) goto LAB_00670b84;
        param_3 = param_3 + 1;
        *param_2 = local_8;
        param_6 = param_6 + sVar2;
      } while (param_3 < param_4);
    }
    uVar1 = 0;
  }
  else {
    uVar1 = param_3 < param_4;
    if (param_3 < param_4) {
                    /* try { // try from 00670b20 to 00770b2b has its CatchHandler @ 00670dc4 */
      if (param_6 < param_7) {
        do {
          sVar2 = wcrtomb(acStack_10,*param_3,&local_8);
          if (sVar2 == 0xffffffffffffffff) goto LAB_00670b84;
          if ((ulong)((long)param_7 - (long)param_6) < sVar2) {
            uVar1 = 1;
            goto LAB_00670b88;
          }
          memcpy(param_6,acStack_10,sVar2);
          param_6 = param_6 + sVar2;
          *param_2 = local_8;
          param_3 = param_3 + 1;
                    /* try { // try from 00670b4c to 00770b4f has its CatchHandler @ 00670dbc */
        } while ((param_6 < param_7) && (param_3 < param_4));
        uVar1 = param_3 < param_4;
      }
    }
  }
LAB_00670b88:
  *param_5 = (ulong)param_3;
  *param_8 = (ulong)param_6;
  return uVar1;
LAB_00670b84:
  uVar1 = 2;
  goto LAB_00670b88;
}


