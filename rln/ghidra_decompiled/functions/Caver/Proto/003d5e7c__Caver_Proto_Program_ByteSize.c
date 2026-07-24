/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d5e7c
 * Function: Caver::Proto::Program::ByteSize
 * Signature: undefined __thiscall ByteSize(Program * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Program::ByteSize() const */

int __thiscall Caver::Proto::Program::ByteSize(Program *this)

{
  Program PVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  
  PVar1 = this[0x28];
  uVar5 = (uint)(byte)PVar1;
  if (PVar1 == (Program)0x0) {
    iVar2 = 0;
    goto LAB_003d5f70;
  }
  if (((byte)PVar1 & 1) == 0) {
    iVar2 = 0;
    if (((byte)PVar1 >> 1 & 1) != 0) {
LAB_003d5ef0:
      plVar6 = *(long **)(this + 0x18);
      uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      if (uVar4 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
        uVar5 = *(uint *)(this + 0x28);
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
      uVar5 = *(uint *)(this + 0x28);
      uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
    }
    iVar2 = iVar2 + uVar4 + 1;
    if ((uVar5 >> 1 & 1) != 0) goto LAB_003d5ef0;
  }
  if ((uVar5 >> 2 & 1) != 0) {
    plVar6 = *(long **)(this + 0x20);
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
LAB_003d5f70:
  *(int *)(this + 8) = iVar2;
  return iVar2;
}


