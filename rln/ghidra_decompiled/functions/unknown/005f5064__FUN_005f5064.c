/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f5064
 * Function: FUN_005f5064
 * Signature: undefined FUN_005f5064(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_005f5064(long *param_1,long param_2)

{
  short sVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined4 *puVar13;
  ulong uVar14;
  ulong uVar15;
  uint local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar5 = *param_1;
  sVar1 = *(short *)(lVar5 + 0x60);
  *(short *)(lVar5 + 0x60) = sVar1 + 1;
  if (200 < (ushort)(sVar1 + 1U)) {
                    /* catch() { ... } // from try @ 005f4e60 with catch @ 005f50c0 */
    FUN_005ef3d4(lVar5,"%s: %s in precompiled chunk",param_1[3],&DAT_0069a3cb);
                    /* WARNING: Subroutine does not return */
    FUN_005eb814(*param_1,3);
  }
                    /* try { // try from 005f50e0 to 006f51c3 has its CatchHandler @ 005f51cc */
  lVar5 = FUN_005ed6c8();
  plVar10 = *(long **)(*param_1 + 0x10);
  *plVar10 = lVar5;
  *(undefined4 *)(plVar10 + 1) = 9;
  lVar6 = *param_1;
  plVar10 = (long *)(lVar6 + 0x10);
  lVar11 = *plVar10;
                    /* catch() { ... } // from try @ 005f4f08 with catch @ 005f510c */
  if (*(long *)(lVar6 + 0x38) - lVar11 < 0x11) {
    FUN_005ebbb8(lVar6,1);
    plVar10 = (long *)(*param_1 + 0x10);
    lVar11 = *plVar10;
  }
  *plVar10 = lVar11 + 0x10;
  plVar10 = param_1 + 1;
  lVar6 = FUN_005f8758(*plVar10,&local_70,8);
  if (lVar6 != 0) {
    FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"unexpected end");
                    /* WARNING: Subroutine does not return */
    FUN_005eb814(*param_1,3);
  }
  if (CONCAT44(uStack_6c,local_70) == 0) {
    lVar6 = 0;
  }
  else {
                    /* catch() { ... } // from try @ 005f4efc with catch @ 005f517c */
    uVar7 = FUN_005f8824(*param_1,param_1[2]);
    lVar6 = FUN_005f8758(param_1[1],uVar7,CONCAT44(uStack_6c,local_70));
    if (lVar6 != 0) {
      FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"unexpected end");
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005f51c4 to 006f51cf has its CatchHandler @ 005f4e04 */
      FUN_005eb814(*param_1,3);
    }
                    /* catch() { ... } // from try @ 005f50e0 with catch @ 005f51cc */
    lVar6 = FUN_005f356c(*param_1,uVar7,CONCAT44(uStack_6c,local_70) + -1);
  }
  if (lVar6 != 0) {
    param_2 = lVar6;
  }
  *(long *)(lVar5 + 0x40) = param_2;
  lVar6 = FUN_005f8758(*plVar10,&local_70,4);
  if (lVar6 != 0) {
    FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"unexpected end");
                    /* catch() { ... } // from try @ 005f52d0 with catch @ 005f5220 */
                    /* WARNING: Subroutine does not return */
    FUN_005eb814(*param_1,3);
  }
  if ((int)local_70 < 0) {
                    /* try { // try from 005f5238 to 006f523f has its CatchHandler @ 005f52dc */
    FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"bad integer");
                    /* WARNING: Subroutine does not return */
    FUN_005eb814(*param_1,3);
  }
  *(uint *)(lVar5 + 0x60) = local_70;
                    /* try { // try from 005f526c to 006f5277 has its CatchHandler @ 005f5284 */
  lVar6 = FUN_005f8758(*plVar10,&local_70,4);
  if (lVar6 != 0) {
                    /* catch() { ... } // from try @ 005f526c with catch @ 005f5284 */
    FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"unexpected end");
                    /* WARNING: Subroutine does not return */
    FUN_005eb814(*param_1,3);
  }
  if ((int)local_70 < 0) {
                    /* try { // try from 005f52a8 to 006f52cf has its CatchHandler @ 005f52d8 */
    FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"bad integer");
                    /* WARNING: Subroutine does not return */
    FUN_005eb814(*param_1,3);
  }
  *(uint *)(lVar5 + 100) = local_70;
                    /* catch() { ... } // from try @ 005f52a8 with catch @ 005f52d8 */
                    /* catch() { ... } // from try @ 005f5238 with catch @ 005f52dc */
  lVar6 = FUN_005f8758(*plVar10,&local_70,1);
  if (lVar6 != 0) {
                    /* try { // try from 005f52ec to 006f52f7 has its CatchHandler @ 005f52f8 */
                    /* catch() { ... } // from try @ 005f52ec with catch @ 005f52f8 */
                    /* try { // try from 005f52fc to 006f52ff has its CatchHandler @ 005f5304 */
                    /* catch() { ... } // from try @ 005f52fc with catch @ 005f5304 */
    FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"unexpected end");
                    /* WARNING: Subroutine does not return */
    FUN_005eb814(*param_1,3);
  }
  *(char *)(lVar5 + 0x70) = (char)local_70;
  lVar6 = FUN_005f8758(*plVar10,&local_70,1);
                    /* catch() { ... } // from try @ 005f539c with catch @ 005f532c
                       catch() { ... } // from try @ 005f5440 with catch @ 005f532c */
  if (lVar6 != 0) {
    FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"unexpected end");
                    /* WARNING: Subroutine does not return */
    FUN_005eb814(*param_1,3);
  }
  *(char *)(lVar5 + 0x71) = (char)local_70;
  lVar6 = FUN_005f8758(*plVar10,&local_70,1);
  if (lVar6 != 0) {
    FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"unexpected end");
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005f5398 to 006f539b has its CatchHandler @ 005f53f8 */
    FUN_005eb814(*param_1,3);
  }
                    /* try { // try from 005f539c to 006f5417 has its CatchHandler @ 005f532c */
  *(char *)(lVar5 + 0x72) = (char)local_70;
  lVar6 = FUN_005f8758(*plVar10,&local_70,1);
  if (lVar6 != 0) {
    FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"unexpected end");
                    /* WARNING: Subroutine does not return */
    FUN_005eb814(*param_1,3);
  }
  *(char *)(lVar5 + 0x73) = (char)local_70;
  lVar6 = FUN_005f8758(*plVar10,&local_70,4);
  uVar3 = local_70;
                    /* catch() { ... } // from try @ 005f5398 with catch @ 005f53f8 */
  if (lVar6 != 0) {
    FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"unexpected end");
                    /* try { // try from 005f5418 to 006f543f has its CatchHandler @ 005f5448 */
                    /* WARNING: Subroutine does not return */
    FUN_005eb814(*param_1,3);
  }
  if ((int)local_70 < 0) {
                    /* try { // try from 005f5440 to 006f544b has its CatchHandler @ 005f532c */
                    /* catch() { ... } // from try @ 005f5418 with catch @ 005f5448 */
    FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"bad integer");
                    /* WARNING: Subroutine does not return */
    FUN_005eb814(*param_1,3);
  }
  uVar15 = -(ulong)(local_70 >> 0x1f) & 0xfffffffc00000000 | (ulong)local_70 << 2;
  uVar7 = FUN_005eed74(*param_1,0,0,uVar15);
  *(undefined8 *)(lVar5 + 0x18) = uVar7;
  *(uint *)(lVar5 + 0x50) = uVar3;
  lVar6 = FUN_005f8758(*plVar10,uVar7,uVar15);
  if (lVar6 != 0) {
    FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"unexpected end");
                    /* WARNING: Subroutine does not return */
    FUN_005eb814(*param_1,3);
  }
  lVar6 = FUN_005f8758(*plVar10,&local_70,4);
  uVar3 = local_70;
  if (lVar6 != 0) {
    FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"unexpected end");
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005f5500 to 006f5667 has its CatchHandler @ 005f5500
                       catch() { ... } // from try @ 005f5500 with catch @ 005f5500
                       catch() { ... } // from try @ 005f57e4 with catch @ 005f5500
                       catch() { ... } // from try @ 005f5a58 with catch @ 005f5500 */
    FUN_005eb814(*param_1,3);
  }
  if ((int)local_70 < 0) {
    FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"bad integer");
                    /* WARNING: Subroutine does not return */
    FUN_005eb814(*param_1,3);
  }
  lVar6 = FUN_005eed74(*param_1,0,0,
                       -(ulong)(local_70 >> 0x1f) & 0xfffffff000000000 | (ulong)local_70 << 4);
  *(long *)(lVar5 + 0x10) = lVar6;
  *(uint *)(lVar5 + 0x4c) = uVar3;
  if (0 < (int)uVar3) {
    uVar15 = (ulong)uVar3;
    if (uVar3 == 1) {
      uVar12 = 0;
LAB_005f55a8:
      lVar11 = uVar15 - uVar12;
      puVar13 = (undefined4 *)(lVar6 + uVar12 * 0x10 + 8);
      do {
        lVar11 = lVar11 + -1;
        *puVar13 = 0;
        puVar13 = puVar13 + 4;
      } while (lVar11 != 0);
    }
    else {
      uVar12 = uVar15 & 0xfffffffe;
      puVar13 = (undefined4 *)(lVar6 + 0x18);
      uVar14 = uVar12;
      do {
        puVar13[-4] = 0;
        *puVar13 = 0;
        uVar14 = uVar14 - 2;
        puVar13 = puVar13 + 8;
      } while (uVar14 != 0);
      if (uVar12 != uVar15) goto LAB_005f55a8;
    }
    if (0 < (int)uVar3) {
      lVar11 = 0;
      do {
        uVar15 = uVar15 - 1;
        lVar8 = FUN_005f8758(*plVar10,&local_70,1);
        if (lVar8 != 0) {
          FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"unexpected end");
                    /* WARNING: Subroutine does not return */
          FUN_005eb814(*param_1,3);
        }
        switch((char)local_70) {
        case '\0':
          *(undefined4 *)(lVar6 + lVar11 + 8) = 0;
          break;
        case '\x01':
          lVar8 = FUN_005f8758(*plVar10,&local_70,1);
          if (lVar8 != 0) {
            FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"unexpected end");
                    /* WARNING: Subroutine does not return */
            FUN_005eb814(*param_1,3);
          }
                    /* try { // try from 005f56d8 to 006f56ff has its CatchHandler @ 005f5a10 */
          *(uint *)(lVar6 + lVar11) = (uint)((char)local_70 != '\0');
          ((uint *)(lVar6 + lVar11))[2] = 1;
          break;
        default:
          FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],&DAT_0069a3ee);
                    /* WARNING: Subroutine does not return */
          FUN_005eb814(*param_1,3);
        case '\x03':
          lVar8 = FUN_005f8758(*plVar10,&local_70,8);
          if (lVar8 != 0) {
                    /* try { // try from 005f5668 to 006f568f has its CatchHandler @ 005f5a04 */
            FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"unexpected end");
                    /* WARNING: Subroutine does not return */
            FUN_005eb814(*param_1,3);
          }
          *(undefined8 *)(lVar6 + lVar11) = CONCAT44(uStack_6c,local_70);
          *(undefined4 *)((undefined8 *)(lVar6 + lVar11) + 1) = 3;
          goto joined_r0x005f57d8;
        case '\x04':
          lVar8 = FUN_005f8758(*plVar10,&local_70,8);
          if (lVar8 != 0) {
            FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"unexpected end");
                    /* WARNING: Subroutine does not return */
            FUN_005eb814(*param_1,3);
          }
          if (CONCAT44(uStack_6c,local_70) == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = FUN_005f8824(*param_1,param_1[2]);
            lVar8 = FUN_005f8758(param_1[1],uVar7,CONCAT44(uStack_6c,local_70));
            if (lVar8 != 0) {
              FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"unexpected end");
                    /* WARNING: Subroutine does not return */
              FUN_005eb814(*param_1,3);
            }
            uVar7 = FUN_005f356c(*param_1,uVar7,CONCAT44(uStack_6c,local_70) + -1);
          }
          *(undefined8 *)(lVar6 + lVar11) = uVar7;
          *(undefined4 *)((undefined8 *)(lVar6 + lVar11) + 1) = 4;
