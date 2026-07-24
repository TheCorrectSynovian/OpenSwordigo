/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040f4f0
 * Function: Caver::Proto::ObjectLinkControllerComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(ObjectLinkControllerComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectLinkControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::ObjectLinkControllerComponent::SerializeWithCachedSizes
          (ObjectLinkControllerComponent *this,CodedOutputStream *param_1)

{
  ObjectLinkControllerComponent *pOVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x38);
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(1,*(string **)(this + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x38);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(2,*(string **)(this + 0x18),param_1);
    uVar2 = *(uint *)(this + 0x38);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    pOVar1 = *(ObjectLinkControllerComponent **)PTR_default_instance__007e4830;
    if (*(long *)(this + 0x20) != 0) {
      pOVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (3,*(MessageLite **)(pOVar1 + 0x20),param_1);
    uVar2 = *(uint *)(this + 0x38);
  }
  if ((uVar2 >> 4 & 1) != 0) {
    pOVar1 = *(ObjectLinkControllerComponent **)PTR_default_instance__007e4830;
    if (*(long *)(this + 0x30) != 0) {
      pOVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (4,*(MessageLite **)(pOVar1 + 0x30),param_1);
    uVar2 = *(uint *)(this + 0x38);
  }
  if ((uVar2 >> 3 & 1) != 0) {
    pOVar1 = *(ObjectLinkControllerComponent **)PTR_default_instance__007e4830;
    if (*(long *)(this + 0x28) != 0) {
      pOVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (5,*(MessageLite **)(pOVar1 + 0x28),param_1);
    return;
  }
  return;
}


