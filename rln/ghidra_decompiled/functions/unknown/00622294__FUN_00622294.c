/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00622294
 * Function: FUN_00622294
 * Signature: undefined FUN_00622294(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00622294(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  
  puVar4 = PTR_DAT_007e59c8;
  if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
    iVar11 = *(int *)PTR_DAT_007e59c8;
    *(int *)PTR_DAT_007e59c8 = iVar11 + 1;
  }
  else {
    do {
      iVar11 = *(int *)puVar4;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar7) {
        *(int *)puVar4 = iVar11 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  puVar3 = PTR_DAT_007e7910;
  puVar4 = PTR_DAT_007e5338;
  if (iVar11 != 0) {
                    /* catch() { ... } // from try @ 00621684 with catch @ 006222e0 */
                    /* catch() { ... } // from try @ 00621640 with catch @ 006222e4 */
    return;
  }
                    /* catch() { ... } // from try @ 00621618 with catch @ 00622314 */
                    /* catch() { ... } // from try @ 006215dc with catch @ 00622318 */
  puVar1 = PTR_DAT_007e5338 + 0x38;
  puVar2 = PTR_DAT_007e6a48 + 0x10;
  *(undefined8 *)(PTR_DAT_007e5338 + 8) = 0;
  *(undefined **)puVar4 = puVar2;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(undefined8 *)(puVar4 + 0x20) = 0;
  *(undefined8 *)(puVar4 + 0x28) = 0;
  *(undefined8 *)(puVar4 + 0x30) = 0;
  *puVar3 = 1;
  FUN_0063db28(puVar1);
  puVar9 = PTR___sF_007e5cd0;
  puVar8 = PTR_DAT_007e57d8;
                    /* catch() { ... } // from try @ 00621590 with catch @ 00622348 */
  puVar3 = PTR_DAT_007e57d8 + 0x38;
  *(undefined4 *)(puVar4 + 0x48) = 0xffffffff;
  puVar1 = PTR_DAT_007e47d0;
  *(undefined **)puVar8 = puVar2;
  *(undefined8 *)(puVar8 + 8) = 0;
                    /* catch() { ... } // from try @ 006214dc with catch @ 00622378 */
  puVar1 = puVar1 + 0x10;
                    /* catch() { ... } // from try @ 006214d4 with catch @ 0062237c */
  *(undefined8 *)(puVar8 + 0x10) = 0;
                    /* catch() { ... } // from try @ 00621430 with catch @ 00622380 */
  *(undefined8 *)(puVar8 + 0x18) = 0;
                    /* catch() { ... } // from try @ 00621428 with catch @ 00622384 */
  *(undefined8 *)(puVar8 + 0x20) = 0;
                    /* catch() { ... } // from try @ 00621384 with catch @ 00622388 */
  *(undefined8 *)(puVar8 + 0x28) = 0;
                    /* catch() { ... } // from try @ 0062137c with catch @ 0062238c */
  *(undefined8 *)(puVar8 + 0x30) = 0;
                    /* catch() { ... } // from try @ 006212d8 with catch @ 00622390 */
  *(undefined **)(puVar4 + 0x40) = puVar9 + 0x98;
                    /* catch() { ... } // from try @ 006212d0 with catch @ 00622394 */
  *(undefined **)puVar4 = puVar1;
                    /* catch() { ... } // from try @ 0062122c with catch @ 00622398 */
  FUN_0063db28(puVar3);
  puVar10 = PTR_DAT_007e6ef8;
                    /* catch() { ... } // from try @ 00621224 with catch @ 0062239c */
                    /* catch() { ... } // from try @ 00621180 with catch @ 006223a0 */
                    /* catch() { ... } // from try @ 00621178 with catch @ 006223a4 */
  puVar3 = PTR_DAT_007e6ef8 + 0x38;
                    /* catch() { ... } // from try @ 006210d4 with catch @ 006223a8 */
  *(undefined **)PTR_DAT_007e6ef8 = puVar2;
                    /* catch() { ... } // from try @ 006210cc with catch @ 006223ac */
  *(undefined8 *)(puVar10 + 8) = 0;
                    /* catch() { ... } // from try @ 00621028 with catch @ 006223b0 */
  *(undefined8 *)(puVar10 + 0x10) = 0;
                    /* catch() { ... } // from try @ 00621020 with catch @ 006223b4 */
  *(undefined8 *)(puVar10 + 0x18) = 0;
                    /* catch() { ... } // from try @ 00620f7c with catch @ 006223b8 */
  *(undefined8 *)(puVar10 + 0x20) = 0;
                    /* catch() { ... } // from try @ 00620f74 with catch @ 006223bc */
  *(undefined8 *)(puVar10 + 0x28) = 0;
                    /* catch() { ... } // from try @ 00620ed0 with catch @ 006223c0 */
  *(undefined8 *)(puVar10 + 0x30) = 0;
                    /* catch() { ... } // from try @ 00620ec8 with catch @ 006223c4 */
  *(undefined **)puVar8 = puVar1;
                    /* catch() { ... } // from try @ 00620e24 with catch @ 006223c8 */
  *(undefined **)(puVar8 + 0x40) = puVar9;
                    /* catch() { ... } // from try @ 00620e1c with catch @ 006223cc */
  *(undefined4 *)(puVar8 + 0x48) = 0xffffffff;
                    /* catch() { ... } // from try @ 00620d78 with catch @ 006223d0 */
  FUN_0063db28(puVar3);
  puVar2 = PTR_DAT_007e7220;
                    /* catch() { ... } // from try @ 00620d70 with catch @ 006223d4 */
                    /* catch() { ... } // from try @ 00620ccc with catch @ 006223d8 */
                    /* catch() { ... } // from try @ 00620cc4 with catch @ 006223dc */
                    /* catch() { ... } // from try @ 00620c20 with catch @ 006223e0 */
  *(undefined **)(puVar10 + 0x40) = puVar9 + 0x130;
                    /* catch() { ... } // from try @ 00620c18 with catch @ 006223e4 */
                    /* catch() { ... } // from try @ 00620b74 with catch @ 006223e8 */
  *(undefined **)puVar10 = puVar1;
                    /* catch() { ... } // from try @ 00620b6c with catch @ 006223ec */
                    /* catch() { ... } // from try @ 00620ac8 with catch @ 006223f0 */
                    /* catch() { ... } // from try @ 00620ac0 with catch @ 006223f4 */
  *(undefined4 *)(puVar10 + 0x48) = 0xffffffff;
                    /* catch() { ... } // from try @ 00620a1c with catch @ 006223f8 */
  FUN_00621e3c(puVar2 + 8);
  puVar1 = PTR_DAT_007e5540;
                    /* catch() { ... } // from try @ 00620a14 with catch @ 006223fc */
                    /* catch() { ... } // from try @ 00620968 with catch @ 00622400 */
                    /* catch() { ... } // from try @ 0062095c with catch @ 00622404 */
  puVar3 = PTR_DAT_007e5540 + 0x18;
                    /* catch() { ... } // from try @ 0062180c with catch @ 00622408 */
  *(undefined8 *)(puVar2 + 0xe0) = 0;
  puVar2[0xe8] = 0;
  puVar2[0xe9] = 0;
  *(undefined8 *)(puVar2 + 0xf0) = 0;
  *(undefined8 *)(puVar2 + 0xf8) = 0;
  *(undefined8 *)(puVar2 + 0x100) = 0;
  *(undefined8 *)(puVar2 + 0x108) = 0;
  *(undefined **)(puVar2 + 8) = puVar1 + 0x40;
  *(undefined **)puVar2 = puVar3;
  FUN_006210e8(puVar2 + 8,puVar4);
  puVar1 = PTR_DAT_007e6498;
  puVar4 = PTR_DAT_007e6498 + 0x10;
  FUN_00621e3c(puVar4);
  puVar3 = PTR_DAT_007e57d8;
  *(undefined8 *)(puVar1 + 0xe8) = 0;
  puVar2 = PTR_DAT_007e6e78;
                    /* catch() { ... } // from try @ 0062167c with catch @ 00622468
                       catch() { ... } // from try @ 006218f4 with catch @ 00622468 */
  puVar1[0xf0] = 0;
                    /* catch() { ... } // from try @ 00621638 with catch @ 0062246c
                       catch() { ... } // from try @ 00621678 with catch @ 0062246c */
                    /* catch() { ... } // from try @ 006215d4 with catch @ 00622470
                       catch() { ... } // from try @ 00621614 with catch @ 00622470 */
  puVar1[0xf1] = 0;
                    /* catch() { ... } // from try @ 00621588 with catch @ 00622474
                       catch() { ... } // from try @ 006215c8 with catch @ 00622474 */
  *(undefined8 *)(puVar1 + 0xf8) = 0;
  *(undefined8 *)(puVar1 + 0x100) = 0;
  *(undefined8 *)(puVar1 + 0x108) = 0;
                    /* catch() { ... } // from try @ 006214f0 with catch @ 00622484 */
  *(undefined8 *)(puVar1 + 0x110) = 0;
  *(undefined **)(puVar1 + 0x10) = puVar2 + 0x40;
  *(undefined **)puVar1 = puVar2 + 0x18;
  *(undefined8 *)(puVar1 + 8) = 0;
  FUN_006210e8(puVar4,puVar3);
  puVar2 = PTR_DAT_007e58d0;
  puVar4 = PTR_DAT_007e58d0 + 8;
  FUN_00621e3c(puVar4);
  puVar8 = PTR_DAT_007e6ef8;
  puVar1 = PTR_DAT_007e5540;
  puVar3 = PTR_DAT_007e5540 + 0x18;
                    /* catch() { ... } // from try @ 00621444 with catch @ 006224bc */
  *(undefined8 *)(puVar2 + 0xe0) = 0;
  puVar2[0xe8] = 0;
  puVar2[0xe9] = 0;
  *(undefined8 *)(puVar2 + 0xf0) = 0;
  *(undefined8 *)(puVar2 + 0xf8) = 0;
  *(undefined8 *)(puVar2 + 0x100) = 0;
  *(undefined8 *)(puVar2 + 0x108) = 0;
  *(undefined **)(puVar2 + 8) = puVar1 + 0x40;
  *(undefined **)puVar2 = puVar3;
  FUN_006210e8(puVar4,puVar8);
  puVar2 = PTR_DAT_007e5a58;
  puVar4 = PTR_DAT_007e5a58 + 8;
                    /* catch() { ... } // from try @ 00621398 with catch @ 006224f4 */
  FUN_00621e3c(puVar4);
  puVar8 = PTR_DAT_007e6ef8;
  puVar1 = PTR_DAT_007e5540;
  puVar3 = PTR_DAT_007e5540 + 0x18;
  *(undefined8 *)(puVar2 + 0xe0) = 0;
  puVar2[0xe8] = 0;
  puVar2[0xe9] = 0;
  *(undefined8 *)(puVar2 + 0xf0) = 0;
  *(undefined8 *)(puVar2 + 0xf8) = 0;
  *(undefined8 *)(puVar2 + 0x100) = 0;
  *(undefined8 *)(puVar2 + 0x108) = 0;
                    /* catch() { ... } // from try @ 006212ec with catch @ 0062252c */
  *(undefined **)(puVar2 + 8) = puVar1 + 0x40;
  *(undefined **)puVar2 = puVar3;
  FUN_006210e8(puVar4,puVar8);
  puVar1 = PTR_DAT_007e7220;
  puVar9 = PTR_DAT_007e6190;
  puVar3 = PTR_DAT_007e58d0;
  uVar5 = *(uint *)(PTR_DAT_007e58d0 + 0x20);
                    /* catch() { ... } // from try @ 00621240 with catch @ 00622564 */
  puVar4 = PTR_DAT_007e6338 + 0x10;
  *(undefined **)(PTR_DAT_007e6498 + 0xe8) = PTR_DAT_007e7220;
  *(uint *)(puVar3 + 0x20) = uVar5 | 0x2000;
  *(undefined **)(puVar3 + 0xe0) = puVar1;
  *(undefined **)puVar9 = puVar4;
  *(undefined8 *)(puVar9 + 8) = 0;
  *(undefined8 *)(puVar9 + 0x10) = 0;
  *(undefined8 *)(puVar9 + 0x18) = 0;
  *(undefined8 *)(puVar9 + 0x20) = 0;
  *(undefined8 *)(puVar9 + 0x28) = 0;
  *(undefined8 *)(puVar9 + 0x30) = 0;
                    /* catch() { ... } // from try @ 00621194 with catch @ 0062259c */
  FUN_0063db28(puVar9 + 0x38);
  puVar8 = PTR___sF_007e5cd0;
  puVar2 = PTR_DAT_007e5420;
  puVar3 = PTR_DAT_007e5420 + 0x38;
  *(undefined4 *)(puVar9 + 0x48) = 0xffffffff;
  puVar1 = PTR_DAT_007e7578;
  *(undefined **)puVar2 = puVar4;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar1 = puVar1 + 0x10;
                    /* catch() { ... } // from try @ 006210e8 with catch @ 006225d4 */
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(puVar2 + 0x20) = 0;
  *(undefined8 *)(puVar2 + 0x28) = 0;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  *(undefined **)(puVar9 + 0x40) = puVar8 + 0x98;
  *(undefined **)puVar9 = puVar1;
  FUN_0063db28(puVar3);
  puVar10 = PTR_DAT_007e7f28;
  puVar3 = PTR_DAT_007e7f28 + 0x38;
  *(undefined **)PTR_DAT_007e7f28 = puVar4;
  *(undefined8 *)(puVar10 + 8) = 0;
  *(undefined8 *)(puVar10 + 0x10) = 0;
                    /* catch() { ... } // from try @ 0062103c with catch @ 0062260c */
  *(undefined8 *)(puVar10 + 0x18) = 0;
  *(undefined8 *)(puVar10 + 0x20) = 0;
  *(undefined8 *)(puVar10 + 0x28) = 0;
  *(undefined8 *)(puVar10 + 0x30) = 0;
  *(undefined **)puVar2 = puVar1;
  *(undefined **)(puVar2 + 0x40) = puVar8;
  *(undefined4 *)(puVar2 + 0x48) = 0xffffffff;
  FUN_0063db28(puVar3);
  puVar3 = PTR_DAT_007e5010;
  *(undefined **)(puVar10 + 0x40) = puVar8 + 0x130;
  *(undefined **)puVar10 = puVar1;
                    /* catch() { ... } // from try @ 00620f90 with catch @ 00622644 */
  *(undefined4 *)(puVar10 + 0x48) = 0xffffffff;
  FUN_00621e3c(puVar3 + 8);
  puVar1 = PTR_DAT_007e7818;
  puVar4 = PTR_DAT_007e7818 + 0x18;
  *(undefined8 *)(puVar3 + 0xe0) = 0;
  *(undefined4 *)(puVar3 + 0xe8) = 0;
  puVar3[0xec] = 0;
  *(undefined8 *)(puVar3 + 0xf0) = 0;
                    /* catch() { ... } // from try @ 00620ee4 with catch @ 0062267c */
  *(undefined8 *)(puVar3 + 0xf8) = 0;
  *(undefined8 *)(puVar3 + 0x100) = 0;
  *(undefined8 *)(puVar3 + 0x108) = 0;
  *(undefined **)(puVar3 + 8) = puVar1 + 0x40;
  *(undefined **)puVar3 = puVar4;
  FUN_006219c8(puVar3 + 8,puVar9);
  puVar2 = PTR_DAT_007e7248;
  puVar4 = PTR_DAT_007e7248 + 0x10;
  FUN_00621e3c(puVar4);
  puVar1 = PTR_DAT_007e5420;
                    /* catch() { ... } // from try @ 00620e38 with catch @ 006226b4 */
  *(undefined8 *)(puVar2 + 0xe8) = 0;
  puVar3 = PTR_DAT_007e5190;
  *(undefined4 *)(puVar2 + 0xf0) = 0;
  puVar2[0xf4] = 0;
  *(undefined8 *)(puVar2 + 0xf8) = 0;
  *(undefined8 *)(puVar2 + 0x100) = 0;
  *(undefined8 *)(puVar2 + 0x108) = 0;
  *(undefined8 *)(puVar2 + 0x110) = 0;
  *(undefined **)(puVar2 + 0x10) = puVar3 + 0x40;
  *(undefined **)puVar2 = puVar3 + 0x18;
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* catch() { ... } // from try @ 00620d8c with catch @ 006226ec */
  FUN_006219c8(puVar4,puVar1);
  puVar1 = PTR_DAT_007e4c58;
  puVar4 = PTR_DAT_007e4c58 + 8;
  FUN_00621e3c(puVar4);
  puVar8 = PTR_DAT_007e7f28;
  puVar2 = PTR_DAT_007e7818;
  puVar3 = PTR_DAT_007e7818 + 0x18;
  *(undefined8 *)(puVar1 + 0xe0) = 0;
  *(undefined4 *)(puVar1 + 0xe8) = 0;
  puVar1[0xec] = 0;
                    /* catch() { ... } // from try @ 00620ce0 with catch @ 00622724 */
  *(undefined8 *)(puVar1 + 0xf0) = 0;
  *(undefined8 *)(puVar1 + 0xf8) = 0;
  *(undefined8 *)(puVar1 + 0x100) = 0;
  *(undefined8 *)(puVar1 + 0x108) = 0;
  *(undefined **)(puVar1 + 8) = puVar2 + 0x40;
  *(undefined **)puVar1 = puVar3;
  FUN_006219c8(puVar4,puVar8);
  puVar1 = PTR_DAT_007e6470;
  puVar4 = PTR_DAT_007e6470 + 8;
  FUN_00621e3c(puVar4);
  puVar8 = PTR_DAT_007e7f28;
  puVar2 = PTR_DAT_007e7818;
                    /* catch() { ... } // from try @ 00620c34 with catch @ 0062275c */
  puVar3 = PTR_DAT_007e7818 + 0x18;
  *(undefined8 *)(puVar1 + 0xe0) = 0;
  *(undefined4 *)(puVar1 + 0xe8) = 0;
  puVar1[0xec] = 0;
  *(undefined8 *)(puVar1 + 0xf0) = 0;
  *(undefined8 *)(puVar1 + 0xf8) = 0;
  *(undefined8 *)(puVar1 + 0x100) = 0;
  *(undefined8 *)(puVar1 + 0x108) = 0;
  *(undefined **)(puVar1 + 8) = puVar2 + 0x40;
  *(undefined **)puVar1 = puVar3;
  FUN_006219c8(puVar4,puVar8);
  puVar1 = PTR_DAT_007e5010;
  puVar3 = PTR_pthread_create_007e4e78;
  puVar4 = PTR_DAT_007e4c58;
                    /* catch() { ... } // from try @ 00620b88 with catch @ 00622794 */
  uVar5 = *(uint *)(PTR_DAT_007e4c58 + 0x20);
  *(undefined **)(PTR_DAT_007e7248 + 0xe8) = PTR_DAT_007e5010;
  *(undefined **)(puVar4 + 0xe0) = puVar1;
  *(uint *)(puVar4 + 0x20) = uVar5 | 0x2000;
  puVar4 = PTR_DAT_007e59c8;
  if (puVar3 != (undefined *)0x0) {
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar7) {
        *(int *)puVar4 = *(int *)puVar4 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
                    /* catch() { ... } // from try @ 00620adc with catch @ 006227cc */
    } while (cVar6 != '\0');
    return;
  }
                    /* catch() { ... } // from try @ 00620a30 with catch @ 00622804 */
  *(int *)PTR_DAT_007e59c8 = *(int *)PTR_DAT_007e59c8 + 1;
  return;
}


