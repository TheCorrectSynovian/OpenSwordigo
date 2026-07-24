/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043aa0c
 * Function: Caver::Proto::Mesh::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(Mesh * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::Mesh::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const */

void __thiscall Caver::Proto::Mesh::SerializeWithCachedSizes(Mesh *this,CodedOutputStream *param_1)

{
  Mesh *pMVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = *(uint *)(this + 0xa0);
                    /* try { // try from 0043aa24 to 0053aa37 has its CatchHandler @ 0043aa5c */
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteUInt32(1,*(uint *)(this + 0xc),param_1);
    uVar2 = *(uint *)(this + 0xa0);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteUInt32(2,*(uint *)(this + 0x10),param_1);
    uVar2 = *(uint *)(this + 0xa0);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    pMVar1 = *(Mesh **)PTR_default_instance__007e66e0;
    if (*(long *)(this + 0x18) != 0) {
      pMVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (3,*(MessageLite **)(pMVar1 + 0x18),param_1);
    uVar2 = *(uint *)(this + 0xa0);
  }
  if ((uVar2 >> 3 & 1) != 0) {
    pMVar1 = *(Mesh **)PTR_default_instance__007e66e0;
    if (*(long *)(this + 0x20) != 0) {
      pMVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (4,*(MessageLite **)(pMVar1 + 0x20),param_1);
    uVar2 = *(uint *)(this + 0xa0);
  }
  if ((uVar2 >> 4 & 1) != 0) {
    pMVar1 = *(Mesh **)PTR_default_instance__007e66e0;
    if (*(long *)(this + 0x28) != 0) {
      pMVar1 = this;
    }
                    /* catch() { ... } // from try @ 0043aa24 with catch @ 0043aa5c */
    google::protobuf::internal::WireFormatLite::WriteMessage
              (5,*(MessageLite **)(pMVar1 + 0x28),param_1);
  }
  if (0 < *(int *)(this + 0x38)) {
    lVar3 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteMessage
                (6,*(MessageLite **)(*(long *)(this + 0x30) + lVar3 * 8),param_1);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(this + 0x38));
  }
  uVar2 = *(uint *)(this + 0xa0);
  if ((uVar2 >> 6 & 1) != 0) {
    pMVar1 = *(Mesh **)PTR_default_instance__007e66e0;
    if (*(long *)(this + 0x68) != 0) {
      pMVar1 = this;
    }
                    /* try { // try from 0043ab7c to 0053abef has its CatchHandler @ 0043ab7c
                       catch() { ... } // from try @ 0043ab7c with catch @ 0043ab7c
                       catch() { ... } // from try @ 0043abf4 with catch @ 0043ab7c */
    google::protobuf::internal::WireFormatLite::WriteMessage
              (7,*(MessageLite **)(pMVar1 + 0x68),param_1);
    uVar2 = *(uint *)(this + 0xa0);
  }
  if ((uVar2 >> 7 & 1) != 0) {
    pMVar1 = *(Mesh **)PTR_default_instance__007e66e0;
    if (*(long *)(this + 0x70) != 0) {
      pMVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (8,*(MessageLite **)(pMVar1 + 0x70),param_1);
    uVar2 = *(uint *)(this + 0xa0);
  }
  if ((uVar2 >> 8 & 1) != 0) {
    pMVar1 = *(Mesh **)PTR_default_instance__007e66e0;
    if (*(long *)(this + 0x78) != 0) {
      pMVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (9,*(MessageLite **)(pMVar1 + 0x78),param_1);
    uVar2 = *(uint *)(this + 0xa0);
  }
  if ((uVar2 >> 9 & 1) != 0) {
                    /* try { // try from 0043abf0 to 0053abf3 has its CatchHandler @ 0043ac20 */
                    /* try { // try from 0043abf4 to 0053ac33 has its CatchHandler @ 0043ab7c */
    pMVar1 = *(Mesh **)PTR_default_instance__007e66e0;
    if (*(long *)(this + 0x80) != 0) {
      pMVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (10,*(MessageLite **)(pMVar1 + 0x80),param_1);
    uVar2 = *(uint *)(this + 0xa0);
  }
  if ((uVar2 >> 10 & 1) != 0) {
                    /* catch() { ... } // from try @ 0043abf0 with catch @ 0043ac20 */
                    /* try { // try from 0043ac34 to 0053ac5f has its CatchHandler @ 0043ac34
                       catch() { ... } // from try @ 0043ac34 with catch @ 0043ac34
                       catch() { ... } // from try @ 0043adb0 with catch @ 0043ac34 */
    pMVar1 = *(Mesh **)PTR_default_instance__007e66e0;
    if (*(long *)(this + 0x88) != 0) {
      pMVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (0xb,*(MessageLite **)(pMVar1 + 0x88),param_1);
    uVar2 = *(uint *)(this + 0xa0);
  }
  if ((uVar2 >> 0xb & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBytes(0x32,*(string **)(this + 0x90),param_1);
    uVar2 = *(uint *)(this + 0xa0);
  }
                    /* try { // try from 0043ac60 to 0053ac73 has its CatchHandler @ 0043b074 */
  if ((uVar2 >> 0xc & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteBytes(0x33,*(string **)(this + 0x98),param_1);
  return;
}


