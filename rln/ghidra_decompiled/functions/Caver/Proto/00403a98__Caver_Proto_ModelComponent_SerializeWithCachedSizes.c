/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00403a98
 * Function: Caver::Proto::ModelComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(ModelComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ModelComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::ModelComponent::SerializeWithCachedSizes
          (ModelComponent *this,CodedOutputStream *param_1)

{
  ModelComponent *pMVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x48);
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(1,*(string **)(this + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x48);
  }
  if ((uVar2 >> 3 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(2,*(float *)(this + 0x24),param_1);
    uVar2 = *(uint *)(this + 0x48);
  }
  if ((uVar2 >> 4 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(3,*(float *)(this + 0x28),param_1);
    uVar2 = *(uint *)(this + 0x48);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(4,*(float *)(this + 0x20),param_1);
    uVar2 = *(uint *)(this + 0x48);
  }
  if ((uVar2 >> 5 & 1) != 0) {
    pMVar1 = *(ModelComponent **)PTR_default_instance__007e70f0;
    if (*(long *)(this + 0x30) != 0) {
      pMVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (5,*(MessageLite **)(pMVar1 + 0x30),param_1);
    uVar2 = *(uint *)(this + 0x48);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    pMVar1 = *(ModelComponent **)PTR_default_instance__007e70f0;
    if (*(long *)(this + 0x18) != 0) {
      pMVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (6,*(MessageLite **)(pMVar1 + 0x18),param_1);
    uVar2 = *(uint *)(this + 0x48);
  }
  if ((uVar2 >> 6 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(7,(bool)this[0x38],param_1);
    uVar2 = *(uint *)(this + 0x48);
  }
  if ((uVar2 >> 7 & 1) == 0) {
    return;
  }
  pMVar1 = *(ModelComponent **)PTR_default_instance__007e70f0;
  if (*(long *)(this + 0x40) != 0) {
    pMVar1 = this;
  }
  google::protobuf::internal::WireFormatLite::WriteMessage
            (8,*(MessageLite **)(pMVar1 + 0x40),param_1);
  return;
}


