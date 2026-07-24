/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004169c4
 * Function: Caver::Proto::DoorControllerComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(DoorControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DoorControllerComponent::ByteSize() const */

void __thiscall Caver::Proto::DoorControllerComponent::ByteSize(DoorControllerComponent *this)

{
  uint uVar1;
  DoorControllerComponent DVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
                    /* try { // try from 004169d0 to 005169d7 has its CatchHandler @ 004169dc */
  DVar2 = this[0x20];
  uVar5 = (uint)(byte)DVar2;
  if (DVar2 == (DoorControllerComponent)0x0) {
    iVar3 = 0;
    goto LAB_00416ad0;
  }
                    /* catch() { ... } // from try @ 004169d0 with catch @ 004169dc */
  if (((byte)DVar2 & 1) == 0) {
                    /* catch() { ... } // from try @ 00416880 with catch @ 004169e0 */
    iVar3 = 0;
joined_r0x00416a1c:
                    /* catch() { ... } // from try @ 0041683c with catch @ 00416a1c */
    if (((byte)DVar2 >> 1 & 1) != 0) {
LAB_004169e8:
      uVar1 = *(uint *)(this + 0x10);
                    /* catch() { ... } // from try @ 0041685c with catch @ 004169ec */
      if ((int)uVar1 < 0) {
        iVar4 = 0xb;
                    /* catch() { ... } // from try @ 00416818 with catch @ 00416a28 */
      }
      else if (uVar1 < 0x80) {
        iVar4 = 2;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
        uVar5 = *(uint *)(this + 0x20);
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar4 + iVar3;
    }
  }
  else {
    uVar1 = *(uint *)(this + 0xc);
                    /* try { // try from 00416a0c to 00516a13 has its CatchHandler @ 00416a18 */
    if ((int)uVar1 < 0) {
      iVar3 = 0xb;
      goto joined_r0x00416a1c;
    }
    if (uVar1 < 0x80) {
                    /* catch() { ... } // from try @ 00416a0c with catch @ 00416a18 */
      iVar3 = 2;
      goto joined_r0x00416a1c;
    }
    iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
    uVar5 = *(uint *)(this + 0x20);
    iVar3 = iVar3 + 1;
                    /* try { // try from 00416aac to 00516ab3 has its CatchHandler @ 00416bb8 */
    if ((uVar5 >> 1 & 1) != 0) goto LAB_004169e8;
  }
  if ((uVar5 >> 2 & 1) != 0) {
    uVar1 = *(uint *)(this + 0x14);
    if ((int)uVar1 < 0) {
      iVar3 = iVar3 + 0xb;
    }
    else if (uVar1 < 0x80) {
                    /* try { // try from 00416a7c to 00516a83 has its CatchHandler @ 00416c7c */
      iVar3 = iVar3 + 2;
    }
    else {
      iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
      uVar5 = *(uint *)(this + 0x20);
      iVar3 = iVar4 + 1 + iVar3;
    }
  }
  if ((uVar5 >> 3 & 1) != 0) {
    uVar1 = *(uint *)(this + 0x18);
    if ((int)uVar1 < 0) {
                    /* catch() { ... } // from try @ 004167e4 with catch @ 00416a88 */
      iVar4 = 0xb;
    }
    else {
                    /* catch() { ... } // from try @ 00416a4c with catch @ 00416a58 */
                    /* catch() { ... } // from try @ 00416734 with catch @ 00416a5c */
      if (uVar1 < 0x80) {
        iVar4 = 2;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
        uVar5 = *(uint *)(this + 0x20);
        iVar4 = iVar4 + 1;
      }
    }
    iVar3 = iVar4 + iVar3;
  }
  if ((uVar5 & 0x10) != 0) {
    iVar3 = iVar3 + 2;
  }
LAB_00416ad0:
  *(int *)(this + 8) = iVar3;
                    /* try { // try from 00416ad4 to 00516ad7 has its CatchHandler @ 00416c7c */
  return;
}


