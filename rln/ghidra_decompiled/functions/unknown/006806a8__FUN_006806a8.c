/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006806a8
 * Function: FUN_006806a8
 * Signature: undefined FUN_006806a8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_006806a8(long param_1,long *param_2)

{
  byte bVar1;
  char cVar2;
  uint *puVar3;
  long lVar4;
  int *piVar5;
  size_t sVar6;
  long *plVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  uint *puVar16;
  char *pcVar17;
  ulong local_18;
  long local_10;
  long local_8;
  char *pcVar18;
  
                    /* try { // try from 006806b4 to 007806b7 has its CatchHandler @ 006808c0 */
  memset(param_2,0,0x680);
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  if (*(long *)(param_1 + 0x318) == 0) {
    return 5;
  }
                    /* try { // try from 006806fc to 007806ff has its CatchHandler @ 006808b4 */
                    /* try { // try from 00680700 to 007808df has its CatchHandler @ 006805fc */
  puVar3 = (uint *)FUN_00683248(*(long *)(param_1 + 0x318) +
                                (-1 - (*(long *)(param_1 + 0x340) >> 0x3f)),param_1 + 0x328);
  if (puVar3 == (uint *)0x0) {
    if (**(int **)(param_1 + 0x318) != -0x2d7fee98) {
      return 5;
    }
    if ((*(int **)(param_1 + 0x318))[1] != -0x2bffffff) {
      return 5;
    }
    lVar15 = *(long *)(param_1 + 0x310);
    param_2[0xc6] = 0x1f;
    *(undefined4 *)(param_2 + 200) = 1;
    lVar10 = lVar15 + 0x130;
    param_2[0xc5] = 0x130;
    lVar4 = 8;
    plVar7 = param_2;
    do {
      *(undefined4 *)(plVar7 + 1) = 1;
      *plVar7 = lVar4;
      lVar4 = lVar4 + 8;
      plVar7 = plVar7 + 2;
    } while (lVar4 != 0x100);
    for (piVar5 = (int *)(lVar15 + 0x250); *piVar5 != 0;
        piVar5 = (int *)((long)piVar5 + (ulong)(uint)piVar5[1])) {
      if (*piVar5 == 0x46508001) {
        plVar7 = param_2 + 0x80;
        do {
          *(undefined4 *)(plVar7 + 1) = 1;
          plVar14 = plVar7 + 2;
          *plVar7 = (long)piVar5 + ((-0x3f0 - lVar10) - (long)param_2) + (long)plVar7;
          plVar7 = plVar14;
        } while (plVar14 != param_2 + 0xc0);
      }
    }
    *(undefined1 *)((long)param_2 + 0x673) = 1;
    param_2[0x3e] = (lVar15 + 0x230) - lVar10;
    *(undefined4 *)(param_2 + 0x3f) = 1;
    *(undefined4 *)(param_2 + 0xc1) = 4;
    param_2[0xc0] = *(long *)(lVar15 + 0x238) - lVar10;
    param_2[0xcd] = 0x60;
LAB_00680aa4:
    uVar11 = 0;
  }
  else {
    puVar16 = (uint *)((long)puVar3 + (4 - (long)(int)puVar3[1]));
    param_2[0xc9] = *(long *)(param_1 + 0x338);
    pcVar18 = (char *)((long)puVar16 + 9);
    sVar6 = strlen(pcVar18);
    plVar14 = (long *)(pcVar18 + sVar6 + 1);
    plVar7 = plVar14;
    if ((*(char *)((long)puVar16 + 9) == 'e') && (*(char *)((long)puVar16 + 10) == 'h')) {
      plVar7 = plVar14 + 1;
      pcVar18 = (char *)((long)puVar16 + 0xb);
      param_2[0xcf] = *plVar14;
    }
    if ((byte)puVar16[2] < 4) {
LAB_00680880:
      uVar11 = FUN_0067fc60(plVar7,&local_18);
      param_2[0xcc] = local_18;
      pbVar8 = (byte *)FUN_0067fc88(uVar11,&local_10);
      param_2[0xcb] = local_10;
      if ((char)puVar16[2] == '\x01') {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 006806fc with catch @ 006808b4
                        */
        pbVar9 = pbVar8 + 1;
        uVar12 = (ulong)*pbVar8;
      }
      else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 006806b4 with catch @ 006808c0
                        */
        pbVar9 = (byte *)FUN_0067fc60(pbVar8,&local_18);
        uVar12 = local_18;
      }
      param_2[0xcd] = uVar12;
      *(undefined1 *)((long)param_2 + 0x671) = 0xff;
      pbVar8 = (byte *)0x0;
                    /* try { // try from 006808e0 to 007808e7 has its CatchHandler @ 006808f0 */
      if (*pcVar18 == 'z') {
                    /* try { // try from 006808e8 to 007808f3 has its CatchHandler @ 006805fc */
        pcVar18 = pcVar18 + 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 006808e0 with catch @ 006808f0
                        */
        pbVar9 = (byte *)FUN_0067fc60(pbVar9,&local_18);
        *(undefined1 *)((long)param_2 + 0x672) = 1;
        pbVar8 = pbVar9 + local_18;
      }
      while( true ) {
        pcVar17 = pcVar18 + 1;
        cVar2 = *pcVar18;
        if (cVar2 == '\0') break;
        pcVar18 = pcVar17;
        if (cVar2 == 'L') {
          *(byte *)((long)param_2 + 0x671) = *pbVar9;
LAB_0068093c:
                    /* try { // try from 0068093c to 0078096f has its CatchHandler @ 0068093c
                       catch() { ... } // from try @ 0068093c with catch @ 0068093c
                       catch() { ... } // from try @ 006809dc with catch @ 0068093c */
          pbVar9 = pbVar9 + 1;
        }
        else {
          if (cVar2 == 'R') {
            *(byte *)(param_2 + 0xce) = *pbVar9;
            goto LAB_0068093c;
          }
          if (cVar2 == 'P') {
            bVar1 = *pbVar9;
            uVar11 = FUN_00680138(bVar1,param_1);
                    /* try { // try from 00680970 to 007809db has its CatchHandler @ 00680a60 */
            pbVar9 = (byte *)FUN_0067fcc8(bVar1,uVar11,pbVar9 + 1,&local_8);
            param_2[0xca] = local_8;
          }
          else {
            if (cVar2 != 'S') goto LAB_006809ac;
            *(undefined1 *)((long)param_2 + 0x673) = 1;
          }
        }
      }
      if (pbVar8 == (byte *)0x0) {
        pbVar8 = pbVar9;
      }
LAB_006809ac:
      if (pbVar8 != (byte *)0x0) {
        FUN_006801b0(pbVar8,(long)puVar16 + (ulong)*puVar16 + 4,param_1,param_2);
        if (*(byte *)(param_2 + 0xce) == 0xff) {
          iVar13 = 0;
        }
        else {
                    /* try { // try from 006809dc to 00780acf has its CatchHandler @ 0068093c */
          switch(*(byte *)(param_2 + 0xce) & 7) {
          case 0:
          case 4:
            iVar13 = 8;
            break;
          default:
                    /* WARNING: Subroutine does not return */
            abort();
          case 2:
            iVar13 = 2;
            break;
          case 3:
            iVar13 = 4;
          }
        }
        lVar4 = 0;
        lVar10 = (long)puVar3 + (ulong)(uint)(iVar13 << 1) + 8;
        if (*(char *)((long)param_2 + 0x672) != '\0') {
          lVar10 = FUN_0067fc60(lVar10,&local_8);
          lVar4 = lVar10 + local_8;
        }
        cVar2 = *(char *)((long)param_2 + 0x671);
        if (cVar2 != -1) {
                    /* catch() { ... } // from try @ 00680970 with catch @ 00680a60 */
          uVar11 = FUN_00680138(cVar2,param_1);
          lVar10 = FUN_0067fcc8(cVar2,uVar11,lVar10,&local_8);
          *(long *)(param_1 + 800) = local_8;
        }
        if (lVar4 == 0) {
          lVar4 = lVar10;
        }
        FUN_006801b0(lVar4,(long)puVar3 + (ulong)*puVar3 + 4,param_1,param_2);
        goto LAB_00680aa4;
      }
    }
    else if (((char)*plVar7 == '\b') && (*(char *)((long)plVar7 + 1) == '\0')) {
      plVar7 = (long *)((long)plVar7 + 2);
      goto LAB_00680880;
    }
    uVar11 = 3;
  }
  return uVar11;
}


