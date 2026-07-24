/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e2338
 * Function: Caver::Proto::Quest::ByteSize
 * Signature: undefined __thiscall ByteSize(Quest * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Quest::ByteSize() const */

int __thiscall Caver::Proto::Quest::ByteSize(Quest *this)

{
  Quest QVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  
  QVar1 = this[0x30];
  uVar5 = (uint)(byte)QVar1;
  if (QVar1 == (Quest)0x0) {
    iVar2 = 0;
    goto LAB_003e2478;
  }
  if (((byte)QVar1 & 1) == 0) {
    iVar2 = 0;
    if (((byte)QVar1 >> 1 & 1) != 0) {
LAB_003e23ac:
      plVar6 = *(long **)(this + 0x18);
      uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      if (uVar4 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
        uVar5 = *(uint *)(this + 0x30);
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
      uVar5 = *(uint *)(this + 0x30);
      uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
    }
    iVar2 = iVar2 + uVar4 + 1;
    if ((uVar5 >> 1 & 1) != 0) goto LAB_003e23ac;
  }
  if ((uVar5 >> 2 & 1) != 0) {
    plVar6 = *(long **)(this + 0x20);
    uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
    if (uVar4 < 0x80) {
      iVar3 = 1;
    }
    else {
      iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      uVar5 = *(uint *)(this + 0x30);
      uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
    }
    iVar2 = iVar2 + iVar3 + uVar4 + 1;
  }
  if ((uVar5 >> 3 & 1) != 0) {
    plVar6 = *(long **)(this + 0x28);
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
LAB_003e2478:
  *(int *)(this + 8) = iVar2;
  return iVar2;
}


