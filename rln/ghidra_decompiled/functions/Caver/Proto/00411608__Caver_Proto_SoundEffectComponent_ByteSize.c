/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00411608
 * Function: Caver::Proto::SoundEffectComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(SoundEffectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SoundEffectComponent::ByteSize() const */

void __thiscall Caver::Proto::SoundEffectComponent::ByteSize(SoundEffectComponent *this)

{
  SoundEffectComponent SVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  
  SVar1 = this[0x20];
  uVar4 = (uint)(byte)SVar1;
  if (SVar1 == (SoundEffectComponent)0x0) {
    iVar2 = 0;
  }
  else {
    if (((byte)SVar1 & 1) == 0) {
      iVar2 = 0;
    }
    else {
      plVar5 = *(long **)(this + 0x10);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00411700 with catch @ 0041163c
                       catch(type#1 @ 00000000) { ... } // from try @ 00411830 with catch @ 0041163c
                        */
      uVar3 = (uint)*(undefined8 *)(*plVar5 + -0x18);
      if (uVar3 < 0x80) {
        iVar2 = 1;
      }
      else {
        iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
        uVar4 = *(uint *)(this + 0x20);
        uVar3 = (uint)*(undefined8 *)(*plVar5 + -0x18);
      }
      iVar2 = iVar2 + uVar3 + 1;
    }
    if ((uVar4 & 2) != 0) {
      iVar2 = iVar2 + 5;
    }
    if ((uVar4 & 4) != 0) {
      iVar2 = iVar2 + 5;
    }
  }
  *(int *)(this + 8) = iVar2;
                    /* try { // try from 00411690 to 005116b7 has its CatchHandler @ 00411794 */
  return;
}


