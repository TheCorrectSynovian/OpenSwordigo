/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00670c08
 * Function: FUN_00670c08
 * Signature: undefined FUN_00670c08(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1
FUN_00670c08(undefined8 param_1,mbstate_t *param_2,char *param_3,char *param_4,ulong *param_5,
            wchar_t *param_6,wchar_t *param_7,ulong *param_8)

{
  undefined1 uVar1;
  size_t sVar2;
  mbstate_t local_8;
  
  uVar1 = param_3 < param_4;
                    /* try { // try from 00670c28 to 00770c2b has its CatchHandler @ 00670da4 */
  local_8 = *param_2;
  if (((bool)uVar1) && (param_6 < param_7)) {
                    /* try { // try from 00670c5c to 00770c5f has its CatchHandler @ 00670da8 */
    while (sVar2 = mbrtowc(param_6,param_3,(long)param_4 - (long)param_3,&local_8),
          sVar2 != 0xffffffffffffffff) {
      if (sVar2 == 0xfffffffffffffffe) {
        *param_5 = (ulong)param_3;
        *param_8 = (ulong)param_6;
                    /* try { // try from 00670ce8 to 00770ceb has its CatchHandler @ 00670d68 */
        return 1;
      }
      if (sVar2 == 0) {
        *param_6 = L'\0';
        sVar2 = 1;
      }
      param_3 = param_3 + sVar2;
      *param_2 = local_8;
      param_6 = param_6 + 1;
      uVar1 = param_3 < param_4;
      if ((!(bool)uVar1) || (param_7 <= param_6)) goto LAB_00670cb8;
    }
    uVar1 = 2;
  }
LAB_00670cb8:
  *param_5 = (ulong)param_3;
                    /* try { // try from 00670cbc to 00770cc7 has its CatchHandler @ 00670d70 */
  *param_8 = (ulong)param_6;
  return uVar1;
}


