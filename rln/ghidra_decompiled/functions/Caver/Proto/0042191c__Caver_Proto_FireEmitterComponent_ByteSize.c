/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042191c
 * Function: Caver::Proto::FireEmitterComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(FireEmitterComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::FireEmitterComponent::ByteSize() const */

int __thiscall Caver::Proto::FireEmitterComponent::ByteSize(FireEmitterComponent *this)

{
  FireEmitterComponent *pFVar1;
  FireEmitterComponent FVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
                    /* try { // try from 0042192c to 0052192f has its CatchHandler @ 0042194c */
                    /* try { // try from 00421930 to 0052195f has its CatchHandler @ 00421910 */
  FVar2 = this[0x40];
  uVar6 = (uint)(byte)FVar2;
  if (FVar2 == (FireEmitterComponent)0x0) {
    iVar5 = 0;
    goto LAB_00421b04;
  }
  if (((byte)FVar2 & 1) == 0) {
    iVar5 = 0;
joined_r0x00421978:
    if (((byte)FVar2 >> 1 & 1) != 0) {
LAB_00421944:
      uVar3 = *(uint *)(this + 0x10);
      if ((int)uVar3 < 0) {
        iVar4 = 0xb;
      }
      else {
                    /* catch() { ... } // from try @ 0042192c with catch @ 0042194c */
        if (uVar3 < 0x80) {
          iVar4 = 2;
        }
        else {
          iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
          uVar6 = *(uint *)(this + 0x40);
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
      goto joined_r0x00421978;
    }
    if (uVar3 < 0x80) {
      iVar5 = 2;
      goto joined_r0x00421978;
    }
    iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
    uVar6 = *(uint *)(this + 0x40);
    iVar5 = iVar5 + 1;
    if ((uVar6 >> 1 & 1) != 0) goto LAB_00421944;
  }
  if ((uVar6 >> 2 & 1) != 0) {
    pFVar1 = *(FireEmitterComponent **)PTR_default_instance__007e7b98;
    if (*(long *)(this + 0x18) != 0) {
      pFVar1 = this;
    }
    uVar3 = Vector2::ByteSize(*(Vector2 **)(pFVar1 + 0x18));
    if (uVar3 < 0x80) {
                    /* catch() { ... } // from try @ 00421a10 with catch @ 004219e0 */
      iVar4 = 1;
    }
    else {
      iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
    }
    uVar6 = *(uint *)(this + 0x40);
                    /* try { // try from 004219fc to 00521a0f has its CatchHandler @ 00421a34 */
    iVar5 = iVar5 + uVar3 + iVar4 + 1;
  }
  if ((uVar6 >> 3 & 1) != 0) {
                    /* try { // try from 00421a10 to 00521a37 has its CatchHandler @ 004219e0 */
    pFVar1 = *(FireEmitterComponent **)PTR_default_instance__007e7b98;
    if (*(long *)(this + 0x20) != 0) {
      pFVar1 = this;
    }
    uVar3 = Vector3::ByteSize(*(Vector3 **)(pFVar1 + 0x20));
    if (uVar3 < 0x80) {
      iVar4 = 1;
                    /* catch() { ... } // from try @ 004219fc with catch @ 00421a34 */
    }
    else {
      iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
    }
    uVar6 = *(uint *)(this + 0x40);
    iVar5 = iVar5 + uVar3 + iVar4 + 1;
  }
  if ((uVar6 >> 4 & 1) != 0) {
    pFVar1 = *(FireEmitterComponent **)PTR_default_instance__007e7b98;
    if (*(long *)(this + 0x28) != 0) {
      pFVar1 = this;
    }
    uVar3 = FloatColor::ByteSize(*(FloatColor **)(pFVar1 + 0x28));
    if (uVar3 < 0x80) {
      iVar4 = 1;
    }
    else {
      iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
    }
    uVar6 = *(uint *)(this + 0x40);
    iVar5 = iVar5 + uVar3 + iVar4 + 1;
  }
  if ((uVar6 & 0x20) != 0) {
    iVar5 = iVar5 + 5;
  }
  if ((uVar6 & 0x40) != 0) {
    iVar5 = iVar5 + 5;
  }
  if ((uVar6 >> 7 & 1) != 0) {
    pFVar1 = *(FireEmitterComponent **)PTR_default_instance__007e7b98;
    if (*(long *)(this + 0x38) != 0) {
      pFVar1 = this;
    }
    uVar6 = Vector3::ByteSize(*(Vector3 **)(pFVar1 + 0x38));
    if (uVar6 < 0x80) {
      iVar4 = 1;
    }
    else {
      iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar6);
    }
    iVar5 = iVar5 + uVar6 + iVar4 + 1;
  }
LAB_00421b04:
  *(int *)(this + 8) = iVar5;
  return iVar5;
}


