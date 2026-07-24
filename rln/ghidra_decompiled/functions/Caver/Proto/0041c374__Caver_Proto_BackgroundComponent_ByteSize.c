/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041c374
 * Function: Caver::Proto::BackgroundComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(BackgroundComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BackgroundComponent::ByteSize() const */

void __thiscall Caver::Proto::BackgroundComponent::ByteSize(BackgroundComponent *this)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  
                    /* catch() { ... } // from try @ 0041c258 with catch @ 0041c384 */
  if (((byte)this[0x18] & 1) == 0) {
    iVar1 = 0;
  }
  else {
                    /* catch() { ... } // from try @ 0041c230 with catch @ 0041c394 */
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


