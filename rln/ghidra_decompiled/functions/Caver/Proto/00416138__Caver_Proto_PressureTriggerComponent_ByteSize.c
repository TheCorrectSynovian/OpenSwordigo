/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00416138
 * Function: Caver::Proto::PressureTriggerComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(PressureTriggerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PressureTriggerComponent::ByteSize() const */

uint __thiscall Caver::Proto::PressureTriggerComponent::ByteSize(PressureTriggerComponent *this)

{
  PressureTriggerComponent *pPVar1;
  PressureTriggerComponent PVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  PVar2 = this[0x28];
  uVar5 = (uint)(byte)PVar2;
  if ((byte)PVar2 == 0) {
    uVar6 = 0;
  }
  else {
                    /* try { // try from 0041615c to 005161e3 has its CatchHandler @ 00416598 */
    uVar6 = -((byte)PVar2 & 1) & 5 | (byte)PVar2 & 2;
    if (((byte)PVar2 >> 2 & 1) != 0) {
      pPVar1 = *(PressureTriggerComponent **)PTR_default_instance__007e4948;
      if (*(long *)(this + 0x18) != 0) {
        pPVar1 = this;
      }
      uVar3 = Program::ByteSize(*(Program **)(pPVar1 + 0x18));
      if (uVar3 < 0x80) {
        iVar4 = 1;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
      }
      uVar5 = *(uint *)(this + 0x28);
      uVar6 = uVar6 + uVar3 + iVar4 + 1;
    }
    if ((uVar5 >> 3 & 1) != 0) {
      pPVar1 = *(PressureTriggerComponent **)PTR_default_instance__007e4948;
      if (*(long *)(this + 0x20) != 0) {
        pPVar1 = this;
      }
      uVar5 = Program::ByteSize(*(Program **)(pPVar1 + 0x20));
      if (uVar5 < 0x80) {
        iVar4 = 1;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
      }
      uVar6 = uVar6 + uVar5 + iVar4 + 1;
    }
  }
  *(uint *)(this + 8) = uVar6;
  return uVar6;
}


