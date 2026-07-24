/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041f08c
 * Function: google::protobuf::RepeatedPtrField<Caver::Proto::ParticleEmitter>::MergeFrom
 * Signature: undefined __thiscall MergeFrom(RepeatedPtrField<Caver::Proto::ParticleEmitter> * this, RepeatedPtrField * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::RepeatedPtrField<Caver::Proto::ParticleEmitter>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::ParticleEmitter>
   const&) */

void __thiscall
google::protobuf::RepeatedPtrField<Caver::Proto::ParticleEmitter>::MergeFrom
          (RepeatedPtrField<Caver::Proto::ParticleEmitter> *this,RepeatedPtrField *param_1)

{
  undefined *puVar1;
  long lVar2;
  ParticleEmitter *this_00;
  int iVar3;
  ParticleEmitter *pPVar4;
  long lVar5;
  int iVar6;
  
                    /* catch() { ... } // from try @ 0041ed1c with catch @ 0041f0ac */
                    /* catch() { ... } // from try @ 0041ecc0 with catch @ 0041f0b0 */
  internal::RepeatedPtrFieldBase::Reserve
            ((RepeatedPtrFieldBase *)this,*(int *)(param_1 + 8) + *(int *)(this + 8));
  lVar2 = DAT_0068b470;
  if (0 < *(int *)(param_1 + 8)) {
    lVar5 = 0;
    puVar1 = PTR_vtable_007e5278 + 0x10;
    do {
      iVar6 = *(int *)(this + 8);
      iVar3 = *(int *)(this + 0xc);
      pPVar4 = *(ParticleEmitter **)(*(long *)param_1 + lVar5 * 8);
      if (iVar6 < iVar3) {
        *(int *)(this + 8) = iVar6 + 1;
        this_00 = *(ParticleEmitter **)(*(long *)this + (long)iVar6 * 8);
      }
      else {
                    /* catch() { ... } // from try @ 0041ec8c with catch @ 0041f10c */
        if (iVar3 == *(int *)(this + 0x10)) {
          internal::RepeatedPtrFieldBase::Reserve((RepeatedPtrFieldBase *)this,iVar3 + 1);
          iVar6 = *(int *)(this + 8);
          iVar3 = *(int *)(this + 0xc);
        }
        *(int *)(this + 0xc) = iVar3 + 1;
        this_00 = operator_new(0x58);
        *(long *)(this_00 + 0x38) = lVar2;
        *(undefined4 *)(this_00 + 0x50) = 0;
                    /* catch() { ... } // from try @ 0041ec68 with catch @ 0041f144 */
        *(undefined4 *)(this_00 + 0x28) = 0;
                    /* catch() { ... } // from try @ 0041ec0c with catch @ 0041f148 */
        *(long *)(this_00 + 0x18) = 0;
        *(long *)(this_00 + 0x20) = 0;
        *(long *)(this_00 + 8) = 0;
        *(long *)(this_00 + 0x10) = 0;
        *(ParticleEmitter **)(this_00 + 0x30) = this_00 + 0x40;
        *(undefined **)this_00 = puVar1;
        *(int *)(this + 8) = iVar6 + 1;
        *(ParticleEmitter **)(*(long *)this + (long)iVar6 * 8) = this_00;
      }
      Caver::Proto::ParticleEmitter::MergeFrom(this_00,pPVar4);
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 8));
  }
  return;
}


