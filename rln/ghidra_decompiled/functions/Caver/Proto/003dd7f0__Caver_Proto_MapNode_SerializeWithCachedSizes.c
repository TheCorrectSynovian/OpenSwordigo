/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003dd7f0
 * Function: Caver::Proto::MapNode::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(MapNode * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MapNode::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const
    */

void __thiscall
Caver::Proto::MapNode::SerializeWithCachedSizes(MapNode *this,CodedOutputStream *param_1)

{
  MapNode *pMVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = *(uint *)(this + 0x84);
  if ((uVar2 & 1) != 0) {
    pMVar1 = *(MapNode **)PTR_default_instance__007e5378;
    if (*(long *)(this + 0x10) != 0) {
      pMVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (1,*(MessageLite **)(pMVar1 + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x84);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(2,*(string **)(this + 0x18),param_1);
  }
  if (0 < *(int *)(this + 0x30)) {
    lVar3 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteMessage
                (3,*(MessageLite **)(*(long *)(this + 0x28) + lVar3 * 8),param_1);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(this + 0x30));
  }
  uVar2 = *(uint *)(this + 0x84);
  if ((uVar2 >> 4 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteEnum(4,*(int *)(this + 0x60),param_1);
    uVar2 = *(uint *)(this + 0x84);
  }
  if ((uVar2 >> 5 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(5,(bool)this[100],param_1);
    uVar2 = *(uint *)(this + 0x84);
  }
  if ((uVar2 >> 6 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(6,*(int *)(this + 0x68),param_1);
    uVar2 = *(uint *)(this + 0x84);
  }
  if ((uVar2 >> 7 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(7,*(string **)(this + 0x70),param_1);
    uVar2 = *(uint *)(this + 0x84);
  }
  if ((uVar2 >> 8 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(8,(bool)this[0x78],param_1);
    uVar2 = *(uint *)(this + 0x84);
  }
  if ((uVar2 >> 9 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(9,*(int *)(this + 0x7c),param_1);
    uVar2 = *(uint *)(this + 0x84);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(10,*(string **)(this + 0x20),param_1);
    uVar2 = *(uint *)(this + 0x84);
  }
  if ((uVar2 >> 10 & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteBool(0xb,(bool)this[0x80],param_1);
  return;
}


