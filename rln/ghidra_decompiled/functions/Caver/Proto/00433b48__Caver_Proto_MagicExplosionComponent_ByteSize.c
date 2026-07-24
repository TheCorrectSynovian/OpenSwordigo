/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00433b48
 * Function: Caver::Proto::MagicExplosionComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(MagicExplosionComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicExplosionComponent::ByteSize() const */

int __thiscall Caver::Proto::MagicExplosionComponent::ByteSize(MagicExplosionComponent *this)

{
  MagicExplosionComponent *pMVar1;
  MagicExplosionComponent MVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  MVar2 = this[0x24];
  uVar6 = (uint)(byte)MVar2;
  if (MVar2 == (MagicExplosionComponent)0x0) {
    iVar3 = 0;
    goto LAB_00433c48;
  }
  if (((byte)MVar2 & 1) == 0) {
    iVar3 = 0;
joined_r0x00433b9c:
    if (((byte)MVar2 >> 1 & 1) != 0) {
LAB_00433bb4:
      pMVar1 = *(MagicExplosionComponent **)PTR_default_instance__007e5e18;
      if (*(long *)(this + 0x10) != 0) {
        pMVar1 = this;
      }
      uVar4 = FloatColor::ByteSize(*(FloatColor **)(pMVar1 + 0x10));
      if (uVar4 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      }
      uVar6 = *(uint *)(this + 0x24);
      iVar3 = iVar3 + uVar4 + iVar5 + 1;
    }
  }
  else {
    uVar4 = *(uint *)(this + 0xc);
    if ((int)uVar4 < 0) {
      iVar3 = 0xb;
      goto joined_r0x00433b9c;
    }
                    /* try { // try from 00433b84 to 00533e6f has its CatchHandler @ 004339fc */
    if (uVar4 < 0x80) {
      iVar3 = 2;
      if (((byte)MVar2 >> 1 & 1) == 0) goto LAB_00433c00;
      goto LAB_00433bb4;
    }
    iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
    uVar6 = *(uint *)(this + 0x24);
    iVar3 = iVar3 + 1;
    if ((uVar6 >> 1 & 1) != 0) goto LAB_00433bb4;
  }
LAB_00433c00:
  if ((uVar6 & 4) != 0) {
    iVar3 = iVar3 + 5;
  }
  if ((uVar6 & 8) != 0) {
    iVar3 = iVar3 + 5;
  }
  if ((uVar6 >> 4 & 1) != 0) {
    uVar6 = *(uint *)(this + 0x20);
    if ((int)uVar6 < 0) {
      iVar5 = 0xb;
    }
    else if (uVar6 < 0x80) {
      iVar5 = 2;
    }
    else {
      iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar6);
      iVar5 = iVar5 + 1;
    }
    iVar3 = iVar5 + iVar3;
  }
LAB_00433c48:
  *(int *)(this + 8) = iVar3;
  return iVar3;
}


