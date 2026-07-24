/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00418b54
 * Function: Caver::Proto::PhysicsObjectComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(PhysicsObjectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PhysicsObjectComponent::ByteSize() const */

void __thiscall Caver::Proto::PhysicsObjectComponent::ByteSize(PhysicsObjectComponent *this)

{
  PhysicsObjectComponent *pPVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)(this + 0x30);
  if ((uVar4 & 0xff) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (uVar4 & 1) << 1;
    if ((uVar4 >> 1 & 1) != 0) {
      pPVar1 = *(PhysicsObjectComponent **)PTR_default_instance__007e5a38;
      if (*(long *)(this + 0x10) != 0) {
        pPVar1 = this;
      }
      uVar2 = Vector2::ByteSize(*(Vector2 **)(pPVar1 + 0x10));
      if (uVar2 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
      }
      uVar4 = *(uint *)(this + 0x30);
      uVar5 = (uVar5 | 1) + uVar2 + iVar3;
    }
    if ((uVar4 & 4) != 0) {
      uVar5 = uVar5 + 5;
    }
    if ((uVar4 & 8) != 0) {
      uVar5 = uVar5 + 5;
    }
    if ((uVar4 & 0x10) != 0) {
      uVar5 = uVar5 + 5;
    }
    if ((uVar4 & 0x20) != 0) {
      uVar5 = uVar5 + 5;
    }
    if ((uVar4 & 0x40) != 0) {
      uVar5 = uVar5 + 2;
    }
    if ((uVar4 & 0x80) != 0) {
      uVar5 = uVar5 + 5;
    }
  }
  *(uint *)(this + 8) = uVar5;
  return;
}


