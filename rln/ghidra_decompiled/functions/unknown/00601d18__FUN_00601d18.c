/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00601d18
 * Function: FUN_00601d18
 * Signature: undefined FUN_00601d18(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00601d18(uint *param_1)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  undefined1 auStack_b8 [80];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  plVar10 = *(long **)(param_1 + 0x12);
  uVar2 = *param_1;
  lVar6 = plVar10[1];
  uVar1 = plVar10[2];
  uVar8 = lVar6 + 1;
  if (uVar1 < uVar8) {
                    /* try { // try from 00601d60 to 00701d73 has its CatchHandler @ 00603fcc */
    if (0x7ffffffffffffffd < uVar1) {
      FUN_005ef46c(auStack_b8,*(long *)(param_1 + 0x14) + 0x18,0x50);
                    /* try { // try from 00601d88 to 00701d9b has its CatchHandler @ 00603fdc */
      FUN_005ef3d4(*(undefined8 *)(param_1 + 0xe),"%s:%d: %s",auStack_b8,param_1[1],
                   "lexical element too long");
                    /* WARNING: Subroutine does not return */
      FUN_005eb814(*(undefined8 *)(param_1 + 0xe),3);
    }
    lVar9 = uVar1 * 2;
                    /* try { // try from 00601dd4 to 00701dfb has its CatchHandler @ 00603e64 */
    if (lVar9 == -2) {
      lVar5 = FUN_005eede0();
    }
    else {
      lVar5 = FUN_005eed74(*(undefined8 *)(param_1 + 0xe),*plVar10,uVar1,lVar9);
    }
    lVar6 = plVar10[1];
    *plVar10 = lVar5;
    plVar10[2] = lVar9;
    uVar8 = lVar6 + 1;
  }
  else {
    lVar5 = *plVar10;
  }
  plVar10[1] = uVar8;
  *(char *)(lVar5 + lVar6) = (char)uVar2;
  plVar10 = *(long **)(param_1 + 0x10);
  lVar6 = *plVar10;
  *plVar10 = lVar6 + -1;
  if (lVar6 == 0) {
    uVar4 = FUN_005f8650();
  }
  else {
    pbVar7 = (byte *)plVar10[1];
                    /* try { // try from 00601e1c to 00701e43 has its CatchHandler @ 00603fdc */
    plVar10[1] = (long)(pbVar7 + 1);
    uVar4 = (uint)*pbVar7;
  }
  uVar11 = 0;
  *param_1 = uVar4;
  while (uVar4 == 0x3d) {
    plVar10 = *(long **)(param_1 + 0x12);
    lVar6 = plVar10[1];
    uVar1 = plVar10[2];
    uVar8 = lVar6 + 1;
    if (uVar1 < uVar8) {
      if (0x7ffffffffffffffd < uVar1) {
                    /* try { // try from 00601e84 to 00701e8f has its CatchHandler @ 00603f7c */
        FUN_005ef46c(auStack_b8,*(long *)(param_1 + 0x14) + 0x18,0x50);
        FUN_005ef3d4(*(undefined8 *)(param_1 + 0xe),"%s:%d: %s",auStack_b8,param_1[1],
                     "lexical element too long");
                    /* WARNING: Subroutine does not return */
        FUN_005eb814(*(undefined8 *)(param_1 + 0xe),3);
      }
      lVar9 = uVar1 * 2;
      if (lVar9 == -2) {
        lVar5 = FUN_005eede0();
      }
      else {
                    /* try { // try from 00601ed8 to 00701eef has its CatchHandler @ 00603f78 */
        lVar5 = FUN_005eed74(*(undefined8 *)(param_1 + 0xe),*plVar10,uVar1,lVar9);
      }
      lVar6 = plVar10[1];
      *plVar10 = lVar5;
      plVar10[2] = lVar9;
      uVar8 = lVar6 + 1;
    }
    else {
      lVar5 = *plVar10;
    }
    plVar10[1] = uVar8;
                    /* try { // try from 00601ef4 to 00701f07 has its CatchHandler @ 00603f08 */
    *(undefined1 *)(lVar5 + lVar6) = 0x3d;
    plVar10 = *(long **)(param_1 + 0x10);
    lVar6 = *plVar10;
    *plVar10 = lVar6 + -1;
    if (lVar6 == 0) {
      uVar4 = FUN_005f8650();
    }
    else {
      pbVar7 = (byte *)plVar10[1];
                    /* try { // try from 00601f10 to 00701f23 has its CatchHandler @ 00603f04 */
      plVar10[1] = (long)(pbVar7 + 1);
      uVar4 = (uint)*pbVar7;
    }
    uVar11 = uVar11 + 1;
    *param_1 = uVar4;
  }
  if (uVar4 != uVar2) {
    uVar11 = ~uVar11;
  }
                    /* try { // try from 00601f44 to 00701f57 has its CatchHandler @ 006040ec */
  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 00601f5c to 00701f67 has its CatchHandler @ 006040f4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}


