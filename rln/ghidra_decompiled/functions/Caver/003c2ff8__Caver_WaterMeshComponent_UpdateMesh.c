/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c2ff8
 * Function: Caver::WaterMeshComponent::UpdateMesh
 * Signature: undefined __thiscall UpdateMesh(WaterMeshComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::WaterMeshComponent::UpdateMesh() */

void __thiscall Caver::WaterMeshComponent::UpdateMesh(WaterMeshComponent *this)

{
  float fVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  this[0x140] = (WaterMeshComponent)0x0;
  fVar5 = _DAT_00689fe4;
  fVar4 = DAT_00689fe0;
  dVar3 = DAT_00684790;
  fVar2 = _DAT_006846d0;
  fVar1 = DAT_00684318;
  if (-1 < *(int *)(this + 0x144)) {
    fVar17 = *(float *)(this + 0x88);
    lVar7 = -1;
    uVar9 = 3;
    do {
      fVar13 = *(float *)(this + 0x8c);
      fVar16 = *(float *)(this + 0x94);
      fVar14 = sinf((float)((double)(fVar17 / fVar4 + *(float *)(this + 0x154) * fVar1) * dVar3));
      fVar15 = sinf((float)((double)(fVar17 / fVar5 + *(float *)(this + 0x154) * fVar2) * dVar3));
      lVar6 = *(long *)(this + 0x130);
      iVar8 = (int)uVar9;
      uVar11 = -(ulong)(iVar8 - 2U >> 0x1f) & 0xffffffe000000000 | (ulong)(iVar8 - 2U) << 5;
      fVar13 = fVar13 + fVar16 + fVar14 * 6.0 + fVar15 * 6.0;
      uVar12 = -(ulong)(iVar8 - 1U >> 0x1f) & 0xffffffe000000000 | (ulong)(iVar8 - 1U) << 5;
      uVar10 = -(uVar9 >> 0x1f) & 0xffffffe000000000 | uVar9 << 5;
      *(float *)(lVar6 + uVar11 + 4) = fVar13;
      *(float *)(lVar6 + uVar12 + 4) = fVar13;
      *(float *)(lVar6 + uVar10 + 4) = fVar13;
      lVar7 = lVar7 + 1;
      fVar14 = *(float *)(lVar6 + (long)(iVar8 + -3) * 0x20 + 0x18);
      fVar13 = sinf((float)((double)((float)(int)lVar7 / 20.0 + *(float *)(this + 0x154) * 0.5) *
                           dVar3));
      lVar6 = *(long *)(this + 0x130);
      fVar14 = fVar14 + fVar13 * fVar1;
      uVar9 = (ulong)(iVar8 + 4);
      *(float *)(lVar6 + uVar11 + 0x18) = fVar14;
      *(float *)(lVar6 + uVar12 + 0x18) = fVar14;
      *(float *)(lVar6 + uVar10 + 0x18) = fVar14;
      fVar17 = fVar17 + *(float *)(this + 0x148);
    } while (lVar7 < *(int *)(this + 0x144));
  }
  return;
}


