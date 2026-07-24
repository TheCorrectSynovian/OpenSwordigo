/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d500c
 * Function: Caver::Proto::Font::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(Font * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Font::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const */

void __thiscall Caver::Proto::Font::SerializeWithCachedSizes(Font *this,CodedOutputStream *param_1)

{
  Font *pFVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = *(uint *)(this + 0x70);
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(1,*(string **)(this + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x70);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    pFVar1 = *(Font **)PTR_default_instance__007e6840;
    if (*(long *)(this + 0x18) != 0) {
      pFVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (2,*(MessageLite **)(pFVar1 + 0x18),param_1);
  }
  if (0 < *(int *)(this + 0x28)) {
    lVar3 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteMessage
                (3,*(MessageLite **)(*(long *)(this + 0x20) + lVar3 * 8),param_1);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(this + 0x28));
  }
  uVar2 = *(uint *)(this + 0x70);
  if ((uVar2 >> 3 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBytes(4,*(string **)(this + 0x58),param_1);
    uVar2 = *(uint *)(this + 0x70);
  }
  if ((uVar2 >> 4 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(5,*(int *)(this + 0x60),param_1);
    uVar2 = *(uint *)(this + 0x70);
  }
  if ((uVar2 >> 5 & 1) != 0) {
    pFVar1 = *(Font **)PTR_default_instance__007e6840;
    if (*(long *)(this + 0x68) != 0) {
      pFVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (6,*(MessageLite **)(pFVar1 + 0x68),param_1);
    return;
  }
  return;
}


