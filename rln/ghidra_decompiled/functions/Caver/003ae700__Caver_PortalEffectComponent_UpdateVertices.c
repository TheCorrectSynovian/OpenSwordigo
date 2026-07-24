/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ae700
 * Function: Caver::PortalEffectComponent::UpdateVertices
 * Signature: undefined __thiscall UpdateVertices(PortalEffectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalEffectComponent::UpdateVertices() */

void __thiscall Caver::PortalEffectComponent::UpdateVertices(PortalEffectComponent *this)

{
  ulong uVar1;
  uint uVar2;
  float fVar3;
  double dVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  float *pfVar8;
  undefined8 *puVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  lVar5 = *(long *)(this + 0xb0);
  if (lVar5 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xa0),(Component *)this);
    lVar5 = *(long *)(this + 0xb0);
    if (lVar5 == 0) {
      dVar11 = 1.0;
      goto LAB_003ae73c;
    }
  }
  dVar11 = (double)(1.0 / *(float *)(lVar5 + 0x80));
LAB_003ae73c:
  uVar2 = *(uint *)(this + 0xd8);
  uVar6 = (ulong)(int)uVar2;
  if (0 < (int)uVar2) {
    lVar5 = *(long *)(this + 0xe0);
    dVar12 = (double)*(float *)(this + 0xfc);
    dVar13 = (double)*(float *)(this + 0xf8);
    if (uVar2 < 3) {
      lVar7 = 0;
    }
    else {
      uVar1 = 2;
      if ((uVar6 & 1) != 0) {
        uVar1 = uVar6 & 1;
      }
      lVar7 = uVar6 - uVar1;
      puVar9 = (undefined8 *)(lVar5 + 0x18);
      lVar10 = lVar7;
      do {
        lVar10 = lVar10 + -2;
        *(ulong *)((long)puVar9 + -0xc) =
             CONCAT44((float)(dVar11 * ((double)((float)((ulong)*puVar9 >> 0x20) * 0.01) /
                                       6.283185307179586) + dVar13),
                      (float)(dVar11 * ((double)(float)*puVar9 / 6.283185307179586) + dVar12));
        *(ulong *)((long)puVar9 + 0x14) =
             CONCAT44((float)(dVar11 * ((double)((float)((ulong)puVar9[4] >> 0x20) * 0.01) /
                                       6.283185307179586) + dVar13),
                      (float)(dVar11 * ((double)(float)puVar9[4] / 6.283185307179586) + dVar12));
        puVar9 = puVar9 + 8;
      } while (lVar10 != 0);
    }
    dVar4 = DAT_00684790;
    fVar3 = DAT_00683944;
    pfVar8 = (float *)(lVar5 + lVar7 * 0x20 + 0x1c);
    do {
      lVar7 = lVar7 + 1;
      pfVar8[-4] = (float)(dVar11 * ((double)pfVar8[-1] / dVar4) + dVar12);
      pfVar8[-3] = (float)(dVar11 * ((double)(*pfVar8 * fVar3) / dVar4) + dVar13);
      pfVar8 = pfVar8 + 8;
    } while (lVar7 < (long)uVar6);
  }
  return;
}


