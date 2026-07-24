/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e4b54
 * Function: Caver::Proto::GuideTarget::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(GuideTarget * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::GuideTarget::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::GuideTarget::SerializeWithCachedSizes(GuideTarget *this,CodedOutputStream *param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(this + 0x70);
  if ((uVar1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteEnum(1,*(int *)(this + 0xc),param_1);
    uVar1 = *(uint *)(this + 0x70);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(2,*(string **)(this + 0x10),param_1);
    uVar1 = *(uint *)(this + 0x70);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(3,*(string **)(this + 0x18),param_1);
    uVar1 = *(uint *)(this + 0x70);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(4,*(string **)(this + 0x20),param_1);
    uVar1 = *(uint *)(this + 0x70);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(5,*(string **)(this + 0x28),param_1);
    uVar1 = *(uint *)(this + 0x70);
  }
  if ((uVar1 >> 5 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(6,(bool)this[0x30],param_1);
  }
  if (0 < *(int *)(this + 0x40)) {
    lVar2 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteMessage
                (7,*(MessageLite **)(*(long *)(this + 0x38) + lVar2 * 8),param_1);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(this + 0x40));
  }
  return;
}


