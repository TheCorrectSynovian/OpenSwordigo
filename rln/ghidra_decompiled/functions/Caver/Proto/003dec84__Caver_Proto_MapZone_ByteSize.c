/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003dec84
 * Function: Caver::Proto::MapZone::ByteSize
 * Signature: undefined __thiscall ByteSize(MapZone * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MapZone::ByteSize() const */

int __thiscall Caver::Proto::MapZone::ByteSize(MapZone *this)

{
  MapZone MVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  
  MVar1 = this[0x68];
  uVar5 = (uint)(byte)MVar1;
  if (MVar1 == (MapZone)0x0) {
    iVar2 = 0;
    goto LAB_003dedc4;
  }
  if (((byte)MVar1 & 1) == 0) {
    iVar2 = 0;
    if (((byte)MVar1 >> 1 & 1) != 0) {
LAB_003decf8:
      plVar6 = *(long **)(this + 0x18);
      uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      if (uVar4 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
        uVar5 = *(uint *)(this + 0x68);
        uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      }
      iVar2 = iVar2 + iVar3 + uVar4 + 1;
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
      uVar5 = *(uint *)(this + 0x68);
      uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
    }
    iVar2 = iVar2 + uVar4 + 1;
    if ((uVar5 >> 1 & 1) != 0) goto LAB_003decf8;
  }
  if ((uVar5 >> 3 & 1) != 0) {
    uVar4 = *(uint *)(this + 0x58);
    if ((int)uVar4 < 0) {
      iVar2 = iVar2 + 0xb;
    }
    else if (uVar4 < 0x80) {
      iVar2 = iVar2 + 2;
    }
    else {
      iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      uVar5 = *(uint *)(this + 0x68);
      iVar2 = iVar3 + 1 + iVar2;
    }
  }
  if ((uVar5 >> 4 & 1) != 0) {
    plVar6 = *(long **)(this + 0x60);
    uVar5 = (uint)*(undefined8 *)(*plVar6 + -0x18);
    if (uVar5 < 0x80) {
      iVar3 = 1;
    }
    else {
      iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
      uVar5 = (uint)*(undefined8 *)(*plVar6 + -0x18);
    }
    iVar2 = iVar2 + iVar3 + uVar5 + 1;
  }
LAB_003dedc4:
  iVar2 = *(int *)(this + 0x28) + iVar2;
  if (0 < *(int *)(this + 0x28)) {
    lVar7 = 0;
    do {
      uVar5 = MapNode::ByteSize(*(MapNode **)(*(long *)(this + 0x20) + lVar7 * 8));
      if (uVar5 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
      }
      lVar7 = lVar7 + 1;
      iVar2 = uVar5 + iVar2 + iVar3;
    } while (lVar7 < *(int *)(this + 0x28));
  }
  *(int *)(this + 8) = iVar2;
  return iVar2;
}


