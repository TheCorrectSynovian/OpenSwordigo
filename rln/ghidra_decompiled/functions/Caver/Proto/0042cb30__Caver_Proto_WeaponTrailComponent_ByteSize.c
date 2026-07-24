/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042cb30
 * Function: Caver::Proto::WeaponTrailComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(WeaponTrailComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WeaponTrailComponent::ByteSize() const */

void __thiscall Caver::Proto::WeaponTrailComponent::ByteSize(WeaponTrailComponent *this)

{
  WeaponTrailComponent *pWVar1;
  uint uVar2;
  int iVar3;
  
  if (((byte)this[0x18] & 1) == 0) {
    iVar3 = 0;
  }
  else {
    pWVar1 = *(WeaponTrailComponent **)PTR_default_instance__007e5120;
                    /* catch() { ... } // from try @ 0042cb08 with catch @ 0042cb64 */
    if (*(long *)(this + 0x10) != 0) {
      pWVar1 = this;
    }
    uVar2 = FloatColor::ByteSize(*(FloatColor **)(pWVar1 + 0x10));
    if (uVar2 < 0x80) {
      iVar3 = 1;
    }
    else {
      iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
    }
    iVar3 = uVar2 + iVar3 + 1;
  }
  *(int *)(this + 8) = iVar3;
  return;
}


