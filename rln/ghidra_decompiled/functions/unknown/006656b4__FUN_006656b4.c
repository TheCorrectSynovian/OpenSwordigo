/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006656b4
 * Function: FUN_006656b4
 * Signature: noreturn undefined FUN_006656b4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006656b4(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  size_t sVar2;
  undefined8 uVar3;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 *local_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  long local_e8;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  local_38 = param_2;
  local_30 = param_3;
  local_28 = param_4;
  local_20 = param_5;
  local_18 = param_6;
  local_10 = param_7;
  local_8 = param_8;
                    /* try { // try from 00665704 to 0076570f has its CatchHandler @ 00665748 */
  sVar2 = strlen(param_1);
                    /* try { // try from 00665710 to 00765763 has its CatchHandler @ 00665578 */
  lVar1 = -(sVar2 + 0x21e & 0xfffffffffffffff0);
  local_110 = auStack_40;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00665704 with catch @ 00665748
                        */
  uStack_108 = 0xffffff80ffffffc8;
  local_120 = (undefined1 *)register0x00000008;
  puStack_118 = (undefined1 *)register0x00000008;
                    /* try { // try from 00665764 to 0076576b has its CatchHandler @ 00665774 */
  FUN_006663a0(&stack0xfffffffffffffeb0 + lVar1,sVar2 + 0x200,param_1,&local_120);
                    /* try { // try from 0066576c to 00765777 has its CatchHandler @ 00665578 */
  uVar3 = __cxa_allocate_exception(0x10);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00665764 with catch @ 00665774
                        */
  FUN_00666bb8(&local_e8,&stack0xfffffffffffffeb0 + lVar1,auStack_f8);
  FUN_0064aadc(uVar3,&local_e8);
  if ((undefined *)(local_e8 + -0x18) != PTR_DAT_007e5de8) {
    FUN_00665220((undefined *)(local_e8 + -0x18),auStack_f0);
  }
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar3,PTR_PTR_007e5000,PTR_FUN_007e6198);
}


