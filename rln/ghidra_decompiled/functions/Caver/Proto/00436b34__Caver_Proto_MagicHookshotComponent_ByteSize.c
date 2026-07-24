/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00436b34
 * Function: Caver::Proto::MagicHookshotComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(MagicHookshotComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::MagicHookshotComponent::ByteSize() const */

int __thiscall Caver::Proto::MagicHookshotComponent::ByteSize(MagicHookshotComponent *this)

{
  MagicHookshotComponent *pMVar1;
  uint uVar2;
  MagicHookshotComponent MVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00436b20 with catch @ 00436b34
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00436afc with catch @ 00436b3c
                        */
  MVar3 = this[0x28];
  uVar6 = (uint)(byte)MVar3;
  if (MVar3 == (MagicHookshotComponent)0x0) {
    iVar4 = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00436b60 with catch @ 00436b78
                        */
    goto LAB_00436cb0;
  }
  if (((byte)MVar3 & 1) == 0) {
    iVar4 = 0;
joined_r0x00436b90:
                    /* try { // try from 00436b90 to 00536bb3 has its CatchHandler @ 00436b7c */
    if (((byte)MVar3 >> 1 & 1) != 0) {
LAB_00436b5c:
      uVar2 = *(uint *)(this + 0x10);
                    /* try { // try from 00436b60 to 00536b6f has its CatchHandler @ 00436b78 */
      if ((int)uVar2 < 0) {
        iVar5 = 0xb;
      }
      else if (uVar2 < 0x80) {
        iVar5 = 2;
                    /* try { // try from 00436b70 to 00536b7b has its CatchHandler @ 00436a9c */
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
        uVar6 = *(uint *)(this + 0x28);
        iVar5 = iVar5 + 1;
      }
      iVar4 = iVar5 + iVar4;
    }
  }
  else {
                    /* catch() { ... } // from try @ 00436b90 with catch @ 00436b7c */
    uVar2 = *(uint *)(this + 0xc);
    if ((int)uVar2 < 0) {
                    /* catch() { ... } // from try @ 00436b8c with catch @ 00436ba0 */
      iVar4 = 0xb;
      goto joined_r0x00436b90;
    }
    if (uVar2 < 0x80) {
                    /* try { // try from 00436b8c to 00536b8f has its CatchHandler @ 00436ba0 */
      iVar4 = 2;
      goto joined_r0x00436b90;
    }
    iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
    uVar6 = *(uint *)(this + 0x28);
    iVar4 = iVar4 + 1;
    if ((uVar6 >> 1 & 1) != 0) goto LAB_00436b5c;
  }
  if ((uVar6 >> 2 & 1) != 0) {
    uVar2 = *(uint *)(this + 0x14);
    if ((int)uVar2 < 0) {
      iVar4 = iVar4 + 0xb;
    }
    else if (uVar2 < 0x80) {
      iVar4 = iVar4 + 2;
    }
    else {
      iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
      uVar6 = *(uint *)(this + 0x28);
      iVar4 = iVar5 + 1 + iVar4;
    }
  }
  if ((uVar6 >> 3 & 1) != 0) {
    uVar2 = *(uint *)(this + 0x18);
    if ((int)uVar2 < 0) {
      iVar4 = iVar4 + 0xb;
    }
    else if (uVar2 < 0x80) {
      iVar4 = iVar4 + 2;
    }
    else {
      iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
      uVar6 = *(uint *)(this + 0x28);
      iVar4 = iVar5 + 1 + iVar4;
    }
  }
  if ((uVar6 >> 4 & 1) != 0) {
    pMVar1 = *(MagicHookshotComponent **)PTR_default_instance__007e6b30;
    if (*(long *)(this + 0x20) != 0) {
      pMVar1 = this;
    }
    uVar6 = FloatColor::ByteSize(*(FloatColor **)(pMVar1 + 0x20));
    if (uVar6 < 0x80) {
      iVar5 = 1;
    }
    else {
      iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar6);
    }
                    /* catch() { ... } // from try @ 00436cd8 with catch @ 00436ca8 */
    iVar4 = iVar4 + uVar6 + iVar5 + 1;
  }
LAB_00436cb0:
  *(int *)(this + 8) = iVar4;
                    /* try { // try from 00436cc4 to 00536cd7 has its CatchHandler @ 00436cfc */
  return iVar4;
}


