/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065e3d8
 * Function: FUN_0065e3d8
 * Signature: undefined FUN_0065e3d8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_0065e3d8(long *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  size_t sVar5;
  void *__dest;
  uint *puVar6;
  long lVar7;
  uint *puVar8;
  wchar_t *__s1;
  ulong uVar9;
  size_t sVar10;
  ulong uVar11;
  ulong uVar12;
  wchar_t *local_8;
  
  if ((*(uint *)(param_1 + 0xf) >> 3 & 1) == 0) {
    return 0xffffffff;
  }
  if (*(char *)((long)param_1 + 0xaa) == '\0') {
    puVar4 = (uint *)param_1[2];
  }
  else {
    uVar11 = (**(code **)(*param_1 + 0x68))(param_1,0xffffffff);
    if ((int)uVar11 == -1) {
      return uVar11;
    }
    puVar4 = (uint *)param_1[0x13];
    param_1[1] = (long)puVar4;
    param_1[2] = (long)puVar4;
    param_1[3] = (long)puVar4;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[6] = 0;
    *(undefined1 *)((long)param_1 + 0xaa) = 0;
  }
  if ((char)param_1[0x18] == '\0') {
    puVar6 = (uint *)param_1[3];
  }
  else {
    puVar8 = (uint *)param_1[1];
    puVar6 = (uint *)param_1[0x17];
    param_1[1] = param_1[0x13];
    puVar4 = (uint *)(param_1[0x16] + (ulong)(puVar8 != puVar4) * 4);
    param_1[3] = (long)puVar6;
    param_1[0x16] = (long)puVar4;
    param_1[2] = (long)puVar4;
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  if (puVar4 < puVar6) goto LAB_0065e504;
  if ((ulong)param_1[0x14] < 2) {
    uVar11 = 1;
  }
  else {
    uVar11 = param_1[0x14] - 1;
  }
  if ((long *)param_1[0x19] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_006652c8();
  }
  cVar2 = (**(code **)(*(long *)param_1[0x19] + 0x30))();
  if (cVar2 == '\0') {
    iVar3 = (**(code **)(*(long *)param_1[0x19] + 0x28))((long *)param_1[0x19]);
    if (iVar3 < 1) {
                    /* try { // try from 0065e818 to 0075e847 has its CatchHandler @ 0065e7fc */
      iVar3 = (**(code **)(*(long *)param_1[0x19] + 0x40))((long *)param_1[0x19]);
      uVar12 = (uVar11 - 1) + (long)iVar3;
      uVar9 = uVar11;
                    /* catch() { ... } // from try @ 0065e810 with catch @ 0065e834 */
    }
    else {
      uVar12 = (long)iVar3 * uVar11;
      uVar9 = uVar12;
    }
    sVar5 = param_1[0x1d] - param_1[0x1c];
    lVar7 = uVar9 - sVar5;
    if ((long)uVar9 <= (long)sVar5) {
      lVar7 = 0;
    }
    if (((*(char *)((long)param_1 + 0xa9) != '\0') && (param_1[3] == param_1[1])) && (sVar5 != 0)) {
      lVar7 = 0;
    }
    if (param_1[0x1b] < (long)uVar12) {
                    /* try { // try from 0065e7c0 to 0075e7c7 has its CatchHandler @ 0065e7d4 */
      __dest = operator_new__(uVar12);
                    /* try { // try from 0065e7d0 to 0075e7d3 has its CatchHandler @ 0065e7e4 */
      sVar10 = 0;
      if (sVar5 != 0) {
        memcpy(__dest,(void *)param_1[0x1c],sVar5);
        sVar10 = sVar5;
      }
                    /* catch() { ... } // from try @ 0065e7c0 with catch @ 0065e7d4 */
      if ((void *)param_1[0x1a] != (void *)0x0) {
        operator_delete__((void *)param_1[0x1a]);
      }
      param_1[0x1a] = (long)__dest;
                    /* catch() { ... } // from try @ 0065e7d0 with catch @ 0065e7e4 */
                    /* try { // try from 0065e7e8 to 0075e7eb has its CatchHandler @ 0065e7f4 */
      param_1[0x1b] = uVar12;
                    /* try { // try from 0065e7ec to 0075e7f7 has its CatchHandler @ 0065e768 */
    }
    else if (sVar5 == 0) {
      __dest = (void *)param_1[0x1a];
      sVar10 = 0;
    }
    else {
                    /* catch() { ... } // from try @ 0065e7e8 with catch @ 0065e7f4 */
                    /* catch() { ... } // from try @ 0065e818 with catch @ 0065e7fc */
      memmove((void *)param_1[0x1a],(void *)param_1[0x1c],sVar5);
      __dest = (void *)param_1[0x1a];
      sVar10 = sVar5;
    }
    uVar12 = (long)__dest + sVar10;
    param_1[0x1c] = (long)__dest;
    param_1[0x1d] = uVar12;
    *(undefined8 *)((long)param_1 + 0x8c) = *(undefined8 *)((long)param_1 + 0x84);
    iVar3 = 0;
    sVar5 = 0;
    if (0 < lVar7) goto LAB_0065e6bc;
                    /* try { // try from 0065e758 to 0075e75b has its CatchHandler @ 0065e764 */
    bVar1 = false;
                    /* try { // try from 0065e75c to 0075e767 has its CatchHandler @ 0065e6ec */
    do {
      __s1 = (wchar_t *)param_1[1];
      local_8 = __s1;
      if ((ulong)param_1[0x1c] < uVar12) {
                    /* try { // try from 0065e70c to 0075e713 has its CatchHandler @ 0065e744 */
        iVar3 = (**(code **)(*(long *)param_1[0x19] + 0x20))
                          ((long *)param_1[0x19],(long)param_1 + 0x84,param_1[0x1c],uVar12,
                           param_1 + 0x1c,__s1,__s1 + uVar11,&local_8);
                    /* try { // try from 0065e714 to 0075e74f has its CatchHandler @ 0065e6ec */
        __s1 = (wchar_t *)param_1[1];
        if (iVar3 == 3) goto LAB_0065e724;
LAB_0065e690:
        sVar5 = (long)local_8 - (long)__s1 >> 2;
        if (iVar3 == 2) goto LAB_0065e4cc;
      }
      else {
        if (iVar3 != 3) goto LAB_0065e690;
LAB_0065e724:
        uVar12 = param_1[0x1d] - param_1[0x1a];
        sVar5 = uVar11;
        if (uVar12 < uVar11) {
          sVar5 = uVar12;
        }
                    /* catch() { ... } // from try @ 0065e70c with catch @ 0065e744 */
        wmemcpy(__s1,(wchar_t *)param_1[0x1a],sVar5);
                    /* try { // try from 0065e750 to 0075e753 has its CatchHandler @ 0065e754 */
        param_1[0x1c] = param_1[0x1a] + sVar5;
                    /* catch() { ... } // from try @ 0065e750 with catch @ 0065e754 */
      }
      if ((sVar5 == 0) <= bVar1) goto LAB_0065e4cc;
      uVar12 = param_1[0x1d];
      lVar7 = 1;
LAB_0065e6bc:
      if (param_1[0x1b] < (long)((uVar12 - param_1[0x1a]) + lVar7)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0065e9a4 with catch @ 0065e850
                       catch(type#1 @ 00000000) { ... } // from try @ 0065ec20 with catch @ 0065e850
                        */
                    /* WARNING: Subroutine does not return */
        FUN_00665ad8("basic_filebuf::underflow codecvt::max_length() is not valid");
      }
      lVar7 = FUN_0061f714(param_1 + 0xd,uVar12,lVar7);
      if (lVar7 == 0) {
        bVar1 = true;
                    /* try { // try from 0065e6ec to 0075e70b has its CatchHandler @ 0065e6ec
                       catch() { ... } // from try @ 0065e6ec with catch @ 0065e6ec
                       catch() { ... } // from try @ 0065e714 with catch @ 0065e6ec
                       catch() { ... } // from try @ 0065e75c with catch @ 0065e6ec */
      }
      else {
        bVar1 = false;
        if (lVar7 == -1) goto LAB_0065e4cc;
      }
      uVar12 = param_1[0x1d] + lVar7;
      param_1[0x1d] = uVar12;
    } while( true );
  }
  sVar5 = FUN_0061f714(param_1 + 0xd,param_1[1],uVar11);
  if (sVar5 == 0) {
    iVar3 = 0;
    if ((*(uint *)(param_1 + 0xf) >> 4 & 1) != 0) {
      lVar7 = param_1[0x13];
      param_1[1] = lVar7;
      param_1[2] = lVar7;
      param_1[3] = lVar7;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[6] = 0;
                    /* catch() { ... } // from try @ 0065e780 with catch @ 0065e7b8 */
      *(undefined1 *)((long)param_1 + 0xa9) = 0;
      return 0xffffffff;
    }
    goto LAB_0065e474;
  }
  if ((long)sVar5 < 1) goto LAB_0065e76c;
LAB_0065e4d4:
  if ((*(uint *)(param_1 + 0xf) >> 3 & 1) == 0) {
    puVar4 = (uint *)param_1[0x13];
    param_1[1] = (long)puVar4;
                    /* try { // try from 0065e780 to 0075e787 has its CatchHandler @ 0065e7b8 */
    param_1[2] = (long)puVar4;
                    /* try { // try from 0065e788 to 0075e7bf has its CatchHandler @ 0065e768 */
    param_1[3] = (long)puVar4;
  }
  else {
    puVar4 = (uint *)param_1[0x13];
    param_1[1] = (long)puVar4;
    param_1[2] = (long)puVar4;
    param_1[3] = (long)(puVar4 + sVar5);
  }
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  *(undefined1 *)((long)param_1 + 0xa9) = 1;
LAB_0065e504:
  return (ulong)*puVar4;
LAB_0065e4cc:
  if ((long)sVar5 < 1) {
    if (!bVar1) {
                    /* catch() { ... } // from try @ 0065e758 with catch @ 0065e764 */
                    /* catch() { ... } // from try @ 0065e788 with catch @ 0065e768
                       catch() { ... } // from try @ 0065e7ec with catch @ 0065e768 */
      if (iVar3 == 2) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0065e810 to 0075e817 has its CatchHandler @ 0065e834 */
        FUN_00665ad8("basic_filebuf::underflow invalid byte sequence in file");
      }
LAB_0065e76c:
                    /* WARNING: Subroutine does not return */
      FUN_00665ad8("basic_filebuf::underflow error reading the file");
    }
LAB_0065e474:
    lVar7 = param_1[0x13];
    param_1[1] = lVar7;
    param_1[2] = lVar7;
    param_1[3] = lVar7;
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
  goto LAB_0065e4d4;
}


