/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00600ac8
 * Function: FUN_00600ac8
 * Signature: undefined FUN_00600ac8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00600ac8(uint *param_1,long *param_2)

{
  uint *puVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  long lVar12;
  byte *pbVar13;
  ulong uVar14;
  undefined1 uVar15;
  long lVar16;
  uint uVar17;
  undefined1 auStack_b8 [80];
  long local_68;
  
                    /* catch() { ... } // from try @ 00600bc0 with catch @ 00600ad8
                       catch() { ... } // from try @ 00600c9c with catch @ 00600ad8 */
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  puVar1 = param_1 + 0x10;
  *(undefined8 *)(*(long *)(param_1 + 0x12) + 8) = 0;
LAB_00600b24:
  uVar6 = *param_1;
  uVar7 = 0x11f;
                    /* try { // try from 00600b40 to 00700b67 has its CatchHandler @ 00600c38 */
  switch(uVar6) {
  case 10:
  case 0xd:
                    /* try { // try from 00600b1c to 00700b1f has its CatchHandler @ 00600bd4 */
    FUN_00601c4c(param_1);
    goto LAB_00600b24;
  case 0x22:
  case 0x27:
    plVar8 = *(long **)(param_1 + 0x12);
                    /* catch() { ... } // from try @ 00600ca8 with catch @ 00600cb4 */
                    /* catch() { ... } // from try @ 00600bf8 with catch @ 00600cb8
                       catch() { ... } // from try @ 00600c94 with catch @ 00600cb8 */
    lVar12 = plVar8[1];
    uVar2 = plVar8[2];
    uVar14 = lVar12 + 1;
                    /* catch() { ... } // from try @ 00600cd8 with catch @ 00600cc4 */
    if (uVar2 < uVar14) {
      if (0x7ffffffffffffffd < uVar2) {
                    /* try { // try from 00600cd4 to 00700cd7 has its CatchHandler @ 00600ce8 */
                    /* try { // try from 00600cd8 to 00700cfb has its CatchHandler @ 00600cc4 */
        FUN_005ef46c(auStack_b8,*(long *)(param_1 + 0x14) + 0x18,0x50);
                    /* catch() { ... } // from try @ 00600cd4 with catch @ 00600ce8 */
                    /* try { // try from 00600d04 to 00700d47 has its CatchHandler @ 00600d04
                       catch() { ... } // from try @ 00600d04 with catch @ 00600d04
                       catch() { ... } // from try @ 006010cc with catch @ 00600d04
                       catch() { ... } // from try @ 00601408 with catch @ 00600d04 */
        FUN_005ef3d4(*(undefined8 *)(param_1 + 0xe),"%s:%d: %s",auStack_b8,param_1[1],
                     "lexical element too long");
                    /* WARNING: Subroutine does not return */
        FUN_005eb814(*(undefined8 *)(param_1 + 0xe),3);
      }
      lVar16 = uVar2 * 2;
      if (lVar16 == -2) {
        lVar9 = FUN_005eede0();
      }
      else {
        lVar9 = FUN_005eed74(*(undefined8 *)(param_1 + 0xe),*plVar8,uVar2,lVar16);
      }
      lVar12 = plVar8[1];
      *plVar8 = lVar9;
      plVar8[2] = lVar16;
      uVar14 = lVar12 + 1;
    }
    else {
      lVar9 = *plVar8;
    }
    plVar8[1] = uVar14;
    *(char *)(lVar9 + lVar12) = (char)uVar6;
                    /* try { // try from 00601018 to 0070103f has its CatchHandler @ 006012d4 */
    plVar8 = *(long **)puVar1;
    lVar12 = *plVar8;
    *plVar8 = lVar12 + -1;
    if (lVar12 == 0) {
      uVar7 = FUN_005f8650();
    }
    else {
      pbVar13 = (byte *)plVar8[1];
      plVar8[1] = (long)(pbVar13 + 1);
      uVar7 = (uint)*pbVar13;
    }
                    /* try { // try from 0060104c to 0070104f has its CatchHandler @ 00601278 */
    *param_1 = uVar7;
    break;
  case 0x2d:
    plVar8 = *(long **)puVar1;
    lVar12 = *plVar8;
    *plVar8 = lVar12 + -1;
    if (lVar12 == 0) {
      uVar6 = FUN_005f8650();
    }
    else {
      pbVar13 = (byte *)plVar8[1];
      plVar8[1] = (long)(pbVar13 + 1);
      uVar6 = (uint)*pbVar13;
    }
    *param_1 = uVar6;
    if (uVar6 != 0x2d) {
                    /* try { // try from 00600ca8 to 00700caf has its CatchHandler @ 00600cb4 */
      uVar7 = 0x2d;
      goto switchD_00600b40_caseD_ffffffff;
    }
    plVar8 = *(long **)puVar1;
                    /* try { // try from 00600bc0 to 00700bf7 has its CatchHandler @ 00600ad8 */
    lVar12 = *plVar8;
    *plVar8 = lVar12 + -1;
    if (lVar12 == 0) {
      uVar6 = FUN_005f8650();
    }
    else {
      pbVar13 = (byte *)plVar8[1];
                    /* catch() { ... } // from try @ 00600b1c with catch @ 00600bd4 */
      plVar8[1] = (long)(pbVar13 + 1);
      uVar6 = (uint)*pbVar13;
    }
                    /* try { // try from 00600bf8 to 00700c1f has its CatchHandler @ 00600cb8 */
    *param_1 = uVar6;
    if (uVar6 == 0x5b) {
      iVar5 = FUN_00601d18(param_1);
      *(undefined8 *)(*(long *)(param_1 + 0x12) + 8) = 0;
      if (iVar5 < 0) {
                    /* catch() { ... } // from try @ 00600c28 with catch @ 00600c34 */
        uVar6 = *param_1;
                    /* catch() { ... } // from try @ 00600b40 with catch @ 00600c38 */
        goto LAB_00600c50;
      }
                    /* catch() { ... } // from try @ 00600b98 with catch @ 00600c24 */
      FUN_00601f70(param_1,0,iVar5);
                    /* try { // try from 00600c28 to 00700c2f has its CatchHandler @ 00600c34 */
      *(undefined8 *)(*(long *)(param_1 + 0x12) + 8) = 0;
    }
    else {
LAB_00600c50:
      while ((0xe < uVar6 + 1 || ((1 << (ulong)(uVar6 + 1 & 0x1f) & 0x4801U) == 0))) {
        plVar8 = *(long **)puVar1;
                    /* try { // try from 00600c6c to 00700c93 has its CatchHandler @ 00600ca4 */
        lVar12 = *plVar8;
        *plVar8 = lVar12 + -1;
        if (lVar12 == 0) {
          uVar6 = FUN_005f8650();
          *param_1 = uVar6;
        }
        else {
          pbVar13 = (byte *)plVar8[1];
          plVar8[1] = (long)(pbVar13 + 1);
          bVar3 = *pbVar13;
          uVar6 = (uint)bVar3;
          *param_1 = (uint)bVar3;
        }
      }
    }
    goto LAB_00600b24;
  case 0x2e:
    plVar8 = *(long **)(param_1 + 0x12);
    lVar12 = plVar8[1];
    uVar2 = plVar8[2];
    uVar14 = lVar12 + 1;
    if (uVar2 < uVar14) {
                    /* try { // try from 00600dfc to 00700e23 has its CatchHandler @ 006012e4 */
      if (0x7ffffffffffffffd < uVar2) {
        FUN_005ef46c(auStack_b8,*(long *)(param_1 + 0x14) + 0x18,0x50);
        FUN_005ef3d4(*(undefined8 *)(param_1 + 0xe),"%s:%d: %s",auStack_b8,param_1[1],
                     "lexical element too long");
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00600e40 to 00700e4b has its CatchHandler @ 006013b4 */
        FUN_005eb814(*(undefined8 *)(param_1 + 0xe),3);
      }
      lVar16 = uVar2 * 2;
      if (lVar16 == -2) {
        lVar9 = FUN_005eede0();
      }
      else {
        lVar9 = FUN_005eed74(*(undefined8 *)(param_1 + 0xe),*plVar8,uVar2,lVar16);
      }
      lVar12 = plVar8[1];
      *plVar8 = lVar9;
      plVar8[2] = lVar16;
      uVar14 = lVar12 + 1;
    }
    else {
      lVar9 = *plVar8;
    }
    plVar8[1] = uVar14;
                    /* try { // try from 006018e4 to 007018ef has its CatchHandler @ 00601414 */
    *(undefined1 *)(lVar9 + lVar12) = 0x2e;
    plVar8 = *(long **)puVar1;
                    /* catch() { ... } // from try @ 006017b0 with catch @ 006018ec */
    lVar12 = *plVar8;
    *plVar8 = lVar12 + -1;
    if (lVar12 == 0) {
      uVar6 = FUN_005f8650();
    }
    else {
      pbVar13 = (byte *)plVar8[1];
      plVar8[1] = (long)(pbVar13 + 1);
      uVar6 = (uint)*pbVar13;
    }
    *param_1 = uVar6;
    if ((uVar6 < 0x40) && ((1L << ((ulong)uVar6 & 0x3f) & 0x400000000001U) != 0)) {
      plVar8 = *(long **)(param_1 + 0x12);
      lVar12 = plVar8[1];
      uVar2 = plVar8[2];
      uVar14 = lVar12 + 1;
      if (uVar2 < uVar14) {
        if (0x7ffffffffffffffd < uVar2) {
          FUN_005ef46c(auStack_b8,*(long *)(param_1 + 0x14) + 0x18,0x50);
                    /* try { // try from 00601988 to 007019c7 has its CatchHandler @ 00601988
                       catch() { ... } // from try @ 00601988 with catch @ 00601988
                       catch() { ... } // from try @ 00601a14 with catch @ 00601988 */
          FUN_005ef3d4(*(undefined8 *)(param_1 + 0xe),"%s:%d: %s",auStack_b8,param_1[1],
                       "lexical element too long");
                    /* WARNING: Subroutine does not return */
          FUN_005eb814(*(undefined8 *)(param_1 + 0xe),3);
        }
        lVar16 = uVar2 * 2;
        if (lVar16 == -2) {
          lVar9 = FUN_005eede0();
        }
        else {
          lVar9 = FUN_005eed74(*(undefined8 *)(param_1 + 0xe),*plVar8,uVar2,lVar16);
        }
        lVar12 = plVar8[1];
        *plVar8 = lVar9;
        plVar8[2] = lVar16;
        uVar14 = lVar12 + 1;
      }
      else {
        lVar9 = *plVar8;
                    /* try { // try from 006019c8 to 007019db has its CatchHandler @ 00601ab8 */
      }
      plVar8[1] = uVar14;
      *(char *)(lVar9 + lVar12) = (char)uVar6;
      plVar8 = *(long **)puVar1;
      lVar12 = *plVar8;
      *plVar8 = lVar12 + -1;
      if (lVar12 == 0) {
        uVar6 = FUN_005f8650();
      }
      else {
        pbVar13 = (byte *)plVar8[1];
                    /* catch() { ... } // from try @ 006019c8 with catch @ 00601ab8 */
                    /* catch() { ... } // from try @ 006019dc with catch @ 00601abc */
        plVar8[1] = (long)(pbVar13 + 1);
        uVar6 = (uint)*pbVar13;
      }
      uVar7 = 0x116;
      *param_1 = uVar6;
      if ((uVar6 < 0x40) && ((1L << ((ulong)uVar6 & 0x3f) & 0x400000000001U) != 0)) {
        plVar8 = *(long **)(param_1 + 0x12);
        lVar12 = plVar8[1];
        uVar2 = plVar8[2];
        uVar14 = lVar12 + 1;
        if (uVar2 < uVar14) {
          if (0x7ffffffffffffffd < uVar2) {
            FUN_005ef46c(auStack_b8,*(long *)(param_1 + 0x14) + 0x18,0x50);
            FUN_005ef3d4(*(undefined8 *)(param_1 + 0xe),"%s:%d: %s",auStack_b8,param_1[1],
                         "lexical element too long");
                    /* WARNING: Subroutine does not return */
            FUN_005eb814(*(undefined8 *)(param_1 + 0xe),3);
          }
                    /* catch() { ... } // from try @ 00601be8 with catch @ 00601b80
                       catch() { ... } // from try @ 00601c04 with catch @ 00601b80 */
          lVar16 = uVar2 * 2;
          if (lVar16 == -2) {
            lVar9 = FUN_005eede0();
          }
          else {
            lVar9 = FUN_005eed74(*(undefined8 *)(param_1 + 0xe),*plVar8,uVar2,lVar16);
          }
          lVar12 = plVar8[1];
          *plVar8 = lVar9;
          plVar8[2] = lVar16;
          uVar14 = lVar12 + 1;
        }
        else {
          lVar9 = *plVar8;
        }
        plVar8[1] = uVar14;
        *(char *)(lVar9 + lVar12) = (char)uVar6;
        plVar8 = *(long **)puVar1;
                    /* try { // try from 00601bc0 to 00701be7 has its CatchHandler @ 00601bf8 */
        lVar12 = *plVar8;
        *plVar8 = lVar12 + -1;
        if (lVar12 == 0) {
          uVar6 = FUN_005f8650();
        }
        else {
          pbVar13 = (byte *)plVar8[1];
          plVar8[1] = (long)(pbVar13 + 1);
          uVar6 = (uint)*pbVar13;
        }
                    /* try { // try from 00601be8 to 00701bfb has its CatchHandler @ 00601b80 */
        *param_1 = uVar6;
        uVar7 = 0x117;
      }
    }
    else {
      if (uVar6 - 0x30 < 10) goto LAB_00600c94;
      uVar7 = 0x2e;
    }
    goto switchD_00600b40_caseD_ffffffff;
  case 0x3c:
    plVar8 = *(long **)puVar1;
    lVar12 = *plVar8;
                    /* try { // try from 00600d68 to 00700d7b has its CatchHandler @ 006012e4 */
    *plVar8 = lVar12 + -1;
    if (lVar12 == 0) {
      uVar6 = FUN_005f8650();
    }
    else {
      pbVar13 = (byte *)plVar8[1];
      plVar8[1] = (long)(pbVar13 + 1);
      uVar6 = (uint)*pbVar13;
    }
    *param_1 = uVar6;
    if (uVar6 == 0x3d) {
                    /* try { // try from 006017b0 to 007018e3 has its CatchHandler @ 006018ec */
      plVar8 = *(long **)puVar1;
      lVar12 = *plVar8;
      *plVar8 = lVar12 + -1;
      if (lVar12 == 0) {
        uVar6 = FUN_005f8650();
      }
      else {
        pbVar13 = (byte *)plVar8[1];
        plVar8[1] = (long)(pbVar13 + 1);
        uVar6 = (uint)*pbVar13;
      }
      *param_1 = uVar6;
      uVar7 = 0x11a;
    }
    else {
      uVar7 = 0x3c;
                    /* catch() { ... } // from try @ 00601520 with catch @ 006017dc */
    }
    goto switchD_00600b40_caseD_ffffffff;
  case 0x3d:
    goto switchD_00600b40_caseD_3d;
  case 0x3e:
                    /* try { // try from 00600db4 to 00700ddb has its CatchHandler @ 00601188 */
    plVar8 = *(long **)puVar1;
    lVar12 = *plVar8;
    *plVar8 = lVar12 + -1;
    if (lVar12 == 0) {
      uVar6 = FUN_005f8650();
    }
    else {
      pbVar13 = (byte *)plVar8[1];
      plVar8[1] = (long)(pbVar13 + 1);
      uVar6 = (uint)*pbVar13;
    }
    *param_1 = uVar6;
    if (uVar6 == 0x3d) {
      plVar8 = *(long **)puVar1;
      lVar12 = *plVar8;
      *plVar8 = lVar12 + -1;
      if (lVar12 == 0) {
        uVar6 = FUN_005f8650();
      }
      else {
        pbVar13 = (byte *)plVar8[1];
        plVar8[1] = (long)(pbVar13 + 1);
        uVar6 = (uint)*pbVar13;
      }
      *param_1 = uVar6;
      uVar7 = 0x119;
    }
    else {
                    /* catch() { ... } // from try @ 00601460 with catch @ 0060189c
                       catch() { ... } // from try @ 00601480 with catch @ 0060189c
                       catch() { ... } // from try @ 006016f0 with catch @ 0060189c */
      uVar7 = 0x3e;
    }
    goto switchD_00600b40_caseD_ffffffff;
  case 0x5b:
    iVar5 = FUN_00601d18(param_1);
    if (iVar5 < 0) {
      if (iVar5 == -1) {
        uVar7 = 0x5b;
      }
      else {
        FUN_006007a0(param_1,"invalid long string delimiter",0x11e);
switchD_00600b40_caseD_3d:
        plVar8 = *(long **)puVar1;
        lVar12 = *plVar8;
        *plVar8 = lVar12 + -1;
        if (lVar12 == 0) {
          uVar6 = FUN_005f8650();
        }
        else {
          pbVar13 = (byte *)plVar8[1];
          plVar8[1] = (long)(pbVar13 + 1);
          uVar6 = (uint)*pbVar13;
        }
                    /* catch() { ... } // from try @ 00601668 with catch @ 0060182c */
        *param_1 = uVar6;
                    /* catch() { ... } // from try @ 0060146c with catch @ 00601830 */
        if (uVar6 == 0x3d) {
          plVar8 = *(long **)puVar1;
          lVar12 = *plVar8;
          *plVar8 = lVar12 + -1;
                    /* catch() { ... } // from try @ 00601594 with catch @ 00601844
                       catch() { ... } // from try @ 00601628 with catch @ 00601844 */
          if (lVar12 == 0) {
            uVar6 = FUN_005f8650();
          }
          else {
                    /* catch() { ... } // from try @ 006016bc with catch @ 00601848 */
            pbVar13 = (byte *)plVar8[1];
                    /* catch() { ... } // from try @ 006014c4 with catch @ 0060184c
                       catch() { ... } // from try @ 00601568 with catch @ 0060184c */
            plVar8[1] = (long)(pbVar13 + 1);
            uVar6 = (uint)*pbVar13;
          }
          *param_1 = uVar6;
          uVar7 = 0x118;
        }
        else {
          uVar7 = 0x3d;
        }
      }
    }
    else {
      FUN_00601f70(param_1,param_2,iVar5);
      uVar7 = 0x11e;
    }
  case 0xffffffff:
    goto switchD_00600b40_caseD_ffffffff;
  default:
    if (uVar6 == 0x7e) {
      plVar8 = *(long **)puVar1;
      lVar12 = *plVar8;
      *plVar8 = lVar12 + -1;
      if (lVar12 == 0) {
        uVar6 = FUN_005f8650();
      }
      else {
        pbVar13 = (byte *)plVar8[1];
                    /* try { // try from 00600fc8 to 00700ff7 has its CatchHandler @ 00601284 */
        plVar8[1] = (long)(pbVar13 + 1);
        uVar6 = (uint)*pbVar13;
      }
      *param_1 = uVar6;
      if (uVar6 == 0x3d) {
        plVar8 = *(long **)puVar1;
        lVar12 = *plVar8;
                    /* try { // try from 00601a14 to 00701b2b has its CatchHandler @ 00601988 */
        *plVar8 = lVar12 + -1;
        if (lVar12 == 0) {
          uVar6 = FUN_005f8650();
        }
        else {
          pbVar13 = (byte *)plVar8[1];
          plVar8[1] = (long)(pbVar13 + 1);
          uVar6 = (uint)*pbVar13;
        }
        *param_1 = uVar6;
        uVar7 = 0x11b;
      }
      else {
        uVar7 = 0x7e;
      }
      goto switchD_00600b40_caseD_ffffffff;
    }
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0xb:
  case 0xc:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
    iVar5 = isspace(uVar6);
    if (iVar5 == 0) {
      if (uVar6 - 0x30 < 10) {
LAB_00600c94:
                    /* try { // try from 00600c94 to 00700c9b has its CatchHandler @ 00600cb8 */
                    /* try { // try from 00600c9c to 00700ca7 has its CatchHandler @ 00600ad8 */
        FUN_00602624(param_1,param_2);
        uVar7 = 0x11c;
                    /* catch() { ... } // from try @ 00600c6c with catch @ 00600ca4 */
      }
      else {
        iVar5 = isalpha(uVar6);
        if ((uVar6 == 0x5f) || (iVar5 != 0)) {
          do {
            plVar8 = *(long **)(param_1 + 0x12);
            lVar12 = plVar8[1];
            uVar2 = plVar8[2];
            uVar14 = lVar12 + 1;
            if (uVar2 < uVar14) {
              if (0x7ffffffffffffffd < uVar2) {
                FUN_005ef46c(auStack_b8,*(long *)(param_1 + 0x14) + 0x18,0x50);
                    /* try { // try from 00600e94 to 00700ec3 has its CatchHandler @ 006011d8 */
                FUN_005ef3d4(*(undefined8 *)(param_1 + 0xe),"%s:%d: %s",auStack_b8,param_1[1],
                             "lexical element too long");
                    /* WARNING: Subroutine does not return */
                FUN_005eb814(*(undefined8 *)(param_1 + 0xe),3);
              }
              lVar16 = uVar2 * 2;
              if (lVar16 == -2) {
                lVar9 = FUN_005eede0();
              }
              else {
                    /* try { // try from 00600ee4 to 00700f0b has its CatchHandler @ 006013b4 */
                lVar9 = FUN_005eed74(*(undefined8 *)(param_1 + 0xe),*plVar8,uVar2,lVar16);
              }
              lVar12 = plVar8[1];
              *plVar8 = lVar9;
              plVar8[2] = lVar16;
              uVar14 = lVar12 + 1;
            }
            else {
              lVar9 = *plVar8;
            }
            plVar8[1] = uVar14;
            *(char *)(lVar9 + lVar12) = (char)uVar6;
            plVar8 = *(long **)puVar1;
            lVar12 = *plVar8;
            *plVar8 = lVar12 + -1;
                    /* try { // try from 00600f10 to 00700f23 has its CatchHandler @ 0060127c */
            if (lVar12 == 0) {
              uVar6 = FUN_005f8650();
            }
            else {
              pbVar13 = (byte *)plVar8[1];
              plVar8[1] = (long)(pbVar13 + 1);
              uVar6 = (uint)*pbVar13;
            }
            *param_1 = uVar6;
            iVar5 = isalnum(uVar6);
          } while ((iVar5 != 0) || (uVar6 == 0x5f));
          lVar9 = *(long *)(param_1 + 0xe);
                    /* try { // try from 00600f50 to 00700f5f has its CatchHandler @ 00601348 */
          lVar12 = FUN_005f356c(lVar9,**(undefined8 **)(param_1 + 0x12),
                                (*(undefined8 **)(param_1 + 0x12))[1]);
          puVar10 = (undefined4 *)
                    FUN_005f4adc(lVar9,*(undefined8 *)(*(long *)(param_1 + 0xc) + 8),lVar12);
                    /* try { // try from 00600f74 to 00700f8f has its CatchHandler @ 006012d4 */
          if (puVar10[2] == 0) {
            *puVar10 = 1;
            puVar10[2] = 1;
            if (*(ulong *)(*(long *)(lVar9 + 0x20) + 0x70) <=
                *(ulong *)(*(long *)(lVar9 + 0x20) + 0x78)) {
              FUN_005edcb0(lVar9);
            }
          }
          if (*(byte *)(lVar12 + 10) == 0) {
            *param_2 = lVar12;
            uVar7 = 0x11d;
          }
          else {
            uVar7 = *(byte *)(lVar12 + 10) | 0x100;
          }
        }
        else {
          plVar8 = *(long **)puVar1;
          lVar12 = *plVar8;
          *plVar8 = lVar12 + -1;
          if (lVar12 == 0) {
                    /* try { // try from 006019dc to 00701a13 has its CatchHandler @ 00601abc */
            uVar7 = FUN_005f8650();
          }
          else {
                    /* try { // try from 00600d48 to 00700d5b has its CatchHandler @ 00601280 */
            pbVar13 = (byte *)plVar8[1];
            plVar8[1] = (long)(pbVar13 + 1);
            uVar7 = (uint)*pbVar13;
          }
          *param_1 = uVar7;
          uVar7 = uVar6;
        }
      }
      goto switchD_00600b40_caseD_ffffffff;
    }
    plVar8 = *(long **)puVar1;
    lVar12 = *plVar8;
    *plVar8 = lVar12 + -1;
    if (lVar12 == 0) {
      uVar6 = FUN_005f8650();
      *param_1 = uVar6;
    }
    else {
      pbVar13 = (byte *)plVar8[1];
                    /* try { // try from 00600b98 to 00700bbf has its CatchHandler @ 00600c24 */
      plVar8[1] = (long)(pbVar13 + 1);
      *param_1 = (uint)*pbVar13;
    }
    goto LAB_00600b24;
  }
joined_r0x00601050:
  if (uVar7 == uVar6) {
    plVar8 = *(long **)(param_1 + 0x12);
    lVar12 = plVar8[1];
    uVar2 = plVar8[2];
    uVar14 = lVar12 + 1;
    if (uVar2 < uVar14) {
      if (0x7ffffffffffffffd < uVar2) {
                    /* try { // try from 00601668 to 00701677 has its CatchHandler @ 0060182c */
        FUN_005ef46c(auStack_b8,*(long *)(param_1 + 0x14) + 0x18,0x50);
        FUN_005ef3d4(*(undefined8 *)(param_1 + 0xe),"%s:%d: %s",auStack_b8,param_1[1],
                     "lexical element too long");
                    /* WARNING: Subroutine does not return */
        FUN_005eb814(*(undefined8 *)(param_1 + 0xe),3);
      }
                    /* try { // try from 006016bc to 007016cf has its CatchHandler @ 00601848 */
      lVar16 = uVar2 * 2;
      if (lVar16 == -2) {
        lVar9 = FUN_005eede0();
      }
      else {
        lVar9 = FUN_005eed74(*(undefined8 *)(param_1 + 0xe),*plVar8,uVar2,lVar16);
      }
      lVar12 = plVar8[1];
      *plVar8 = lVar9;
      plVar8[2] = lVar16;
                    /* try { // try from 006016f0 to 00701717 has its CatchHandler @ 0060189c */
      uVar14 = lVar12 + 1;
    }
    else {
      lVar9 = *plVar8;
    }
    plVar8[1] = uVar14;
    *(char *)(lVar9 + lVar12) = (char)uVar6;
    plVar8 = *(long **)puVar1;
    lVar12 = *plVar8;
    *plVar8 = lVar12 + -1;
    if (lVar12 == 0) {
      uVar6 = FUN_005f8650();
    }
    else {
      pbVar13 = (byte *)plVar8[1];
                    /* try { // try from 00601718 to 007017af has its CatchHandler @ 00601414 */
      plVar8[1] = (long)(pbVar13 + 1);
      uVar6 = (uint)*pbVar13;
    }
    *param_1 = uVar6;
    lVar9 = *(long *)(param_1 + 0xe);
    lVar12 = FUN_005f356c(lVar9,**(long **)(param_1 + 0x12) + 1,(*(long **)(param_1 + 0x12))[1] + -2
                         );
    puVar10 = (undefined4 *)FUN_005f4adc(lVar9,*(undefined8 *)(*(long *)(param_1 + 0xc) + 8),lVar12)
    ;
    if (puVar10[2] == 0) {
      *puVar10 = 1;
      puVar10[2] = 1;
      if (*(ulong *)(*(long *)(lVar9 + 0x20) + 0x70) <= *(ulong *)(*(long *)(lVar9 + 0x20) + 0x78))
      {
        FUN_005edcb0(lVar9);
      }
    }
                    /* catch() { ... } // from try @ 006015e0 with catch @ 0060178c */
    *param_2 = lVar12;
    uVar7 = 0x11e;
switchD_00600b40_caseD_ffffffff:
                    /* catch() { ... } // from try @ 00601bc0 with catch @ 00601bf8 */
                    /* try { // try from 00601bfc to 00701c03 has its CatchHandler @ 00601c0c */
    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 00601c04 to 00701c0f has its CatchHandler @ 00601b80 */
                    /* catch() { ... } // from try @ 00601bfc with catch @ 00601c0c */
                    /* catch() { ... } // from try @ 00601c9c with catch @ 00601c10 */
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  if ((int)uVar7 < 0xd) {
    if (uVar7 == 0xffffffff) {
      FUN_005ef46c(auStack_b8,*(long *)(param_1 + 0x14) + 0x18,0x50);
      uVar11 = FUN_005ef3d4(*(undefined8 *)(param_1 + 0xe),"%s:%d: %s",auStack_b8,param_1[1],
                            "unfinished string");
                    /* catch() { ... } // from try @ 006010a4 with catch @ 00601184 */
                    /* catch() { ... } // from try @ 00600db4 with catch @ 00601188 */
      FUN_005ef3d4(*(undefined8 *)(param_1 + 0xe),"%s near \'%s\'",uVar11,"<eof>");
                    /* WARNING: Subroutine does not return */
      FUN_005eb814(*(undefined8 *)(param_1 + 0xe),3);
    }
                    /* try { // try from 00601078 to 00701083 has its CatchHandler @ 00601228 */
    if (uVar7 == 10) {
LAB_006010b8:
      FUN_006007a0(param_1,"unfinished string",0x11e);
      uVar7 = *param_1;
                    /* try { // try from 006010cc to 007011ab has its CatchHandler @ 00600d04 */
    }
    else {
LAB_006010d8:
      plVar8 = *(long **)(param_1 + 0x12);
      lVar12 = plVar8[1];
      uVar2 = plVar8[2];
      uVar14 = lVar12 + 1;
      if (uVar2 < uVar14) {
        if (0x7ffffffffffffffd < uVar2) {
          FUN_005ef46c(auStack_b8,*(long *)(param_1 + 0x14) + 0x18,0x50);
          FUN_005ef3d4(*(undefined8 *)(param_1 + 0xe),"%s:%d: %s",auStack_b8,param_1[1],
                       "lexical element too long");
                    /* WARNING: Subroutine does not return */
          FUN_005eb814(*(undefined8 *)(param_1 + 0xe),3);
        }
        lVar16 = uVar2 * 2;
        if (lVar16 == -2) {
          lVar9 = FUN_005eede0();
        }
        else {
          lVar9 = FUN_005eed74(*(undefined8 *)(param_1 + 0xe),*plVar8,uVar2,lVar16);
        }
        lVar12 = plVar8[1];
        plVar8[2] = lVar16;
        uVar14 = lVar12 + 1;
        *plVar8 = lVar9;
      }
      else {
        lVar9 = *plVar8;
      }
      plVar8[1] = uVar14;
      *(char *)(lVar9 + lVar12) = (char)uVar7;
      plVar8 = *(long **)puVar1;
      lVar12 = *plVar8;
      *plVar8 = lVar12 + -1;
      if (lVar12 == 0) {
        uVar7 = FUN_005f8650();
      }
      else {
        pbVar13 = (byte *)plVar8[1];
        plVar8[1] = (long)(pbVar13 + 1);
                    /* catch() { ... } // from try @ 00600f74 with catch @ 006012d4
                       catch() { ... } // from try @ 00601018 with catch @ 006012d4 */
        uVar7 = (uint)*pbVar13;
      }
                    /* catch() { ... } // from try @ 00600d68 with catch @ 006012e4
                       catch() { ... } // from try @ 00600dfc with catch @ 006012e4 */
      *param_1 = uVar7;
    }
    goto joined_r0x00601050;
  }
  if (uVar7 == 0xd) goto LAB_006010b8;
  if (uVar7 != 0x5c) goto LAB_006010d8;
  plVar8 = *(long **)puVar1;
  lVar12 = *plVar8;
  *plVar8 = lVar12 + -1;
  if (lVar12 == 0) {
    uVar7 = FUN_005f8650();
  }
  else {
                    /* try { // try from 006010a4 to 007010cb has its CatchHandler @ 00601184 */
    pbVar13 = (byte *)plVar8[1];
    plVar8[1] = (long)(pbVar13 + 1);
    uVar7 = (uint)*pbVar13;
  }
  *param_1 = uVar7;
  if (0x60 < (int)uVar7) {
                    /* catch() { ... } // from try @ 00600e94 with catch @ 006011d8 */
    uVar15 = 7;
    switch(uVar7) {
    case 0x61:
      break;
    case 0x62:
      uVar15 = 8;
      break;
    default:
switchD_006011f0_caseD_63:
      if (9 < uVar7 - 0x30) {
        plVar8 = *(long **)(param_1 + 0x12);
        lVar12 = plVar8[1];
        uVar2 = plVar8[2];
        uVar14 = lVar12 + 1;
                    /* try { // try from 00601568 to 0070158f has its CatchHandler @ 0060184c */
        if (uVar2 < uVar14) {
          if (0x7ffffffffffffffd < uVar2) {
            FUN_005ef46c(auStack_b8,*(long *)(param_1 + 0x14) + 0x18,0x50);
                    /* try { // try from 00601594 to 0070159f has its CatchHandler @ 00601844 */
            FUN_005ef3d4(*(undefined8 *)(param_1 + 0xe),"%s:%d: %s",auStack_b8,param_1[1],
                         "lexical element too long");
                    /* WARNING: Subroutine does not return */
            FUN_005eb814(*(undefined8 *)(param_1 + 0xe),3);
          }
          lVar16 = uVar2 * 2;
          if (lVar16 == -2) {
            lVar9 = FUN_005eede0();
          }
          else {
            lVar9 = FUN_005eed74(*(undefined8 *)(param_1 + 0xe),*plVar8,uVar2,lVar16);
          }
                    /* try { // try from 00601628 to 0070164f has its CatchHandler @ 00601844 */
          lVar12 = plVar8[1];
          plVar8[2] = lVar16;
          uVar14 = lVar12 + 1;
          *plVar8 = lVar9;
        }
        else {
          lVar9 = *plVar8;
        }
        plVar8[1] = uVar14;
        *(char *)(lVar9 + lVar12) = (char)uVar7;
        goto LAB_006013c0;
      }
      iVar5 = 0;
      uVar17 = 0xffffffff;
      do {
        plVar8 = *(long **)puVar1;
        iVar5 = uVar7 + iVar5 * 10 + -0x30;
        lVar12 = *plVar8;
        *plVar8 = lVar12 + -1;
        if (lVar12 == 0) {
                    /* try { // try from 00601460 to 0070146b has its CatchHandler @ 0060189c */
          uVar7 = FUN_005f8650();
        }
        else {
          pbVar13 = (byte *)plVar8[1];
          plVar8[1] = (long)(pbVar13 + 1);
          uVar7 = (uint)*pbVar13;
        }
        uVar17 = uVar17 + 1;
                    /* try { // try from 0060146c to 00701473 has its CatchHandler @ 00601830 */
        *param_1 = uVar7;
      } while ((uVar17 < 2) &&
              (uVar7 - 0x30 < 10
                    /* try { // try from 00601480 to 00701487 has its CatchHandler @ 0060189c */));
      if (0xff < iVar5) {
        FUN_006007a0(param_1,"escape sequence too large",0x11e);
      }
      plVar8 = *(long **)(param_1 + 0x12);
      lVar12 = plVar8[1];
      uVar2 = plVar8[2];
      uVar14 = lVar12 + 1;
      if (uVar2 < uVar14) {
        if (0x7ffffffffffffffd < uVar2) {
                    /* try { // try from 006014c4 to 007014df has its CatchHandler @ 0060184c */
          FUN_005ef46c(auStack_b8,*(long *)(param_1 + 0x14) + 0x18,0x50);
          FUN_005ef3d4(*(undefined8 *)(param_1 + 0xe),"%s:%d: %s",auStack_b8,param_1[1],
                       "lexical element too long");
                    /* WARNING: Subroutine does not return */
          FUN_005eb814(*(undefined8 *)(param_1 + 0xe),3);
        }
        lVar16 = uVar2 * 2;
        if (lVar16 == -2) {
          lVar9 = FUN_005eede0();
        }
        else {
                    /* try { // try from 006015e0 to 00701607 has its CatchHandler @ 0060178c */
          lVar9 = FUN_005eed74(*(undefined8 *)(param_1 + 0xe),*plVar8,uVar2,lVar16);
        }
        lVar12 = plVar8[1];
        plVar8[2] = lVar16;
        uVar14 = lVar12 + 1;
        *plVar8 = lVar9;
      }
      else {
        lVar9 = *plVar8;
      }
      plVar8[1] = uVar14;
      *(char *)(lVar9 + lVar12) = (char)iVar5;
      uVar7 = *param_1;
      goto joined_r0x00601050;
    case 0x66:
      uVar15 = 0xc;
      break;
    case 0x6e:
      uVar15 = 10;
      break;
    case 0x72:
      uVar15 = 0xd;
      break;
    case 0x74:
      uVar15 = 9;
      break;
    case 0x76:
      uVar15 = 0xb;
    }
    plVar8 = *(long **)(param_1 + 0x12);
    lVar12 = plVar8[1];
    uVar2 = plVar8[2];
    uVar14 = lVar12 + 1;
    if (uVar2 < uVar14) {
      if (0x7ffffffffffffffd < uVar2) {
        FUN_005ef46c(auStack_b8,*(long *)(param_1 + 0x14) + 0x18,0x50);
                    /* catch() { ... } // from try @ 00600f50 with catch @ 00601348 */
        FUN_005ef3d4(*(undefined8 *)(param_1 + 0xe),"%s:%d: %s",auStack_b8,param_1[1],
                     "lexical element too long");
                    /* WARNING: Subroutine does not return */
        FUN_005eb814(*(undefined8 *)(param_1 + 0xe),3);
      }
      lVar16 = uVar2 * 2;
      if (lVar16 == -2) {
        lVar9 = FUN_005eede0();
      }
      else {
        lVar9 = FUN_005eed74(*(undefined8 *)(param_1 + 0xe),*plVar8,uVar2,lVar16);
      }
      lVar12 = plVar8[1];
      plVar8[2] = lVar16;
      uVar14 = lVar12 + 1;
                    /* catch() { ... } // from try @ 00600e40 with catch @ 006013b4
                       catch() { ... } // from try @ 00600ee4 with catch @ 006013b4 */
      *plVar8 = lVar9;
    }
    else {
      lVar9 = *plVar8;
    }
    plVar8[1] = uVar14;
    *(undefined1 *)(lVar9 + lVar12) = uVar15;
LAB_006013c0:
    plVar8 = *(long **)puVar1;
    lVar12 = *plVar8;
    *plVar8 = lVar12 + -1;
    if (lVar12 == 0) {
      uVar7 = FUN_005f8650();
      *param_1 = uVar7;
                    /* try { // try from 00601408 to 00701413 has its CatchHandler @ 00600d04 */
    }
    else {
      pbVar13 = (byte *)plVar8[1];
      plVar8[1] = (long)(pbVar13 + 1);
      uVar7 = (uint)*pbVar13;
      *param_1 = uVar7;
    }
    goto joined_r0x00601050;
  }
  if (uVar7 != 0xffffffff) {
    if ((uVar7 != 10) && (uVar7 != 0xd)) goto switchD_006011f0_caseD_63;
    plVar8 = *(long **)(param_1 + 0x12);
    lVar12 = plVar8[1];
    uVar2 = plVar8[2];
    uVar14 = lVar12 + 1;
    if (uVar2 < uVar14) {
                    /* catch() { ... } // from try @ 00601078 with catch @ 00601228 */
      if (0x7ffffffffffffffd < uVar2) {
        FUN_005ef46c(auStack_b8,*(long *)(param_1 + 0x14) + 0x18,0x50);
        FUN_005ef3d4(*(undefined8 *)(param_1 + 0xe),"%s:%d: %s",auStack_b8,param_1[1],
                     "lexical element too long");
                    /* WARNING: Subroutine does not return */
        FUN_005eb814(*(undefined8 *)(param_1 + 0xe),3);
      }
      lVar16 = uVar2 * 2;
                    /* catch() { ... } // from try @ 0060104c with catch @ 00601278 */
                    /* catch() { ... } // from try @ 00600f10 with catch @ 0060127c */
      if (lVar16 == -2) {
                    /* catch() { ... } // from try @ 00600d48 with catch @ 00601280 */
        lVar9 = FUN_005eede0();
                    /* catch() { ... } // from try @ 00600fc8 with catch @ 00601284 */
      }
      else {
                    /* try { // try from 00601520 to 00701547 has its CatchHandler @ 006017dc */
        lVar9 = FUN_005eed74(*(undefined8 *)(param_1 + 0xe),*plVar8,uVar2,lVar16);
      }
      lVar12 = plVar8[1];
      *plVar8 = lVar9;
      plVar8[2] = lVar16;
      uVar14 = lVar12 + 1;
    }
    else {
                    /* catch() { ... } // from try @ 006011ac with catch @ 00601410 */
      lVar9 = *plVar8;
                    /* catch() { ... } // from try @ 00601718 with catch @ 00601414
                       catch() { ... } // from try @ 006018e4 with catch @ 00601414 */
    }
    plVar8[1] = uVar14;
    *(undefined1 *)(lVar9 + lVar12) = 10;
    FUN_00601c4c(param_1);
  }
  uVar7 = *param_1;
  goto joined_r0x00601050;
}


