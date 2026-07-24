/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d1b08
 * Function: Caver::Proto::Texture_Subtexture::ByteSize
 * Signature: undefined __thiscall ByteSize(Texture_Subtexture * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Texture_Subtexture::ByteSize() const */

void __thiscall Caver::Proto::Texture_Subtexture::ByteSize(Texture_Subtexture *this)

{
  Texture_Subtexture *pTVar1;
  Texture_Subtexture TVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  
  TVar2 = this[0x24];
  uVar6 = (uint)(byte)TVar2;
  if (TVar2 == (Texture_Subtexture)0x0) {
    iVar4 = 0;
    goto LAB_003d1be8;
  }
  if (((byte)TVar2 & 1) == 0) {
    iVar4 = 0;
    if (((byte)TVar2 >> 1 & 1) != 0) {
LAB_003d1b78:
      pTVar1 = *(Texture_Subtexture **)PTR_default_instance__007e6858;
      if (*(long *)(this + 0x18) != 0) {
        pTVar1 = this;
      }
      bVar3 = *(byte *)(*(long *)(pTVar1 + 0x18) + 0x1c);
      uVar5 = (uint)bVar3;
      if (bVar3 != 0) {
        uVar5 = -(bVar3 & 1) & 5;
        if ((bVar3 & 2) != 0) {
          uVar5 = uVar5 + 5;
        }
        if ((bVar3 & 4) != 0) {
          uVar5 = uVar5 + 5;
        }
        if ((bVar3 & 8) != 0) {
          uVar5 = uVar5 + 5;
        }
      }
      *(uint *)(*(long *)(pTVar1 + 0x18) + 8) = uVar5;
      uVar6 = *(uint *)(this + 0x24);
      iVar4 = iVar4 + uVar5 + 2;
    }
  }
  else {
    plVar7 = *(long **)(this + 0x10);
    uVar5 = (uint)*(undefined8 *)(*plVar7 + -0x18);
    if (uVar5 < 0x80) {
      iVar4 = 1;
    }
    else {
      iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
      uVar6 = *(uint *)(this + 0x24);
      uVar5 = (uint)*(undefined8 *)(*plVar7 + -0x18);
    }
    iVar4 = iVar4 + uVar5 + 1;
    if ((uVar6 >> 1 & 1) != 0) goto LAB_003d1b78;
  }
  if ((uVar6 & 4) != 0) {
    iVar4 = iVar4 + 5;
  }
LAB_003d1be8:
  *(int *)(this + 8) = iVar4;
  return;
}


