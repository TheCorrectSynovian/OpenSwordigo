/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040c788
 * Function: Caver::Proto::CollisionShapeComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(CollisionShapeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CollisionShapeComponent::ByteSize() const */

int __thiscall Caver::Proto::CollisionShapeComponent::ByteSize(CollisionShapeComponent *this)

{
  CollisionShapeComponent *pCVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = *(uint *)(this + 0x40);
  if ((uVar3 & 0xff) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (uVar3 & 1) * 2;
    if ((uVar3 & 2) != 0) {
      iVar5 = iVar5 + 2;
    }
    if ((uVar3 & 4) != 0) {
      iVar5 = iVar5 + 2;
    }
    if ((uVar3 & 8) != 0) {
      iVar5 = iVar5 + 2;
    }
    if ((uVar3 & 0x10) != 0) {
      iVar5 = iVar5 + 2;
    }
    if ((uVar3 & 0x20) != 0) {
      iVar5 = iVar5 + 5;
    }
    if ((uVar3 & 0x40) != 0) {
      iVar5 = iVar5 + 5;
    }
    if ((uVar3 >> 7 & 1) != 0) {
      uVar2 = *(uint *)(this + 0x1c);
      if ((int)uVar2 < 0) {
        iVar4 = 0xb;
      }
      else if (uVar2 < 0x80) {
        iVar4 = 2;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
        uVar3 = *(uint *)(this + 0x40);
        iVar4 = iVar4 + 1;
      }
      iVar5 = iVar4 + iVar5;
    }
  }
  if ((uVar3 & 0xff00) != 0) {
    if ((uVar3 & 0x100) != 0) {
      iVar5 = iVar5 + 5;
    }
    if ((uVar3 & 0x200) != 0) {
      iVar5 = iVar5 + 2;
    }
    if ((uVar3 >> 10 & 1) != 0) {
      pCVar1 = *(CollisionShapeComponent **)PTR_default_instance__007e7360;
      if (*(long *)(this + 0x28) != 0) {
        pCVar1 = this;
      }
      uVar2 = Program::ByteSize(*(Program **)(pCVar1 + 0x28));
      if (uVar2 < 0x80) {
        iVar4 = 1;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
      }
      uVar3 = *(uint *)(this + 0x40);
      iVar5 = iVar5 + uVar2 + iVar4 + 1;
    }
    if ((uVar3 >> 0xb & 1) != 0) {
      pCVar1 = *(CollisionShapeComponent **)PTR_default_instance__007e7360;
      if (*(long *)(this + 0x30) != 0) {
        pCVar1 = this;
      }
      uVar2 = Program::ByteSize(*(Program **)(pCVar1 + 0x30));
      if (uVar2 < 0x80) {
        iVar4 = 1;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
      }
      uVar3 = *(uint *)(this + 0x40);
      iVar5 = iVar5 + uVar2 + iVar4 + 1;
    }
    if ((uVar3 >> 0xc & 1) != 0) {
      pCVar1 = *(CollisionShapeComponent **)PTR_default_instance__007e7360;
      if (*(long *)(this + 0x38) != 0) {
        pCVar1 = this;
      }
      uVar3 = Program::ByteSize(*(Program **)(pCVar1 + 0x38));
      if (uVar3 < 0x80) {
        iVar4 = 1;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
      }
      iVar5 = iVar5 + uVar3 + iVar4 + 1;
    }
  }
  *(int *)(this + 8) = iVar5;
  return iVar5;
}


