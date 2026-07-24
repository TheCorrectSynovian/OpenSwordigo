/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042fe6c
 * Function: Caver::Proto::ItemDropComponent_ItemDropEntry::ByteSize
 * Signature: undefined __thiscall ByteSize(ItemDropComponent_ItemDropEntry * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ItemDropComponent_ItemDropEntry::ByteSize() const */

int __thiscall
Caver::Proto::ItemDropComponent_ItemDropEntry::ByteSize(ItemDropComponent_ItemDropEntry *this)

{
  ItemDropComponent_ItemDropEntry IVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  
  IVar1 = this[0x2c];
  uVar5 = (uint)(byte)IVar1;
  if (IVar1 == (ItemDropComponent_ItemDropEntry)0x0) {
    iVar2 = 0;
    goto LAB_0042ff90;
  }
  if (((byte)IVar1 & 1) == 0) {
    iVar2 = 0;
    if (((byte)IVar1 >> 1 & 1) != 0) {
LAB_0042fee0:
      plVar6 = *(long **)(this + 0x18);
      uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      if (uVar4 < 0x80) {
        iVar3 = 1;
      }
      else {
                    /* catch() { ... } // from try @ 0042fc4c with catch @ 0042ff00 */
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
        uVar5 = *(uint *)(this + 0x2c);
        uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      }
      iVar2 = iVar2 + iVar3 + uVar4 + 1;
    }
  }
  else {
    plVar6 = *(long **)(this + 0x10);
                    /* catch() { ... } // from try @ 0042fc80 with catch @ 0042fea4 */
    uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
    if (uVar4 < 0x80) {
      iVar2 = 1;
    }
    else {
      iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      uVar5 = *(uint *)(this + 0x2c);
      uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
    }
    iVar2 = iVar2 + uVar4 + 1;
    if ((uVar5 >> 1 & 1) != 0) goto LAB_0042fee0;
  }
  if ((uVar5 & 4) != 0) {
    iVar2 = iVar2 + 5;
  }
  if ((uVar5 >> 3 & 1) != 0) {
    uVar4 = *(uint *)(this + 0x24);
    if ((int)uVar4 < 0) {
      iVar3 = 0xb;
    }
    else {
                    /* catch() { ... } // from try @ 0042fc28 with catch @ 0042ff38 */
                    /* catch() { ... } // from try @ 0042fbcc with catch @ 0042ff3c */
      if (uVar4 < 0x80) {
        iVar3 = 2;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
        uVar5 = *(uint *)(this + 0x2c);
        iVar3 = iVar3 + 1;
      }
    }
    iVar2 = iVar3 + iVar2;
  }
  if ((uVar5 >> 4 & 1) != 0) {
    uVar5 = *(uint *)(this + 0x28);
    if ((int)uVar5 < 0) {
      iVar3 = 0xb;
    }
    else if (uVar5 < 0x80) {
      iVar3 = 2;
    }
    else {
      iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar3 + iVar2;
  }
LAB_0042ff90:
  *(int *)(this + 8) = iVar2;
                    /* catch() { ... } // from try @ 0042fba0 with catch @ 0042ff98 */
  return iVar2;
}


