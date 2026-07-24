/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e1558
 * Function: Caver::Proto::Skill::ByteSize
 * Signature: undefined __thiscall ByteSize(Skill * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::Skill::ByteSize() const */

int __thiscall Caver::Proto::Skill::ByteSize(Skill *this)

{
  Skill SVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  
  SVar1 = this[0x34];
  uVar5 = (uint)(byte)SVar1;
  if (SVar1 == (Skill)0x0) {
    iVar2 = 0;
    goto LAB_003e16e8;
  }
  if (((byte)SVar1 & 1) == 0) {
    iVar2 = 0;
    if (((byte)SVar1 >> 1 & 1) != 0) {
LAB_003e15cc:
      plVar6 = *(long **)(this + 0x18);
      uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      if (uVar4 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
        uVar5 = *(uint *)(this + 0x34);
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
      uVar5 = *(uint *)(this + 0x34);
      uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
    }
    iVar2 = iVar2 + uVar4 + 1;
    if ((uVar5 >> 1 & 1) != 0) goto LAB_003e15cc;
  }
  if ((uVar5 >> 2 & 1) != 0) {
    plVar6 = *(long **)(this + 0x20);
    uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
    if (uVar4 < 0x80) {
      iVar3 = 1;
    }
    else {
      iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      uVar5 = *(uint *)(this + 0x34);
      uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
    }
    iVar2 = iVar2 + iVar3 + uVar4 + 1;
  }
  if ((uVar5 >> 3 & 1) != 0) {
    uVar4 = *(uint *)(this + 0x28);
    if ((int)uVar4 < 0) {
      iVar2 = iVar2 + 0xb;
    }
    else if (uVar4 < 0x80) {
      iVar2 = iVar2 + 2;
    }
    else {
      iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      uVar5 = *(uint *)(this + 0x34);
      iVar2 = iVar3 + 1 + iVar2;
    }
  }
  if ((uVar5 >> 4 & 1) != 0) {
    uVar4 = *(uint *)(this + 0x2c);
    if ((int)uVar4 < 0) {
      iVar2 = iVar2 + 0xb;
    }
    else if (uVar4 < 0x80) {
      iVar2 = iVar2 + 2;
    }
    else {
      iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      uVar5 = *(uint *)(this + 0x34);
      iVar2 = iVar3 + 1 + iVar2;
    }
  }
  if ((uVar5 >> 5 & 1) != 0) {
    uVar5 = *(uint *)(this + 0x30);
    if ((int)uVar5 < 0) {
      iVar3 = 0xb;
    }
    else if (uVar5 < 0x80) {
      iVar3 = 2;
    }
    else {
      iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar3 + iVar2;
  }
LAB_003e16e8:
  *(int *)(this + 8) = iVar2;
  return iVar2;
}


