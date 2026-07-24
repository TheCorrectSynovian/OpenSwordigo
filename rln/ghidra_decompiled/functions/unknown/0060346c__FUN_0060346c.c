/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0060346c
 * Function: FUN_0060346c
 * Signature: undefined FUN_0060346c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


bool FUN_0060346c(CPVRTModelPOD *param_1,long *param_2,long param_3,ulong param_4,long param_5,
                 uint param_6)

{
  SPODScene *pSVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  ulong uVar15;
  char *__s1;
  uint uVar16;
  uint local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  memset(param_1,0,0x88);
  bVar11 = param_3 != 0;
  bVar12 = param_5 != 0;
  bVar4 = param_3 == 0;
  bVar5 = param_5 == 0;
  pSVar1 = (SPODScene *)0x0;
  if (bVar4 && bVar5) {
    pSVar1 = (SPODScene *)param_1;
  }
                    /* catch() { ... } // from try @ 00602c20 with catch @ 006034e4 */
                    /* catch() { ... } // from try @ 00602874 with catch @ 006034e8 */
                    /* catch() { ... } // from try @ 00602598 with catch @ 006034ec */
                    /* catch() { ... } // from try @ 00602498 with catch @ 006034f0 */
                    /* catch() { ... } // from try @ 00602474 with catch @ 006034f4 */
  uVar15 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
  bVar8 = 0;
                    /* catch() { ... } // from try @ 0060303c with catch @ 00603504 */
  bVar7 = 0;
                    /* catch() { ... } // from try @ 00602de4 with catch @ 00603508 */
  if ((uVar15 & 1) == 0) {
LAB_00603740:
    if (bVar4 && bVar5) {
LAB_00603748:
      if (((byte)pSVar1[0x7c] & 1) != 0) {
                    /* catch() { ... } // from try @ 00602fe0 with catch @ 00603754 */
        PVRTModelPODToggleFixedPoint(pSVar1);
      }
LAB_00603758:
                    /* catch() { ... } // from try @ 00602d74 with catch @ 00603758 */
                    /* catch() { ... } // from try @ 00602d20 with catch @ 0060375c */
      if (!(bool)(bVar8 & bVar7)) {
LAB_00603784:
        bVar13 = true;
        goto LAB_00603788;
      }
    }
LAB_00603764:
    iVar14 = CPVRTModelPOD::InitImpl(param_1);
    bVar13 = iVar14 != 0;
LAB_00603788:
    if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* catch() { ... } // from try @ 00602c48 with catch @ 006037ac */
                    /* catch() { ... } // from try @ 00602bec with catch @ 006037b0 */
      return bVar13;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  bVar7 = 0;
  bVar8 = 0;
LAB_00603524:
  uVar9 = local_6c;
                    /* try { // try from 0060352c to 007042d7 has its CatchHandler @ 00604478 */
  uVar16 = local_6c >> 0x10;
  uVar2 = local_6c >> 8;
  uVar15 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
  uVar10 = local_6c;
  if ((uVar15 & 1) == 0) {
    if (!bVar4 || !bVar5) goto LAB_00603764;
    goto LAB_00603748;
  }
                    /* catch() { ... } // from try @ 00602d4c with catch @ 00603558 */
                    /* catch() { ... } // from try @ 0060295c with catch @ 0060355c */
  uVar2 = uVar9 & 0xff000000 | (uVar16 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 | uVar9 & 0xff;
  uVar16 = local_6c;
  bVar13 = bVar11;
  bVar6 = bVar12;
  switch(uVar2) {
  case 1000:
    if (local_6c == 0xb) {
                    /* catch() { ... } // from try @ 00602b2c with catch @ 006036b4 */
      bVar13 = true;
      __s1 = calloc(0xb,1);
      if (__s1 != (char *)0x0) {
        uVar15 = (**(code **)(*param_2 + 0x10))(param_2,__s1,0xb);
        if (((uVar15 & 1) != 0) && (iVar14 = strcmp(__s1,"AB.POD.2.0"), iVar14 == 0)) {
          free(__s1);
                    /* catch() { ... } // from try @ 00603010 with catch @ 00603704 */
          uVar15 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
          bVar8 = 1;
          goto joined_r0x00603680;
        }
        goto LAB_00603784;
      }
      goto LAB_00603788;
    }
    goto LAB_00603784;
  case 0x3e9:
    if (pSVar1 != (SPODScene *)0x0) {
      uVar15 = FUN_00610538(pSVar1,param_2);
      bVar7 = 1;
      if ((uVar15 & 1) != 0) goto LAB_00603668;
      goto LAB_00603784;
    }
    goto LAB_00603668;
  case 0x3ea:
    if (bVar11) {
      uVar16 = (uint)param_4;
      uVar2 = local_6c;
      if (uVar16 <= local_6c) {
        uVar2 = uVar16;
      }
      uVar15 = (**(code **)(*param_2 + 0x10))(param_2,param_3,uVar2);
                    /* catch() { ... } // from try @ 006028d8 with catch @ 006035ac */
      if ((uVar15 & 1) == 0) goto LAB_00603784;
                    /* catch() { ... } // from try @ 00602700 with catch @ 006035b0 */
      bVar11 = false;
LAB_00603624:
      uVar16 = uVar10 - uVar16;
      if (uVar10 <= param_4) {
        uVar16 = 0;
      }
      bVar13 = bVar11;
      bVar6 = bVar12;
      if (bVar11 || bVar4 && bVar5) break;
    }
    else {
      bVar11 = false;
      bVar13 = false;
      if (bVar4 && bVar5) break;
    }
LAB_006035e4:
    bVar13 = bVar11;
    bVar6 = bVar12;
    if (!bVar12) goto LAB_00603764;
    break;
  case 0x3eb:
    if (bVar12) {
                    /* catch() { ... } // from try @ 00602630 with catch @ 00603600 */
                    /* catch() { ... } // from try @ 006023e4 with catch @ 00603604 */
      if (param_6 <= local_6c) {
        uVar16 = param_6;
      }
      uVar15 = (**(code **)(*param_2 + 0x10))(param_2,param_5,uVar16);
      if ((uVar15 & 1) != 0) {
        bVar12 = false;
        uVar16 = param_6;
        goto LAB_00603624;
      }
      goto LAB_00603784;
    }
    bVar12 = false;
    bVar6 = false;
    if (!bVar11 && (!bVar4 || !bVar5)) goto LAB_006035e4;
    break;
  default:
    if (uVar2 == 0x800003e9) goto LAB_00603758;
    if (uVar2 == 0xe8030000) {
      PVRTErrorOutputDebug("Error: Endianness mismatch between the .pod file and the platform.\n");
      goto LAB_00603784;
    }
    if (!bVar11 && (!bVar4 || !bVar5)) goto LAB_006035e4;
  }
                    /* catch() { ... } // from try @ 006022ec with catch @ 00603654 */
                    /* catch() { ... } // from try @ 00602290 with catch @ 0060365c */
  uVar15 = (**(code **)(*param_2 + 0x18))(param_2,uVar16);
                    /* catch() { ... } // from try @ 00602ebc with catch @ 00603664 */
  bVar11 = bVar13;
  bVar12 = bVar6;
  if ((uVar15 & 1) == 0) goto LAB_00603784;
LAB_00603668:
  uVar15 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
joined_r0x00603680:
  if ((uVar15 & 1) == 0) goto LAB_00603740;
  goto LAB_00603524;
}


