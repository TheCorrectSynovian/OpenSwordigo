/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003debbc
 * Function: Caver::Proto::MapZone::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(MapZone * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MapZone::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const
    */

void __thiscall
Caver::Proto::MapZone::SerializeWithCachedSizes(MapZone *this,CodedOutputStream *param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(this + 0x68);
  if ((uVar1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(1,*(string **)(this + 0x10),param_1);
    uVar1 = *(uint *)(this + 0x68);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(2,*(string **)(this + 0x18),param_1);
  }
  if (0 < *(int *)(this + 0x28)) {
    lVar2 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteMessage
                (3,*(MessageLite **)(*(long *)(this + 0x20) + lVar2 * 8),param_1);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(this + 0x28));
  }
  uVar1 = *(uint *)(this + 0x68);
  if ((uVar1 >> 3 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(4,*(int *)(this + 0x58),param_1);
    uVar1 = *(uint *)(this + 0x68);
  }
  if ((uVar1 >> 4 & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteString(5,*(string **)(this + 0x60),param_1);
  return;
}


