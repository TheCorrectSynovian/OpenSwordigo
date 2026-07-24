/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003dc39c
 * Function: Caver::Proto::MapNode_Portal::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(MapNode_Portal * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MapNode_Portal::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::MapNode_Portal::SerializeWithCachedSizes
          (MapNode_Portal *this,CodedOutputStream *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x24);
  if ((uVar1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(1,*(string **)(this + 0x10),param_1);
    uVar1 = *(uint *)(this + 0x24);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteEnum(2,*(int *)(this + 0x18),param_1);
    uVar1 = *(uint *)(this + 0x24);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteEnum(3,*(int *)(this + 0x1c),param_1);
    uVar1 = *(uint *)(this + 0x24);
  }
  if ((uVar1 >> 3 & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteBool(4,(bool)this[0x20],param_1);
  return;
}


