/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062ba00
 * Function: FUN_0062ba00
 * Signature: undefined FUN_0062ba00(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_0062ba00(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char *__s1;
  size_t sVar2;
  char *__locale;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined8 *local_d0;
  undefined8 uStack_c8;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  local_20 = param_5;
  local_18 = param_6;
  local_10 = param_7;
  local_8 = param_8;
                    /* catch() { ... } // from try @ 0062b7e4 with catch @ 0062ba18 */
  __s1 = setlocale(1,(char *)0x0);
  local_e0 = (undefined1 *)register0x00000008;
  puStack_d8 = (undefined1 *)register0x00000008;
                    /* try { // try from 0062ba64 to 0072baab has its CatchHandler @ 0062b654 */
                    /* catch() { ... } // from try @ 0062b95c with catch @ 0062ba68 */
                    /* catch() { ... } // from try @ 0062b924 with catch @ 0062ba6c */
                    /* catch() { ... } // from try @ 0062b768 with catch @ 0062ba70 */
  if ((__s1 != (char *)0x0) && (iVar1 = strcmp(__s1,"C"), iVar1 != 0)) {
                    /* catch() { ... } // from try @ 0062b9ec with catch @ 0062badc
                       catch() { ... } // from try @ 0062baac with catch @ 0062badc */
    sVar2 = strlen(__s1);
    __locale = operator_new__(sVar2 + 1);
    memcpy(__locale,__s1,sVar2 + 1);
    setlocale(1,"C");
    local_d0 = &local_20;
                    /* catch() { ... } // from try @ 0062bb5c with catch @ 0062bb38
                       catch() { ... } // from try @ 0062bb78 with catch @ 0062bb38 */
    uStack_c8 = 0xffffff80ffffffe0;
    iVar1 = vsprintf(param_2,param_4,&local_e0);
                    /* try { // try from 0062bb58 to 0072bb5b has its CatchHandler @ 0062bb6c */
                    /* try { // try from 0062bb5c to 0072bb6f has its CatchHandler @ 0062bb38 */
    setlocale(1,__locale);
    operator_delete__(__locale);
                    /* catch() { ... } // from try @ 0062bb58 with catch @ 0062bb6c */
                    /* try { // try from 0062bb70 to 0072bb77 has its CatchHandler @ 0062bb80 */
                    /* try { // try from 0062bb78 to 0072bb83 has its CatchHandler @ 0062bb38 */
    return iVar1;
  }
                    /* catch() { ... } // from try @ 0062b85c with catch @ 0062ba84
                       catch() { ... } // from try @ 0062b8f0 with catch @ 0062ba84 */
  local_d0 = &local_20;
                    /* catch() { ... } // from try @ 0062b798 with catch @ 0062ba88
                       catch() { ... } // from try @ 0062b82c with catch @ 0062ba88 */
  uStack_c8 = 0xffffff80ffffffe0;
                    /* try { // try from 0062baac to 0072bad3 has its CatchHandler @ 0062badc */
  iVar1 = vsprintf(param_2,param_4,&local_e0);
                    /* try { // try from 0062bad4 to 0072badf has its CatchHandler @ 0062b654 */
  return iVar1;
}


