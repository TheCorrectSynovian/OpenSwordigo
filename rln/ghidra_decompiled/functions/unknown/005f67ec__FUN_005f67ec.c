/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f67ec
 * Function: FUN_005f67ec
 * Signature: undefined FUN_005f67ec(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005f67ec(long param_1,int param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  char acStack_88 [32];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  do {
    lVar12 = *(long *)(param_1 + 0x18);
    plVar1 = (long *)(lVar12 + (long)param_3 * 0x10);
    plVar11 = plVar1 + -2;
    if ((int)plVar1[-1] - 3U < 2) {
      if ((int)plVar1[1] != 4) {
        if ((int)plVar1[1] != 3) goto LAB_005f6948;
                    /* try { // try from 005f6864 to 006f6893 has its CatchHandler @ 005f760c */
        sprintf(acStack_88,"%.14g",*plVar1);
        sVar3 = strlen(acStack_88);
        lVar4 = FUN_005f356c(param_1,acStack_88,sVar3);
        *plVar1 = lVar4;
        *(undefined4 *)(plVar1 + 1) = 4;
      }
      lVar4 = *(long *)(*plVar1 + 0x10);
      if (lVar4 == 0) {
        if ((int)plVar1[-1] == 3) {
                    /* try { // try from 005f6a3c to 006f6a3f has its CatchHandler @ 005f736c */
          sprintf(acStack_88,"%.14g",*plVar11);
          sVar3 = strlen(acStack_88);
          lVar12 = FUN_005f356c(param_1,acStack_88,sVar3);
                    /* try { // try from 005f6a5c to 006f6a63 has its CatchHandler @ 005f70a0 */
          *plVar11 = lVar12;
          *(undefined4 *)(plVar1 + -1) = 4;
        }
LAB_005f6b14:
        iVar9 = 2;
      }
      else {
        if (param_2 < 2) {
          lVar10 = 1;
        }
        else {
                    /* try { // try from 005f68bc to 006f68c3 has its CatchHandler @ 005f70ac */
          lVar10 = 1;
          plVar11 = (long *)(lVar12 + (long)param_3 * 0x10);
          do {
            plVar14 = plVar11 + -2;
            if ((int)plVar11[-1] != 4) {
              if ((int)plVar11[-1] != 3) break;
              sprintf(acStack_88,"%.14g",*plVar14);
                    /* try { // try from 005f68e4 to 006f690b has its CatchHandler @ 005f6eb0 */
              sVar3 = strlen(acStack_88);
              lVar5 = FUN_005f356c(param_1,acStack_88,sVar3);
              *plVar14 = lVar5;
              *(undefined4 *)(plVar11 + -1) = 4;
            }
                    /* try { // try from 005f690c to 006f6913 has its CatchHandler @ 005f70a8 */
            uVar13 = *(ulong *)(*plVar14 + 0x10);
                    /* try { // try from 005f6914 to 006f6927 has its CatchHandler @ 005f70a4 */
            if (-lVar4 - 3U <= uVar13) {
                    /* try { // try from 005f6928 to 006f693b has its CatchHandler @ 005f736c */
              FUN_005eb320(param_1,&DAT_0069a4dc);
            }
            lVar10 = lVar10 + 1;
            lVar4 = uVar13 + lVar4;
                    /* try { // try from 005f6940 to 006f694f has its CatchHandler @ 005f73ec */
            plVar11 = plVar14;
          } while (lVar10 < param_2);
        }
        lVar5 = FUN_005f8824(param_1,*(long *)(param_1 + 0x20) + 0x58,lVar4);
        iVar9 = (int)lVar10;
        lVar10 = (long)iVar9;
        lVar4 = 0;
        if (0 < iVar9) {
          lVar15 = lVar10 + 1;
          plVar11 = (long *)(lVar12 + (param_3 - lVar10) * 0x10);
          do {
            plVar11 = plVar11 + 2;
                    /* try { // try from 005f6aac to 006f6abf has its CatchHandler @ 005f7068 */
            sVar3 = *(size_t *)(*plVar11 + 0x10);
            memcpy((void *)(lVar5 + lVar4),(void *)(*plVar11 + 0x18),sVar3);
            lVar15 = lVar15 + -1;
            lVar4 = sVar3 + lVar4;
          } while (1 < lVar15);
        }
                    /* try { // try from 005f6ae0 to 006f6aeb has its CatchHandler @ 005f6e10 */
        lVar12 = FUN_005f356c(param_1,lVar5,lVar4);
        plVar1[lVar10 * -2 + 2] = lVar12;
        *(undefined4 *)(plVar1 + lVar10 * -2 + 2 + 1) = 4;
      }
    }
    else {
LAB_005f6948:
      puVar6 = (undefined8 *)FUN_005f4ed4(param_1,plVar11,0xf);
      piVar7 = (int *)(puVar6 + 1);
      if (*piVar7 == 0) {
        puVar6 = (undefined8 *)FUN_005f4ed4(param_1,plVar1,0xf);
        piVar7 = (int *)(puVar6 + 1);
        if (*piVar7 == 0) {
          FUN_005eb474(param_1,plVar11,plVar1);
          goto LAB_005f6b14;
        }
      }
      puVar8 = *(undefined8 **)(param_1 + 0x10);
                    /* try { // try from 005f6988 to 006f69af has its CatchHandler @ 005f6e5c */
      lVar4 = *(long *)(param_1 + 0x40);
      *puVar8 = *puVar6;
      *(int *)(puVar8 + 1) = *piVar7;
      lVar12 = *(long *)(param_1 + 0x10);
      *(long *)(lVar12 + 0x10) = plVar1[-2];
      *(int *)(lVar12 + 0x18) = (int)plVar1[-1];
      lVar12 = *(long *)(param_1 + 0x10);
      *(long *)(lVar12 + 0x20) = *plVar1;
      *(int *)(lVar12 + 0x28) = (int)plVar1[1];
      lVar12 = *(long *)(param_1 + 0x10);
                    /* try { // try from 005f69d0 to 006f69f7 has its CatchHandler @ 005f73ec */
      if (*(long *)(param_1 + 0x38) - lVar12 < 0x31) {
        FUN_005ebbb8(param_1,3);
        lVar12 = *(long *)(param_1 + 0x10);
      }
      *(long *)(param_1 + 0x10) = lVar12 + 0x30;
      FUN_005ec63c(param_1,lVar12,1);
      lVar12 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar12 + -0x10;
      puVar6 = (undefined8 *)((long)plVar11 + (*(long *)(param_1 + 0x40) - lVar4));
      iVar9 = 2;
                    /* try { // try from 005f6a18 to 006f6a1b has its CatchHandler @ 005f6e1c */
      *puVar6 = *(undefined8 *)(lVar12 + -0x10);
      *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(lVar12 + -8);
    }
    param_2 = param_2 - (iVar9 + -1);
    param_3 = param_3 - (iVar9 + -1);
    if (param_2 < 2) {
      if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}


