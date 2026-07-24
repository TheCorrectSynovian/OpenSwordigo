/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042caf8
 * Function: Caver::Proto::WeaponTrailComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(WeaponTrailComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WeaponTrailComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::WeaponTrailComponent::SerializeWithCachedSizes
          (WeaponTrailComponent *this,CodedOutputStream *param_1)

{
  WeaponTrailComponent *pWVar1;
  
  if (((byte)this[0x18] & 1) == 0) {
    return;
  }
                    /* try { // try from 0042cb08 to 0052cb0b has its CatchHandler @ 0042cb64 */
                    /* try { // try from 0042cb0c to 0052cb77 has its CatchHandler @ 0042caec */
  pWVar1 = *(WeaponTrailComponent **)PTR_default_instance__007e5120;
  if (*(long *)(this + 0x10) != 0) {
    pWVar1 = this;
  }
  google::protobuf::internal::WireFormatLite::WriteMessage
            (1,*(MessageLite **)(pWVar1 + 0x10),param_1);
  return;
}


