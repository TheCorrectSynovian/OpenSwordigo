/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00408204
 * Function: Caver::Proto::GroundMeshComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(GroundMeshComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GroundMeshComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::GroundMeshComponent::SerializeWithCachedSizes
          (GroundMeshComponent *this,CodedOutputStream *param_1)

{
  GroundMeshComponent *pGVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = *(uint *)(this + 0xdc);
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBytes(4,*(string **)(this + 0x10),param_1);
    uVar2 = *(uint *)(this + 0xdc);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBytes(5,*(string **)(this + 0x18),param_1);
  }
  if (0 < *(int *)(this + 0x28)) {
    lVar3 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteMessage
                (6,*(MessageLite **)(*(long *)(this + 0x20) + lVar3 * 8),param_1);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(this + 0x28));
  }
  if (((byte)this[0xdc] >> 3 & 1) != 0) {
    pGVar1 = *(GroundMeshComponent **)PTR_default_instance__007e5600;
    if (*(long *)(this + 0x58) != 0) {
      pGVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (7,*(MessageLite **)(pGVar1 + 0x58),param_1);
  }
  if (0 < *(int *)(this + 0x68)) {
    lVar3 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteMessage
                (8,*(MessageLite **)(*(long *)(this + 0x60) + lVar3 * 8),param_1);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(this + 0x68));
  }
  if (0 < *(int *)(this + 0xa0)) {
    lVar3 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteMessage
                (9,*(MessageLite **)(*(long *)(this + 0x98) + lVar3 * 8),param_1);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(this + 0xa0));
  }
  uVar2 = *(uint *)(this + 0xdc);
  if ((uVar2 >> 6 & 1) != 0) {
    pGVar1 = *(GroundMeshComponent **)PTR_default_instance__007e5600;
    if (*(long *)(this + 0xd0) != 0) {
      pGVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (10,*(MessageLite **)(pGVar1 + 0xd0),param_1);
    uVar2 = *(uint *)(this + 0xdc);
  }
  if ((uVar2 >> 7 & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteBool(0xb,(bool)this[0xd8],param_1);
  return;
}


