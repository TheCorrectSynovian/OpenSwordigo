/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00422cb4
 * Function: Caver::Proto::ParticleObjectComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(ParticleObjectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleObjectComponent::ByteSize() const */

void __thiscall Caver::Proto::ParticleObjectComponent::ByteSize(ParticleObjectComponent *this)

{
  uint uVar1;
  int iVar2;
  
  if (((byte)this[0x10] & 1) == 0) {
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(this + 0xc);
    if ((int)uVar1 < 0) {
      iVar2 = 0xb;
    }
    else if (uVar1 < 0x80) {
      iVar2 = 2;
    }
    else {
      iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
      iVar2 = iVar2 + 1;
    }
  }
  *(int *)(this + 8) = iVar2;
  return;
}


