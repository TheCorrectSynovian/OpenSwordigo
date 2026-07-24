/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00409d0c
 * Function: Caver::Proto::TextureMappingComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(TextureMappingComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::TextureMappingComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::TextureMappingComponent::SerializeWithCachedSizes
          (TextureMappingComponent *this,CodedOutputStream *param_1)

{
  TextureMappingComponent *pTVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x28);
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(1,*(string **)(this + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x28);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(2,*(float *)(this + 0x18),param_1);
    uVar2 = *(uint *)(this + 0x28);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    pTVar1 = *(TextureMappingComponent **)PTR_default_instance__007e7550;
    if (*(long *)(this + 0x20) != 0) {
      pTVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (3,*(MessageLite **)(pTVar1 + 0x20),param_1);
    return;
  }
  return;
}


