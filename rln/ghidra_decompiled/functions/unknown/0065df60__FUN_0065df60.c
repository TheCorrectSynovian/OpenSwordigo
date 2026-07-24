/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065df60
 * Function: FUN_0065df60
 * Signature: undefined FUN_0065df60(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_0065df60(long *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  size_t sVar5;
  byte *pbVar6;
  void *pvVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  size_t sVar11;
  ulong uVar12;
  ulong uVar13;
  void *local_8;
  
  if ((*(uint *)(param_1 + 0xf) >> 3 & 1) == 0) {
    return 0xffffffff;
  }
  if (*(char *)((long)param_1 + 0xaa) == '\0') {
    pbVar4 = (byte *)param_1[2];
  }
  else {
    uVar12 = (**(code **)(*param_1 + 0x68))(param_1,0xffffffff);
    if ((int)uVar12 == -1) {
      return uVar12;
    }
    pbVar4 = (byte *)param_1[0x13];
    param_1[1] = (long)pbVar4;
    param_1[2] = (long)pbVar4;
    param_1[3] = (long)pbVar4;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[6] = 0;
    *(undefined1 *)((long)param_1 + 0xaa) = 0;
  }
  if ((char)param_1[0x18] == '\0') {
    pbVar8 = (byte *)param_1[3];
    pbVar6 = pbVar4;
  }
  else {
    pbVar6 = (byte *)param_1[0x16];
    pbVar8 = (byte *)param_1[0x17];
    if ((byte *)param_1[1] != pbVar4) {
      pbVar6 = pbVar6 + 1;
    }
    param_1[1] = param_1[0x13];
    param_1[0x16] = (long)pbVar6;
    param_1[2] = (long)pbVar6;
    param_1[3] = (long)pbVar8;
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  if (pbVar6 < pbVar8) goto LAB_0065e08c;
  if ((ulong)param_1[0x14] < 2) {
                    /* catch() { ... } // from try @ 0065e0a0 with catch @ 0065e0ec */
    uVar12 = 1;
  }
  else {
    uVar12 = param_1[0x14] - 1;
  }
  if ((long *)param_1[0x19] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_006652c8();
  }
  cVar2 = (**(code **)(*(long *)param_1[0x19] + 0x30))();
  if (cVar2 == '\0') {
    iVar3 = (**(code **)(*(long *)param_1[0x19] + 0x28))((long *)param_1[0x19]);
    if (iVar3 < 1) {
      iVar3 = (**(code **)(*(long *)param_1[0x19] + 0x40))((long *)param_1[0x19]);
      uVar13 = (uVar12 - 1) + (long)iVar3;
      uVar10 = uVar12;
    }
    else {
      uVar13 = (long)iVar3 * uVar12;
      uVar10 = uVar13;
    }
    sVar5 = param_1[0x1d] - param_1[0x1c];
    lVar9 = uVar10 - sVar5;
    if ((long)uVar10 <= (long)sVar5) {
      lVar9 = 0;
    }
    if (((*(char *)((long)param_1 + 0xa9) != '\0') && (param_1[3] == param_1[1])) && (sVar5 != 0)) {
      lVar9 = 0;
    }
    if (param_1[0x1b] < (long)uVar13) {
      pvVar7 = operator_new__(uVar13);
      sVar11 = 0;
      if (sVar5 != 0) {
        memcpy(pvVar7,(void *)param_1[0x1c],sVar5);
        sVar11 = sVar5;
      }
      if ((void *)param_1[0x1a] != (void *)0x0) {
        operator_delete__((void *)param_1[0x1a]);
      }
      param_1[0x1a] = (long)pvVar7;
      param_1[0x1b] = uVar13;
    }
    else if (sVar5 == 0) {
      pvVar7 = (void *)param_1[0x1a];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0065e230 with catch @ 0065e1a0
                       catch(type#1 @ 00000000) { ... } // from try @ 0065e300 with catch @ 0065e1a0
                        */
      sVar11 = 0;
    }
    else {
      memmove((void *)param_1[0x1a],(void *)param_1[0x1c],sVar5);
      pvVar7 = (void *)param_1[0x1a];
      sVar11 = sVar5;
    }
    uVar13 = (long)pvVar7 + sVar11;
    param_1[0x1c] = (long)pvVar7;
    param_1[0x1d] = uVar13;
    iVar3 = 0;
    *(undefined8 *)((long)param_1 + 0x8c) = *(undefined8 *)((long)param_1 + 0x84);
    sVar5 = 0;
    if (0 < lVar9) goto LAB_0065e238;
    bVar1 = false;
                    /* try { // try from 0065e2d8 to 0075e2ff has its CatchHandler @ 0065e304 */
    do {
      pvVar7 = (void *)param_1[1];
      local_8 = pvVar7;
      if ((ulong)param_1[0x1c] < uVar13) {
        iVar3 = (**(code **)(*(long *)param_1[0x19] + 0x20))
                          ((long *)param_1[0x19],(long)param_1 + 0x84,param_1[0x1c],uVar13,
                           param_1 + 0x1c,pvVar7,(long)pvVar7 + uVar12,&local_8);
        pvVar7 = (void *)param_1[1];
        if (iVar3 == 3) goto LAB_0065e2a0;
LAB_0065e210:
        sVar5 = (long)local_8 - (long)pvVar7;
        if (iVar3 == 2) goto LAB_0065e054;
      }
      else {
                    /* try { // try from 0065e208 to 0075e22f has its CatchHandler @ 0065e308 */
        if (iVar3 != 3) goto LAB_0065e210;
LAB_0065e2a0:
        uVar13 = param_1[0x1d] - param_1[0x1a];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0065e1e4 with catch @ 0065e2b4
                        */
        sVar5 = uVar12;
        if (uVar13 < uVar12) {
          sVar5 = uVar13;
        }
        memcpy(pvVar7,(void *)param_1[0x1a],sVar5);
        param_1[0x1c] = param_1[0x1a] + sVar5;
      }
      if ((sVar5 == 0) <= bVar1) goto LAB_0065e054;
                    /* try { // try from 0065e230 to 0075e2d7 has its CatchHandler @ 0065e1a0 */
      uVar13 = param_1[0x1d];
      lVar9 = 1;
LAB_0065e238:
      if (param_1[0x1b] < (long)((uVar13 - param_1[0x1a]) + lVar9)) {
                    /* WARNING: Subroutine does not return */
        FUN_00665ad8("basic_filebuf::underflow codecvt::max_length() is not valid");
      }
      lVar9 = FUN_0061f714(param_1 + 0xd,uVar13,lVar9);
      if (lVar9 == 0) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
                    /* try { // try from 0065e1e4 to 0075e1e7 has its CatchHandler @ 0065e2b4 */
        if (lVar9 == -1) goto LAB_0065e054;
      }
      uVar13 = param_1[0x1d] + lVar9;
      param_1[0x1d] = uVar13;
    } while( true );
  }
  sVar5 = FUN_0061f714(param_1 + 0xd,param_1[1],uVar12);
                    /* try { // try from 0065dfec to 0075e09f has its CatchHandler @ 0065dfec
                       catch() { ... } // from try @ 0065dfec with catch @ 0065dfec
                       catch() { ... } // from try @ 0065e0a4 with catch @ 0065dfec */
  if (sVar5 == 0) {
    iVar3 = 0;
    if ((*(uint *)(param_1 + 0xf) >> 4 & 1) != 0) {
      lVar9 = param_1[0x13];
      param_1[1] = lVar9;
      param_1[2] = lVar9;
      param_1[3] = lVar9;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[6] = 0;
      *(undefined1 *)((long)param_1 + 0xa9) = 0;
      return 0xffffffff;
    }
    goto LAB_0065dffc;
  }
  if ((long)sVar5 < 1) goto LAB_0065e2e8;
LAB_0065e05c:
  if ((*(uint *)(param_1 + 0xf) >> 3 & 1) == 0) {
    pbVar6 = (byte *)param_1[0x13];
    param_1[1] = (long)pbVar6;
    param_1[2] = (long)pbVar6;
                    /* try { // try from 0065e300 to 0075e373 has its CatchHandler @ 0065e1a0 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0065e2d8 with catch @ 0065e304
                        */
    param_1[3] = (long)pbVar6;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0065e208 with catch @ 0065e308
                        */
  }
  else {
    pbVar6 = (byte *)param_1[0x13];
    param_1[1] = (long)pbVar6;
    param_1[2] = (long)pbVar6;
    param_1[3] = (long)(pbVar6 + sVar5);
  }
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  *(undefined1 *)((long)param_1 + 0xa9) = 1;
LAB_0065e08c:
                    /* try { // try from 0065e0a0 to 0075e0a3 has its CatchHandler @ 0065e0ec */
                    /* try { // try from 0065e0a4 to 0075e14b has its CatchHandler @ 0065dfec */
  return (ulong)*pbVar6;
LAB_0065e054:
  if ((long)sVar5 < 1) {
    if (!bVar1) {
      if (iVar3 == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_00665ad8("basic_filebuf::underflow invalid byte sequence in file");
      }
LAB_0065e2e8:
                    /* WARNING: Subroutine does not return */
      FUN_00665ad8("basic_filebuf::underflow error reading the file");
    }
LAB_0065dffc:
    lVar9 = param_1[0x13];
    param_1[1] = lVar9;
    param_1[2] = lVar9;
    param_1[3] = lVar9;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[6] = 0;
    *(undefined1 *)((long)param_1 + 0xa9) = 0;
    if (iVar3 != 1) {
      return 0xffffffff;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00665ad8("basic_filebuf::underflow incomplete character in file");
  }
  goto LAB_0065e05c;
}


