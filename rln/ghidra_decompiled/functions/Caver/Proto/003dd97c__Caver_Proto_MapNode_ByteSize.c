/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003dd97c
 * Function: Caver::Proto::MapNode::ByteSize
 * Signature: undefined __thiscall ByteSize(MapNode * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MapNode::ByteSize() const */

int __thiscall Caver::Proto::MapNode::ByteSize(MapNode *this)

{
  MapNode *pMVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  
  uVar4 = *(uint *)(this + 0x84);
  if ((uVar4 & 0xff) == 0) {
    iVar3 = 0;
  }
  else {
    if ((uVar4 & 1) == 0) {
      iVar3 = 0;
    }
    else {
      pMVar1 = *(MapNode **)PTR_default_instance__007e5378;
      if (*(long *)(this + 0x10) != 0) {
        pMVar1 = this;
      }
      uVar2 = Vector2::ByteSize(*(Vector2 **)(pMVar1 + 0x10));
      if (uVar2 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
      }
      uVar4 = *(uint *)(this + 0x84);
      iVar3 = uVar2 + iVar3 + 1;
    }
    if ((uVar4 >> 1 & 1) != 0) {
      plVar6 = *(long **)(this + 0x18);
      uVar2 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      if (uVar2 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
        uVar4 = *(uint *)(this + 0x84);
        uVar2 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      }
      iVar3 = iVar3 + iVar5 + uVar2 + 1;
    }
    if ((uVar4 >> 2 & 1) != 0) {
      plVar6 = *(long **)(this + 0x20);
      uVar2 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      if (uVar2 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
        uVar4 = *(uint *)(this + 0x84);
        uVar2 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      }
      iVar3 = iVar3 + iVar5 + uVar2 + 1;
    }
    if ((uVar4 >> 4 & 1) != 0) {
      uVar2 = *(uint *)(this + 0x60);
      if ((int)uVar2 < 0) {
        iVar5 = 0xb;
      }
      else if (uVar2 < 0x80) {
        iVar5 = 2;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
        uVar4 = *(uint *)(this + 0x84);
        iVar5 = iVar5 + 1;
      }
      iVar3 = iVar5 + iVar3;
    }
    if ((uVar4 & 0x20) != 0) {
      iVar3 = iVar3 + 2;
    }
    if ((uVar4 >> 6 & 1) != 0) {
      uVar2 = *(uint *)(this + 0x68);
      if ((int)uVar2 < 0) {
        iVar3 = iVar3 + 0xb;
      }
      else if (uVar2 < 0x80) {
        iVar3 = iVar3 + 2;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
        uVar4 = *(uint *)(this + 0x84);
        iVar3 = iVar5 + 1 + iVar3;
      }
    }
    if ((uVar4 >> 7 & 1) != 0) {
      plVar6 = *(long **)(this + 0x70);
      uVar2 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      if (uVar2 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
        uVar4 = *(uint *)(this + 0x84);
        uVar2 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      }
      iVar3 = iVar3 + iVar5 + uVar2 + 1;
    }
  }
  if ((uVar4 & 0xff00) != 0) {
    if ((uVar4 & 0x100) != 0) {
      iVar3 = iVar3 + 2;
    }
    if ((uVar4 >> 9 & 1) != 0) {
      uVar2 = *(uint *)(this + 0x7c);
      if ((int)uVar2 < 0) {
        iVar5 = 0xb;
      }
      else if (uVar2 < 0x80) {
        iVar5 = 2;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
        uVar4 = *(uint *)(this + 0x84);
        iVar5 = iVar5 + 1;
      }
      iVar3 = iVar5 + iVar3;
    }
    if ((uVar4 & 0x400) != 0) {
      iVar3 = iVar3 + 2;
    }
  }
  iVar3 = *(int *)(this + 0x30) + iVar3;
  if (0 < *(int *)(this + 0x30)) {
    lVar7 = 0;
    do {
      uVar4 = MapNode_Portal::ByteSize(*(MapNode_Portal **)(*(long *)(this + 0x28) + lVar7 * 8));
      if (uVar4 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      }
      lVar7 = lVar7 + 1;
      iVar3 = uVar4 + iVar3 + iVar5;
    } while (lVar7 < *(int *)(this + 0x30));
  }
  *(int *)(this + 8) = iVar3;
  return iVar3;
}


