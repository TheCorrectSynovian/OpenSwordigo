/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00422710
 * Function: Caver::Proto::SimpleGlowComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(SimpleGlowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SimpleGlowComponent::ByteSize() const */

void __thiscall Caver::Proto::SimpleGlowComponent::ByteSize(SimpleGlowComponent *this)

{
  SimpleGlowComponent *pSVar1;
  SimpleGlowComponent SVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  SVar2 = this[0x38];
  uVar6 = (uint)(byte)SVar2;
  if (SVar2 == (SimpleGlowComponent)0x0) {
                    /* catch() { ... } // from try @ 004220d4 with catch @ 00422738 */
    iVar3 = 0;
  }
  else {
    if (((byte)SVar2 & 1) == 0) {
      iVar3 = 0;
    }
    else {
      pSVar1 = *(SimpleGlowComponent **)PTR_default_instance__007e53a8;
      if (*(long *)(this + 0x10) != 0) {
        pSVar1 = this;
      }
      uVar4 = FloatColor::ByteSize(*(FloatColor **)(pSVar1 + 0x10));
      if (uVar4 < 0x80) {
        iVar3 = 1;
                    /* catch() { ... } // from try @ 004220b0 with catch @ 00422770 */
      }
      else {
                    /* catch() { ... } // from try @ 00422054 with catch @ 00422774 */
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      }
      uVar6 = *(uint *)(this + 0x38);
      iVar3 = uVar4 + iVar3 + 1;
    }
    if ((uVar6 & 2) != 0) {
      iVar3 = iVar3 + 5;
    }
    if ((uVar6 >> 2 & 1) != 0) {
      uVar4 = *(uint *)(this + 0x1c);
      if ((int)uVar4 < 0) {
        iVar5 = 0xb;
      }
      else if (uVar4 < 0x80) {
        iVar5 = 2;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
        uVar6 = *(uint *)(this + 0x38);
        iVar5 = iVar5 + 1;
      }
      iVar3 = iVar5 + iVar3;
    }
                    /* catch() { ... } // from try @ 00422020 with catch @ 004227d0 */
    if ((uVar6 & 8) != 0) {
      iVar3 = iVar3 + 5;
    }
    if ((uVar6 >> 4 & 1) != 0) {
      pSVar1 = *(SimpleGlowComponent **)PTR_default_instance__007e53a8;
      if (*(long *)(this + 0x28) != 0) {
        pSVar1 = this;
      }
      uVar4 = Vector2::ByteSize(*(Vector2 **)(pSVar1 + 0x28));
      if (uVar4 < 0x80) {
        iVar5 = 1;
                    /* catch() { ... } // from try @ 00421ffc with catch @ 00422808 */
      }
      else {
                    /* catch() { ... } // from try @ 00421f98 with catch @ 0042280c */
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      }
      uVar6 = *(uint *)(this + 0x38);
      iVar3 = iVar3 + uVar4 + iVar5 + 1;
    }
    if ((uVar6 & 0x20) != 0) {
      iVar3 = iVar3 + 5;
    }
    if ((uVar6 & 0x40) != 0) {
      iVar3 = iVar3 + 5;
    }
  }
  *(int *)(this + 8) = iVar3;
  return;
}


