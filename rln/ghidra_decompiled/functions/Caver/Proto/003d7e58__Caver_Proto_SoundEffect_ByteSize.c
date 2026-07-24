/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d7e58
 * Function: Caver::Proto::SoundEffect::ByteSize
 * Signature: undefined __thiscall ByteSize(SoundEffect * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SoundEffect::ByteSize() const */

void __thiscall Caver::Proto::SoundEffect::ByteSize(SoundEffect *this)

{
  SoundEffect SVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  
  SVar1 = this[0x28];
  uVar5 = (uint)(byte)SVar1;
  if (SVar1 == (SoundEffect)0x0) {
    iVar2 = 0;
    goto LAB_003d7f24;
  }
  if (((byte)SVar1 & 1) == 0) {
    iVar2 = 0;
    if (((byte)SVar1 >> 1 & 1) != 0) {
LAB_003d7ecc:
      plVar6 = *(long **)(this + 0x18);
      uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      if (uVar4 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
        uVar5 = *(uint *)(this + 0x28);
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
      uVar5 = *(uint *)(this + 0x28);
      uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
    }
    iVar2 = iVar2 + uVar4 + 1;
    if ((uVar5 >> 1 & 1) != 0) goto LAB_003d7ecc;
  }
  if ((uVar5 & 4) != 0) {
    iVar2 = iVar2 + 5;
  }
  if ((uVar5 & 8) != 0) {
    iVar2 = iVar2 + 5;
  }
LAB_003d7f24:
  *(int *)(this + 8) = iVar2;
  return;
}


