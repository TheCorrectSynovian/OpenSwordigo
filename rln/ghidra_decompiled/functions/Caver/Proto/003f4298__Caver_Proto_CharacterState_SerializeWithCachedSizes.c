/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f4298
 * Function: Caver::Proto::CharacterState::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(CharacterState * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::CharacterState::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::CharacterState::SerializeWithCachedSizes
          (CharacterState *this,CodedOutputStream *param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(this + 0xcc);
  if ((uVar1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(2,*(int *)(this + 0xc),param_1);
    uVar1 = *(uint *)(this + 0xcc);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(4,*(int *)(this + 0x10),param_1);
    uVar1 = *(uint *)(this + 0xcc);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(5,*(int *)(this + 0x14),param_1);
    uVar1 = *(uint *)(this + 0xcc);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(6,*(int *)(this + 0x18),param_1);
    uVar1 = *(uint *)(this + 0xcc);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(7,*(int *)(this + 0x1c),param_1);
  }
  if (0 < *(int *)(this + 0x28)) {
    lVar2 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteMessage
                (0xb,*(MessageLite **)(*(long *)(this + 0x20) + lVar2 * 8),param_1);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(this + 0x28));
  }
  uVar1 = *(uint *)(this + 0xcc);
  if ((uVar1 >> 6 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(0xc,*(string **)(this + 0x58),param_1);
    uVar1 = *(uint *)(this + 0xcc);
  }
  if ((uVar1 >> 7 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(0xd,*(string **)(this + 0x60),param_1);
  }
  if (0 < *(int *)(this + 0x70)) {
    lVar2 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteString
                (0xf,*(string **)(*(long *)(this + 0x68) + lVar2 * 8),param_1);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(this + 0x70));
  }
  uVar1 = *(uint *)(this + 0xcc);
  if ((uVar1 >> 9 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(0x10,*(string **)(this + 0xa0),param_1);
    uVar1 = *(uint *)(this + 0xcc);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(0x11,*(string **)(this + 0xa8),param_1);
    uVar1 = *(uint *)(this + 0xcc);
  }
  if ((uVar1 >> 0xb & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(0x12,*(string **)(this + 0xb0),param_1);
    uVar1 = *(uint *)(this + 0xcc);
  }
  if ((uVar1 >> 0xc & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(0x13,*(string **)(this + 0xb8),param_1);
    uVar1 = *(uint *)(this + 0xcc);
  }
  if ((uVar1 >> 0xd & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(0x14,*(int *)(this + 0xc0),param_1);
    uVar1 = *(uint *)(this + 0xcc);
  }
  if ((uVar1 >> 0xe & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(0x15,*(int *)(this + 0xc4),param_1);
    uVar1 = *(uint *)(this + 0xcc);
  }
  if ((uVar1 >> 0xf & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteInt32(0x16,*(int *)(this + 200),param_1);
  return;
}


