/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040a79c
 * Function: Caver::Proto::WaterMeshComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(WaterMeshComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WaterMeshComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::WaterMeshComponent::SerializeWithCachedSizes
          (WaterMeshComponent *this,CodedOutputStream *param_1)

{
  WaterMeshComponent *pWVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x28);
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(1,*(int *)(this + 0xc),param_1);
    uVar2 = *(uint *)(this + 0x28);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(2,*(int *)(this + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x28);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    pWVar1 = *(WaterMeshComponent **)PTR_default_instance__007e6e28;
    if (*(long *)(this + 0x18) != 0) {
      pWVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (3,*(MessageLite **)(pWVar1 + 0x18),param_1);
    uVar2 = *(uint *)(this + 0x28);
  }
  if ((uVar2 >> 3 & 1) == 0) {
    return;
  }
  pWVar1 = *(WaterMeshComponent **)PTR_default_instance__007e6e28;
  if (*(long *)(this + 0x20) != 0) {
    pWVar1 = this;
  }
  google::protobuf::internal::WireFormatLite::WriteMessage
            (4,*(MessageLite **)(pWVar1 + 0x20),param_1);
  return;
}


