/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006801b0
 * Function: FUN_006801b0
 * Signature: undefined FUN_006801b0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006801b0(byte *param_1,byte *param_2,long param_3,void *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  void *pvVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  ulong local_18;
  long local_10;
  long local_8;
  
  puVar4 = &stack0xffffffffffffff70;
                    /* try { // try from 006801c0 to 007801c7 has its CatchHandler @ 006801e4 */
                    /* try { // try from 006801c8 to 007801f7 has its CatchHandler @ 006801ac */
  *(undefined8 *)((long)param_4 + 0x620) = 0;
  puVar16 = (undefined1 *)0x0;
                    /* catch() { ... } // from try @ 006801c0 with catch @ 006801e4 */
  do {
                    /* catch() { ... } // from try @ 006802b0 with catch @ 00680200
                       catch() { ... } // from try @ 00680410 with catch @ 00680200 */
    if ((param_2 <= param_1) ||
       (uVar12 = *(ulong *)((long)param_4 + 0x648),
       (ulong)(*(long *)(param_3 + 0x318) - (*(long *)(param_3 + 0x340) >> 0x3f)) <= uVar12)) {
      return;
    }
    bVar2 = *param_1;
    uVar10 = (ulong)bVar2;
                    /* try { // try from 0068021c to 0078021f has its CatchHandler @ 00680334 */
    pbVar5 = param_1 + 1;
    bVar1 = bVar2 & 0xc0;
    if (bVar1 == 0x40) {
      *(ulong *)((long)param_4 + 0x648) =
           uVar12 + (uVar10 & 0x3f) * *(long *)((long)param_4 + 0x660);
      goto switchD_00680284_caseD_0;
    }
                    /* try { // try from 00680240 to 00780267 has its CatchHandler @ 00680324 */
    if (bVar1 == 0x80) {
      local_18 = uVar10 & 0x3f;
LAB_00680318:
      pbVar5 = (byte *)FUN_0067fc60(pbVar5,&local_10);
                    /* catch() { ... } // from try @ 00680240 with catch @ 00680324 */
      lVar11 = *(long *)((long)param_4 + 0x658);
      lVar9 = local_10;
LAB_006804d8:
                    /* try { // try from 006804e0 to 00780507 has its CatchHandler @ 0068058c */
      if (0x61 < local_18) goto switchD_00680284_caseD_0;
      lVar7 = local_18 * 0x10;
      *(undefined4 *)((long)param_4 + lVar7 + 8) = 1;
      lVar9 = lVar9 * lVar11;
      goto LAB_00680674;
    }
    if (bVar1 == 0xc0) {
      *(undefined4 *)((long)param_4 + (uVar10 & 0x3f) * 0x10 + 8) = 0;
      goto switchD_00680284_caseD_0;
    }
    switch(bVar2) {
    case 0:
      break;
    case 1:
                    /* try { // try from 00680288 to 007802af has its CatchHandler @ 00680314 */
      uVar3 = *(undefined1 *)((long)param_4 + 0x670);
      uVar8 = FUN_00680138(uVar3,param_3);
                    /* try { // try from 006802b0 to 00780357 has its CatchHandler @ 00680200 */
      pbVar5 = (byte *)FUN_0067fcc8(uVar3,uVar8,pbVar5,&local_8);
      *(long *)((long)param_4 + 0x648) = local_8;
      break;
    case 2:
      *(ulong *)((long)param_4 + 0x648) =
           uVar12 + (ulong)param_1[1] * *(long *)((long)param_4 + 0x660);
      pbVar5 = param_1 + 2;
      break;
    case 3:
      *(ulong *)((long)param_4 + 0x648) =
           uVar12 + (ulong)*(ushort *)(param_1 + 1) * *(long *)((long)param_4 + 0x660);
      pbVar5 = param_1 + 3;
      break;
    case 4:
      *(ulong *)((long)param_4 + 0x648) =
           uVar12 + (ulong)*(uint *)(param_1 + 1) * *(long *)((long)param_4 + 0x660);
      pbVar5 = param_1 + 5;
      break;
    case 5:
                    /* catch() { ... } // from try @ 00680288 with catch @ 00680314 */
      pbVar5 = (byte *)FUN_0067fc60(pbVar5,&local_18);
      goto LAB_00680318;
    case 6:
    case 8:
                    /* catch() { ... } // from try @ 0068021c with catch @ 00680334 */
      pbVar5 = (byte *)FUN_0067fc60(pbVar5,&local_18);
      if (local_18 < 0x62) {
        *(undefined4 *)((long)param_4 + local_18 * 0x10 + 8) = 0;
      }
      break;
    case 7:
                    /* try { // try from 00680358 to 0078040f has its CatchHandler @ 00680418 */
      pbVar5 = (byte *)FUN_0067fc60(pbVar5,&local_18);
      if (local_18 < 0x62) {
        *(undefined4 *)((long)param_4 + local_18 * 0x10 + 8) = 6;
      }
      break;
    case 9:
      uVar8 = FUN_0067fc60(pbVar5,&local_18);
      pbVar5 = (byte *)FUN_0067fc60(uVar8,&local_8);
      if (local_18 < 0x62) {
        lVar7 = local_18 * 0x10;
        *(undefined4 *)((long)param_4 + lVar7 + 8) = 2;
        lVar9 = local_8;
        goto LAB_00680674;
      }
      break;
    case 10:
      if (puVar16 == (undefined1 *)0x0) {
        puVar15 = puVar4 + -0x660;
        puVar4 = puVar4 + -0x660;
      }
      else {
        puVar15 = puVar4;
        puVar4 = puVar16;
        puVar16 = *(undefined1 **)(puVar16 + 0x620);
      }
      pvVar6 = memcpy(puVar4,param_4,0x648);
      *(void **)((long)param_4 + 0x620) = pvVar6;
      puVar4 = puVar15;
      break;
    case 0xb:
      puVar15 = *(undefined1 **)((long)param_4 + 0x620);
      memcpy(param_4,puVar15,0x648);
      *(undefined1 **)(puVar15 + 0x620) = puVar16;
      puVar16 = puVar15;
                    /* try { // try from 00680410 to 0078041b has its CatchHandler @ 00680200 */
      break;
    case 0xc:
                    /* catch() { ... } // from try @ 00680358 with catch @ 00680418 */
      uVar8 = FUN_0067fc60(pbVar5,&local_10);
      *(long *)((long)param_4 + 0x630) = local_10;
      pbVar5 = (byte *)FUN_0067fc60(uVar8,&local_10);
      *(long *)((long)param_4 + 0x628) = local_10;
      goto LAB_0068045c;
    case 0xd:
      pbVar5 = (byte *)FUN_0067fc60(pbVar5,&local_10);
      *(long *)((long)param_4 + 0x630) = local_10;
LAB_0068045c:
      *(undefined4 *)((long)param_4 + 0x640) = 1;
      break;
    case 0xe:
      pbVar5 = (byte *)FUN_0067fc60(pbVar5,&local_10);
      lVar9 = local_10;
      goto LAB_00680528;
    case 0xf:
      *(byte **)((long)param_4 + 0x638) = pbVar5;
      *(undefined4 *)((long)param_4 + 0x640) = 2;
      goto LAB_006805d8;
    case 0x10:
      pbVar5 = (byte *)FUN_0067fc60(pbVar5,&local_18);
                    /* catch() { ... } // from try @ 00680508 with catch @ 0068049c */
      if (local_18 < 0x62) {
        uVar14 = 3;
LAB_006805d0:
        *(undefined4 *)((long)param_4 + local_18 * 0x10 + 8) = uVar14;
        *(byte **)((long)param_4 + local_18 * 0x10) = pbVar5;
      }
      goto LAB_006805d8;
    case 0x11:
      uVar8 = FUN_0067fc60(pbVar5,&local_18);
      pbVar5 = (byte *)FUN_0067fc88(uVar8,&local_8);
      lVar11 = *(long *)((long)param_4 + 0x658);
      lVar9 = local_8;
      goto LAB_006804d8;
    case 0x12:
      uVar8 = FUN_0067fc60(pbVar5,&local_10);
                    /* try { // try from 00680508 to 007805fb has its CatchHandler @ 0068049c */
      *(long *)((long)param_4 + 0x630) = local_10;
      pbVar5 = (byte *)FUN_0067fc88(uVar8,&local_8);
      *(undefined4 *)((long)param_4 + 0x640) = 1;
      goto LAB_0068051c;
    case 0x13:
      pbVar5 = (byte *)FUN_0067fc88(pbVar5,&local_8);
LAB_0068051c:
      lVar9 = local_8 * *(long *)((long)param_4 + 0x658);
LAB_00680528:
      *(long *)((long)param_4 + 0x628) = lVar9;
      break;
    case 0x14:
      uVar8 = FUN_0067fc60(pbVar5,&local_18);
      pbVar5 = (byte *)FUN_0067fc60(uVar8,&local_10);
      lVar11 = *(long *)((long)param_4 + 0x658);
      lVar9 = local_10;
      goto LAB_00680588;
    case 0x15:
      uVar8 = FUN_0067fc60(pbVar5,&local_18);
      pbVar5 = (byte *)FUN_0067fc88(uVar8,&local_8);
      lVar11 = *(long *)((long)param_4 + 0x658);
      lVar9 = local_8;
LAB_00680588:
                    /* catch() { ... } // from try @ 006804e0 with catch @ 0068058c */
      if (local_18 < 0x62) {
        lVar7 = local_18 * 0x10;
        *(undefined4 *)((long)param_4 + lVar7 + 8) = 4;
        lVar9 = lVar9 * lVar11;
LAB_00680674:
        *(long *)((long)param_4 + lVar7) = lVar9;
      }
      break;
    case 0x16:
      pbVar5 = (byte *)FUN_0067fc60(pbVar5,&local_18);
      if (local_18 < 0x62) {
        uVar14 = 5;
        goto LAB_006805d0;
      }
LAB_006805d8:
      lVar9 = FUN_0067fc60(pbVar5,&local_10);
      pbVar5 = (byte *)(lVar9 + local_10);
      break;
    default:
                    /* WARNING: Subroutine does not return */
      abort();
    case 0x2d:
      lVar9 = 0x10;
      local_18 = 0x10;
      lVar7 = 0;
      plVar13 = (long *)((long)param_4 + 0x100);
      do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00680700 with catch @ 006805fc
                       catch(type#1 @ 00000000) { ... } // from try @ 006808e8 with catch @ 006805fc
                        */
        *(undefined4 *)(plVar13 + 1) = 1;
        lVar9 = lVar9 + 1;
        *plVar13 = lVar7;
        lVar7 = lVar7 + 8;
        plVar13 = plVar13 + 2;
      } while (lVar9 != 0x20);
      break;
    case 0x2e:
      pbVar5 = (byte *)FUN_0067fc60(pbVar5,&local_10);
      *(long *)(param_3 + 0x350) = local_10;
      break;
    case 0x2f:
      uVar8 = FUN_0067fc60(pbVar5,&local_18);
      pbVar5 = (byte *)FUN_0067fc60(uVar8,&local_10);
      lVar9 = *(long *)((long)param_4 + 0x658);
      if (local_18 < 0x62) {
        lVar7 = local_18 * 0x10;
        *(undefined4 *)((long)param_4 + lVar7 + 8) = 1;
        lVar9 = -(lVar9 * local_10);
        goto LAB_00680674;
      }
    }
switchD_00680284_caseD_0:
    param_1 = pbVar5;
  } while( true );
}


