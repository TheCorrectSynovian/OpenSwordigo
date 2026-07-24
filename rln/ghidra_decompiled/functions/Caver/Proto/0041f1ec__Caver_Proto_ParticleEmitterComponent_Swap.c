/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041f1ec
 * Function: Caver::Proto::ParticleEmitterComponent::Swap
 * Signature: undefined __thiscall Swap(ParticleEmitterComponent * this, ParticleEmitterComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleEmitterComponent::Swap(Caver::Proto::ParticleEmitterComponent*) */

void __thiscall
Caver::Proto::ParticleEmitterComponent::Swap
          (ParticleEmitterComponent *this,ParticleEmitterComponent *param_1)

{
  undefined4 uVar1;
  ParticleEmitterComponent PVar2;
  long lVar3;
  long lVar4;
  ParticleEmitterComponent *pPVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  if (param_1 != this) {
    uVar1 = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    PVar2 = this[0x14];
                    /* catch() { ... } // from try @ 0041eb20 with catch @ 0041f244 */
    this[0x14] = param_1[0x14];
    param_1[0x14] = PVar2;
    uVar1 = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    PVar2 = this[0x1c];
    this[0x1c] = param_1[0x1c];
    param_1[0x1c] = PVar2;
    uVar9 = *(undefined8 *)(this + 0x38);
    uVar7 = *(undefined8 *)(this + 0x30);
    pPVar5 = *(ParticleEmitterComponent **)(this + 0x20);
    uVar6 = *(undefined8 *)(this + 0x28);
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(this + 0x30) = uVar8;
    *(ParticleEmitterComponent **)(param_1 + 0x20) = pPVar5;
    *(undefined8 *)(param_1 + 0x28) = uVar6;
    *(undefined8 *)(param_1 + 0x38) = uVar9;
    *(undefined8 *)(param_1 + 0x30) = uVar7;
    if (*(ParticleEmitterComponent **)(this + 0x20) == param_1 + 0x30) {
      *(ParticleEmitterComponent **)(this + 0x20) = this + 0x30;
      pPVar5 = *(ParticleEmitterComponent **)(param_1 + 0x20);
    }
    if (pPVar5 == this + 0x30) {
      *(ParticleEmitterComponent **)(param_1 + 0x20) = param_1 + 0x30;
    }
    google::protobuf::internal::RepeatedPtrFieldBase::Swap
              ((RepeatedPtrFieldBase *)(this + 0x40),(RepeatedPtrFieldBase *)(param_1 + 0x40));
    uVar6 = *(undefined8 *)(this + 0x78);
    *(undefined8 *)(this + 0x78) = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = uVar6;
    uVar6 = *(undefined8 *)(this + 0x80);
    *(undefined8 *)(this + 0x80) = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = uVar6;
    uVar1 = *(undefined4 *)(this + 0x88);
                    /* catch() { ... } // from try @ 0041f364 with catch @ 0041f2ec
                       catch() { ... } // from try @ 0041f3c0 with catch @ 0041f2ec
                       catch() { ... } // from try @ 0041f518 with catch @ 0041f2ec */
    *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
    *(undefined4 *)(param_1 + 0x88) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


