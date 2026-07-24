/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f068c
 * Function: Caver::Proto::GameState::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(GameState * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::GameState::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const
    */

void __thiscall
Caver::Proto::GameState::SerializeWithCachedSizes(GameState *this,CodedOutputStream *param_1)

{
  GameState *pGVar1;
  uint uVar2;
  long lVar3;
  
  if (((byte)this[0x11c] & 1) != 0) {
    pGVar1 = *(GameState **)PTR_default_instance__007e5ff0;
    if (*(long *)(this + 0x10) != 0) {
      pGVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (1,*(MessageLite **)(pGVar1 + 0x10),param_1);
  }
  if (0 < *(int *)(this + 0x20)) {
    lVar3 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteMessage
                (2,*(MessageLite **)(*(long *)(this + 0x18) + lVar3 * 8),param_1);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(this + 0x20));
  }
  uVar2 = *(uint *)(this + 0x11c);
  if ((uVar2 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(3,*(string **)(this + 0x50),param_1);
    uVar2 = *(uint *)(this + 0x11c);
  }
  if ((uVar2 >> 3 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(4,*(string **)(this + 0x58),param_1);
    uVar2 = *(uint *)(this + 0x11c);
  }
  if ((uVar2 >> 5 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(5,*(string **)(this + 0x68),param_1);
  }
  if (0 < *(int *)(this + 0x88)) {
    lVar3 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteMessage
                (7,*(MessageLite **)(*(long *)(this + 0x80) + lVar3 * 8),param_1);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(this + 0x88));
  }
  uVar2 = *(uint *)(this + 0x11c);
  if ((uVar2 >> 9 & 1) != 0) {
    pGVar1 = *(GameState **)PTR_default_instance__007e5ff0;
    if (*(long *)(this + 0xb8) != 0) {
      pGVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (8,*(MessageLite **)(pGVar1 + 0xb8),param_1);
    uVar2 = *(uint *)(this + 0x11c);
  }
  if ((uVar2 >> 10 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(9,*(string **)(this + 0xc0),param_1);
    uVar2 = *(uint *)(this + 0x11c);
  }
  if ((uVar2 >> 6 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(10,*(string **)(this + 0x70),param_1);
    uVar2 = *(uint *)(this + 0x11c);
  }
  if ((uVar2 >> 7 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(0xb,*(string **)(this + 0x78),param_1);
  }
  if (0 < *(int *)(this + 0xe8)) {
    lVar3 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteMessage
                (0xc,*(MessageLite **)(*(long *)(this + 0xe0) + lVar3 * 8),param_1);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(this + 0xe8));
  }
  uVar2 = *(uint *)(this + 0x11c);
  if ((uVar2 >> 4 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(0xd,*(string **)(this + 0x60),param_1);
    uVar2 = *(uint *)(this + 0x11c);
  }
  if ((uVar2 >> 0xb & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(0xe,(bool)this[200],param_1);
    uVar2 = *(uint *)(this + 0x11c);
  }
  if ((uVar2 >> 0xc & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(0xf,(bool)this[0xc9],param_1);
    uVar2 = *(uint *)(this + 0x11c);
  }
  if ((uVar2 >> 0xd & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(0x10,*(string **)(this + 0xd0),param_1);
    uVar2 = *(uint *)(this + 0x11c);
  }
  if ((uVar2 >> 0xe & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(0x11,*(string **)(this + 0xd8),param_1);
    uVar2 = *(uint *)(this + 0x11c);
  }
  if ((uVar2 >> 0x10 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(0x12,(bool)this[0x118],param_1);
    uVar2 = *(uint *)(this + 0x11c);
  }
  if ((uVar2 >> 0x11 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(0x13,(bool)this[0x119],param_1);
    uVar2 = *(uint *)(this + 0x11c);
  }
  if ((uVar2 >> 0x12 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(0x14,(bool)this[0x11a],param_1);
    uVar2 = *(uint *)(this + 0x11c);
  }
  if ((uVar2 >> 0x13 & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteBool(0x15,(bool)this[0x11b],param_1);
  return;
}


