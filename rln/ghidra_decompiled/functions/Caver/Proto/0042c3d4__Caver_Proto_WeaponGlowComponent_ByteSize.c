/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042c3d4
 * Function: Caver::Proto::WeaponGlowComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(WeaponGlowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WeaponGlowComponent::ByteSize() const */

void __thiscall Caver::Proto::WeaponGlowComponent::ByteSize(WeaponGlowComponent *this)

{
  WeaponGlowComponent *pWVar1;
  WeaponGlowComponent WVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  WVar2 = this[0x24];
  uVar6 = (uint)(byte)WVar2;
  if (WVar2 == (WeaponGlowComponent)0x0) {
    iVar3 = 0;
    goto LAB_0042c4e8;
  }
  if (((byte)WVar2 & 1) == 0) {
    iVar3 = 0;
joined_r0x0042c428:
                    /* catch() { ... } // from try @ 0042c260 with catch @ 0042c428 */
    if (((byte)WVar2 >> 1 & 1) != 0) {
LAB_0042c440:
                    /* catch() { ... } // from try @ 0042c1cc with catch @ 0042c440 */
      pWVar1 = *(WeaponGlowComponent **)PTR_default_instance__007e5698;
      if (*(long *)(this + 0x10) != 0) {
        pWVar1 = this;
      }
      uVar4 = FloatColor::ByteSize(*(FloatColor **)(pWVar1 + 0x10));
                    /* try { // try from 0042c460 to 0052c467 has its CatchHandler @ 0042c470 */
                    /* try { // try from 0042c468 to 0052c473 has its CatchHandler @ 0042bf34 */
      if (uVar4 < 0x80) {
        iVar5 = 1;
                    /* catch() { ... } // from try @ 0042c3ac with catch @ 0042c470
                       catch() { ... } // from try @ 0042c460 with catch @ 0042c470 */
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      }
      uVar6 = *(uint *)(this + 0x24);
      iVar3 = iVar3 + uVar4 + iVar5 + 1;
    }
  }
  else {
    uVar4 = *(uint *)(this + 0xc);
    if ((int)uVar4 < 0) {
      iVar3 = 0xb;
      goto joined_r0x0042c428;
    }
    if (uVar4 < 0x80) {
      iVar3 = 2;
      if (((byte)WVar2 >> 1 & 1) == 0) goto LAB_0042c48c;
      goto LAB_0042c440;
    }
    iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
                    /* catch() { ... } // from try @ 0042c214 with catch @ 0042c434 */
    uVar6 = *(uint *)(this + 0x24);
    iVar3 = iVar3 + 1;
    if ((uVar6 >> 1 & 1) != 0) goto LAB_0042c440;
  }
LAB_0042c48c:
  if ((uVar6 >> 2 & 1) != 0) {
    pWVar1 = *(WeaponGlowComponent **)PTR_default_instance__007e5698;
    if (*(long *)(this + 0x18) != 0) {
      pWVar1 = this;
    }
    uVar4 = FloatColor::ByteSize(*(FloatColor **)(pWVar1 + 0x18));
    if (uVar4 < 0x80) {
      iVar5 = 1;
    }
    else {
      iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
    }
    uVar6 = *(uint *)(this + 0x24);
    iVar3 = iVar3 + uVar4 + iVar5 + 1;
  }
  if ((uVar6 & 8) != 0) {
    iVar3 = iVar3 + 5;
  }
LAB_0042c4e8:
  *(int *)(this + 8) = iVar3;
  return;
}


