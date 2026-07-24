/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00604048
 * Function: CPVRTModelPOD::CopyFromMemory
 * Signature: undefined __thiscall CopyFromMemory(CPVRTModelPOD * this, SPODScene * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTModelPOD::CopyFromMemory(SPODScene const&) */

bool __thiscall CPVRTModelPOD::CopyFromMemory(CPVRTModelPOD *this,SPODScene *param_1)

{
  uint uVar1;
  int iVar2;
  SPODNode *pSVar3;
  SPODMesh *pSVar4;
  void *pvVar5;
  void *__dest;
  undefined8 *puVar6;
  SPODMaterial *pSVar7;
  void *__src;
  undefined8 *puVar8;
  ulong uVar9;
  char *__s;
  long lVar10;
  size_t sVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  Destroy(this);
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(param_1 + 0x78);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
                    /* catch() { ... } // from try @ 00602098 with catch @ 0060408c */
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  uVar1 = *(uint *)(param_1 + 0x48);
  if (uVar1 != 0) {
    pSVar3 = calloc((ulong)uVar1 * 0x60,0x60);
    *(SPODNode **)(this + 0x50) = pSVar3;
    if (pSVar3 != (SPODNode *)0x0) {
      *(uint *)(this + 0x48) = uVar1;
      *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
                    /* catch() { ... } // from try @ 00602030 with catch @ 006040dc */
      PVRTModelPODCopyNode(*(SPODNode **)(param_1 + 0x50),pSVar3,*(int *)(param_1 + 0x78));
                    /* catch() { ... } // from try @ 00601f44 with catch @ 006040ec
                       catch() { ... } // from try @ 0060210c with catch @ 006040ec */
      if (1 < *(uint *)(this + 0x48)) {
        uVar9 = 1;
                    /* catch() { ... } // from try @ 00601f5c with catch @ 006040f4
                       catch() { ... } // from try @ 00602000 with catch @ 006040f4 */
        lVar10 = 0x60;
        do {
          PVRTModelPODCopyNode
                    ((SPODNode *)(*(long *)(param_1 + 0x50) + lVar10),
                     (SPODNode *)(*(long *)(this + 0x50) + lVar10),*(int *)(param_1 + 0x78));
          uVar9 = uVar9 + 1;
          lVar10 = lVar10 + 0x60;
        } while (uVar9 < *(uint *)(this + 0x48));
      }
    }
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 != 0) {
    pSVar4 = calloc((ulong)uVar1 * 0x158,0x158);
    *(SPODMesh **)(this + 0x40) = pSVar4;
    if (pSVar4 != (SPODMesh *)0x0) {
      *(uint *)(this + 0x38) = uVar1;
      PVRTModelPODCopyMesh(*(SPODMesh **)(param_1 + 0x40),pSVar4);
      if (1 < *(uint *)(this + 0x38)) {
        uVar9 = 1;
        lVar10 = 0x158;
        do {
          PVRTModelPODCopyMesh
                    ((SPODMesh *)(*(long *)(param_1 + 0x40) + lVar10),
                     (SPODMesh *)(*(long *)(this + 0x40) + lVar10));
          uVar9 = uVar9 + 1;
          lVar10 = lVar10 + 0x158;
        } while (uVar9 < *(uint *)(this + 0x38));
      }
    }
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 != 0) {
    pvVar5 = calloc((ulong)uVar1 * 0x18,0x18);
    *(void **)(this + 0x20) = pvVar5;
    if (pvVar5 != (void *)0x0) {
      lVar10 = 0;
      uVar9 = 1;
      *(uint *)(this + 0x18) = uVar1;
      do {
        lVar13 = *(long *)(param_1 + 0x20);
        puVar6 = (undefined8 *)((long)pvVar5 + lVar10);
        iVar2 = *(int *)(param_1 + 0x78);
        puVar8 = (undefined8 *)(lVar13 + lVar10);
        uVar15 = puVar8[1];
        uVar14 = *puVar8;
        puVar6[2] = 0;
        puVar6[1] = uVar15;
        *puVar6 = uVar14;
        __src = (void *)puVar8[2];
        if (__src != (void *)0x0) {
          sVar11 = (long)iVar2 << 2;
          if (iVar2 == 0) {
            __dest = (void *)0x0;
          }
          else {
            __dest = calloc(sVar11,4);
            *(void **)((long)pvVar5 + lVar10 + 0x10) = __dest;
            if (__dest == (void *)0x0) goto LAB_00604230;
            __src = *(void **)(lVar13 + lVar10 + 0x10);
          }
          memcpy(__dest,__src,sVar11);
        }
LAB_00604230:
        if (*(uint *)(this + 0x18) <= uVar9) break;
        pvVar5 = *(void **)(this + 0x20);
        lVar10 = lVar10 + 0x18;
        uVar9 = uVar9 + 1;
      } while( true );
    }
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  if (uVar1 != 0) {
    puVar6 = calloc((ulong)uVar1 * 0x28,0x28);
    *(undefined8 **)(this + 0x30) = puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      *(uint *)(this + 0x28) = uVar1;
      puVar8 = *(undefined8 **)(param_1 + 0x30);
      puVar6[4] = puVar8[4];
      uVar14 = puVar8[2];
      puVar6[3] = puVar8[3];
      puVar6[2] = uVar14;
      uVar14 = *puVar8;
      puVar6[1] = puVar8[1];
      *puVar6 = uVar14;
      if (1 < uVar1) {
        uVar9 = 1;
        lVar10 = 0x28;
        do {
          uVar9 = uVar9 + 1;
          puVar6 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar10);
          puVar8 = (undefined8 *)(*(long *)(this + 0x30) + lVar10);
          lVar10 = lVar10 + 0x28;
          puVar8[4] = puVar6[4];
          uVar14 = puVar6[2];
          puVar8[3] = puVar6[3];
          puVar8[2] = uVar14;
          uVar14 = *puVar6;
          puVar8[1] = puVar6[1];
          *puVar8 = uVar14;
        } while (uVar9 < *(uint *)(this + 0x28));
      }
    }
  }
  uVar1 = *(uint *)(param_1 + 0x58);
  uVar9 = (ulong)uVar1;
  if (uVar1 != 0) {
    pvVar5 = calloc(uVar9 << 3,8);
    *(void **)(this + 0x60) = pvVar5;
    if (pvVar5 != (void *)0x0) {
      uVar12 = 0;
      *(uint *)(this + 0x58) = uVar1;
      do {
        lVar10 = *(long *)(param_1 + 0x60);
        __s = *(char **)(lVar10 + uVar12 * 8);
        if (__s != (char *)0x0) {
          lVar13 = *(long *)(this + 0x60);
          sVar11 = strlen(__s);
                    /* try { // try from 00604304 to 0070432b has its CatchHandler @ 00604484 */
          if (sVar11 + 1 == 0) {
            pvVar5 = *(void **)(lVar13 + uVar12 * 8);
          }
          else {
            pvVar5 = calloc(sVar11 + 1,1);
            *(void **)(lVar13 + uVar12 * 8) = pvVar5;
            if (pvVar5 == (void *)0x0) goto LAB_00604348;
            __s = *(char **)(lVar10 + uVar12 * 8);
          }
          sVar11 = strlen(__s);
          memcpy(pvVar5,__s,sVar11 + 1);
          uVar9 = (ulong)*(uint *)(this + 0x58);
        }
LAB_00604348:
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar9);
    }
  }
  uVar1 = *(uint *)(param_1 + 0x68);
  if (uVar1 != 0) {
    pSVar7 = calloc((ulong)uVar1 * 0xb0,0xb0);
                    /* try { // try from 0060436c to 0070439b has its CatchHandler @ 00604478 */
    *(SPODMaterial **)(this + 0x70) = pSVar7;
    if (pSVar7 != (SPODMaterial *)0x0) {
      *(uint *)(this + 0x68) = uVar1;
      PVRTModelPODCopyMaterial(*(SPODMaterial **)(param_1 + 0x70),pSVar7);
      if (1 < *(uint *)(this + 0x68)) {
        uVar9 = 1;
        lVar10 = 0xb0;
        do {
                    /* try { // try from 0060439c to 007044ab has its CatchHandler @ 00601d04 */
          PVRTModelPODCopyMaterial
                    ((SPODMaterial *)(*(long *)(param_1 + 0x70) + lVar10),
                     (SPODMaterial *)(*(long *)(this + 0x70) + lVar10));
          uVar9 = uVar9 + 1;
          lVar10 = lVar10 + 0xb0;
        } while (uVar9 < *(uint *)(this + 0x68));
      }
    }
  }
  iVar2 = InitImpl(this);
  return iVar2 != 0;
}


