/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fdac4
 * Function: Caver::Proto::ObjectLibrary::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(ObjectLibrary * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectLibrary::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::ObjectLibrary::SerializeWithCachedSizes
          (ObjectLibrary *this,CodedOutputStream *param_1)

{
  long lVar1;
  
  if (((byte)this[0xf8] & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(1,*(string **)(this + 0x10),param_1);
  }
  if (0 < *(int *)(this + 0x20)) {
    lVar1 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteMessage
                (2,*(MessageLite **)(*(long *)(this + 0x18) + lVar1 * 8),param_1);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(this + 0x20));
  }
  if (0 < *(int *)(this + 0x58)) {
    lVar1 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteString
                (3,*(string **)(*(long *)(this + 0x50) + lVar1 * 8),param_1);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(this + 0x58));
  }
  if (0 < *(int *)(this + 0x90)) {
    lVar1 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteMessage
                (4,*(MessageLite **)(*(long *)(this + 0x88) + lVar1 * 8),param_1);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(this + 0x90));
  }
  if (0 < *(int *)(this + 200)) {
    lVar1 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteMessage
                (5,*(MessageLite **)(*(long *)(this + 0xc0) + lVar1 * 8),param_1);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(this + 200));
  }
  return;
}


