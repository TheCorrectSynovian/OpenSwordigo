/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042dd7c
 * Function: Caver::Proto::SpawnPointComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(SpawnPointComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SpawnPointComponent::ByteSize() const */

int __thiscall Caver::Proto::SpawnPointComponent::ByteSize(SpawnPointComponent *this)

{
  SpawnPointComponent *pSVar1;
  SpawnPointComponent SVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  SVar2 = this[0x18];
  if (SVar2 == (SpawnPointComponent)0x0) {
    iVar3 = 0;
    goto LAB_0042de30;
  }
  if (((byte)SVar2 & 1) == 0) {
    iVar3 = 0;
joined_r0x0042ddc4:
    if (((byte)SVar2 >> 1 & 1) == 0) goto LAB_0042de30;
  }
  else {
                    /* catch() { ... } // from try @ 0042d26c with catch @ 0042ddb0 */
    uVar4 = *(uint *)(this + 0xc);
    if ((int)uVar4 < 0) {
      iVar3 = 0xb;
      goto joined_r0x0042ddc4;
    }
    if (uVar4 < 0x80) {
      iVar3 = 2;
      goto joined_r0x0042ddc4;
    }
    iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
    iVar3 = iVar3 + 1;
    if ((*(uint *)(this + 0x18) >> 1 & 1) == 0) goto LAB_0042de30;
  }
  pSVar1 = *(SpawnPointComponent **)PTR_default_instance__007e5048;
  if (*(long *)(this + 0x10) != 0) {
    pSVar1 = this;
  }
  uVar4 = Vector3::ByteSize(*(Vector3 **)(pSVar1 + 0x10));
  if (uVar4 < 0x80) {
    iVar5 = 1;
  }
  else {
    iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
  }
                    /* try { // try from 0042de24 to 0052de73 has its CatchHandler @ 0042de24
                       catch() { ... } // from try @ 0042de24 with catch @ 0042de24
                       catch() { ... } // from try @ 0042de7c with catch @ 0042de24
                       catch() { ... } // from try @ 0042def8 with catch @ 0042de24 */
  iVar3 = iVar3 + uVar4 + iVar5 + 1;
LAB_0042de30:
  *(int *)(this + 8) = iVar3;
  return iVar3;
}


