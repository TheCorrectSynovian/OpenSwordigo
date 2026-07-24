/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00438d0c
 * Function: Caver::Proto::MeshMaterial::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(MeshMaterial * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MeshMaterial::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::MeshMaterial::SerializeWithCachedSizes(MeshMaterial *this,CodedOutputStream *param_1)

{
  MeshMaterial *pMVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x38);
                    /* catch() { ... } // from try @ 00438c28 with catch @ 00438d24 */
  if ((uVar2 & 1) != 0) {
    pMVar1 = *(MeshMaterial **)PTR_default_instance__007e6c30;
    if (*(long *)(this + 0x10) != 0) {
      pMVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (1,*(MessageLite **)(pMVar1 + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x38);
  }
                    /* try { // try from 00438d70 to 00538d7b has its CatchHandler @ 00438bd4 */
  if ((uVar2 >> 1 & 1) != 0) {
                    /* catch() { ... } // from try @ 00438cf8 with catch @ 00438d78 */
    pMVar1 = *(MeshMaterial **)PTR_default_instance__007e6c30;
    if (*(long *)(this + 0x18) != 0) {
      pMVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (2,*(MessageLite **)(pMVar1 + 0x18),param_1);
    uVar2 = *(uint *)(this + 0x38);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    pMVar1 = *(MeshMaterial **)PTR_default_instance__007e6c30;
    if (*(long *)(this + 0x20) != 0) {
      pMVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (3,*(MessageLite **)(pMVar1 + 0x20),param_1);
    uVar2 = *(uint *)(this + 0x38);
  }
  if ((uVar2 >> 3 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(4,*(float *)(this + 0x28),param_1);
    uVar2 = *(uint *)(this + 0x38);
  }
  if ((uVar2 >> 4 & 1) != 0) {
    pMVar1 = *(MeshMaterial **)PTR_default_instance__007e6c30;
    if (*(long *)(this + 0x30) != 0) {
      pMVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (5,*(MessageLite **)(pMVar1 + 0x30),param_1);
    return;
  }
  return;
}


