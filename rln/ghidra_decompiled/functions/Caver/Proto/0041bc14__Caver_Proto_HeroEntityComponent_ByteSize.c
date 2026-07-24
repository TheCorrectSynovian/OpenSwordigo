/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041bc14
 * Function: Caver::Proto::HeroEntityComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(HeroEntityComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::HeroEntityComponent::ByteSize() const */

void __thiscall Caver::Proto::HeroEntityComponent::ByteSize(HeroEntityComponent *this)

{
  HeroEntityComponent *pHVar1;
  uint uVar2;
  int iVar3;
  
  if (((byte)this[0x18] & 1) == 0) {
                    /* catch() { ... } // from try @ 0041bc5c with catch @ 0041bc2c */
    iVar3 = 0;
  }
  else {
    pHVar1 = *(HeroEntityComponent **)PTR_default_instance__007e4d60;
                    /* try { // try from 0041bc48 to 0051bc5b has its CatchHandler @ 0041bc80 */
    if (*(long *)(this + 0x10) != 0) {
      pHVar1 = this;
    }
    uVar2 = Program::ByteSize(*(Program **)(pHVar1 + 0x10));
                    /* try { // try from 0041bc5c to 0051bc83 has its CatchHandler @ 0041bc2c */
    if (uVar2 < 0x80) {
      iVar3 = 1;
    }
    else {
      iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
    }
    iVar3 = uVar2 + iVar3 + 1;
  }
  *(int *)(this + 8) = iVar3;
                    /* catch() { ... } // from try @ 0041bc48 with catch @ 0041bc80 */
  return;
}


