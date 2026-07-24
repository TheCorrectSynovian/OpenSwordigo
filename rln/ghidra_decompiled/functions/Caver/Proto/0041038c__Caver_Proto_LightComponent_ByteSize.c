/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041038c
 * Function: Caver::Proto::LightComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(LightComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::LightComponent::ByteSize() const */

int __thiscall Caver::Proto::LightComponent::ByteSize(LightComponent *this)

{
  LightComponent *pLVar1;
  LightComponent LVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  LVar2 = this[0x38];
  uVar6 = (uint)(byte)LVar2;
                    /* catch() { ... } // from try @ 0040ead0 with catch @ 004103a4 */
  if (LVar2 == (LightComponent)0x0) {
    iVar3 = 0;
  }
  else {
    if (((byte)LVar2 & 1) == 0) {
      iVar3 = 0;
    }
    else {
      uVar4 = *(uint *)(this + 0xc);
      if ((int)uVar4 < 0) {
        iVar3 = 0xb;
      }
      else if (uVar4 < 0x80) {
        iVar3 = 2;
      }
      else {
                    /* catch() { ... } // from try @ 0040eac8 with catch @ 004103dc */
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
                    /* catch() { ... } // from try @ 0040ea88 with catch @ 004103e0 */
        uVar6 = *(uint *)(this + 0x38);
        iVar3 = iVar3 + 1;
      }
    }
    if ((uVar6 & 2) != 0) {
      iVar3 = iVar3 + 5;
    }
    if ((uVar6 >> 2 & 1) != 0) {
      pLVar1 = *(LightComponent **)PTR_default_instance__007e5cc8;
      if (*(long *)(this + 0x18) != 0) {
        pLVar1 = this;
      }
      uVar4 = FloatColor::ByteSize(*(FloatColor **)(pLVar1 + 0x18));
      if (uVar4 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      }
      uVar6 = *(uint *)(this + 0x38);
                    /* catch() { ... } // from try @ 0040ea78 with catch @ 0041043c */
      iVar3 = iVar3 + uVar4 + iVar5 + 1;
    }
    if ((uVar6 & 8) != 0) {
      iVar3 = iVar3 + 5;
    }
    if ((uVar6 & 0x10) != 0) {
      iVar3 = iVar3 + 5;
    }
    if ((uVar6 & 0x20) != 0) {
      iVar3 = iVar3 + 5;
    }
    if ((uVar6 >> 6 & 1) != 0) {
      pLVar1 = *(LightComponent **)PTR_default_instance__007e5cc8;
      if (*(long *)(this + 0x30) != 0) {
        pLVar1 = this;
      }
      uVar6 = Vector3::ByteSize(*(Vector3 **)(pLVar1 + 0x30));
                    /* catch() { ... } // from try @ 0040ea64 with catch @ 00410494 */
      if (uVar6 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar6);
      }
      iVar3 = iVar3 + uVar6 + iVar5 + 1;
    }
  }
  *(int *)(this + 8) = iVar3;
  return iVar3;
}


