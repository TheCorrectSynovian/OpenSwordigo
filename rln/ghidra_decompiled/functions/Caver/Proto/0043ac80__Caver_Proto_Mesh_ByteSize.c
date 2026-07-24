/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043ac80
 * Function: Caver::Proto::Mesh::ByteSize
 * Signature: undefined __thiscall ByteSize(Mesh * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::Mesh::ByteSize() const */

int __thiscall Caver::Proto::Mesh::ByteSize(Mesh *this)

{
  Mesh *pMVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  
                    /* try { // try from 0043ac80 to 0053ac8b has its CatchHandler @ 0043b008 */
  uVar4 = *(uint *)(this + 0xa0);
  if ((uVar4 & 0xff) == 0) {
    iVar2 = 0;
  }
  else {
    if ((uVar4 & 1) == 0) {
      iVar2 = 0;
    }
    else if (*(uint *)(this + 0xc) < 0x80) {
      iVar2 = 2;
    }
    else {
      iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(*(uint *)(this + 0xc));
      uVar4 = *(uint *)(this + 0xa0);
      iVar2 = iVar2 + 1;
    }
    if ((uVar4 >> 1 & 1) != 0) {
      if (*(uint *)(this + 0x10) < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback
                          (*(uint *)(this + 0x10));
        uVar4 = *(uint *)(this + 0xa0);
      }
      iVar2 = iVar2 + iVar5 + 1;
    }
    if ((uVar4 >> 2 & 1) != 0) {
      pMVar1 = *(Mesh **)PTR_default_instance__007e66e0;
      if (*(long *)(this + 0x18) != 0) {
        pMVar1 = this;
      }
      uVar3 = MeshData::ByteSize(*(MeshData **)(pMVar1 + 0x18));
      if (uVar3 < 0x80) {
        iVar5 = 1;
                    /* try { // try from 0043ad74 to 0053adaf has its CatchHandler @ 0043af0c */
      }
      else {
                    /* try { // try from 0043adb0 to 0053b077 has its CatchHandler @ 0043ac34 */
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
      }
      uVar4 = *(uint *)(this + 0xa0);
      iVar2 = iVar2 + uVar3 + iVar5 + 1;
    }
    if ((uVar4 >> 3 & 1) != 0) {
      pMVar1 = *(Mesh **)PTR_default_instance__007e66e0;
      if (*(long *)(this + 0x20) != 0) {
        pMVar1 = this;
      }
      uVar3 = MeshData::ByteSize(*(MeshData **)(pMVar1 + 0x20));
      if (uVar3 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
      }
      uVar4 = *(uint *)(this + 0xa0);
      iVar2 = iVar2 + uVar3 + iVar5 + 1;
    }
    if ((uVar4 >> 4 & 1) != 0) {
      pMVar1 = *(Mesh **)PTR_default_instance__007e66e0;
      if (*(long *)(this + 0x28) != 0) {
        pMVar1 = this;
      }
      uVar3 = MeshData::ByteSize(*(MeshData **)(pMVar1 + 0x28));
      if (uVar3 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
      }
      uVar4 = *(uint *)(this + 0xa0);
      iVar2 = iVar2 + uVar3 + iVar5 + 1;
    }
    if ((uVar4 >> 6 & 1) != 0) {
                    /* catch() { ... } // from try @ 0043ad74 with catch @ 0043af0c */
      pMVar1 = *(Mesh **)PTR_default_instance__007e66e0;
      if (*(long *)(this + 0x68) != 0) {
        pMVar1 = this;
      }
      uVar3 = MeshData::ByteSize(*(MeshData **)(pMVar1 + 0x68));
      if (uVar3 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
      }
      uVar4 = *(uint *)(this + 0xa0);
      iVar2 = iVar2 + uVar3 + iVar5 + 1;
    }
    if ((uVar4 >> 7 & 1) != 0) {
                    /* catch() { ... } // from try @ 0043ad1c with catch @ 0043afa0 */
      pMVar1 = *(Mesh **)PTR_default_instance__007e66e0;
                    /* catch() { ... } // from try @ 0043acb8 with catch @ 0043afa4 */
      if (*(long *)(this + 0x70) != 0) {
        pMVar1 = this;
      }
      uVar3 = MeshData::ByteSize(*(MeshData **)(pMVar1 + 0x70));
      if (uVar3 < 0x80) {
        iVar5 = 1;
      }
      else {
                    /* catch() { ... } // from try @ 0043ac80 with catch @ 0043b008 */
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
      }
      uVar4 = *(uint *)(this + 0xa0);
      iVar2 = iVar2 + uVar3 + iVar5 + 1;
    }
  }
                    /* try { // try from 0043acb8 to 0053acf3 has its CatchHandler @ 0043afa4 */
  if ((uVar4 & 0xff00) != 0) {
    if ((uVar4 >> 8 & 1) != 0) {
      pMVar1 = *(Mesh **)PTR_default_instance__007e66e0;
      if (*(long *)(this + 0x78) != 0) {
        pMVar1 = this;
      }
      uVar3 = MeshData::ByteSize(*(MeshData **)(pMVar1 + 0x78));
      if (uVar3 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
      }
      uVar4 = *(uint *)(this + 0xa0);
      iVar2 = iVar2 + uVar3 + iVar5 + 1;
    }
    if ((uVar4 >> 9 & 1) != 0) {
      pMVar1 = *(Mesh **)PTR_default_instance__007e66e0;
      if (*(long *)(this + 0x80) != 0) {
        pMVar1 = this;
      }
      uVar3 = MeshMaterial::ByteSize(*(MeshMaterial **)(pMVar1 + 0x80));
      if (uVar3 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
      }
      uVar4 = *(uint *)(this + 0xa0);
      iVar2 = iVar2 + uVar3 + iVar5 + 1;
    }
    if ((uVar4 >> 10 & 1) != 0) {
      pMVar1 = *(Mesh **)PTR_default_instance__007e66e0;
      if (*(long *)(this + 0x88) != 0) {
        pMVar1 = this;
      }
      uVar3 = Box::ByteSize(*(Box **)(pMVar1 + 0x88));
      if (uVar3 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
      }
      uVar4 = *(uint *)(this + 0xa0);
      iVar2 = iVar2 + uVar3 + iVar5 + 1;
    }
    if ((uVar4 >> 0xb & 1) != 0) {
      plVar6 = *(long **)(this + 0x90);
      uVar3 = (uint)*(undefined8 *)(*plVar6 + -0x18);
                    /* catch() { ... } // from try @ 0043ad40 with catch @ 0043af68 */
      if (uVar3 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
        uVar4 = *(uint *)(this + 0xa0);
        uVar3 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      }
      iVar2 = iVar2 + iVar5 + uVar3 + 2;
    }
    if ((uVar4 >> 0xc & 1) != 0) {
      plVar6 = *(long **)(this + 0x98);
      uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      if (uVar4 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
        uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      }
      iVar2 = iVar2 + iVar5 + uVar4 + 2;
    }
  }
  iVar2 = *(int *)(this + 0x38) + iVar2;
  if (0 < *(int *)(this + 0x38)) {
    lVar7 = 0;
    do {
      uVar4 = MeshData::ByteSize(*(MeshData **)(*(long *)(this + 0x30) + lVar7 * 8));
                    /* catch() { ... } // from try @ 0043ac60 with catch @ 0043b074 */
      if (uVar4 < 0x80) {
        iVar5 = 1;
      }
      else {
                    /* try { // try from 0043b080 to 0053b0b3 has its CatchHandler @ 0043b080
                       catch() { ... } // from try @ 0043b080 with catch @ 0043b080
                       catch() { ... } // from try @ 0043b31c with catch @ 0043b080
                       catch() { ... } // from try @ 0043b65c with catch @ 0043b080 */
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      }
      lVar7 = lVar7 + 1;
      iVar2 = uVar4 + iVar2 + iVar5;
    } while (lVar7 < *(int *)(this + 0x38));
  }
  *(int *)(this + 8) = iVar2;
                    /* try { // try from 0043b0b4 to 0053b0c7 has its CatchHandler @ 0043b674 */
  return iVar2;
}


