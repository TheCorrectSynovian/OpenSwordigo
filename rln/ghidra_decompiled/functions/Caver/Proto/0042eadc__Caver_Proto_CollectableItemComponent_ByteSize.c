/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042eadc
 * Function: Caver::Proto::CollectableItemComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(CollectableItemComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CollectableItemComponent::ByteSize() const */

int __thiscall Caver::Proto::CollectableItemComponent::ByteSize(CollectableItemComponent *this)

{
  CollectableItemComponent *pCVar1;
  CollectableItemComponent CVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  
  CVar2 = this[0x38];
  uVar6 = (uint)(byte)CVar2;
  if (CVar2 == (CollectableItemComponent)0x0) {
    iVar4 = 0;
    goto LAB_0042ec4c;
  }
  if (((byte)CVar2 & 1) == 0) {
    iVar4 = 0;
joined_r0x0042eb38:
    if (((byte)CVar2 >> 1 & 1) != 0) {
LAB_0042eb04:
      uVar5 = *(uint *)(this + 0x10);
      if ((int)uVar5 < 0) {
        iVar3 = 0xb;
      }
      else if (uVar5 < 0x80) {
        iVar3 = 2;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
        uVar6 = *(uint *)(this + 0x38);
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar3 + iVar4;
    }
  }
  else {
    uVar5 = *(uint *)(this + 0xc);
    if ((int)uVar5 < 0) {
      iVar4 = 0xb;
      goto joined_r0x0042eb38;
    }
    if (uVar5 < 0x80) {
      iVar4 = 2;
      goto joined_r0x0042eb38;
    }
    iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
    uVar6 = *(uint *)(this + 0x38);
    iVar4 = iVar4 + 1;
    if ((uVar6 >> 1 & 1) != 0) goto LAB_0042eb04;
  }
  if ((uVar6 >> 2 & 1) != 0) {
    plVar7 = *(long **)(this + 0x18);
    uVar5 = (uint)*(undefined8 *)(*plVar7 + -0x18);
    if (uVar5 < 0x80) {
      iVar3 = 1;
    }
    else {
      iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
      uVar6 = *(uint *)(this + 0x38);
      uVar5 = (uint)*(undefined8 *)(*plVar7 + -0x18);
    }
    iVar4 = iVar4 + iVar3 + uVar5 + 1;
  }
  if ((uVar6 >> 3 & 1) != 0) {
    plVar7 = *(long **)(this + 0x20);
    uVar5 = (uint)*(undefined8 *)(*plVar7 + -0x18);
    if (uVar5 < 0x80) {
      iVar3 = 1;
    }
    else {
      iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
      uVar6 = *(uint *)(this + 0x38);
      uVar5 = (uint)*(undefined8 *)(*plVar7 + -0x18);
    }
    iVar4 = iVar4 + iVar3 + uVar5 + 1;
  }
                    /* try { // try from 0042ebfc to 0052ebff has its CatchHandler @ 0042ece4 */
  if ((uVar6 & 0x10) != 0) {
    iVar4 = iVar4 + 2;
  }
                    /* try { // try from 0042ec00 to 0052ec53 has its CatchHandler @ 0042eab8 */
  if ((uVar6 >> 5 & 1) != 0) {
    pCVar1 = *(CollectableItemComponent **)PTR_default_instance__007e5fb8;
    if (*(long *)(this + 0x30) != 0) {
      pCVar1 = this;
    }
    uVar6 = Program::ByteSize(*(Program **)(pCVar1 + 0x30));
    if (uVar6 < 0x80) {
      iVar3 = 1;
    }
    else {
      iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar6);
    }
    iVar4 = iVar4 + uVar6 + iVar3 + 1;
  }
LAB_0042ec4c:
  *(int *)(this + 8) = iVar4;
                    /* try { // try from 0042ec54 to 0052ec5b has its CatchHandler @ 0042ecac */
                    /* try { // try from 0042ec5c to 0052eccf has its CatchHandler @ 0042eab8 */
  return iVar4;
}


