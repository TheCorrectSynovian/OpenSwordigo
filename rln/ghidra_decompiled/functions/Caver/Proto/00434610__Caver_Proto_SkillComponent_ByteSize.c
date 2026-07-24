/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00434610
 * Function: Caver::Proto::SkillComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(SkillComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SkillComponent::ByteSize() const */

int __thiscall Caver::Proto::SkillComponent::ByteSize(SkillComponent *this)

{
  SkillComponent *pSVar1;
  SkillComponent SVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  
  SVar2 = this[0x20];
  uVar6 = (uint)(byte)SVar2;
  if (SVar2 == (SkillComponent)0x0) {
                    /* catch() { ... } // from try @ 0043466c with catch @ 0043463c */
    iVar3 = 0;
    goto LAB_00434708;
  }
  if (((byte)SVar2 & 1) == 0) {
    iVar3 = 0;
joined_r0x00434664:
    if (((byte)SVar2 >> 1 & 1) != 0) {
LAB_0043467c:
      plVar7 = *(long **)(this + 0x10);
      uVar5 = (uint)*(undefined8 *)(*plVar7 + -0x18);
      if (uVar5 < 0x80) {
                    /* catch() { ... } // from try @ 00434658 with catch @ 00434690 */
        iVar4 = 1;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
        uVar6 = *(uint *)(this + 0x20);
        uVar5 = (uint)*(undefined8 *)(*plVar7 + -0x18);
      }
      iVar3 = iVar3 + iVar4 + uVar5 + 1;
    }
  }
  else {
    uVar5 = *(uint *)(this + 0xc);
    if ((int)uVar5 < 0) {
      iVar3 = 0xb;
      goto joined_r0x00434664;
    }
    if (uVar5 < 0x80) {
      iVar3 = 2;
                    /* try { // try from 00434658 to 0053466b has its CatchHandler @ 00434690 */
      if (((byte)SVar2 >> 1 & 1) == 0) goto LAB_004346bc;
      goto LAB_0043467c;
    }
                    /* try { // try from 0043466c to 00534693 has its CatchHandler @ 0043463c */
    iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
    uVar6 = *(uint *)(this + 0x20);
    iVar3 = iVar3 + 1;
    if ((uVar6 >> 1 & 1) != 0) goto LAB_0043467c;
  }
LAB_004346bc:
  if ((uVar6 >> 2 & 1) != 0) {
    pSVar1 = *(SkillComponent **)PTR_default_instance__007e5830;
    if (*(long *)(this + 0x18) != 0) {
      pSVar1 = this;
    }
    uVar6 = Vector2::ByteSize(*(Vector2 **)(pSVar1 + 0x18));
    if (uVar6 < 0x80) {
      iVar4 = 1;
    }
    else {
      iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar6);
    }
    iVar3 = iVar3 + uVar6 + iVar4 + 1;
  }
LAB_00434708:
  *(int *)(this + 8) = iVar3;
  return iVar3;
}


