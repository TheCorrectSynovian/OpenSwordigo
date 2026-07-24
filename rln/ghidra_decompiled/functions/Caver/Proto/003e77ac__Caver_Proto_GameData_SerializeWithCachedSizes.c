/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e77ac
 * Function: Caver::Proto::GameData::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(GameData * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GameData::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const
    */

void __thiscall
Caver::Proto::GameData::SerializeWithCachedSizes(GameData *this,CodedOutputStream *param_1)

{
  long lVar1;
  
  if (0 < *(int *)(this + 0x18)) {
    lVar1 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteMessage
                (1,*(MessageLite **)(*(long *)(this + 0x10) + lVar1 * 8),param_1);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(this + 0x18));
  }
  if (0 < *(int *)(this + 0x50)) {
    lVar1 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteMessage
                (2,*(MessageLite **)(*(long *)(this + 0x48) + lVar1 * 8),param_1);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(this + 0x50));
  }
  if (0 < *(int *)(this + 0x88)) {
    lVar1 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteMessage
                (3,*(MessageLite **)(*(long *)(this + 0x80) + lVar1 * 8),param_1);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(this + 0x88));
  }
  if (0 < *(int *)(this + 0xc0)) {
    lVar1 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteMessage
                (4,*(MessageLite **)(*(long *)(this + 0xb8) + lVar1 * 8),param_1);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(this + 0xc0));
  }
  if (0 < *(int *)(this + 0xf8)) {
    lVar1 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteMessage
                (5,*(MessageLite **)(*(long *)(this + 0xf0) + lVar1 * 8),param_1);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(this + 0xf8));
  }
  return;
}


