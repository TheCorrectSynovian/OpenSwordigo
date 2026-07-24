/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00429594
 * Function: Caver::Proto::GenericMonsterControllerComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(GenericMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GenericMonsterControllerComponent::ByteSize() const */

void __thiscall
Caver::Proto::GenericMonsterControllerComponent::ByteSize(GenericMonsterControllerComponent *this)

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
                    /* catch() { ... } // from try @ 00429294 with catch @ 004295c8 */
    }
    else {
      iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
      iVar2 = iVar2 + 1;
    }
  }
  *(int *)(this + 8) = iVar2;
  return;
}


