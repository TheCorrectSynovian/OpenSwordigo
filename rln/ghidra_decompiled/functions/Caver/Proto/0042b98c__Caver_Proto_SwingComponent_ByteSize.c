/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042b98c
 * Function: Caver::Proto::SwingComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(SwingComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SwingComponent::ByteSize() const */

void __thiscall Caver::Proto::SwingComponent::ByteSize(SwingComponent *this)

{
  uint uVar1;
  SwingComponent SVar2;
  int iVar3;
  uint uVar4;
  
  SVar2 = this[0x1c];
  uVar4 = (uint)(byte)SVar2;
  if (SVar2 == (SwingComponent)0x0) {
    iVar3 = 0;
  }
  else {
    if (((byte)SVar2 & 1) == 0) {
      iVar3 = 0;
    }
    else {
      uVar1 = *(uint *)(this + 0xc);
      if ((int)uVar1 < 0) {
        iVar3 = 0xb;
      }
      else if (uVar1 < 0x80) {
        iVar3 = 2;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
        uVar4 = *(uint *)(this + 0x1c);
        iVar3 = iVar3 + 1;
      }
    }
    if ((uVar4 & 2) != 0) {
      iVar3 = iVar3 + 2;
    }
                    /* catch() { ... } // from try @ 0042ba24 with catch @ 0042b9f4 */
    if ((uVar4 & 4) != 0) {
      iVar3 = iVar3 + 2;
    }
    if ((uVar4 & 8) != 0) {
      iVar3 = iVar3 + 5;
    }
                    /* try { // try from 0042ba10 to 0052ba23 has its CatchHandler @ 0042ba48 */
    if ((uVar4 & 0x10) != 0) {
      iVar3 = iVar3 + 5;
    }
  }
  *(int *)(this + 8) = iVar3;
  return;
}


