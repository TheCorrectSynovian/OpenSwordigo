/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c2838
 * Function: Caver::WaterMeshComponent::CreateMesh
 * Signature: undefined __thiscall CreateMesh(WaterMeshComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WaterMeshComponent::CreateMesh() */

void __thiscall Caver::WaterMeshComponent::CreateMesh(WaterMeshComponent *this)

{
  VertexArrayObject *this_00;
  long lVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  short *psVar12;
  short sVar13;
  ulong uVar14;
  Vector3 *pVVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_60;
  
  lVar5 = tpidr_el0;
  lVar8 = *(long *)(lVar5 + 0x28);
  this_00 = (VertexArrayObject *)(this + 0xe0);
  this[0x128] = (WaterMeshComponent)0x1;
  VertexArrayObject::Reset(this_00);
  iVar6 = (int)(*(float *)(this + 0x90) / 20.0);
  *(int *)(this + 0x144) = iVar6;
  *(int *)(this + 0x150) = iVar6 << 1;
  *(int *)(this + 0x14c) = iVar6 << 1;
  *(float *)(this + 0x148) = *(float *)(this + 0x90) / (float)iVar6;
  VertexArrayObject::CreateVertexBuffer(this_00,iVar6 * 0x80 + 0x80);
  *(undefined8 *)(this + 0x130) = *(undefined8 *)(this + 0xe8);
  VertexArrayObject::CreateIndexBuffer
            (this_00,0x1403,(*(int *)(this + 0x14c) + *(int *)(this + 0x150)) * 3);
  *(undefined8 *)(this + 0x138) = *(undefined8 *)(this + 0xf8);
  VertexArrayObject::AddArray(this_00,0x8074,3,0x1406,0x20,*(undefined8 *)(this + 0x130));
  if ((*(long *)(this + 0xa8) == 0) &&
     (ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x98),(Component *)this),
     *(long *)(this + 0xa8) == 0)) {
    pVVar15 = (Vector3 *)0x0;
    uVar7 = *(uint *)(this + 0x144);
  }
  else {
    VertexArrayObject::AddArray(this_00,0x8078,2,0x1406,0x20,*(long *)(this + 0x130) + 0x18);
    lVar9 = *(long *)(this + 0xa8);
    if (lVar9 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x98),(Component *)this);
      lVar9 = *(long *)(this + 0xa8);
    }
    pVVar15 = (Vector3 *)(lVar9 + 0x78);
    uVar7 = *(uint *)(this + 0x144);
  }
  if (-1 < (int)uVar7) {
    fVar19 = *(float *)(this + 0x88);
    lVar10 = *(long *)(this + 0x130);
    lVar9 = -1;
    lVar16 = 0x78;
    do {
      fVar17 = *(float *)(this + 0x8c);
      fVar18 = *(float *)(this + 0x94);
      lVar1 = lVar10 + lVar16;
      *(undefined4 *)(lVar1 + -0x70) = 0x42200000;
      *(undefined4 *)(lVar1 + -0x50) = 0x42200000;
      fVar18 = fVar17 + fVar18;
      *(undefined4 *)(lVar1 + -0x30) = 0x42200000;
      *(float *)(lVar1 + -0x78) = fVar19;
      *(float *)(lVar1 + -0x74) = fVar17;
      *(float *)(lVar1 + -0x58) = fVar19;
      *(float *)(lVar1 + -0x54) = fVar18;
      *(float *)(lVar1 + -0x38) = fVar19;
      *(float *)(lVar1 + -0x34) = fVar18;
      *(float *)(lVar1 + -0x18) = fVar19;
      *(float *)(lVar1 + -0x14) = fVar18;
      *(undefined4 *)(lVar1 + -0x10) = 0xc1a00000;
      if (pVVar15 != (Vector3 *)0x0) {
        TextureMapping::TexCoordForPosition(pVVar15);
        *(undefined8 *)(*(long *)(this + 0x130) + lVar16 + -0x60) = local_60;
        TextureMapping::TexCoordForPosition(pVVar15);
        *(undefined8 *)(*(long *)(this + 0x130) + lVar16 + -0x40) = local_60;
        TextureMapping::TexCoordForPosition(pVVar15);
        *(undefined8 *)(*(long *)(this + 0x130) + lVar16 + -0x20) = local_60;
        TextureMapping::TexCoordForPosition(pVVar15);
        lVar10 = *(long *)(this + 0x130);
        *(undefined8 *)(lVar10 + lVar16) = local_60;
        uVar7 = *(uint *)(this + 0x144);
      }
      lVar9 = lVar9 + 1;
      lVar16 = lVar16 + 0x80;
      fVar19 = fVar19 + *(float *)(this + 0x148);
    } while (lVar9 < (int)uVar7);
    if (0 < (int)uVar7) {
      uVar11 = (ulong)uVar7;
      sVar13 = 4;
      psVar12 = (short *)(*(long *)(this + 0x138) + 6);
      uVar14 = uVar11;
      do {
        sVar3 = sVar13 + -4;
        sVar4 = sVar13 + -3;
        sVar2 = sVar13 + 1;
        psVar12[-1] = sVar13;
        *psVar12 = sVar13;
        sVar13 = sVar13 + 4;
        uVar14 = uVar14 - 1;
        psVar12[-3] = sVar4;
        psVar12[-2] = sVar3;
        psVar12[1] = sVar2;
        psVar12[2] = sVar4;
        psVar12 = psVar12 + 6;
      } while (uVar14 != 0);
      if (0 < (int)uVar7) {
        lVar9 = *(long *)(this + 0x138);
        sVar13 = 7;
        iVar6 = *(int *)(this + 0x14c) * 3 + 5;
        do {
          *(short *)(lVar9 + (long)(iVar6 + -5) * 2) = sVar13 + -4;
          *(short *)(lVar9 + (long)(iVar6 + -4) * 2) = sVar13 + -5;
          *(short *)(lVar9 + (long)(iVar6 + -3) * 2) = sVar13 + -1;
          uVar11 = uVar11 - 1;
          *(short *)(lVar9 + (long)(iVar6 + -2) * 2) = sVar13 + -1;
          *(short *)(lVar9 + (long)(iVar6 + -1) * 2) = sVar13;
          *(short *)(lVar9 + (long)iVar6 * 2) = sVar13 + -4;
          iVar6 = iVar6 + 6;
          sVar13 = sVar13 + 4;
        } while (uVar11 != 0);
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) == lVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


