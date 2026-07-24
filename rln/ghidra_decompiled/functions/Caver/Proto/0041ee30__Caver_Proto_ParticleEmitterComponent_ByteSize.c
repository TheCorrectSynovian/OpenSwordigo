/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041ee30
 * Function: Caver::Proto::ParticleEmitterComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(ParticleEmitterComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleEmitterComponent::ByteSize() const */

int __thiscall Caver::Proto::ParticleEmitterComponent::ByteSize(ParticleEmitterComponent *this)

{
  ParticleEmitterComponent *pPVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  
  uVar4 = *(uint *)(this + 0x88);
  if ((uVar4 & 0xff) == 0) {
    iVar2 = 0;
  }
  else {
    if ((uVar4 & 1) == 0) {
      iVar2 = 0;
    }
    else {
      uVar3 = *(uint *)(this + 0xc);
      if ((int)uVar3 < 0) {
        iVar2 = 0xb;
      }
      else if (uVar3 < 0x80) {
        iVar2 = 2;
      }
      else {
        iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
        uVar4 = *(uint *)(this + 0x88);
        iVar2 = iVar2 + 1;
      }
    }
    if ((uVar4 >> 1 & 1) != 0) {
      uVar3 = *(uint *)(this + 0x10);
      if ((int)uVar3 < 0) {
        iVar6 = 0xb;
      }
      else if (uVar3 < 0x80) {
        iVar6 = 2;
      }
      else {
        iVar6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
        uVar4 = *(uint *)(this + 0x88);
        iVar6 = iVar6 + 1;
      }
      iVar2 = iVar6 + iVar2;
    }
    if ((uVar4 & 4) != 0) {
      iVar2 = iVar2 + 2;
    }
    if ((uVar4 >> 3 & 1) != 0) {
      uVar3 = *(uint *)(this + 0x18);
      if ((int)uVar3 < 0) {
        iVar6 = 0xb;
      }
      else if (uVar3 < 0x80) {
        iVar6 = 2;
      }
      else {
        iVar6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
        uVar4 = *(uint *)(this + 0x88);
        iVar6 = iVar6 + 1;
      }
      iVar2 = iVar6 + iVar2;
    }
    if ((uVar4 & 0x10) != 0) {
      iVar2 = iVar2 + 2;
    }
    if ((uVar4 >> 7 & 1) != 0) {
      pPVar1 = *(ParticleEmitterComponent **)PTR_default_instance__007e5ba8;
      if (*(long *)(this + 0x78) != 0) {
        pPVar1 = this;
      }
      uVar3 = Vector3::ByteSize(*(Vector3 **)(pPVar1 + 0x78));
      if (uVar3 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
      }
      uVar4 = *(uint *)(this + 0x88);
      iVar2 = iVar2 + uVar3 + iVar6 + 1;
    }
  }
  if ((uVar4 >> 8 & 1) != 0) {
    pPVar1 = *(ParticleEmitterComponent **)PTR_default_instance__007e5ba8;
    if (*(long *)(this + 0x80) != 0) {
      pPVar1 = this;
    }
    uVar4 = Vector3::ByteSize(*(Vector3 **)(pPVar1 + 0x80));
    if (uVar4 < 0x80) {
      iVar6 = 1;
    }
    else {
      iVar6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
    }
    iVar2 = iVar2 + uVar4 + iVar6 + 1;
  }
  iVar6 = *(int *)(this + 0x28);
  if (iVar6 < 1) {
    iVar7 = 0;
  }
  else {
    lVar8 = 0;
    iVar7 = 0;
    do {
      uVar4 = *(uint *)(*(long *)(this + 0x20) + lVar8 * 4);
      if ((int)uVar4 < 0) {
        iVar5 = 10;
      }
      else if (uVar4 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
        iVar6 = *(int *)(this + 0x28);
      }
      lVar8 = lVar8 + 1;
      iVar7 = iVar5 + iVar7;
    } while (lVar8 < iVar6);
  }
                    /* catch() { ... } // from try @ 0041ed6c with catch @ 0041f018 */
  iVar2 = iVar7 + iVar2 + iVar6 + *(int *)(this + 0x48);
  if (0 < *(int *)(this + 0x48)) {
    lVar8 = 0;
    do {
      uVar4 = ParticleEmitter::ByteSize(*(ParticleEmitter **)(*(long *)(this + 0x40) + lVar8 * 8));
      if (uVar4 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      }
      lVar8 = lVar8 + 1;
      iVar2 = uVar4 + iVar2 + iVar6;
    } while (lVar8 < *(int *)(this + 0x48));
  }
  *(int *)(this + 8) = iVar2;
                    /* catch() { ... } // from try @ 0041ed40 with catch @ 0041f074 */
  return iVar2;
}


