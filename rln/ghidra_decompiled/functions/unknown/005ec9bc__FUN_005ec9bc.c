/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ec9bc
 * Function: FUN_005ec9bc
 * Signature: undefined FUN_005ec9bc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_005ec9bc(long param_1,code *param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  long lVar5;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 local_78;
  int local_6c;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
                    /* try { // try from 005ec9e4 to 006eca13 has its CatchHandler @ 005ed2d4 */
  local_78 = *(undefined8 *)(param_1 + 0xa8);
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  uVar4 = *(undefined2 *)(param_1 + 0x60);
  lVar10 = *(long *)(param_1 + 0x28);
  lVar11 = *(long *)(param_1 + 0x50);
  uVar3 = *(undefined1 *)(param_1 + 0x65);
  local_6c = 0;
  *(undefined8 **)(param_1 + 0xa8) = &local_78;
  *(undefined8 *)(param_1 + 0xb0) = param_5;
  (*param_2)(param_1,param_3);
  iVar6 = local_6c;
  *(undefined8 *)(param_1 + 0xa8) = local_78;
  if (local_6c == 0) goto LAB_005ecb44;
  uVar12 = lVar10 - lVar11;
                    /* try { // try from 005eca3c to 006eca43 has its CatchHandler @ 005ece00 */
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x40) + param_4);
  FUN_005ed5f4(param_1,puVar1);
  if (iVar6 - 2U < 2) {
    lVar10 = *(long *)(param_1 + 0x10);
    *puVar1 = *(undefined8 *)(lVar10 + -0x10);
    uVar9 = *(undefined4 *)(lVar10 + -8);
LAB_005ecaa4:
    *(undefined4 *)(puVar1 + 1) = uVar9;
  }
  else {
    if (iVar6 == 5) {
      pcVar7 = "error in error handling";
      uVar8 = 0x17;
LAB_005eca94:
      uVar8 = FUN_005f356c(param_1,pcVar7,uVar8);
      *puVar1 = uVar8;
      uVar9 = 4;
      goto LAB_005ecaa4;
    }
    if (iVar6 == 4) {
                    /* try { // try from 005eca64 to 006eca8b has its CatchHandler @ 005eccac */
      pcVar7 = "not enough memory";
      uVar8 = 0x11;
      goto LAB_005eca94;
    }
  }
  lVar10 = *(long *)(param_1 + 0x50);
                    /* try { // try from 005ecaac to 006ecaaf has its CatchHandler @ 005ed140 */
  *(undefined2 *)(param_1 + 0x60) = uVar4;
  *(undefined8 **)(param_1 + 0x10) = puVar1 + 2;
  puVar1 = (undefined8 *)(lVar10 + uVar12);
  *(undefined8 **)(param_1 + 0x28) = puVar1;
  *(undefined8 *)(param_1 + 0x18) = *puVar1;
  uVar8 = puVar1[3];
                    /* try { // try from 005ecad0 to 006ecad3 has its CatchHandler @ 005ed150 */
                    /* try { // try from 005ecad4 to 006eccd3 has its CatchHandler @ 005ec094 */
  *(undefined1 *)(param_1 + 0x65) = uVar3;
  *(undefined8 *)(param_1 + 0x30) = uVar8;
  if ((20000 < *(int *)(param_1 + 0x5c)) && ((int)(uVar12 >> 3) * -0x33333333 < 19999)) {
    lVar11 = FUN_005eed74(param_1,lVar10,(long)*(int *)(param_1 + 0x5c) * 0x28,800000);
    *(long *)(param_1 + 0x48) = lVar11 + 0xc34d8;
    *(long *)(param_1 + 0x50) = lVar11;
    *(undefined4 *)(param_1 + 0x5c) = 20000;
    *(long *)(param_1 + 0x28) = lVar11 + (*(long *)(param_1 + 0x28) - lVar10);
  }
LAB_005ecb44:
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


