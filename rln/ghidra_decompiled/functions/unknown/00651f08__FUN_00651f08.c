/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00651f08
 * Function: FUN_00651f08
 * Signature: undefined FUN_00651f08(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00651f08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 wchar_t *param_5,long param_6,long param_7,int *param_8)

{
  wchar_t *__s1;
  long lVar1;
  int iVar2;
  
                    /* try { // try from 00651f18 to 00751f37 has its CatchHandler @ 00651f8c */
  if (param_5 != (wchar_t *)0x0) {
                    /* try { // try from 00651f38 to 00751f57 has its CatchHandler @ 00651f88 */
    iVar2 = (int)((long)param_5 - param_7 >> 2);
    __s1 = (wchar_t *)
           FUN_00651bb0(param_6,param_4,param_2,param_3,param_7,param_7 + (long)iVar2 * 4);
                    /* try { // try from 00651f58 to 00752043 has its CatchHandler @ 00651e5c */
    wmemcpy(__s1,param_5,(long)(*param_8 - iVar2));
    *param_8 = (*param_8 - iVar2) + (int)((long)__s1 - param_6 >> 2);
                    /* catch() { ... } // from try @ 00651f38 with catch @ 00651f88 */
                    /* catch() { ... } // from try @ 00651f18 with catch @ 00651f8c */
    return;
  }
                    /* catch() { ... } // from try @ 00651ef8 with catch @ 00651f90 */
  lVar1 = FUN_00651bb0(param_6,param_4,param_2,param_3,param_7,param_7 + (long)*param_8 * 4);
  *param_8 = (int)((ulong)(lVar1 - param_6) >> 2);
  return;
}


