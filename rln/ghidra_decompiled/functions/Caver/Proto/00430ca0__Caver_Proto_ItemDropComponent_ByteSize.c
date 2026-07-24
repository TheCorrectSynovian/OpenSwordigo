/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00430ca0
 * Function: Caver::Proto::ItemDropComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(ItemDropComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ItemDropComponent::ByteSize() const */

int __thiscall Caver::Proto::ItemDropComponent::ByteSize(ItemDropComponent *this)

{
  ItemDropComponent IVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  
  IVar1 = this[0x5c];
  uVar5 = (uint)(byte)IVar1;
                    /* catch() { ... } // from try @ 00430d24 with catch @ 00430cb8
                       catch() { ... } // from try @ 00430de4 with catch @ 00430cb8 */
  if (IVar1 == (ItemDropComponent)0x0) {
    iVar2 = 0;
    goto LAB_00430d6c;
  }
  if (((byte)IVar1 & 1) == 0) {
    iVar2 = 0;
    if (((byte)IVar1 >> 1 & 1) != 0) {
LAB_00430d14:
      plVar6 = *(long **)(this + 0x18);
                    /* try { // try from 00430d1c to 00530d23 has its CatchHandler @ 00430d5c */
      uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
                    /* try { // try from 00430d24 to 00530dd3 has its CatchHandler @ 00430cb8 */
      if (uVar4 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
        uVar5 = *(uint *)(this + 0x5c);
        uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      }
      iVar2 = iVar2 + iVar3 + uVar4 + 1;
    }
  }
  else {
    plVar6 = *(long **)(this + 0x10);
    uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
    if (uVar4 < 0x80) {
      iVar2 = 1;
    }
    else {
      iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      uVar5 = *(uint *)(this + 0x5c);
      uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
    }
    iVar2 = iVar2 + uVar4 + 1;
                    /* try { // try from 00430d10 to 00530d17 has its CatchHandler @ 00430dc8 */
    if ((uVar5 >> 1 & 1) != 0) goto LAB_00430d14;
  }
                    /* catch() { ... } // from try @ 00430d1c with catch @ 00430d5c */
  if ((uVar5 & 8) != 0) {
    iVar2 = iVar2 + 2;
  }
  if ((uVar5 & 0x10) != 0) {
    iVar2 = iVar2 + 2;
  }
LAB_00430d6c:
  iVar2 = *(int *)(this + 0x28) + iVar2;
  if (0 < *(int *)(this + 0x28)) {
    lVar7 = 0;
    do {
      uVar5 = ItemDropComponent_ItemDropEntry::ByteSize
                        (*(ItemDropComponent_ItemDropEntry **)(*(long *)(this + 0x20) + lVar7 * 8));
      if (uVar5 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
      }
      lVar7 = lVar7 + 1;
      iVar2 = uVar5 + iVar2 + iVar3;
    } while (lVar7 < *(int *)(this + 0x28));
  }
  *(int *)(this + 8) = iVar2;
                    /* catch() { ... } // from try @ 00430d10 with catch @ 00430dc8 */
                    /* try { // try from 00430dd4 to 00530dd7 has its CatchHandler @ 00430df8 */
  return iVar2;
}


