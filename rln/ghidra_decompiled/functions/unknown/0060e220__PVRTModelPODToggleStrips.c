/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0060e220
 * Function: PVRTModelPODToggleStrips
 * Signature: undefined __cdecl PVRTModelPODToggleStrips(SPODMesh * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTModelPODToggleStrips(SPODMesh&) */

void PVRTModelPODToggleStrips(SPODMesh *param_1)

{
  void *pvVar1;
  SPODMesh *pSVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  bool bVar8;
  size_t __nmemb;
  void *pvVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  SPODMesh *pSVar13;
  long lVar14;
  size_t __n;
  ulong uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  void *__ptr;
  int iVar19;
  int local_74;
  undefined8 local_70;
  long local_68;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0060e1bc with catch @ 0060e234
                        */
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
                    /* try { // try from 0060e254 to 0070e27b has its CatchHandler @ 0060e284 */
  pSVar13 = param_1 + 4;
  uVar16 = *(uint *)pSVar13;
  if (uVar16 == 0) goto LAB_0060e3dc;
  uVar5 = *(undefined4 *)(param_1 + 0x10);
                    /* try { // try from 0060e27c to 0070e287 has its CatchHandler @ 0060e0f4 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0060e254 with catch @ 0060e284
                        */
  lVar14 = 0xc;
  __n = 4;
  switch(uVar5) {
  case 1:
  case 2:
    goto switchD_0060e290_caseD_1;
  case 3:
  case 0xb:
  case 0xc:
    __n = 2;
                    /* try { // try from 0060e298 to 0070e347 has its CatchHandler @ 0060e298
                       catch() { ... } // from try @ 0060e298 with catch @ 0060e298
                       catch() { ... } // from try @ 0060e394 with catch @ 0060e298 */
    break;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    goto switchD_0060e290_caseD_4;
  case 10:
  case 0xd:
  case 0xe:
    __n = 1;
    break;
  default:
    __n = 0;
  }
  switch(uVar5) {
  case 3:
  case 0xb:
  case 0xc:
    lVar14 = 6;
    break;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
switchD_0060e290_caseD_4:
    lVar14 = 0xc;
    break;
  case 10:
  case 0xd:
  case 0xe:
    lVar14 = 3;
    break;
  default:
    lVar14 = 0;
  }
switchD_0060e290_caseD_1:
  uVar4 = *(uint *)(param_1 + 0x14);
  iVar11 = *(int *)(param_1 + 0x18);
  __ptr = *(void **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  __nmemb = lVar14 * (ulong)uVar4 * (ulong)uVar16;
  if (__nmemb != 0) {
    pvVar9 = calloc(__nmemb,1);
    *(void **)(param_1 + 0x20) = pvVar9;
  }
  uVar10 = *(uint *)(param_1 + 0x30);
  if (uVar10 == 0) {
    pvVar9 = calloc((ulong)uVar16,4);
    iVar12 = *(int *)(param_1 + 0x10c);
    *(void **)(param_1 + 0x28) = pvVar9;
    *(undefined4 *)(param_1 + 0x30) = 0;
    iVar3 = iVar12;
    if (iVar12 == 0) {
      iVar3 = 1;
    }
    if (0 < iVar3) {
                    /* catch() { ... } // from try @ 0060e348 with catch @ 0060e434 */
                    /* catch() { ... } // from try @ 0060e35c with catch @ 0060e438 */
      lVar14 = 0;
      iVar17 = 0;
      do {
        local_70 = 0;
        local_74 = 0;
        if (iVar12 == 0) {
          uVar16 = *(uint *)pSVar13;
          pvVar1 = __ptr;
        }
        else {
          iVar19 = *(int *)(*(long *)(param_1 + 0x100) + lVar14 * 4);
          pSVar2 = (SPODMesh *)(*(long *)(param_1 + 0x100) + (lVar14 + 1) * 4);
          if ((long)iVar12 <= lVar14 + 1) {
            pSVar2 = pSVar13;
          }
          uVar16 = *(uint *)pSVar2 - iVar19;
          pvVar1 = (void *)((long)__ptr + (ulong)(uint)(iVar11 * 3 * iVar19));
        }
        if (uVar16 != 0) {
          uVar15 = (ulong)uVar16;
          uVar16 = 0;
          iVar12 = 0;
          iVar19 = 0;
          do {
            iVar7 = local_74;
            uVar15 = uVar15 - 1;
            PVRTVertexRead((long)&local_70 + 4,(long)pvVar1 + (ulong)uVar16,uVar5);
            PVRTVertexRead(&local_70,(long)pvVar1 + (ulong)(iVar11 + uVar16),uVar5);
            PVRTVertexRead(&local_74,(long)pvVar1 + (ulong)(iVar11 * 2 + uVar16),uVar5);
            uVar4 = *(uint *)(*(long *)(param_1 + 0x28) + (ulong)*(uint *)(param_1 + 0x30) * 4);
            if (uVar4 == 0) {
LAB_0060e5a0:
              PVRTVertexWrite(*(long *)(param_1 + 0x20) +
                              (ulong)(uint)(*(int *)(param_1 + 0x18) * iVar17),
                              *(undefined4 *)(param_1 + 0x10),local_70._4_4_);
              PVRTVertexWrite(*(long *)(param_1 + 0x20) +
                              (ulong)(uint)(*(int *)(param_1 + 0x18) * (iVar17 + 1)),
                              *(undefined4 *)(param_1 + 0x10),local_70 & 0xffffffff);
                    /* try { // try from 0060e5e4 to 0070e5f3 has its CatchHandler @ 0060e6dc */
              PVRTVertexWrite(*(long *)(param_1 + 0x20) +
                              (ulong)(uint)(*(int *)(param_1 + 0x18) * (iVar17 + 2)),
                              *(undefined4 *)(param_1 + 0x10),local_74);
              iVar12 = 3;
            }
            else {
              if ((uVar4 & 1) == 0) {
                    /* try { // try from 0060e544 to 0070e547 has its CatchHandler @ 0060e7cc */
                bVar8 = iVar7 == (int)local_70;
                iVar7 = iVar19;
                    /* try { // try from 0060e548 to 0070e573 has its CatchHandler @ 0060e4d0 */
                if (bVar8) goto joined_r0x0060e550;
LAB_0060e598:
                    /* try { // try from 0060e59c to 0070e5c3 has its CatchHandler @ 0060e6c8 */
                *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) + 1;
                goto LAB_0060e5a0;
              }
              if (iVar12 != (int)local_70) goto LAB_0060e598;
joined_r0x0060e550:
              if (iVar7 != local_70._4_4_) goto LAB_0060e598;
                    /* try { // try from 0060e574 to 0070e57b has its CatchHandler @ 0060e72c */
              PVRTVertexWrite(*(long *)(param_1 + 0x20) +
                              (ulong)(uint)(*(int *)(param_1 + 0x18) * iVar17),
                              *(undefined4 *)(param_1 + 0x10),local_74);
              iVar12 = 1;
            }
            pvVar9 = *(void **)(param_1 + 0x28);
            iVar17 = iVar12 + iVar17;
                    /* try { // try from 0060e614 to 0070e63b has its CatchHandler @ 0060e6c4 */
            *(int *)((long)pvVar9 + (ulong)*(uint *)(param_1 + 0x30) * 4) =
                 *(int *)((long)pvVar9 + (ulong)*(uint *)(param_1 + 0x30) * 4) + 1;
            if (uVar15 == 0) break;
                    /* try { // try from 0060e4d0 to 0070e543 has its CatchHandler @ 0060e4d0
                       catch() { ... } // from try @ 0060e4d0 with catch @ 0060e4d0
                       catch() { ... } // from try @ 0060e548 with catch @ 0060e4d0
                       catch() { ... } // from try @ 0060e654 with catch @ 0060e4d0
                       catch() { ... } // from try @ 0060e7c0 with catch @ 0060e4d0 */
            uVar16 = uVar16 + iVar11 * 3;
            iVar12 = (int)local_70;
            iVar19 = local_70._4_4_;
          } while( true );
        }
        lVar14 = lVar14 + 1;
        if (iVar3 <= lVar14) goto code_r0x0060e634;
        iVar12 = *(int *)(param_1 + 0x10c);
      } while( true );
    }
                    /* try { // try from 0060e64c to 0070e653 has its CatchHandler @ 0060e6cc */
    iVar17 = 0;
    goto LAB_0060e650;
  }
  pvVar9 = *(void **)(param_1 + 0x28);
  uVar15 = 0;
  uVar16 = 0;
  uVar18 = 0;
  do {
    if (*(int *)((long)pvVar9 + uVar15 * 4) != 0) {
      uVar10 = 0;
      do {
        pvVar9 = (void *)(*(long *)(param_1 + 0x20) + __n * uVar16);
        if (uVar10 == 0) {
          memcpy(pvVar9,(void *)((long)__ptr + __n * uVar18),lVar14 * (ulong)uVar4);
          iVar11 = 3;
        }
        else {
          memcpy(pvVar9,(void *)((long)__ptr + __n * (uVar18 - 1)),__n);
                    /* try { // try from 0060e348 to 0070e35b has its CatchHandler @ 0060e434 */
          memcpy((void *)(*(long *)(param_1 + 0x20) + __n * (uVar16 + 1)),
                 (void *)((long)__ptr + __n * (uVar18 - 2)),__n);
                    /* try { // try from 0060e35c to 0070e393 has its CatchHandler @ 0060e438 */
          memcpy((void *)(*(long *)(param_1 + 0x20) + __n * (uVar16 + 2)),
                 (void *)((long)__ptr + __n * uVar18),__n);
          iVar11 = 1;
        }
        pvVar9 = *(void **)(param_1 + 0x28);
                    /* try { // try from 0060e394 to 0070e4a7 has its CatchHandler @ 0060e298 */
        uVar10 = uVar10 + 1;
        uVar18 = iVar11 + uVar18;
        uVar16 = uVar16 + 3;
      } while (uVar10 < *(uint *)((long)pvVar9 + uVar15 * 4));
      uVar10 = *(uint *)(param_1 + 0x30);
    }
    uVar15 = uVar15 + 1;
  } while (uVar15 < uVar10);
  if (pvVar9 != (void *)0x0) {
    free(pvVar9);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  goto joined_r0x0060e680;
code_r0x0060e634:
  if (*(int *)((long)pvVar9 + (ulong)*(uint *)(param_1 + 0x30) * 4) != 0) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) + 1;
  }
LAB_0060e650:
                    /* try { // try from 0060e654 to 0070e6ff has its CatchHandler @ 0060e4d0 */
  pvVar9 = realloc(*(void **)(param_1 + 0x20),__n * (long)iVar17);
  *(void **)(param_1 + 0x20) = pvVar9;
  pvVar9 = realloc(*(void **)(param_1 + 0x28),(ulong)*(uint *)(param_1 + 0x30) << 2);
  *(void **)(param_1 + 0x28) = pvVar9;
joined_r0x0060e680:
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
LAB_0060e3dc:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


