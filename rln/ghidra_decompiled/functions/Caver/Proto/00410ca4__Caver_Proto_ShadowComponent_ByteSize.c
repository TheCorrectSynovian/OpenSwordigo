/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00410ca4
 * Function: Caver::Proto::ShadowComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(ShadowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ShadowComponent::ByteSize() const */

uint __thiscall Caver::Proto::ShadowComponent::ByteSize(ShadowComponent *this)

{
  ShadowComponent *pSVar1;
  ShadowComponent SVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  SVar2 = this[0x20];
  if ((byte)SVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = -((byte)SVar2 & 1) & 5;
    if (((byte)SVar2 & 2) != 0) {
      uVar5 = uVar5 + 5;
    }
    if (((byte)SVar2 >> 2 & 1) != 0) {
      pSVar1 = *(ShadowComponent **)PTR_default_instance__007e5258;
      if (*(long *)(this + 0x18) != 0) {
        pSVar1 = this;
      }
      uVar3 = Vector3::ByteSize(*(Vector3 **)(pSVar1 + 0x18));
      if (uVar3 < 0x80) {
        iVar4 = 1;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
      }
      uVar5 = uVar5 + uVar3 + iVar4 + 1;
    }
  }
  *(uint *)(this + 8) = uVar5;
  return uVar5;
}


