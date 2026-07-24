/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00433a80
 * Function: Caver::Proto::MagicExplosionComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(MagicExplosionComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicExplosionComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::MagicExplosionComponent::SerializeWithCachedSizes
          (MagicExplosionComponent *this,CodedOutputStream *param_1)

{
  MagicExplosionComponent *pMVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x24);
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(1,*(int *)(this + 0xc),param_1);
    uVar2 = *(uint *)(this + 0x24);
  }
  if ((uVar2 >> 4 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(2,*(int *)(this + 0x20),param_1);
    uVar2 = *(uint *)(this + 0x24);
  }
  if ((uVar2 >> 1 & 1) != 0) {
                    /* try { // try from 00433ae8 to 00533af7 has its CatchHandler @ 00433d58 */
                    /* try { // try from 00433afc to 00533b03 has its CatchHandler @ 00433d00 */
    pMVar1 = *(MagicExplosionComponent **)PTR_default_instance__007e5e18;
                    /* try { // try from 00433b04 to 00533b83 has its CatchHandler @ 00433d60 */
    if (*(long *)(this + 0x10) != 0) {
      pMVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (3,*(MessageLite **)(pMVar1 + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x24);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(4,*(float *)(this + 0x18),param_1);
    uVar2 = *(uint *)(this + 0x24);
  }
  if ((uVar2 >> 3 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(5,*(float *)(this + 0x1c),param_1);
    return;
  }
  return;
}


