/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a6f04
 * Function: Caver::ParticleEmitterComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(ParticleEmitterComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleEmitterComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::ParticleEmitterComponent::SaveToProtobufMessage
          (ParticleEmitterComponent *this,Component *param_1)

{
  uint uVar1;
  ParticleEmitterComponent PVar2;
  undefined1 auVar3 [16];
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  MessageLite *pMVar7;
  long lVar8;
  void *__dest;
  int iVar9;
  ulong uVar10;
  ParticleEmitter *this_00;
  Vector3 *pVVar11;
  ParticleEmitterComponent *pPVar12;
  ParticleEmitter *this_01;
  void *__src;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar5 = *(int *)PTR_extension_007e6aa8;
  pMVar7 = (MessageLite *)Proto::ParticleEmitterComponent::default_instance();
  lVar8 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar5,'\v',pMVar7,(FieldDescriptor *)0x0);
  uVar1 = *(uint *)(lVar8 + 0x88);
  *(undefined4 *)(lVar8 + 0xc) = *(undefined4 *)(this + 0x110);
  *(uint *)(lVar8 + 0x88) = uVar1 | 1;
  *(undefined4 *)(lVar8 + 0x10) = *(undefined4 *)(this + 0x128);
  PVar2 = this[0x140];
  *(uint *)(lVar8 + 0x88) = uVar1 | 7;
  *(ParticleEmitterComponent *)(lVar8 + 0x14) = PVar2;
  *(undefined4 *)(lVar8 + 0x18) = *(undefined4 *)(this + 0x144);
  PVar2 = this[0x169];
  *(uint *)(lVar8 + 0x88) = uVar1 | 0x1f;
  fVar4 = DAT_00683488;
  *(ParticleEmitterComponent *)(lVar8 + 0x1c) = PVar2;
  fVar14 = *(float *)(this + 0x16c);
  fVar15 = *(float *)(this + 0x170);
  fVar16 = *(float *)(this + 0x174);
  if (fVar4 < fVar14 * fVar14 + fVar15 * fVar15 + fVar16 * fVar16) {
    pVVar11 = *(Vector3 **)(lVar8 + 0x78);
    *(uint *)(lVar8 + 0x88) = uVar1 | 0x9f;
    if (pVVar11 == (Vector3 *)0x0) {
      pVVar11 = operator_new(0x20);
      Proto::Vector3::Vector3(pVVar11);
      *(Vector3 **)(lVar8 + 0x78) = pVVar11;
      fVar14 = *(float *)(this + 0x16c);
      fVar15 = *(float *)(this + 0x170);
      fVar16 = *(float *)(this + 0x174);
    }
    *(float *)(pVVar11 + 0xc) = fVar14;
    *(float *)(pVVar11 + 0x10) = fVar15;
    *(float *)(pVVar11 + 0x14) = fVar16;
    *(uint *)(pVVar11 + 0x18) = *(uint *)(pVVar11 + 0x18) | 7;
  }
  fVar14 = *(float *)(this + 0x188);
  fVar15 = *(float *)(this + 0x18c);
  fVar16 = *(float *)(this + 400);
  if (fVar4 < fVar14 * fVar14 + fVar15 * fVar15 + fVar16 * fVar16) {
    pVVar11 = *(Vector3 **)(lVar8 + 0x80);
    *(uint *)(lVar8 + 0x88) = *(uint *)(lVar8 + 0x88) | 0x100;
    if (pVVar11 == (Vector3 *)0x0) {
      pVVar11 = operator_new(0x20);
      Proto::Vector3::Vector3(pVVar11);
      *(Vector3 **)(lVar8 + 0x80) = pVVar11;
      fVar14 = *(float *)(this + 0x188);
      fVar15 = *(float *)(this + 0x18c);
      fVar16 = *(float *)(this + 400);
    }
    *(float *)(pVVar11 + 0xc) = fVar14;
    *(float *)(pVVar11 + 0x10) = fVar15;
    *(float *)(pVVar11 + 0x14) = fVar16;
    *(uint *)(pVVar11 + 0x18) = *(uint *)(pVVar11 + 0x18) | 7;
  }
  if (0 < *(int *)(this + 0x70)) {
    lVar13 = 0;
    pPVar12 = this + 0x78;
    do {
      iVar5 = (**(code **)(*(long *)pPVar12 + 8))(pPVar12);
      if (iVar5 != 0) {
        uVar6 = (**(code **)(*(long *)pPVar12 + 8))(pPVar12);
        iVar5 = *(int *)(lVar8 + 0x28);
        if (iVar5 == *(int *)(lVar8 + 0x2c)) {
          uVar1 = iVar5 * 2;
          if ((int)uVar1 < iVar5 + 1) {
            uVar1 = iVar5 + 1;
          }
          __src = *(void **)(lVar8 + 0x20);
          auVar3._8_8_ = 0;
          auVar3._0_8_ = (long)(int)uVar1;
          *(uint *)(lVar8 + 0x2c) = uVar1;
          uVar10 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
          if (SUB168(auVar3 * ZEXT816(4),8) != 0) {
            uVar10 = 0xffffffffffffffff;
          }
          __dest = operator_new__(uVar10);
          *(void **)(lVar8 + 0x20) = __dest;
          memcpy(__dest,__src,(long)iVar5 << 2);
          if ((__src != (void *)(lVar8 + 0x30)) && (__src != (void *)0x0)) {
            operator_delete__(__src);
            iVar5 = *(int *)(lVar8 + 0x28);
          }
        }
        *(int *)(lVar8 + 0x28) = iVar5 + 1;
        *(undefined4 *)(*(long *)(lVar8 + 0x20) + (long)iVar5 * 4) = uVar6;
      }
      lVar13 = lVar13 + 1;
      pPVar12 = pPVar12 + 0x18;
    } while (lVar13 < *(int *)(this + 0x70));
  }
  this_00 = *(ParticleEmitter **)(this + 0x158);
  if (this_00 != (ParticleEmitter *)0x0) {
    iVar5 = *(int *)(lVar8 + 0x48);
    iVar9 = *(int *)(lVar8 + 0x4c);
    if (iVar5 < iVar9) {
      *(int *)(lVar8 + 0x48) = iVar5 + 1;
      this_01 = *(ParticleEmitter **)(*(long *)(lVar8 + 0x40) + (long)iVar5 * 8);
    }
    else {
      if (iVar9 == *(int *)(lVar8 + 0x50)) {
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                  ((RepeatedPtrFieldBase *)(lVar8 + 0x40),iVar9 + 1);
        iVar9 = *(int *)(lVar8 + 0x4c);
      }
      *(int *)(lVar8 + 0x4c) = iVar9 + 1;
      this_01 = operator_new(0x58);
      Proto::ParticleEmitter::ParticleEmitter(this_01);
      iVar5 = *(int *)(lVar8 + 0x48);
      *(int *)(lVar8 + 0x48) = iVar5 + 1;
      *(ParticleEmitter **)(*(long *)(lVar8 + 0x40) + (long)iVar5 * 8) = this_01;
    }
    ParticleEmitter::SaveToProtobufMessage(this_00,this_01);
    return;
  }
  return;
}


