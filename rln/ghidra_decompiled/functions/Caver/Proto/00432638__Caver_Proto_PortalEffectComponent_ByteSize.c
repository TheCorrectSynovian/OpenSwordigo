/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00432638
 * Function: Caver::Proto::PortalEffectComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(PortalEffectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PortalEffectComponent::ByteSize() const */

int __thiscall Caver::Proto::PortalEffectComponent::ByteSize(PortalEffectComponent *this)

{
  PortalEffectComponent *pPVar1;
  PortalEffectComponent PVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  PVar2 = this[0x28];
  uVar6 = (uint)(byte)PVar2;
  if (PVar2 == (PortalEffectComponent)0x0) {
    iVar5 = 0;
    goto LAB_00432764;
  }
  if (((byte)PVar2 & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00432554 with catch @ 00432658
                        */
    iVar5 = 0;
                    /* try { // try from 0043265c to 00532663 has its CatchHandler @ 0043266c */
joined_r0x00432694:
    if (((byte)PVar2 >> 1 & 1) != 0) {
LAB_00432660:
      uVar3 = *(uint *)(this + 0x10);
                    /* try { // try from 00432664 to 0053266f has its CatchHandler @ 004324ec */
      if ((int)uVar3 < 0) {
        iVar4 = 0xb;
      }
      else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0043265c with catch @ 0043266c
                        */
        if (uVar3 < 0x80) {
          iVar4 = 2;
        }
        else {
          iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
          uVar6 = *(uint *)(this + 0x28);
          iVar4 = iVar4 + 1;
        }
      }
      iVar5 = iVar4 + iVar5;
    }
  }
  else {
    uVar3 = *(uint *)(this + 0xc);
    if ((int)uVar3 < 0) {
      iVar5 = 0xb;
      goto joined_r0x00432694;
    }
    if (uVar3 < 0x80) {
      iVar5 = 2;
      goto joined_r0x00432694;
    }
    iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
    uVar6 = *(uint *)(this + 0x28);
    iVar5 = iVar5 + 1;
    if ((uVar6 >> 1 & 1) != 0) goto LAB_00432660;
  }
  if ((uVar6 >> 2 & 1) != 0) {
    pPVar1 = *(PortalEffectComponent **)PTR_default_instance__007e69c0;
    if (*(long *)(this + 0x18) != 0) {
      pPVar1 = this;
    }
    uVar3 = FloatColor::ByteSize(*(FloatColor **)(pPVar1 + 0x18));
    if (uVar3 < 0x80) {
      iVar4 = 1;
    }
    else {
      iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
    }
    uVar6 = *(uint *)(this + 0x28);
                    /* try { // try from 00432710 to 00532823 has its CatchHandler @ 00432710
                       catch() { ... } // from try @ 00432710 with catch @ 00432710
                       catch() { ... } // from try @ 0043284c with catch @ 00432710
                       catch() { ... } // from try @ 004328b4 with catch @ 00432710
                       catch() { ... } // from try @ 00432974 with catch @ 00432710 */
    iVar5 = iVar5 + uVar3 + iVar4 + 1;
  }
  if ((uVar6 >> 3 & 1) != 0) {
    pPVar1 = *(PortalEffectComponent **)PTR_default_instance__007e69c0;
    if (*(long *)(this + 0x20) != 0) {
      pPVar1 = this;
    }
    uVar6 = Vector3::ByteSize(*(Vector3 **)(pPVar1 + 0x20));
    if (uVar6 < 0x80) {
      iVar4 = 1;
    }
    else {
      iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar6);
    }
    iVar5 = iVar5 + uVar6 + iVar4 + 1;
  }
LAB_00432764:
  *(int *)(this + 8) = iVar5;
  return iVar5;
}


