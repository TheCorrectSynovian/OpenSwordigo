/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00438e1c
 * Function: Caver::Proto::MeshMaterial::ByteSize
 * Signature: undefined __thiscall ByteSize(MeshMaterial * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MeshMaterial::ByteSize() const */

int __thiscall Caver::Proto::MeshMaterial::ByteSize(MeshMaterial *this)

{
  MeshMaterial *pMVar1;
  MeshMaterial MVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  MVar2 = this[0x38];
  uVar6 = (uint)(byte)MVar2;
  if (MVar2 == (MeshMaterial)0x0) {
    iVar3 = 0;
    goto LAB_00438f90;
  }
  if (((byte)MVar2 & 1) == 0) {
    iVar3 = 0;
    if (((byte)MVar2 >> 1 & 1) != 0) {
LAB_00438e9c:
      pMVar1 = *(MeshMaterial **)PTR_default_instance__007e6c30;
      if (*(long *)(this + 0x18) != 0) {
        pMVar1 = this;
      }
      uVar4 = FloatColor::ByteSize(*(FloatColor **)(pMVar1 + 0x18));
      if (uVar4 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      }
      uVar6 = *(uint *)(this + 0x38);
      iVar3 = iVar3 + uVar4 + iVar5 + 1;
    }
  }
  else {
    pMVar1 = *(MeshMaterial **)PTR_default_instance__007e6c30;
    if (*(long *)(this + 0x10) != 0) {
      pMVar1 = this;
    }
    uVar4 = FloatColor::ByteSize(*(FloatColor **)(pMVar1 + 0x10));
    if (uVar4 < 0x80) {
      iVar3 = 1;
    }
    else {
      iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
    }
    uVar6 = *(uint *)(this + 0x38);
    iVar3 = uVar4 + iVar3 + 1;
    if ((uVar6 >> 1 & 1) != 0) goto LAB_00438e9c;
  }
  if ((uVar6 >> 2 & 1) != 0) {
    pMVar1 = *(MeshMaterial **)PTR_default_instance__007e6c30;
    if (*(long *)(this + 0x20) != 0) {
      pMVar1 = this;
    }
    uVar4 = FloatColor::ByteSize(*(FloatColor **)(pMVar1 + 0x20));
    if (uVar4 < 0x80) {
      iVar5 = 1;
    }
    else {
      iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
    }
    uVar6 = *(uint *)(this + 0x38);
    iVar3 = iVar3 + uVar4 + iVar5 + 1;
  }
  if ((uVar6 & 8) != 0) {
    iVar3 = iVar3 + 5;
  }
  if ((uVar6 >> 4 & 1) != 0) {
    pMVar1 = *(MeshMaterial **)PTR_default_instance__007e6c30;
    if (*(long *)(this + 0x30) != 0) {
      pMVar1 = this;
    }
    uVar6 = Texture::ByteSize(*(Texture **)(pMVar1 + 0x30));
    if (uVar6 < 0x80) {
      iVar5 = 1;
    }
    else {
                    /* try { // try from 00438f7c to 005390ab has its CatchHandler @ 00438f7c
                       catch() { ... } // from try @ 00438f7c with catch @ 00438f7c
                       catch() { ... } // from try @ 004390b4 with catch @ 00438f7c
                       catch() { ... } // from try @ 004393f8 with catch @ 00438f7c */
      iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar6);
    }
    iVar3 = iVar3 + uVar6 + iVar5 + 1;
  }
LAB_00438f90:
  *(int *)(this + 8) = iVar3;
  return iVar3;
}


