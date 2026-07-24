/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040de88
 * Function: Caver::Proto::HealthComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(HealthComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::HealthComponent::ByteSize() const */

int __thiscall Caver::Proto::HealthComponent::ByteSize(HealthComponent *this)

{
  HealthComponent *pHVar1;
  uint uVar2;
  HealthComponent HVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  HVar3 = this[0x20];
  uVar6 = (uint)(byte)HVar3;
  if (HVar3 == (HealthComponent)0x0) {
    iVar5 = 0;
    goto LAB_0040df5c;
  }
  if (((byte)HVar3 & 1) == 0) {
    iVar5 = 0;
joined_r0x0040def8:
    if (((byte)HVar3 >> 1 & 1) != 0) {
LAB_0040deb0:
      uVar2 = *(uint *)(this + 0x10);
      if ((int)uVar2 < 0) {
        iVar4 = 0xb;
      }
      else if (uVar2 < 0x80) {
        iVar4 = 2;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
        uVar6 = *(uint *)(this + 0x20);
        iVar4 = iVar4 + 1;
      }
      iVar5 = iVar4 + iVar5;
    }
  }
  else {
    uVar2 = *(uint *)(this + 0xc);
    if ((int)uVar2 < 0) {
      iVar5 = 0xb;
      goto joined_r0x0040def8;
    }
    if (uVar2 < 0x80) {
      iVar5 = 2;
      if (((byte)HVar3 >> 1 & 1) == 0) goto LAB_0040df10;
      goto LAB_0040deb0;
    }
    iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
    uVar6 = *(uint *)(this + 0x20);
    iVar5 = iVar5 + 1;
    if ((uVar6 >> 1 & 1) != 0) goto LAB_0040deb0;
  }
LAB_0040df10:
  if ((uVar6 >> 2 & 1) != 0) {
    pHVar1 = *(HealthComponent **)PTR_default_instance__007e6bf0;
    if (*(long *)(this + 0x18) != 0) {
      pHVar1 = this;
    }
    uVar6 = Vector2::ByteSize(*(Vector2 **)(pHVar1 + 0x18));
    if (uVar6 < 0x80) {
      iVar4 = 1;
    }
    else {
      iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar6);
    }
    iVar5 = iVar5 + uVar6 + iVar4 + 1;
  }
LAB_0040df5c:
  *(int *)(this + 8) = iVar5;
  return iVar5;
}


