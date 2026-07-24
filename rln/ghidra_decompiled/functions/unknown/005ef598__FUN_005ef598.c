/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ef598
 * Function: FUN_005ef598
 * Signature: undefined FUN_005ef598(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005ef598(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  ushort uVar1;
  long lVar2;
  int iVar3;
  size_t sVar4;
  undefined8 uVar5;
  undefined1 auStack_300 [16];
  int local_2f0;
  long local_2d0;
  long local_2c8;
  undefined8 local_2b8;
  long local_2a0 [75];
  long local_48;
  
                    /* try { // try from 005ef5a4 to 006ef5c7 has its CatchHandler @ 005ef6bc */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_2b8 = param_3;
  sVar4 = strlen(param_4);
                    /* try { // try from 005ef5dc to 006ef5ef has its CatchHandler @ 005ef664 */
  uVar5 = FUN_005f356c(param_1,param_4,sVar4);
  FUN_006009e0(param_1,auStack_300,param_2,uVar5);
  FUN_005ef720(auStack_300,local_2a0);
                    /* try { // try from 005ef610 to 006ef637 has its CatchHandler @ 005ef660 */
  *(undefined1 *)(local_2a0[0] + 0x72) = 2;
  FUN_00600a74(auStack_300);
  uVar1 = *(short *)(local_2c8 + 0x60) + 1;
  *(ushort *)(local_2c8 + 0x60) = uVar1;
  if (200 < uVar1) {
                    /* try { // try from 005ef638 to 006ef687 has its CatchHandler @ 005ef488 */
    FUN_006007a0(auStack_300,"chunk has too many syntax levels",0);
  }
  do {
                    /* catch() { ... } // from try @ 005ef4c8 with catch @ 005ef65c */
                    /* catch() { ... } // from try @ 005ef610 with catch @ 005ef660 */
                    /* catch() { ... } // from try @ 005ef5dc with catch @ 005ef664 */
    if ((local_2f0 - 0x104U < 0x1c) && ((1 << (ulong)(local_2f0 - 0x104U & 0x1f) & 0x8010007U) != 0)
       ) break;
    iVar3 = FUN_005efacc(auStack_300);
    if (local_2f0 == 0x3b) {
                    /* try { // try from 005ef688 to 006ef707 has its CatchHandler @ 005ef710 */
      FUN_00600a74(auStack_300);
    }
    *(uint *)(local_2d0 + 0x3c) = (uint)*(byte *)(local_2d0 + 0x4a);
  } while (iVar3 == 0);
  *(short *)(local_2c8 + 0x60) = *(short *)(local_2c8 + 0x60) + -1;
  if (local_2f0 != 0x11f) {
                    /* catch() { ... } // from try @ 005ef5a4 with catch @ 005ef6bc */
    uVar5 = FUN_0060072c(auStack_300,0x11f);
    uVar5 = FUN_005ef3d4(local_2c8,"\'%s\' expected",uVar5);
    FUN_00600968(auStack_300,uVar5);
  }
  FUN_005ef820(auStack_300);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_2a0[0]);
  }
                    /* try { // try from 005ef708 to 006ef713 has its CatchHandler @ 005ef488 */
                    /* catch() { ... } // from try @ 005ef688 with catch @ 005ef710 */
                    /* try { // try from 005ef714 to 006ef75f has its CatchHandler @ 005ef714
                       catch() { ... } // from try @ 005ef714 with catch @ 005ef714
                       catch() { ... } // from try @ 005ef774 with catch @ 005ef714
                       catch() { ... } // from try @ 005ef7ec with catch @ 005ef714
                       catch() { ... } // from try @ 005ef8f8 with catch @ 005ef714 */
  return;
}