joined_r0x005f57d8:
          if (uVar15 != 0) goto LAB_005f55ec;
          goto LAB_005f5800;
        }
        if (uVar15 == 0) break;
LAB_005f55ec:
        lVar6 = *(long *)(lVar5 + 0x10);
        lVar11 = lVar11 + 0x10;
      } while( true );
    }
  }
LAB_005f5800:
  lVar6 = FUN_005f8758(*plVar10,&local_70,4);
  uVar3 = local_70;
  if (lVar6 != 0) {
    FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"unexpected end");
                    /* WARNING: Subroutine does not return */
    FUN_005eb814(*param_1,3);
  }
  if ((int)local_70 < 0) {
    FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"bad integer");
                    /* WARNING: Subroutine does not return */
    FUN_005eb814(*param_1,3);
  }
  puVar9 = (undefined8 *)
           FUN_005eed74(*param_1,0,0,
                        -(ulong)(local_70 >> 0x1f) & 0xfffffff800000000 | (ulong)local_70 << 3);
  *(undefined8 **)(lVar5 + 0x20) = puVar9;
  *(uint *)(lVar5 + 0x58) = uVar3;
  if (0 < (int)uVar3) {
    *puVar9 = 0;
    if (uVar3 != 1) {
      uVar15 = 1;
      do {
        *(undefined8 *)(*(long *)(lVar5 + 0x20) + uVar15 * 8) = 0;
        uVar15 = uVar15 + 1;
      } while (uVar3 != uVar15);
    }
    if (0 < (int)uVar3) {
      uVar15 = 0;
      do {
        uVar7 = FUN_005f5064(param_1,*(undefined8 *)(lVar5 + 0x40));
        *(undefined8 *)(*(long *)(lVar5 + 0x20) + uVar15 * 8) = uVar7;
        uVar15 = uVar15 + 1;
      } while (uVar3 != uVar15);
    }
  }
  lVar6 = FUN_005f8758(*plVar10,&local_70,4);
  uVar3 = local_70;
  if (lVar6 != 0) {
    FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"unexpected end");
                    /* WARNING: Subroutine does not return */
    FUN_005eb814(*param_1,3);
  }
  if ((int)local_70 < 0) {
    FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"bad integer");
                    /* WARNING: Subroutine does not return */
    FUN_005eb814(*param_1,3);
  }
  uVar15 = -(ulong)(local_70 >> 0x1f) & 0xfffffffc00000000 | (ulong)local_70 << 2;
  uVar7 = FUN_005eed74(*param_1,0,0,uVar15);
  *(undefined8 *)(lVar5 + 0x28) = uVar7;
  *(uint *)(lVar5 + 0x54) = uVar3;
  lVar6 = FUN_005f8758(*plVar10,uVar7,uVar15);
  if (lVar6 != 0) {
    FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"unexpected end");
                    /* WARNING: Subroutine does not return */
    FUN_005eb814(*param_1,3);
  }
  lVar6 = FUN_005f8758(*plVar10,&local_70,4);
  uVar3 = local_70;
                    /* catch() { ... } // from try @ 005f57bc with catch @ 005f59f8 */
  if (lVar6 != 0) {
                    /* catch() { ... } // from try @ 005f5668 with catch @ 005f5a04 */
                    /* catch() { ... } // from try @ 005f56d8 with catch @ 005f5a10 */
    FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"unexpected end");
                    /* WARNING: Subroutine does not return */
    FUN_005eb814(*param_1,3);
  }
  if ((int)local_70 < 0) {
    FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"bad integer");
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005f5a58 to 006f5a63 has its CatchHandler @ 005f5500 */
    FUN_005eb814(*param_1,3);
  }
  lVar6 = FUN_005eed74(*param_1,0,0,
                       -(ulong)(local_70 >> 0x1f) & 0xfffffff000000000 | (ulong)local_70 << 4);
  *(long *)(lVar5 + 0x30) = lVar6;
  *(uint *)(lVar5 + 0x5c) = uVar3;
                    /* try { // try from 005f5a30 to 006f5a57 has its CatchHandler @ 005f5a60 */
  if ((int)uVar3 < 1) goto LAB_005f5ca4;
  uVar15 = (ulong)uVar3;
  if (uVar3 == 1) {
    uVar12 = 0;
LAB_005f5ac4:
    lVar11 = uVar15 - uVar12;
    puVar9 = (undefined8 *)(lVar6 + uVar12 * 0x10);
    do {
      lVar11 = lVar11 + -1;
      *puVar9 = 0;
      puVar9 = puVar9 + 2;
    } while (lVar11 != 0);
  }
  else {
    uVar12 = uVar15 & 0xfffffffe;
    puVar9 = (undefined8 *)(lVar6 + 0x10);
    uVar14 = uVar12;
    do {
      puVar9[-2] = 0;
      *puVar9 = 0;
      uVar14 = uVar14 - 2;
      puVar9 = puVar9 + 4;
    } while (uVar14 != 0);
    if (uVar12 != uVar15) goto LAB_005f5ac4;
  }
  lVar6 = 0;
  do {
    lVar11 = FUN_005f8758(*plVar10,&local_70,8);
    if (lVar11 != 0) {
      FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"unexpected end");
                    /* WARNING: Subroutine does not return */
      FUN_005eb814(*param_1,3);
    }
    if (CONCAT44(uStack_6c,local_70) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_005f8824(*param_1,param_1[2]);
      lVar11 = FUN_005f8758(param_1[1],uVar7,CONCAT44(uStack_6c,local_70));
      if (lVar11 != 0) {
        FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"unexpected end");
                    /* WARNING: Subroutine does not return */
        FUN_005eb814(*param_1,3);
      }
      uVar7 = FUN_005f356c(*param_1,uVar7,CONCAT44(uStack_6c,local_70) + -1);
    }
    *(undefined8 *)(*(long *)(lVar5 + 0x30) + lVar6) = uVar7;
    lVar11 = FUN_005f8758(*plVar10,&local_70,4);
    if (lVar11 != 0) {
      FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"unexpected end");
                    /* WARNING: Subroutine does not return */
      FUN_005eb814(*param_1,3);
    }
    if ((int)local_70 < 0) {
      FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"bad integer");
                    /* catch() { ... } // from try @ 005f5c60 with catch @ 005f5bf0
                       catch() { ... } // from try @ 005f5d04 with catch @ 005f5bf0 */
                    /* WARNING: Subroutine does not return */
      FUN_005eb814(*param_1,3);
    }
    *(uint *)(*(long *)(lVar5 + 0x30) + lVar6 + 8) = local_70;
    lVar11 = FUN_005f8758(*plVar10,&local_70,4);
    if (lVar11 != 0) {
      FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"unexpected end");
                    /* WARNING: Subroutine does not return */
      FUN_005eb814(*param_1,3);
    }
    if ((int)local_70 < 0) {
      FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"bad integer");
                    /* try { // try from 005f5c5c to 006f5c5f has its CatchHandler @ 005f5cbc */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005f5c60 to 006f5cdb has its CatchHandler @ 005f5bf0 */
      FUN_005eb814(*param_1,3);
    }
    uVar15 = uVar15 - 1;
    lVar11 = *(long *)(lVar5 + 0x30) + lVar6;
    lVar6 = lVar6 + 0x10;
    *(uint *)(lVar11 + 0xc) = local_70;
  } while (uVar15 != 0);
