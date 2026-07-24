/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062fe5c
 * Function: FUN_0062fe5c
 * Signature: undefined FUN_0062fe5c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062fe5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 void *param_5,undefined8 param_6,long param_7,int *param_8)

{
  void *__dest;
  int iVar1;
  
                    /* try { // try from 0062fe78 to 0072fe9f has its CatchHandler @ 0062feb4 */
  if (param_5 != (void *)0x0) {
    iVar1 = (int)param_5 - (int)param_7;
                    /* try { // try from 0062fea0 to 0072ff4f has its CatchHandler @ 0062fbf4 */
    __dest = (void *)FUN_0062f63c(param_6,param_4,param_2,param_3,param_7,param_7 + iVar1);
                    /* catch() { ... } // from try @ 0062fe78 with catch @ 0062feb4 */
    memcpy(__dest,param_5,(long)(*param_8 - iVar1));
                    /* catch() { ... } // from try @ 0062fe30 with catch @ 0062febc */
    *param_8 = (*param_8 - iVar1) + ((int)__dest - (int)param_6);
                    /* catch() { ... } // from try @ 0062fde8 with catch @ 0062fecc */
    return;
  }
                    /* catch() { ... } // from try @ 0062fda0 with catch @ 0062fedc */
                    /* catch() { ... } // from try @ 0062fd58 with catch @ 0062feec */
  iVar1 = FUN_0062f63c(param_6,param_4,param_2,param_3,param_7,param_7 + *param_8);
  *param_8 = iVar1 - (int)param_6;
                    /* catch() { ... } // from try @ 0062fd10 with catch @ 0062fefc */
  return;
}


