/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003eb050
 * Function: Caver::Proto::PlayerProfile::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(PlayerProfile * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::PlayerProfile::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::PlayerProfile::SerializeWithCachedSizes
          (PlayerProfile *this,CodedOutputStream *param_1)

{
  PlayerProfile *pPVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = *(uint *)(this + 0xa8);
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(1,*(string **)(this + 0x10),param_1);
    uVar2 = *(uint *)(this + 0xa8);
  }
  if ((uVar2 >> 3 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(2,*(int *)(this + 0x28),param_1);
    uVar2 = *(uint *)(this + 0xa8);
  }
  if ((uVar2 >> 5 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteDouble(3,*(double *)(this + 0x30),param_1);
    uVar2 = *(uint *)(this + 0xa8);
  }
  if ((uVar2 >> 6 & 1) != 0) {
    pPVar1 = *(PlayerProfile **)PTR_default_instance__007e7368;
    if (*(long *)(this + 0x38) != 0) {
      pPVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (4,*(MessageLite **)(pPVar1 + 0x38),param_1);
    uVar2 = *(uint *)(this + 0xa8);
  }
  if ((uVar2 >> 7 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(5,*(string **)(this + 0x40),param_1);
    uVar2 = *(uint *)(this + 0xa8);
  }
  if ((uVar2 >> 8 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(6,*(string **)(this + 0x48),param_1);
    uVar2 = *(uint *)(this + 0xa8);
  }
  if ((uVar2 >> 9 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(7,*(string **)(this + 0x50),param_1);
    uVar2 = *(uint *)(this + 0xa8);
  }
  if ((uVar2 >> 10 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(8,*(string **)(this + 0x58),param_1);
    uVar2 = *(uint *)(this + 0xa8);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(9,*(string **)(this + 0x20),param_1);
    uVar2 = *(uint *)(this + 0xa8);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    pPVar1 = *(PlayerProfile **)PTR_default_instance__007e7368;
    if (*(long *)(this + 0x18) != 0) {
      pPVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (10,*(MessageLite **)(pPVar1 + 0x18),param_1);
    uVar2 = *(uint *)(this + 0xa8);
  }
  if ((uVar2 >> 4 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(0xb,*(float *)(this + 0x2c),param_1);
  }
  if (0 < *(int *)(this + 0x68)) {
    lVar3 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteMessage
                (0xc,*(MessageLite **)(*(long *)(this + 0x60) + lVar3 * 8),param_1);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(this + 0x68));
  }
  uVar2 = *(uint *)(this + 0xa8);
  if ((uVar2 >> 0xc & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(0xd,(bool)this[0x98],param_1);
    uVar2 = *(uint *)(this + 0xa8);
  }
  if ((uVar2 >> 0xd & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteString(0xe,*(string **)(this + 0xa0),param_1);
  return;
}


