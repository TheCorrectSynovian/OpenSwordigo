/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00435ac0
 * Function: Caver::Proto::ProjectileControllerComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(ProjectileControllerComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ProjectileControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::ProjectileControllerComponent::SerializeWithCachedSizes
          (ProjectileControllerComponent *this,CodedOutputStream *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x10);
  if ((uVar1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(1,(bool)this[0xc],param_1);
    uVar1 = *(uint *)(this + 0x10);
  }
  if ((uVar1 >> 1 & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteBool(2,(bool)this[0xd],param_1);
  return;
}


