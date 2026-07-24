/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004156d0
 * Function: Caver::Proto::ElevatorControllerComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(ElevatorControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ElevatorControllerComponent::ByteSize() const */

int __thiscall
Caver::Proto::ElevatorControllerComponent::ByteSize(ElevatorControllerComponent *this)

{
  uint uVar1;
  ElevatorControllerComponent EVar2;
  int iVar3;
  int iVar4;
  
                    /* try { // try from 004156d0 to 005156d3 has its CatchHandler @ 00415754 */
                    /* try { // try from 004156d4 to 005157c3 has its CatchHandler @ 00415684 */
  EVar2 = this[0x14];
  if (EVar2 == (ElevatorControllerComponent)0x0) {
    iVar4 = 0;
    goto LAB_00415750;
  }
  if (((byte)EVar2 & 1) == 0) {
    iVar4 = 0;
joined_r0x00415728:
    if (((byte)EVar2 >> 1 & 1) == 0) goto LAB_00415750;
  }
  else {
    uVar1 = *(uint *)(this + 0xc);
    if ((int)uVar1 < 0) {
      iVar4 = 0xb;
      goto joined_r0x00415728;
    }
    if (uVar1 < 0x80) {
      iVar4 = 2;
      goto joined_r0x00415728;
    }
    iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
    iVar4 = iVar4 + 1;
    if ((*(uint *)(this + 0x14) >> 1 & 1) == 0) goto LAB_00415750;
  }
  uVar1 = *(uint *)(this + 0x10);
  if ((int)uVar1 < 0) {
    iVar3 = 0xb;
  }
  else if (uVar1 < 0x80) {
    iVar3 = 2;
  }
  else {
    iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
    iVar3 = iVar3 + 1;
  }
  iVar4 = iVar3 + iVar4;
LAB_00415750:
  *(int *)(this + 8) = iVar4;
                    /* catch() { ... } // from try @ 004156d0 with catch @ 00415754 */
  return iVar4;
}


