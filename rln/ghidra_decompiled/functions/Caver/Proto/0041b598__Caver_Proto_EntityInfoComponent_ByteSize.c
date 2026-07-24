/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041b598
 * Function: Caver::Proto::EntityInfoComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(EntityInfoComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityInfoComponent::ByteSize() const */

void __thiscall Caver::Proto::EntityInfoComponent::ByteSize(EntityInfoComponent *this)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  
  if (((byte)this[0x18] & 1) == 0) {
    iVar1 = 0;
  }
  else {
    plVar3 = *(long **)(this + 0x10);
                    /* try { // try from 0041b5c0 to 0051b5cb has its CatchHandler @ 0041b1a4 */
    uVar2 = (uint)*(undefined8 *)(*plVar3 + -0x18);
                    /* catch() { ... } // from try @ 0041b4ec with catch @ 0041b5c8 */
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


