/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ebbd4
 * Function: FUN_005ebbd4
 * Signature: undefined FUN_005ebbd4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005ebbd4(long param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  int local_c0 [10];
  undefined4 local_98;
  int local_4c;
  long local_48;
  
                    /* catch() { ... } // from try @ 005ebba8 with catch @ 005ebbd8 */
                    /* catch() { ... } // from try @ 005ebb38 with catch @ 005ebbdc */
                    /* try { // try from 005ebbec to 006ebbf7 has its CatchHandler @ 005ebbf8 */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 005ebbec with catch @ 005ebbf8 */
                    /* try { // try from 005ebbfc to 006ebbff has its CatchHandler @ 005ebc04 */
  pcVar7 = *(code **)(param_1 + 0x70);
                    /* catch() { ... } // from try @ 005ebbfc with catch @ 005ebc04 */
  if ((pcVar7 != (code *)0x0) && (*(char *)(param_1 + 0x65) != '\0')) {
    lVar6 = *(long *)(param_1 + 0x10);
    lVar3 = *(long *)(param_1 + 0x40);
    lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0x10);
    if (param_2 == 4) {
                    /* catch() { ... } // from try @ 005ebc9c with catch @ 005ebc2c
                       catch() { ... } // from try @ 005ebd40 with catch @ 005ebc2c */
      local_4c = 0;
    }
    else {
      local_4c = (int)((ulong)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x50)) >> 3) *
                 -0x33333333;
    }
    local_c0[0] = param_2;
    local_98 = param_3;
    if (*(long *)(param_1 + 0x38) - lVar6 < 0x141) {
      iVar1 = *(int *)(param_1 + 0x58);
      if (iVar1 < 0x14) {
        iVar1 = iVar1 + 0x14;
      }
      else {
        iVar1 = iVar1 << 1;
      }
      FUN_005eba24(param_1,iVar1);
    }
                    /* try { // try from 005ebc98 to 006ebc9b has its CatchHandler @ 005ebcf8 */
                    /* try { // try from 005ebc9c to 006ebd17 has its CatchHandler @ 005ebc2c */
    *(long *)(*(long *)(param_1 + 0x28) + 0x10) = *(long *)(param_1 + 0x10) + 0x140;
    *(undefined1 *)(param_1 + 0x65) = 0;
    (*pcVar7)(param_1,local_c0);
    lVar4 = *(long *)(param_1 + 0x40);
    *(undefined1 *)(param_1 + 0x65) = 1;
    *(long *)(*(long *)(param_1 + 0x28) + 0x10) = lVar4 + (lVar5 - lVar3);
    *(long *)(param_1 + 0x10) = lVar4 + (lVar6 - lVar3);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


