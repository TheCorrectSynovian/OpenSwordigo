/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005456d0
 * Function: Caver::Mesh::GetDataStructs
 * Signature: undefined __thiscall GetDataStructs(Mesh * this, MeshData * * param_1, int * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::Mesh::GetDataStructs(Caver::MeshData**, int*) */

void __thiscall Caver::Mesh::GetDataStructs(Mesh *this,MeshData **param_1,int *param_2)

{
  Mesh *pMVar1;
  uint uVar2;
  MeshData **ppMVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  MeshData *pMVar11;
  MeshData *pMVar12;
  
  *param_1 = (MeshData *)(this + 0x20);
  param_1[1] = (MeshData *)(this + 0x38);
  uVar2 = *(uint *)(this + 0x140);
  uVar4 = (ulong)(int)uVar2;
  if ((int)uVar2 < 1) {
    uVar5 = 2;
  }
  else {
    pMVar1 = this + 0x50;
                    /* catch() { ... } // from try @ 005454cc with catch @ 005456f8 */
    if ((uVar2 < 4) ||
       (((Mesh *)(param_1 + 2) < this + 0x51 && (pMVar1 < (Mesh *)(param_1 + uVar4 + 1))))) {
      uVar6 = 0;
      uVar5 = 2;
    }
    else {
      lVar7 = *(long *)pMVar1;
      uVar6 = uVar4 & 0xfffffffffffffffc;
      uVar5 = uVar6 | 2;
      uVar8 = uVar6;
      lVar9 = _DAT_0068b480;
      lVar10 = _UNK_0068b488;
      ppMVar3 = param_1;
      do {
                    /* catch() { ... } // from try @ 005452f4 with catch @ 00545790 */
        pMVar11 = (MeshData *)(lVar7 + lVar9 * 0x18);
        pMVar12 = (MeshData *)(lVar7 + lVar10 * 0x18);
        lVar9 = lVar9 + 4;
        lVar10 = lVar10 + 4;
        uVar8 = uVar8 - 4;
        ppMVar3[3] = pMVar12;
        ppMVar3[2] = pMVar11;
        ppMVar3[5] = pMVar12 + 0x30;
        ppMVar3[4] = pMVar11 + 0x30;
        ppMVar3 = ppMVar3 + 4;
      } while (uVar8 != 0);
      if (uVar6 == uVar4) goto LAB_005457c0;
    }
    lVar7 = uVar6 * 0x18;
    do {
      uVar6 = uVar6 + 1;
      param_1[uVar5] = (MeshData *)(*(long *)pMVar1 + lVar7);
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 0x18;
    } while ((long)uVar6 < (long)uVar4);
  }
LAB_005457c0:
  param_1[(int)uVar5] = (MeshData *)(this + 0x58);
  *param_2 = (int)uVar5 + 1;
  return;
}


