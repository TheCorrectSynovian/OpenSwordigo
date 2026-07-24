/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fb9c0
 * Function: Caver::Proto::Component::ByteSize
 * Signature: undefined __thiscall ByteSize(Component * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Component::ByteSize() const */

void __thiscall Caver::Proto::Component::ByteSize(Component *this)

{
  Component CVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  
  CVar1 = this[0x58];
  uVar5 = (uint)(byte)CVar1;
  if (CVar1 == (Component)0x0) {
    iVar2 = 0;
    goto LAB_003fbaf0;
  }
  if (((byte)CVar1 & 1) == 0) {
    iVar2 = 0;
    if (((byte)CVar1 >> 1 & 1) != 0) {
LAB_003fb9e8:
      uVar4 = *(uint *)(this + 0x48);
      if ((int)uVar4 < 0) {
        iVar3 = 0xb;
      }
      else if (uVar4 < 0x80) {
        iVar3 = 2;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
        uVar5 = *(uint *)(this + 0x58);
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar3 + iVar2;
    }
  }
  else {
    plVar6 = *(long **)(this + 0x40);
    uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
    if (uVar4 < 0x80) {
      iVar2 = 1;
    }
    else {
      iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      uVar5 = *(uint *)(this + 0x58);
      uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
    }
    iVar2 = iVar2 + uVar4 + 1;
    if ((uVar5 >> 1 & 1) != 0) goto LAB_003fb9e8;
  }
  if ((uVar5 >> 2 & 1) != 0) {
    uVar4 = *(uint *)(this + 0x4c);
    if ((int)uVar4 < 0) {
      iVar2 = iVar2 + 0xb;
    }
    else if (uVar4 < 0x80) {
      iVar2 = iVar2 + 2;
    }
    else {
      iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      uVar5 = *(uint *)(this + 0x58);
      iVar2 = iVar3 + 1 + iVar2;
    }
  }
  if ((uVar5 >> 3 & 1) != 0) {
    plVar6 = *(long **)(this + 0x50);
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
LAB_003fbaf0:
  iVar3 = google::protobuf::internal::ExtensionSet::ByteSize((ExtensionSet *)(this + 8));
  *(int *)(this + 0x38) = iVar3 + iVar2;
  return;
}


