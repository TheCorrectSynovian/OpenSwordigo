/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042b0bc
 * Function: Caver::Proto::SwingableWeaponControllerComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(SwingableWeaponControllerComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SwingableWeaponControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::SwingableWeaponControllerComponent::SerializeWithCachedSizes
          (SwingableWeaponControllerComponent *this,CodedOutputStream *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x20);
  if ((uVar1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(1,*(int *)(this + 0xc),param_1);
    uVar1 = *(uint *)(this + 0x20);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(2,*(string **)(this + 0x10),param_1);
    uVar1 = *(uint *)(this + 0x20);
  }
  if ((uVar1 >> 2 & 1) != 0) {
                    /* try { // try from 0042b11c to 0052b19b has its CatchHandler @ 0042b11c
                       catch(type#1 @ 00000000) { ... } // from try @ 0042b11c with catch @ 0042b11c
                       catch(type#1 @ 00000000) { ... } // from try @ 0042b1a8 with catch @ 0042b11c
                       catch(type#1 @ 00000000) { ... } // from try @ 0042b218 with catch @ 0042b11c
                        */
    google::protobuf::internal::WireFormatLite::WriteString(3,*(string **)(this + 0x18),param_1);
    return;
  }
  return;
}