LAB_005f5ca4:
  lVar6 = FUN_005f8758(*plVar10,&local_70,4);
  uVar3 = local_70;
  if (lVar6 != 0) {
                    /* catch() { ... } // from try @ 005f5c5c with catch @ 005f5cbc */
    FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"unexpected end");
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005f5cdc to 006f5d03 has its CatchHandler @ 005f5d0c */
    FUN_005eb814(*param_1,3);
  }
  if ((int)local_70 < 0) {
                    /* try { // try from 005f5d04 to 006f5d0f has its CatchHandler @ 005f5bf0 */
    FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"bad integer");
                    /* catch() { ... } // from try @ 005f5cdc with catch @ 005f5d0c */
                    /* try { // try from 005f5d10 to 006f5d97 has its CatchHandler @ 005f5d10
                       catch() { ... } // from try @ 005f5d10 with catch @ 005f5d10
                       catch() { ... } // from try @ 005f6c88 with catch @ 005f5d10
                       catch() { ... } // from try @ 005f7984 with catch @ 005f5d10 */
                    /* WARNING: Subroutine does not return */
    FUN_005eb814(*param_1,3);
  }
  puVar9 = (undefined8 *)
           FUN_005eed74(*param_1,0,0,
                        -(ulong)(local_70 >> 0x1f) & 0xfffffff800000000 | (ulong)local_70 << 3);
  *(undefined8 **)(lVar5 + 0x38) = puVar9;
  *(uint *)(lVar5 + 0x48) = uVar3;
  if (0 < (int)uVar3) {
    *puVar9 = 0;
    if (uVar3 != 1) {
      uVar15 = 1;
      do {
        *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar15 * 8) = 0;
        uVar15 = uVar15 + 1;
      } while (uVar3 != uVar15);
    }
    uVar15 = 0;
    do {
      lVar6 = FUN_005f8758(*plVar10,&local_70,8);
      if (lVar6 != 0) {
                    /* try { // try from 005f5d98 to 006f5d9f has its CatchHandler @ 005f7358 */
                    /* try { // try from 005f5da4 to 006f5e23 has its CatchHandler @ 005f79b4 */
        FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"unexpected end");
                    /* WARNING: Subroutine does not return */
        FUN_005eb814(*param_1,3);
      }
      if (CONCAT44(uStack_6c,local_70) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_005f8824(*param_1,param_1[2]);
        lVar6 = FUN_005f8758(param_1[1],uVar7,CONCAT44(uStack_6c,local_70));
        if (lVar6 != 0) {
          FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"unexpected end");
                    /* WARNING: Subroutine does not return */
          FUN_005eb814(*param_1,3);
        }
        uVar7 = FUN_005f356c(*param_1,uVar7,CONCAT44(uStack_6c,local_70) + -1);
      }
      *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar15 * 8) = uVar7;
      uVar15 = uVar15 + 1;
    } while (uVar3 != uVar15);
  }
  iVar4 = FUN_005eab00(lVar5);
  if (iVar4 == 0) {
                    /* try { // try from 005f5e58 to 006f5e63 has its CatchHandler @ 005f7600 */
                    /* try { // try from 005f5e64 to 006f5e6b has its CatchHandler @ 005f7344 */
                    /* try { // try from 005f5e6c to 006f5ed3 has its CatchHandler @ 005f7600 */
    FUN_005ef3d4(*param_1,"%s: %s in precompiled chunk",param_1[3],"bad code");
                    /* WARNING: Subroutine does not return */
    FUN_005eb814(*param_1,3);
  }
  lVar6 = *param_1;
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + -0x10;
  *(short *)(lVar6 + 0x60) = *(short *)(lVar6 + 0x60) + -1;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


