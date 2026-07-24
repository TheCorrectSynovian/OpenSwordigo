/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00680acc
 * Function: FUN_00680acc
 * Signature: undefined FUN_00680acc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong FUN_00680acc(byte *param_1,byte *param_2,undefined8 param_3,ulong param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  byte *pbVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  int local_220 [2];
  ulong local_218;
  ulong local_210;
  ulong local_208;
  ulong local_200 [64];
  uint uVar13;
  
                    /* catch() { ... } // from try @ 00680cb4 with catch @ 00680ad0
                       catch() { ... } // from try @ 00680e38 with catch @ 00680ad0 */
  local_200[0] = param_4;
  uVar11 = 1;
LAB_00680b1c:
  pbVar9 = param_1;
  if (param_2 <= pbVar9) {
    if (uVar11 != 0) {
      return local_200[(int)(uVar11 - 1)];
    }
switchD_00680ed8_caseD_3:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  bVar1 = *pbVar9;
  param_1 = pbVar9 + 1;
  uVar12 = (uint)bVar1;
  uVar13 = (uint)bVar1;
  if (bVar1 < 0x21) {
    if (bVar1 < 0x1f) {
      if (uVar13 == 0x10) {
        param_1 = (byte *)FUN_0067fc60(param_1,&local_218);
        uVar4 = local_218;
      }
      else if (uVar13 < 0x11) {
        if (uVar13 == 10) {
          uVar4 = (ulong)*(ushort *)(pbVar9 + 1);
LAB_00680d28:
          param_1 = pbVar9 + 3;
        }
        else if (uVar13 < 0xb) {
          if (uVar12 == 6) goto LAB_00680e64;
          if (uVar12 < 7) {
            if (bVar1 != 3) goto switchD_00680ed8_caseD_3;
            param_1 = pbVar9 + 9;
            uVar4 = *(ulong *)(pbVar9 + 1);
          }
          else {
            param_1 = pbVar9 + 2;
            if (uVar12 == 8) {
              uVar4 = (ulong)pbVar9[1];
            }
            else {
              if (uVar12 != 9) goto switchD_00680ed8_caseD_3;
              uVar4 = (long)(char)pbVar9[1];
            }
          }
        }
        else {
          if (uVar13 == 0xd) {
            uVar4 = (ulong)*(int *)(pbVar9 + 1);
          }
          else {
            if (0xd < uVar13) {
              param_1 = pbVar9 + 9;
                    /* try { // try from 00680bc0 to 00780bcb has its CatchHandler @ 00680de0 */
              if ((bVar1 == 0xe) || (bVar1 == 0xf)) {
                uVar4 = *(ulong *)(pbVar9 + 1);
                goto LAB_0068103c;
              }
              goto switchD_00680ed8_caseD_3;
            }
            if (bVar1 == 0xb) {
              uVar4 = (ulong)*(short *)(pbVar9 + 1);
              goto LAB_00680d28;
            }
            if (bVar1 != 0xc) goto switchD_00680ed8_caseD_3;
            uVar4 = (ulong)*(uint *)(pbVar9 + 1);
          }
          param_1 = pbVar9 + 5;
        }
      }
      else {
                    /* try { // try from 00680bd0 to 00780c4b has its CatchHandler @ 00680dec */
        if (uVar13 == 0x15) {
          local_210 = (ulong)pbVar9[1];
                    /* catch() { ... } // from try @ 00680bd0 with catch @ 00680dec */
          param_1 = pbVar9 + 2;
          if ((long)(int)(uVar11 - 1) <= (long)local_210) goto switchD_00680ed8_caseD_3;
          uVar4 = local_200[(long)(int)(uVar11 - 1) - local_210];
        }
        else {
          if (0x15 < uVar13) {
            if (uVar13 == 0x19) goto LAB_00680e64;
            if (0x19 < uVar13) goto LAB_00680f28;
            iVar3 = uVar11 - 1;
            iVar2 = uVar11 - 2;
            if (uVar13 == 0x16) {
              if ((int)uVar11 < 2) goto switchD_00680ed8_caseD_3;
              uVar4 = local_200[iVar3];
              local_200[iVar3] = local_200[iVar2];
              local_200[iVar2] = uVar4;
                    /* try { // try from 00680e38 to 00780f13 has its CatchHandler @ 00680ad0 */
            }
            else {
              if ((uVar13 != 0x17) || ((int)uVar11 < 3)) goto switchD_00680ed8_caseD_3;
              uVar4 = local_200[iVar3];
              uVar10 = local_200[(int)(uVar11 - 3)];
              local_200[iVar3] = local_200[iVar2];
              local_200[iVar2] = uVar10;
              local_200[(int)(uVar11 - 3)] = uVar4;
            }
            goto LAB_00680b1c;
          }
          if (uVar13 == 0x12) {
            if (uVar11 == 0) goto switchD_00680ed8_caseD_3;
            iVar3 = uVar11 - 1;
          }
          else {
            if (uVar13 < 0x12) {
              param_1 = (byte *)FUN_0067fc88(param_1,&local_208);
              uVar4 = local_208;
              goto LAB_0068103c;
            }
            if (uVar13 == 0x13) {
              if (uVar11 == 0) goto switchD_00680ed8_caseD_3;
              uVar11 = uVar11 - 1;
                    /* catch() { ... } // from try @ 00680bc0 with catch @ 00680de0 */
              goto LAB_00680b1c;
            }
                    /* try { // try from 00680e10 to 00780e37 has its CatchHandler @ 00680ea4 */
            if ((uVar13 != 0x14) || ((int)uVar11 < 2)) goto switchD_00680ed8_caseD_3;
            iVar3 = uVar11 - 2;
          }
          uVar4 = local_200[iVar3];
        }
      }
    }
    else {
LAB_00680e64:
      if (uVar11 == 0) goto switchD_00680ed8_caseD_3;
      uVar11 = uVar11 - 1;
      puVar8 = (ulong *)local_200[(int)uVar11];
      if (uVar12 == 0x1f) {
        uVar4 = -(long)puVar8;
      }
      else if (uVar12 < 0x20) {
        if (uVar12 == 6) {
switchD_00680ed8_caseD_8:
          uVar4 = *puVar8;
        }
        else {
          if (bVar1 != 0x19) goto switchD_00680ed8_caseD_3;
          uVar4 = ((ulong)puVar8 ^ (long)puVar8 >> 0x3f) - ((long)puVar8 >> 0x3f);
        }
      }
      else if (uVar12 == 0x23) {
        param_1 = (byte *)FUN_0067fc60(param_1,&local_218);
                    /* try { // try from 00680f14 to 00780f67 has its CatchHandler @ 00680f14
                       catch() { ... } // from try @ 00680f14 with catch @ 00680f14
                       catch() { ... } // from try @ 00681044 with catch @ 00680f14
                       catch() { ... } // from try @ 00681194 with catch @ 00680f14 */
        uVar4 = (long)puVar8 + local_218;
      }
      else {
                    /* catch() { ... } // from try @ 00680e10 with catch @ 00680ea4 */
        if (uVar12 == 0x94) {
          param_1 = pbVar9 + 2;
          switch(pbVar9[1]) {
          case 1:
            uVar4 = (ulong)(byte)*puVar8;
            break;
          case 2:
            uVar4 = (ulong)(ushort)*puVar8;
            break;
          default:
            goto switchD_00680ed8_caseD_3;
          case 4:
            uVar4 = (ulong)(uint)*puVar8;
            break;
          case 8:
            goto switchD_00680ed8_caseD_8;
          }
        }
        else {
          if (uVar12 != 0x20) goto switchD_00680ed8_caseD_3;
          uVar4 = ~(ulong)puVar8;
        }
      }
    }
  }
  else if (uVar13 < 0x50) {
    if (0x2f < uVar12) {
      uVar4 = (ulong)(uVar12 - 0x30);
      goto LAB_0068103c;
    }
    if (0x27 < uVar12) {
      if (uVar13 < 0x2f) {
        if (0x28 < uVar13) goto LAB_00680f28;
        if (uVar11 == 0) goto switchD_00680ed8_caseD_3;
        uVar11 = uVar11 - 1;
        param_1 = pbVar9 + 3;
        if (local_200[(int)uVar11] != 0) {
          param_1 = pbVar9 + 3 + *(short *)(pbVar9 + 1);
        }
      }
      else {
        param_1 = pbVar9 + (long)*(short *)(pbVar9 + 1) + 3;
      }
      goto LAB_00680b1c;
    }
    if ((uVar13 < 0x24) && (0x22 < uVar13)) goto LAB_00680e64;
LAB_00680f28:
    if ((int)uVar11 < 2) goto switchD_00680ed8_caseD_3;
    uVar12 = uVar11 - 2;
    uVar7 = local_200[(int)uVar12];
    uVar10 = local_200[(int)(uVar11 - 1)];
    uVar11 = uVar12;
    switch(bVar1) {
    case 0x1a:
      uVar4 = uVar10 & uVar7;
      break;
    case 0x1b:
      uVar4 = 0;
      if (uVar10 != 0) {
        uVar4 = (long)uVar7 / (long)uVar10;
      }
      break;
    case 0x1c:
      uVar4 = uVar7 - uVar10;
      break;
    case 0x1d:
      uVar4 = 0;
      if (uVar10 != 0) {
        uVar4 = uVar7 / uVar10;
      }
                    /* try { // try from 00680f78 to 00780f7f has its CatchHandler @ 006810c8 */
      uVar4 = uVar7 - uVar4 * uVar10;
      break;
    case 0x1e:
                    /* try { // try from 00680f80 to 00780fdf has its CatchHandler @ 00681148 */
      uVar4 = uVar10 * uVar7;
      break;
    default:
      goto switchD_00680ed8_caseD_3;
    case 0x21:
      uVar4 = uVar10 | uVar7;
      break;
    case 0x22:
      uVar4 = uVar10 + uVar7;
      break;
    case 0x24:
      uVar4 = uVar7 << (uVar10 & 0x3f);
      break;
    case 0x25:
      uVar4 = uVar7 >> (uVar10 & 0x3f);
      break;
    case 0x26:
      uVar4 = (long)uVar7 >> (uVar10 & 0x3f);
      break;
    case 0x27:
      uVar4 = uVar10 ^ uVar7;
      break;
    case 0x29:
      uVar4 = (ulong)(uVar7 == uVar10);
      break;
    case 0x2a:
      uVar4 = (ulong)((long)uVar10 <= (long)uVar7);
      break;
    case 0x2b:
      uVar4 = (ulong)((long)uVar10 < (long)uVar7);
      break;
    case 0x2c:
      uVar4 = (ulong)((long)uVar7 <= (long)uVar10);
      break;
    case 0x2d:
      uVar4 = (ulong)((long)uVar7 < (long)uVar10);
      break;
    case 0x2e:
                    /* try { // try from 00680ff8 to 00781043 has its CatchHandler @ 006810dc */
      uVar4 = (ulong)(uVar7 != uVar10);
    }
  }
  else {
    if (uVar13 != 0x90) {
      if (uVar13 < 0x91) {
        if (bVar1 < 0x70) {
          iVar3 = uVar12 - 0x50;
          goto LAB_00680d90;
        }
        param_1 = (byte *)FUN_0067fc88(param_1,&local_210);
        lVar6 = FUN_0067ff08(param_3,uVar13 - 0x70);
      }
      else {
        if (uVar13 == 0x94) goto LAB_00680e64;
        if (0x94 < uVar13) {
          if (uVar13 != 0x96) {
            if (uVar13 == 0xf1) {
              bVar1 = pbVar9[1];
              uVar5 = FUN_00680138(bVar1,param_3);
              param_1 = (byte *)FUN_0067fcc8(bVar1,uVar5,pbVar9 + 2,&local_208);
              uVar4 = local_208;
              goto LAB_0068103c;
            }
            goto switchD_00680ed8_caseD_3;
          }
          goto LAB_00680b1c;
        }
                    /* try { // try from 00680c8c to 00780cb3 has its CatchHandler @ 00680d70 */
        if (bVar1 != 0x92) goto switchD_00680ed8_caseD_3;
        uVar5 = FUN_0067fc60(param_1,local_220);
        param_1 = (byte *)FUN_0067fc88(uVar5,&local_210);
                    /* try { // try from 00680cb4 to 00780e0f has its CatchHandler @ 00680ad0 */
        lVar6 = FUN_0067ff08(param_3,local_220[0]);
      }
      uVar4 = lVar6 + local_210;
      goto LAB_0068103c;
    }
    param_1 = (byte *)FUN_0067fc60(param_1,local_220);
    iVar3 = local_220[0];
LAB_00680d90:
    uVar4 = FUN_0067ff08(param_3,iVar3);
  }
LAB_0068103c:
  if (0x3f < uVar11) goto switchD_00680ed8_caseD_3;
                    /* try { // try from 00681044 to 0078116b has its CatchHandler @ 00680f14 */
  local_200[(int)uVar11] = uVar4;
  uVar11 = uVar11 + 1;
  goto LAB_00680b1c;
}


