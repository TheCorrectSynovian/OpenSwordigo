/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003dc430
 * Function: Caver::Proto::MapNode_Portal::ByteSize
 * Signature: undefined __thiscall ByteSize(MapNode_Portal * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MapNode_Portal::ByteSize() const */

void __thiscall Caver::Proto::MapNode_Portal::ByteSize(MapNode_Portal *this)

{
  MapNode_Portal MVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  
  MVar1 = this[0x24];
  uVar5 = (uint)(byte)MVar1;
  if (MVar1 == (MapNode_Portal)0x0) {
    iVar2 = 0;
    goto LAB_003dc510;
  }
  if (((byte)MVar1 & 1) == 0) {
    iVar2 = 0;
    if (((byte)MVar1 >> 1 & 1) != 0) {
LAB_003dc454:
      uVar4 = *(uint *)(this + 0x18);
      if ((int)uVar4 < 0) {
        iVar3 = 0xb;
      }
      else if (uVar4 < 0x80) {
        iVar3 = 2;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
        uVar5 = *(uint *)(this + 0x24);
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar3 + iVar2;
    }
  }
  else {
    plVar6 = *(long **)(this + 0x10);
    uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
    if (uVar4 < 0x80) {
      iVar2 = 1;
    }
    else {
      iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      uVar5 = *(uint *)(this + 0x24);
      uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
    }
    iVar2 = iVar2 + uVar4 + 1;
    if ((uVar5 >> 1 & 1) != 0) goto LAB_003dc454;
  }
  if ((uVar5 >> 2 & 1) != 0) {
    uVar4 = *(uint *)(this + 0x1c);
    if ((int)uVar4 < 0) {
      iVar3 = 0xb;
    }
    else if (uVar4 < 0x80) {
      iVar3 = 2;
    }
    else {
      iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      uVar5 = *(uint *)(this + 0x24);
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar3 + iVar2;
  }
  if ((uVar5 & 8) != 0) {
    iVar2 = iVar2 + 2;
  }
LAB_003dc510:
  *(int *)(this + 8) = iVar2;
  return;
}


