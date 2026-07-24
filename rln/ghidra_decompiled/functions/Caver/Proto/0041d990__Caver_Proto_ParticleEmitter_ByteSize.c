/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041d990
 * Function: Caver::Proto::ParticleEmitter::ByteSize
 * Signature: undefined __thiscall ByteSize(ParticleEmitter * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleEmitter::ByteSize() const */

void __thiscall Caver::Proto::ParticleEmitter::ByteSize(ParticleEmitter *this)

{
  ParticleEmitter *pPVar1;
  ParticleEmitter PVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
                    /* try { // try from 0041d9a4 to 0051d9df has its CatchHandler @ 0041dabc */
  PVar2 = this[0x50];
  uVar5 = (uint)(byte)PVar2;
  uVar6 = uVar5;
  if (PVar2 == (ParticleEmitter)0x0) goto LAB_0041dab4;
  if (((byte)PVar2 & 1) == 0) {
    uVar6 = 0;
joined_r0x0041d9dc:
    if (((byte)PVar2 >> 1 & 1) != 0) {
LAB_0041d9f4:
      pPVar1 = *(ParticleEmitter **)PTR_default_instance__007e4cf0;
      if (*(long *)(this + 0x10) != 0) {
        pPVar1 = this;
      }
      uVar3 = Vector3::ByteSize(*(Vector3 **)(pPVar1 + 0x10));
      if (uVar3 < 0x80) {
        iVar4 = 1;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
      }
      uVar5 = *(uint *)(this + 0x50);
      uVar6 = uVar6 + uVar3 + iVar4 + 1;
    }
  }
  else {
    uVar6 = *(uint *)(this + 0xc);
    if ((int)uVar6 < 0) {
      uVar6 = 0xb;
      goto joined_r0x0041d9dc;
    }
    if (uVar6 < 0x80) {
      uVar6 = 2;
      if (((byte)PVar2 >> 1 & 1) == 0) goto LAB_0041da40;
      goto LAB_0041d9f4;
    }
    iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar6);
    uVar5 = *(uint *)(this + 0x50);
    uVar6 = iVar4 + 1;
    if ((uVar5 >> 1 & 1) != 0) goto LAB_0041d9f4;
  }
LAB_0041da40:
  if ((uVar5 >> 2 & 1) != 0) {
    pPVar1 = *(ParticleEmitter **)PTR_default_instance__007e4cf0;
    if (*(long *)(this + 0x18) != 0) {
      pPVar1 = this;
    }
    uVar3 = FloatColor::ByteSize(*(FloatColor **)(pPVar1 + 0x18));
    if (uVar3 < 0x80) {
      iVar4 = 1;
    }
    else {
      iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
    }
    uVar5 = *(uint *)(this + 0x50);
    uVar6 = uVar6 + uVar3 + iVar4 + 1;
  }
  if ((uVar5 & 8) != 0) {
    uVar6 = uVar6 + 5;
  }
  if ((uVar5 & 0x10) != 0) {
    uVar6 = uVar6 + 5;
  }
  if ((uVar5 & 0x20) != 0) {
    uVar6 = uVar6 + 5;
  }
LAB_0041dab4:
                    /* catch() { ... } // from try @ 0041d9a4 with catch @ 0041dabc */
  *(uint *)(this + 8) = *(int *)(this + 0x38) * 5 + uVar6;
  return;
}


