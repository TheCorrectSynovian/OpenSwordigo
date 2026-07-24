/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033582c
 * Function: Caver::ShadowComponent::AddShadowSegment
 * Signature: undefined __thiscall AddShadowSegment(ShadowComponent * this, Vector2 * param_1, Vector2 * param_2, float param_3, float param_4, FastVector * param_5)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShadowComponent::AddShadowSegment(Caver::Vector2 const&, Caver::Vector2 const&, float,
   float, Caver::FastVector<Caver::ShadowVertex>*) */

void __thiscall
Caver::ShadowComponent::AddShadowSegment
          (ShadowComponent *this,Vector2 *param_1,Vector2 *param_2,float param_3,float param_4,
          FastVector *param_5)

{
  int iVar1;
  long lVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar6 = *(float *)(this + 0xc0);
  fVar8 = *(float *)param_1;
  fVar9 = *(float *)param_2;
  fVar12 = *(float *)(param_2 + 4);
  fVar7 = *(float *)(this + 0xcc);
  iVar3 = *(int *)param_5;
  iVar1 = *(int *)(param_5 + 4);
  fVar10 = fVar7 * (fVar8 - fVar6) * 0.5 + 0.5;
  fVar11 = *(float *)(param_1 + 4) + 1.0;
  if (iVar1 <= iVar3) {
    iVar1 = iVar1 * 2;
    if (iVar1 < 0xb) {
      iVar1 = 10;
    }
    FastVector<Caver::ShadowVertex>::Resize((FastVector<Caver::ShadowVertex> *)param_5,iVar1);
    iVar3 = *(int *)param_5;
    iVar1 = *(int *)(param_5 + 4);
  }
  lVar2 = *(long *)(param_5 + 8);
  iVar5 = iVar3 + 1;
  fVar6 = fVar7 * (fVar9 - fVar6) * 0.5 + 0.5;
  fVar12 = fVar12 + 1.0;
  pfVar4 = (float *)(lVar2 + (long)iVar3 * 0x18);
  *pfVar4 = fVar8;
  pfVar4[1] = fVar11;
  pfVar4[2] = param_4;
  pfVar4[3] = fVar10;
  pfVar4[4] = 0.0;
  *(int *)param_5 = iVar5;
  if (iVar1 <= iVar5) {
    iVar1 = iVar1 * 2;
    if (iVar1 < 0xb) {
      iVar1 = 10;
    }
    FastVector<Caver::ShadowVertex>::Resize((FastVector<Caver::ShadowVertex> *)param_5,iVar1);
    lVar2 = *(long *)(param_5 + 8);
    iVar5 = *(int *)param_5;
    iVar1 = *(int *)(param_5 + 4);
  }
  iVar3 = iVar5 + 1;
  pfVar4 = (float *)(lVar2 + (long)iVar5 * 0x18);
  *pfVar4 = fVar9;
  pfVar4[1] = fVar12;
  pfVar4[2] = param_4;
  pfVar4[3] = fVar6;
  pfVar4[4] = 0.0;
  *(int *)param_5 = iVar3;
  if (iVar1 <= iVar3) {
    iVar1 = iVar1 * 2;
    if (iVar1 < 0xb) {
      iVar1 = 10;
    }
    FastVector<Caver::ShadowVertex>::Resize((FastVector<Caver::ShadowVertex> *)param_5,iVar1);
    lVar2 = *(long *)(param_5 + 8);
    iVar3 = *(int *)param_5;
    iVar1 = *(int *)(param_5 + 4);
  }
  iVar5 = iVar3 + 1;
  pfVar4 = (float *)(lVar2 + (long)iVar3 * 0x18);
  *pfVar4 = fVar8;
  pfVar4[1] = fVar11;
  pfVar4[2] = param_3;
  pfVar4[3] = fVar10;
  pfVar4[4] = 1.0;
  *(int *)param_5 = iVar5;
  if (iVar1 <= iVar5) {
    iVar1 = iVar1 * 2;
    if (iVar1 < 0xb) {
      iVar1 = 10;
    }
    FastVector<Caver::ShadowVertex>::Resize((FastVector<Caver::ShadowVertex> *)param_5,iVar1);
    lVar2 = *(long *)(param_5 + 8);
    iVar5 = *(int *)param_5;
    iVar1 = *(int *)(param_5 + 4);
  }
  iVar3 = iVar5 + 1;
  pfVar4 = (float *)(lVar2 + (long)iVar5 * 0x18);
  *pfVar4 = fVar9;
  pfVar4[1] = fVar12;
  pfVar4[2] = param_3;
  pfVar4[3] = fVar6;
  pfVar4[4] = 1.0;
  *(int *)param_5 = iVar3;
  if (iVar1 <= iVar3) {
    iVar1 = iVar1 * 2;
    if (iVar1 < 0xb) {
      iVar1 = 10;
    }
    FastVector<Caver::ShadowVertex>::Resize((FastVector<Caver::ShadowVertex> *)param_5,iVar1);
    lVar2 = *(long *)(param_5 + 8);
    iVar3 = *(int *)param_5;
    iVar1 = *(int *)(param_5 + 4);
  }
  iVar5 = iVar3 + 1;
  pfVar4 = (float *)(lVar2 + (long)iVar3 * 0x18);
  *pfVar4 = fVar8;
  pfVar4[1] = fVar11;
  pfVar4[2] = param_3;
  pfVar4[3] = fVar10;
  pfVar4[4] = 1.0;
  *(int *)param_5 = iVar5;
  if (iVar1 <= iVar5) {
    iVar1 = iVar1 * 2;
    if (iVar1 < 0xb) {
      iVar1 = 10;
    }
    FastVector<Caver::ShadowVertex>::Resize((FastVector<Caver::ShadowVertex> *)param_5,iVar1);
    iVar5 = *(int *)param_5;
    lVar2 = *(long *)(param_5 + 8);
  }
  pfVar4 = (float *)(lVar2 + (long)iVar5 * 0x18);
  *pfVar4 = fVar9;
  pfVar4[1] = fVar12;
  pfVar4[2] = param_4;
  pfVar4[3] = fVar6;
  pfVar4[4] = 0.0;
  *(int *)param_5 = iVar5 + 1;
  return;
}


