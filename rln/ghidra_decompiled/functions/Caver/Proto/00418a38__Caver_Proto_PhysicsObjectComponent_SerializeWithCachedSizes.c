/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00418a38
 * Function: Caver::Proto::PhysicsObjectComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(PhysicsObjectComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PhysicsObjectComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::PhysicsObjectComponent::SerializeWithCachedSizes
          (PhysicsObjectComponent *this,CodedOutputStream *param_1)

{
  PhysicsObjectComponent *pPVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x30);
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(1,(bool)this[0xc],param_1);
    uVar2 = *(uint *)(this + 0x30);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    pPVar1 = *(PhysicsObjectComponent **)PTR_default_instance__007e5a38;
    if (*(long *)(this + 0x10) != 0) {
      pPVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (2,*(MessageLite **)(pPVar1 + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x30);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(3,*(float *)(this + 0x18),param_1);
    uVar2 = *(uint *)(this + 0x30);
  }
  if ((uVar2 >> 3 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(4,*(float *)(this + 0x1c),param_1);
    uVar2 = *(uint *)(this + 0x30);
  }
  if ((uVar2 >> 4 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(5,*(float *)(this + 0x20),param_1);
    uVar2 = *(uint *)(this + 0x30);
  }
  if ((uVar2 >> 5 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(6,*(float *)(this + 0x24),param_1);
    uVar2 = *(uint *)(this + 0x30);
  }
  if ((uVar2 >> 6 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(7,(bool)this[0x28],param_1);
    uVar2 = *(uint *)(this + 0x30);
  }
  if ((uVar2 >> 7 & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteFloat(8,*(float *)(this + 0x2c),param_1);
  return;
}


