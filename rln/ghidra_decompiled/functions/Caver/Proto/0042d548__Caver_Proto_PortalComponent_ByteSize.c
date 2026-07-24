/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042d548
 * Function: Caver::Proto::PortalComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(PortalComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PortalComponent::ByteSize() const */

void __thiscall Caver::Proto::PortalComponent::ByteSize(PortalComponent *this)

{
  PortalComponent PVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  
                    /* try { // try from 0042d554 to 0052d55f has its CatchHandler @ 0042dadc */
  PVar1 = this[0x24];
  uVar5 = (uint)(byte)PVar1;
  if (PVar1 == (PortalComponent)0x0) {
    iVar2 = 0;
    goto LAB_0042d644;
  }
  if (((byte)PVar1 & 1) == 0) {
    iVar2 = 0;
joined_r0x0042d59c:
    if (((byte)PVar1 >> 1 & 1) != 0) {
LAB_0042d5b4:
      plVar6 = *(long **)(this + 0x10);
      uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      if (uVar4 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
                    /* try { // try from 0042d5dc to 0052d5ef has its CatchHandler @ 0042da7c */
        uVar5 = *(uint *)(this + 0x24);
        uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      }
      iVar2 = iVar2 + iVar3 + uVar4 + 1;
    }
  }
  else {
    uVar4 = *(uint *)(this + 0xc);
                    /* try { // try from 0042d580 to 0052d5bb has its CatchHandler @ 0042da80 */
    if ((int)uVar4 < 0) {
      iVar2 = 0xb;
      goto joined_r0x0042d59c;
    }
    if (uVar4 < 0x80) {
      iVar2 = 2;
      if (((byte)PVar1 >> 1 & 1) == 0) goto LAB_0042d5f4;
      goto LAB_0042d5b4;
    }
    iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
    uVar5 = *(uint *)(this + 0x24);
    iVar2 = iVar2 + 1;
    if ((uVar5 >> 1 & 1) != 0) goto LAB_0042d5b4;
  }
LAB_0042d5f4:
  if ((uVar5 >> 2 & 1) != 0) {
    plVar6 = *(long **)(this + 0x18);
                    /* try { // try from 0042d600 to 0052d60b has its CatchHandler @ 0042da44 */
    uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
    if (uVar4 < 0x80) {
      iVar3 = 1;
    }
    else {
      iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      uVar5 = *(uint *)(this + 0x24);
      uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
    }
                    /* try { // try from 0042d62c to 0052d667 has its CatchHandler @ 0042d9e8 */
    iVar2 = iVar2 + iVar3 + uVar4 + 1;
  }
  if ((uVar5 & 8) != 0) {
    iVar2 = iVar2 + 2;
  }
LAB_0042d644:
  *(int *)(this + 8) = iVar2;
  return;
}


