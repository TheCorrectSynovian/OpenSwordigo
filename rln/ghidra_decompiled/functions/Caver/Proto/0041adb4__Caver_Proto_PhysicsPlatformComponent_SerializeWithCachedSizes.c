/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041adb4
 * Function: Caver::Proto::PhysicsPlatformComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(PhysicsPlatformComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PhysicsPlatformComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::PhysicsPlatformComponent::SerializeWithCachedSizes
          (PhysicsPlatformComponent *this,CodedOutputStream *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x1c);
  if ((uVar1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(1,*(float *)(this + 0xc),param_1);
    uVar1 = *(uint *)(this + 0x1c);
  }
  if ((uVar1 >> 1 & 1) != 0) {
                    /* try { // try from 0041ae00 to 0051ae4f has its CatchHandler @ 0041ae00
                       catch() { ... } // from try @ 0041ae00 with catch @ 0041ae00
                       catch() { ... } // from try @ 0041ae5c with catch @ 0041ae00
                       catch() { ... } // from try @ 0041aecc with catch @ 0041ae00
                       catch() { ... } // from try @ 0041afd8 with catch @ 0041ae00 */
    google::protobuf::internal::WireFormatLite::WriteFloat(2,*(float *)(this + 0x10),param_1);
    uVar1 = *(uint *)(this + 0x1c);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(3,*(float *)(this + 0x14),param_1);
    uVar1 = *(uint *)(this + 0x1c);
  }
  if ((uVar1 >> 3 & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteFloat(4,*(float *)(this + 0x18),param_1);
  return;
}


