/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fcdb4
 * Function: FUN_005fcdb4
 * Signature: undefined FUN_005fcdb4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */

byte * FUN_005fcdb4(undefined8 *param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  long *plVar12;
  ulong __n;
  byte *pbVar13;
  
LAB_005fcdf8:
  pbVar6 = param_3;
LAB_005fce04:
                    /* catch() { ... } // from try @ 005fcad8 with catch @ 005fce18 */
                    /* catch() { ... } // from try @ 005fcab0 with catch @ 005fce28 */
  switch(*pbVar6) {
  case 0:
    goto switchD_005fce28_caseD_0;
  default:
    if (*pbVar6 != 0x5b) goto LAB_005fceb8;
                    /* try { // try from 005fce4c to 006fd00f has its CatchHandler @ 005fd6b4 */
    pbVar13 = pbVar6 + 2;
    if (pbVar6[1] != 0x5e) {
      pbVar13 = pbVar6 + 1;
    }
    bVar8 = *pbVar13;
    do {
      if (bVar8 == 0) {
        luaL_error((lua_State *)param_1[2],"malformed pattern (missing \']\')");
        bVar8 = *pbVar13;
      }
                    /* catch() { ... } // from try @ 005fca58 with catch @ 005fce78 */
      param_3 = pbVar13 + 1;
                    /* catch() { ... } // from try @ 005fca70 with catch @ 005fce84 */
      if ((bVar8 == 0x25) && (pbVar13[1] != 0)) {
        param_3 = pbVar13 + 2;
      }
      bVar8 = *param_3;
      pbVar13 = param_3;
    } while (bVar8 != 0x5d);
    param_3 = param_3 + 1;
    break;
  case 0x24:
    if (pbVar6[1] == 0) {
      if (param_2 != (byte *)param_1[1]) {
        return (byte *)0x0;
      }
      return param_2;
    }
LAB_005fceb8:
    param_3 = pbVar6 + 1;
    break;
  case 0x25:
    bVar8 = pbVar6[1];
    if (bVar8 == 0x66) goto LAB_005fcf48;
    if (bVar8 == 0x62) {
                    /* catch() { ... } // from try @ 005fc8e0 with catch @ 005fd274 */
      bVar8 = pbVar6[2];
      if ((bVar8 == 0) || (pbVar6[3] == 0)) {
        luaL_error((lua_State *)param_1[2],"unbalanced pattern");
        bVar8 = pbVar6[2];
      }
      if (*param_2 != bVar8) {
        return (byte *)0x0;
      }
      param_2 = param_2 + 1;
      if ((byte *)param_1[1] <= param_2) {
        return (byte *)0x0;
      }
      iVar5 = 1;
      goto LAB_005fd2bc;
    }
    uVar4 = (uint)bVar8;
                    /* catch() { ... } // from try @ 005fca2c with catch @ 005fcee4 */
    if (9 < uVar4 - 0x30) {
      if (uVar4 == 0) {
        luaL_error((lua_State *)param_1[2],"malformed pattern (ends with \'%%\')");
      }
      param_3 = pbVar6 + 2;
      break;
    }
    if (((uVar4 < 0x31) || (lVar11 = (ulong)uVar4 - 0x31, *(int *)(param_1 + 3) <= (int)lVar11)) ||
       (__n = param_1[lVar11 * 2 + 5], __n == 0xffffffffffffffff)) {
      iVar5 = luaL_error((lua_State *)param_1[2],"invalid capture index");
      __n = param_1[(long)iVar5 * 2 + 5];
      lVar11 = (long)iVar5;
    }
                    /* catch() { ... } // from try @ 005fc7a8 with catch @ 005fd340 */
    if ((ulong)(param_1[1] - (long)param_2) < __n) {
      return (byte *)0x0;
    }
    iVar5 = memcmp((void *)param_1[lVar11 * 2 + 4],param_2,__n);
                    /* try { // try from 005fd360 to 006fd5df has its CatchHandler @ 005fd6b4 */
    param_2 = param_2 + __n;
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
    if (iVar5 != 0) {
      return (byte *)0x0;
    }
    param_3 = pbVar6 + 2;
    goto LAB_005fcdf8;
  case 0x28:
    if (pbVar6[1] == 0x29) {
      iVar5 = *(int *)(param_1 + 3);
      if (0x1f < iVar5) {
        luaL_error((lua_State *)param_1[2],"too many captures");
      }
      param_1[(long)iVar5 * 2 + 4] = param_2;
      param_1[(long)iVar5 * 2 + 5] = 0xfffffffffffffffe;
                    /* catch() { ... } // from try @ 005fc720 with catch @ 005fd3d0 */
      *(int *)(param_1 + 3) = iVar5 + 1;
      pbVar6 = (byte *)FUN_005fcdb4(param_1,param_2,pbVar6 + 2);
    }
    else {
      iVar5 = *(int *)(param_1 + 3);
      if (0x1f < iVar5) {
        luaL_error((lua_State *)param_1[2],"too many captures");
      }
      param_1[(long)iVar5 * 2 + 4] = param_2;
      param_1[(long)iVar5 * 2 + 5] = 0xffffffffffffffff;
      *(int *)(param_1 + 3) = iVar5 + 1;
      pbVar6 = (byte *)FUN_005fcdb4(param_1,param_2,pbVar6 + 1);
    }
    if (pbVar6 == (byte *)0x0) {
      *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + -1;
      return (byte *)0x0;
    }
    return pbVar6;
  case 0x29:
    iVar5 = *(int *)(param_1 + 3);
    if (iVar5 < 1) goto LAB_005fd420;
    lVar11 = (long)iVar5 + 1;
    plVar12 = param_1 + (long)iVar5 * 2 + 3;
    goto LAB_005fd400;
  }
  pbVar13 = pbVar6 + 1;
  if (param_2 < (byte *)param_1[1]) {
    bVar2 = *pbVar6;
    bVar8 = *param_2;
    if (bVar2 == 0x5b) {
      bVar3 = pbVar6[1] != 0x5e;
      uVar4 = (uint)bVar3;
      pbVar7 = pbVar13;
      if (bVar3) {
        pbVar7 = pbVar6;
      }
      do {
        while( true ) {
          while( true ) {
                    /* catch() { ... } // from try @ 005fc4ac with catch @ 005fcfc4 */
            pbVar10 = pbVar7 + 1;
            if (param_3 + -1 <= pbVar10) {
              uVar4 = bVar3 ^ 1;
              goto LAB_005fd064;
            }
            bVar2 = *pbVar10;
            if (bVar2 != 0x25) break;
            iVar5 = FUN_005fd7f0(bVar8);
            pbVar7 = pbVar7 + 2;
            if (iVar5 != 0) goto LAB_005fd064;
          }
          if ((pbVar7[2] != 0x2d) || (pbVar7 = pbVar7 + 3, param_3 + -1 <= pbVar7)) break;
                    /* try { // try from 005fd010 to 006fd13f has its CatchHandler @ 005fc1b8 */
                    /* catch() { ... } // from try @ 005fc440 with catch @ 005fd028 */
          if ((bVar2 <= bVar8) && (bVar8 <= *pbVar7)) goto LAB_005fd064;
        }
        pbVar7 = pbVar10;
      } while (bVar2 != bVar8);
    }
    else if (bVar2 == 0x2e) {
                    /* catch() { ... } // from try @ 005fc410 with catch @ 005fd040 */
      uVar4 = 1;
    }
    else if (bVar2 == 0x25) {
      uVar4 = FUN_005fd7f0(bVar8,*pbVar13);
                    /* catch() { ... } // from try @ 005fca14 with catch @ 005fcf38 */
                    /* catch() { ... } // from try @ 005fca4c with catch @ 005fcf3c
                       catch() { ... } // from try @ 005fca60 with catch @ 005fcf3c
                       catch() { ... } // from try @ 005fcb28 with catch @ 005fcf3c */
    }
    else {
      uVar4 = (uint)(bVar2 == bVar8);
    }
LAB_005fd064:
    bVar3 = uVar4 != 0;
  }
  else {
                    /* catch() { ... } // from try @ 005fc4d4 with catch @ 005fcf40 */
    bVar3 = false;
                    /* catch() { ... } // from try @ 005fc54c with catch @ 005fcf44 */
  }
  switch(*param_3) {
  case 0x2a:
                    /* catch() { ... } // from try @ 005fc940 with catch @ 005fd474 */
    break;
  case 0x2b:
    if (!bVar3) {
      return (byte *)0x0;
    }
                    /* catch() { ... } // from try @ 005fc6c8 with catch @ 005fd484 */
    param_2 = param_2 + 1;
    break;
  default:
    goto switchD_005fd084_caseD_2c;
  case 0x2d:
    pbVar7 = (byte *)FUN_005fcdb4(param_1,param_2,param_3 + 1);
    if (pbVar7 != (byte *)0x0) {
      return pbVar7;
    }
    pbVar7 = param_2;
    goto LAB_005fd4d0;
  case 0x3f:
    pbVar6 = param_3 + 1;
    if ((bVar3) &&
       (pbVar13 = (byte *)FUN_005fcdb4(param_1,param_2 + 1,pbVar6), pbVar13 != (byte *)0x0)) {
      return pbVar13;
    }
    goto LAB_005fce04;
  }
                    /* catch() { ... } // from try @ 005fc6e0 with catch @ 005fd494
                       catch() { ... } // from try @ 005fc894 with catch @ 005fd494 */
  pbVar6 = (byte *)FUN_005fd650(param_1,param_2,pbVar6,param_3);
  return pbVar6;
LAB_005fcf48:
                    /* catch() { ... } // from try @ 005fc534 with catch @ 005fcf48 */
                    /* catch() { ... } // from try @ 005fc518 with catch @ 005fcf4c */
  pbVar13 = pbVar6 + 2;
  bVar8 = *pbVar13;
  if (bVar8 != 0x5b) {
    luaL_error((lua_State *)param_1[2],"missing \'[\' after \'%%f\' in pattern");
    bVar8 = *pbVar13;
  }
  pbVar7 = pbVar6 + 3;
  if (bVar8 == 0x5b) {
                    /* catch() { ... } // from try @ 005fc3fc with catch @ 005fd0ac */
                    /* catch() { ... } // from try @ 005fc3d0 with catch @ 005fd0b0 */
    pbVar10 = pbVar6 + 4;
    if (pbVar6[3] != 0x5e) {
      pbVar10 = pbVar7;
    }
    bVar8 = *pbVar10;
    do {
      if (bVar8 == 0) {
        luaL_error((lua_State *)param_1[2],"malformed pattern (missing \']\')");
        bVar8 = *pbVar10;
      }
      pbVar9 = pbVar10 + 1;
      if ((bVar8 == 0x25) && (pbVar10[1] != 0)) {
        pbVar9 = pbVar10 + 2;
      }
      bVar8 = *pbVar9;
      pbVar10 = pbVar9;
    } while (bVar8 != 0x5d);
    pbVar9 = pbVar9 + 1;
  }
  else {
    pbVar9 = pbVar7;
    if (bVar8 == 0x25) {
      if (*pbVar7 == 0) {
        luaL_error((lua_State *)param_1[2],"malformed pattern (ends with \'%%\')");
      }
      pbVar9 = pbVar6 + 4;
    }
  }
  if (param_2 == (byte *)*param_1) {
    bVar8 = 0;
  }
  else {
                    /* catch() { ... } // from try @ 005fc3bc with catch @ 005fd118 */
    bVar8 = param_2[-1];
                    /* catch() { ... } // from try @ 005fc360 with catch @ 005fd11c */
  }
  pbVar6 = pbVar9 + -1;
  bVar3 = *pbVar7 != 0x5e;
  if (bVar3) {
    pbVar7 = pbVar13;
  }
  pbVar13 = pbVar7 + 1;
  pbVar1 = pbVar13;
  pbVar10 = pbVar7;
                    /* try { // try from 005fd140 to 006fd1bf has its CatchHandler @ 005fd6b4 */
  while (pbVar1 < pbVar6) {
    bVar2 = *pbVar1;
    if (bVar2 == 0x25) {
      iVar5 = FUN_005fd7f0(bVar8);
                    /* catch() { ... } // from try @ 005fc310 with catch @ 005fd16c */
      pbVar10 = pbVar10 + 2;
      if (iVar5 != 0) goto LAB_005fd1c4;
    }
    else if ((pbVar10[2] == 0x2d) && (pbVar10 = pbVar10 + 3, pbVar10 < pbVar6)) {
                    /* try { // try from 005fd1c0 to 006fd35f has its CatchHandler @ 005fc1b8 */
      if ((bVar2 <= bVar8) && (bVar8 <= *pbVar10)) {
LAB_005fd1c4:
                    /* catch() { ... } // from try @ 005fc274 with catch @ 005fd1c4 */
                    /* catch() { ... } // from try @ 005fc1fc with catch @ 005fd1c8 */
        if (bVar3) {
          return (byte *)0x0;
        }
        goto LAB_005fd1cc;
      }
    }
    else {
      pbVar10 = pbVar1;
      if (bVar2 == bVar8) goto LAB_005fd1c4;
    }
    pbVar1 = pbVar10 + 1;
  }
                    /* catch() { ... } // from try @ 005fc434 with catch @ 005fd258
                       catch() { ... } // from try @ 005fc448 with catch @ 005fd258
                       catch() { ... } // from try @ 005fcbb0 with catch @ 005fd258 */
  if (!bVar3) {
    return (byte *)0x0;
  }
LAB_005fd1cc:
  if (pbVar13 < pbVar6) {
    bVar8 = *param_2;
    do {
      bVar2 = *pbVar13;
                    /* catch() { ... } // from try @ 005fc3f4 with catch @ 005fd1dc
                       catch() { ... } // from try @ 005fcbf8 with catch @ 005fd1dc */
      if (bVar2 == 0x25) {
                    /* catch() { ... } // from try @ 005fc288 with catch @ 005fd1ec
                       catch() { ... } // from try @ 005fc2cc with catch @ 005fd1ec */
        iVar5 = FUN_005fd7f0(bVar8);
        pbVar7 = pbVar7 + 2;
        if (iVar5 != 0) goto LAB_005fd264;
      }
      else if ((pbVar7[2] == 0x2d) && (pbVar7 = pbVar7 + 3, pbVar7 < pbVar6)) {
        if ((bVar2 <= bVar8) && (bVar8 <= *pbVar7)) goto LAB_005fd264;
      }
      else {
        pbVar7 = pbVar13;
        if (bVar2 == bVar8) goto LAB_005fd264;
      }
      pbVar13 = pbVar7 + 1;
    } while (pbVar13 < pbVar6);
  }
  bVar3 = !bVar3;
LAB_005fd264:
  pbVar6 = pbVar9;
                    /* catch() { ... } // from try @ 005fc850 with catch @ 005fd268 */
  if (!bVar3) {
    return (byte *)0x0;
  }
  goto LAB_005fce04;
LAB_005fd2bc:
  if (*param_2 == pbVar6[3]) {
    iVar5 = iVar5 + -1;
    if (iVar5 == 0) goto LAB_005fd378;
  }
  else {
                    /* catch() { ... } // from try @ 005fc8cc with catch @ 005fd2d8 */
    if (*param_2 == bVar8) {
      iVar5 = iVar5 + 1;
    }
  }
                    /* catch() { ... } // from try @ 005fc994 with catch @ 005fd2dc */
  param_2 = param_2 + 1;
                    /* catch() { ... } // from try @ 005fc7b8 with catch @ 005fd2e0 */
  if ((byte *)param_1[1] <= param_2) {
    return (byte *)0x0;
  }
  goto LAB_005fd2bc;
LAB_005fd378:
  param_2 = param_2 + 1;
  param_3 = pbVar6 + 4;
  goto LAB_005fcdf8;
LAB_005fd4d0:
  if ((byte *)param_1[1] <= pbVar7) {
    return (byte *)0x0;
  }
  bVar2 = *pbVar6;
  bVar8 = *pbVar7;
                    /* catch() { ... } // from try @ 005fc6bc with catch @ 005fd4e4
                       catch() { ... } // from try @ 005fc6d0 with catch @ 005fd4e4
                       catch() { ... } // from try @ 005fc9dc with catch @ 005fd4e4 */
  if (bVar2 == 0x5b) {
    bVar3 = pbVar6[1] != 0x5e;
    pbVar10 = pbVar13;
    if (bVar3) {
      pbVar10 = pbVar6;
    }
    do {
      while( true ) {
        while( true ) {
          pbVar9 = pbVar10 + 1;
          if (param_3 + -1 <= pbVar9) {
            if (bVar3) {
              return (byte *)0x0;
            }
            goto LAB_005fd5b4;
          }
          bVar2 = *pbVar9;
          if (bVar2 != 0x25) break;
          iVar5 = FUN_005fd7f0(bVar8);
          pbVar10 = pbVar10 + 2;
          if (iVar5 != 0) goto LAB_005fd5b0;
        }
        if ((pbVar10[2] != 0x2d) || (pbVar10 = pbVar10 + 3, param_3 + -1 <= pbVar10)) break;
        if ((bVar2 <= bVar8) && (bVar8 <= *pbVar10)) goto LAB_005fd5b0;
      }
      pbVar10 = pbVar9;
    } while (bVar2 != bVar8);
LAB_005fd5b0:
    if (!bVar3) {
      return (byte *)0x0;
    }
  }
  else if (bVar2 != 0x2e) {
    if (bVar2 != 0x25) {
      bVar3 = bVar2 == bVar8;
      goto LAB_005fd5b0;
    }
    iVar5 = FUN_005fd7f0(bVar8,*pbVar13);
    if (iVar5 == 0) {
      return (byte *)0x0;
    }
  }
LAB_005fd5b4:
  pbVar7 = pbVar7 + 1;
  param_2 = (byte *)FUN_005fcdb4(param_1,pbVar7,param_3 + 1);
  if (param_2 != (byte *)0x0) {
switchD_005fce28_caseD_0:
                    /* try { // try from 005fd5e0 to 006fd6b7 has its CatchHandler @ 005fc1b8 */
    return param_2;
  }
  goto LAB_005fd4d0;
switchD_005fd084_caseD_2c:
  param_2 = param_2 + 1;
  if (!bVar3) {
    return (byte *)0x0;
  }
  goto LAB_005fcdf8;
  while( true ) {
    lVar11 = lVar11 + -1;
    plVar12 = plVar12 + -2;
    if (lVar11 < 2) break;
LAB_005fd400:
    iVar5 = iVar5 + -1;
    if (*plVar12 == -1) goto LAB_005fd430;
  }
LAB_005fd420:
                    /* catch() { ... } // from try @ 005fc714 with catch @ 005fd420
                       catch() { ... } // from try @ 005fc74c with catch @ 005fd420 */
                    /* catch() { ... } // from try @ 005fc96c with catch @ 005fd424 */
  iVar5 = luaL_error((lua_State *)param_1[2],"invalid pattern capture");
LAB_005fd430:
  param_1[(long)iVar5 * 2 + 5] = (long)param_2 - param_1[(long)iVar5 * 2 + 4];
  pbVar6 = (byte *)FUN_005fcdb4(param_1,param_2,pbVar6 + 1);
  if (pbVar6 == (byte *)0x0) {
    param_1[(long)iVar5 * 2 + 5] = 0xffffffffffffffff;
    return (byte *)0x0;
  }
  return pbVar6;
}


