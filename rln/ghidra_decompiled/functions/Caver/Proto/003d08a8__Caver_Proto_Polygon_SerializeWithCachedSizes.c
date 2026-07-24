/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d08a8
 * Function: Caver::Proto::Polygon::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(Polygon * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Polygon::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const
    */

void __thiscall
Caver::Proto::Polygon::SerializeWithCachedSizes(Polygon *this,CodedOutputStream *param_1)

{
  uint uVar1;
  long lVar2;
  
  if (0 < *(int *)(this + 0x18)) {
    lVar2 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteMessage
                (1,*(MessageLite **)(*(long *)(this + 0x10) + lVar2 * 8),param_1);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(this + 0x18));
  }
  uVar1 = *(uint *)(this + 0x4c);
  if ((uVar1 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(2,(bool)this[0x48],param_1);
    uVar1 = *(uint *)(this + 0x4c);
  }
  if ((uVar1 >> 2 & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteBool(3,(bool)this[0x49],param_1);
  return;
}


