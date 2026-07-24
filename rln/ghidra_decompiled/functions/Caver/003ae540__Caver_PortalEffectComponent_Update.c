/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ae540
 * Function: Caver::PortalEffectComponent::Update
 * Signature: undefined __thiscall Update(PortalEffectComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalEffectComponent::Update(float) */

void __thiscall Caver::PortalEffectComponent::Update(PortalEffectComponent *this,float param_1)

{
  ulong uVar1;
  uint uVar2;
  double dVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  long lVar8;
  undefined8 *puVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  
  fVar12 = *(float *)(this + 0xf8) + *(float *)(this + 0xcc) * param_1;
  fVar10 = *(float *)(this + 0xfc) + *(float *)(this + 200) * param_1;
  fVar13 = 0.0;
  if (fVar12 <= 1.0) {
    fVar13 = fVar12;
  }
  fVar12 = 0.0;
  if (fVar10 <= 1.0) {
    fVar12 = fVar10;
  }
  *(float *)(this + 0xf8) = fVar13;
  *(float *)(this + 0xfc) = fVar12;
  if (*(int *)(this + 0xd8) < 1) {
    return;
  }
  lVar4 = *(long *)(this + 0xb0);
  if (lVar4 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xa0),(Component *)this);
    lVar4 = *(long *)(this + 0xb0);
    if (lVar4 == 0) {
      dVar11 = 1.0;
      goto LAB_003ae5bc;
    }
  }
  dVar11 = (double)(1.0 / *(float *)(lVar4 + 0x80));
LAB_003ae5bc:
  uVar2 = *(uint *)(this + 0xd8);
  uVar5 = (ulong)(int)uVar2;
  if (0 < (int)uVar2) {
    lVar4 = *(long *)(this + 0xe0);
    dVar14 = (double)*(float *)(this + 0xfc);
    dVar15 = (double)*(float *)(this + 0xf8);
    if (uVar2 < 3) {
      lVar8 = 0;
    }
    else {
      uVar1 = 2;
      if ((uVar5 & 1) != 0) {
        uVar1 = uVar5 & 1;
      }
      lVar8 = uVar5 - uVar1;
      puVar9 = (undefined8 *)(lVar4 + 0x18);
      lVar6 = lVar8;
      do {
        lVar6 = lVar6 + -2;
        *(ulong *)((long)puVar9 + -0xc) =
             CONCAT44((float)(dVar11 * ((double)((float)((ulong)*puVar9 >> 0x20) * 0.01) /
                                       6.283185307179586) + dVar15),
                      (float)(dVar11 * ((double)(float)*puVar9 / 6.283185307179586) + dVar14));
        *(ulong *)((long)puVar9 + 0x14) =
             CONCAT44((float)(dVar11 * ((double)((float)((ulong)puVar9[4] >> 0x20) * 0.01) /
                                       6.283185307179586) + dVar15),
                      (float)(dVar11 * ((double)(float)puVar9[4] / 6.283185307179586) + dVar14));
        puVar9 = puVar9 + 8;
      } while (lVar6 != 0);
    }
    dVar3 = DAT_00684790;
    fVar13 = DAT_00683944;
    lVar6 = uVar5 - lVar8;
    pfVar7 = (float *)(lVar4 + lVar8 * 0x20 + 0x10);
    do {
      lVar6 = lVar6 + -1;
      pfVar7[-1] = (float)(dVar11 * ((double)pfVar7[2] / dVar3) + dVar14);
      *pfVar7 = (float)(dVar11 * ((double)(pfVar7[3] * fVar13) / dVar3) + dVar15);
      pfVar7 = pfVar7 + 8;
    } while (lVar6 != 0);
  }
  return;
}


