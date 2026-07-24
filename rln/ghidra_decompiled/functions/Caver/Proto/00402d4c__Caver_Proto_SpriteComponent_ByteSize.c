/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00402d4c
 * Function: Caver::Proto::SpriteComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(SpriteComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SpriteComponent::ByteSize() const */

void __thiscall Caver::Proto::SpriteComponent::ByteSize(SpriteComponent *this)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  
  if (((byte)this[0x18] & 1) == 0) {
    iVar1 = 0;
  }
  else {
    plVar3 = *(long **)(this + 0x10);
    uVar2 = (uint)*(undefined8 *)(*plVar3 + -0x18);
    if (uVar2 < 0x80) {
      iVar1 = 1;
    }
    else {
      iVar1 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
      uVar2 = (uint)*(undefined8 *)(*plVar3 + -0x18);
    }
    iVar1 = iVar1 + uVar2 + 1;
  }
  *(int *)(this + 8) = iVar1;
  return;
}


