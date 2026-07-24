/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e9220
 * Function: Caver::Proto::PlayerProfile_Counter::ByteSize
 * Signature: undefined __thiscall ByteSize(PlayerProfile_Counter * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PlayerProfile_Counter::ByteSize() const */

int __thiscall Caver::Proto::PlayerProfile_Counter::ByteSize(PlayerProfile_Counter *this)

{
  PlayerProfile_Counter PVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  
  PVar1 = this[0x1c];
  uVar5 = (uint)(byte)PVar1;
  if (PVar1 == (PlayerProfile_Counter)0x0) {
    iVar2 = 0;
  }
  else {
    if (((byte)PVar1 & 1) == 0) {
      iVar2 = 0;
      if (((byte)PVar1 >> 1 & 1) == 0) goto LAB_003e92bc;
    }
    else {
      plVar6 = *(long **)(this + 0x10);
      uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      if (uVar4 < 0x80) {
        iVar2 = 1;
      }
      else {
        iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
        uVar5 = *(uint *)(this + 0x1c);
        uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      }
      iVar2 = iVar2 + uVar4 + 1;
      if ((uVar5 >> 1 & 1) == 0) goto LAB_003e92bc;
    }
    uVar5 = *(uint *)(this + 0x18);
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
LAB_003e92bc:
  *(int *)(this + 8) = iVar2;
  return iVar2;
}


