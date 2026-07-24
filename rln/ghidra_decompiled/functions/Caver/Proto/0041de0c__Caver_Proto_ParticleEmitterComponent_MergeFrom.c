/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041de0c
 * Function: Caver::Proto::ParticleEmitterComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(ParticleEmitterComponent * this, ParticleEmitterComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::ParticleEmitterComponent::MergeFrom(Caver::Proto::ParticleEmitterComponent const&)
    */

void __thiscall
Caver::Proto::ParticleEmitterComponent::MergeFrom
          (ParticleEmitterComponent *this,ParticleEmitterComponent *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ParticleEmitterComponent PVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  long lVar6;
  LogMessage *pLVar7;
  void *__dest;
  ulong uVar8;
  ParticleEmitterComponent *pPVar9;
  Vector3 *pVVar10;
  int iVar11;
  ulong uVar12;
  LogFinisher aLStack_80 [8];
  LogMessage aLStack_78 [32];
  long local_58;
  
                    /* catch() { ... } // from try @ 0041dd6c with catch @ 0041de20 */
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  if (param_1 == this) {
                    /* try { // try from 0041de44 to 0051de4b has its CatchHandler @ 0041de50 */
                    /* try { // try from 0041de4c to 0051debf has its CatchHandler @ 0041dd10 */
                    /* catch() { ... } // from try @ 0041de44 with catch @ 0041de50 */
                    /* catch() { ... } // from try @ 0041dd54 with catch @ 0041de54
                       catch() { ... } // from try @ 0041dd9c with catch @ 0041de54 */
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_78,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x3af4);
    pLVar7 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_78,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_80,pLVar7);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_78);
  }
  uVar12 = (ulong)*(uint *)(param_1 + 0x28);
  iVar11 = *(int *)(this + 0x28);
  uVar1 = *(uint *)(param_1 + 0x28) + iVar11;
  if (*(int *)(this + 0x2c) < (int)uVar1) {
    uVar4 = *(int *)(this + 0x2c) * 2;
    if ((int)uVar1 <= (int)uVar4) {
      uVar1 = uVar4;
    }
    pPVar9 = *(ParticleEmitterComponent **)(this + 0x20);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (long)(int)uVar1;
    *(uint *)(this + 0x2c) = uVar1;
    uVar8 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
    if (SUB168(auVar5 * ZEXT816(4),8) != 0) {
      uVar8 = 0xffffffffffffffff;
    }
    __dest = operator_new__(uVar8);
    *(void **)(this + 0x20) = __dest;
    memcpy(__dest,pPVar9,(long)iVar11 << 2);
    if ((pPVar9 != this + 0x30) && (pPVar9 != (ParticleEmitterComponent *)0x0)) {
      operator_delete__(pPVar9);
      iVar11 = *(int *)(this + 0x28);
      uVar12 = (ulong)*(uint *)(param_1 + 0x28);
    }
  }
  memcpy((void *)(*(long *)(this + 0x20) + (long)iVar11 * 4),*(void **)(param_1 + 0x20),
         -(uVar12 >> 0x1f) & 0xfffffffc00000000 | uVar12 << 2);
  *(int *)(this + 0x28) = *(int *)(this + 0x28) + *(int *)(param_1 + 0x28);
  google::protobuf::RepeatedPtrField<Caver::Proto::ParticleEmitter>::MergeFrom
            ((RepeatedPtrField<Caver::Proto::ParticleEmitter> *)(this + 0x40),
             (RepeatedPtrField *)(param_1 + 0x40));
  uVar1 = *(uint *)(param_1 + 0x88);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0xc);
      *(uint *)(this + 0x88) = *(uint *)(this + 0x88) | 1;
      *(undefined4 *)(this + 0xc) = uVar2;
      uVar1 = *(uint *)(param_1 + 0x88);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      *(uint *)(this + 0x88) = *(uint *)(this + 0x88) | 2;
      *(undefined4 *)(this + 0x10) = uVar2;
      uVar1 = *(uint *)(param_1 + 0x88);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      PVar3 = param_1[0x14];
      *(uint *)(this + 0x88) = *(uint *)(this + 0x88) | 4;
      this[0x14] = PVar3;
      uVar1 = *(uint *)(param_1 + 0x88);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      *(uint *)(this + 0x88) = *(uint *)(this + 0x88) | 8;
      *(undefined4 *)(this + 0x18) = uVar2;
      uVar1 = *(uint *)(param_1 + 0x88);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      PVar3 = param_1[0x1c];
      *(uint *)(this + 0x88) = *(uint *)(this + 0x88) | 0x10;
      this[0x1c] = PVar3;
      uVar1 = *(uint *)(param_1 + 0x88);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      pVVar10 = *(Vector3 **)(this + 0x78);
      *(uint *)(this + 0x88) = *(uint *)(this + 0x88) | 0x80;
      if (pVVar10 == (Vector3 *)0x0) {
        pVVar10 = operator_new(0x20);
        Vector3::Vector3(pVVar10);
        *(Vector3 **)(this + 0x78) = pVVar10;
      }
      pPVar9 = *(ParticleEmitterComponent **)PTR_default_instance__007e5ba8;
      if (*(long *)(param_1 + 0x78) != 0) {
        pPVar9 = param_1;
      }
      Vector3::MergeFrom(pVVar10,*(Vector3 **)(pPVar9 + 0x78));
      uVar1 = *(uint *)(param_1 + 0x88);
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    pVVar10 = *(Vector3 **)(this + 0x80);
    *(uint *)(this + 0x88) = *(uint *)(this + 0x88) | 0x100;
    if (pVVar10 == (Vector3 *)0x0) {
      pVVar10 = operator_new(0x20);
      Vector3::Vector3(pVVar10);
      *(Vector3 **)(this + 0x80) = pVVar10;
    }
    pPVar9 = *(ParticleEmitterComponent **)PTR_default_instance__007e5ba8;
    if (*(long *)(param_1 + 0x80) != 0) {
      pPVar9 = param_1;
    }
    Vector3::MergeFrom(pVVar10,*(Vector3 **)(pPVar9 + 0x80));
  }
  if (*(long *)(lVar6 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


