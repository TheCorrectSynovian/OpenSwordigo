/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7360
 * Mangled: ._ZN5Caver5Proto20WeaponTrailComponent16default_instanceEv
 * Demangled: Caver::Proto::WeaponTrailComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000002CCB04  Caver::WeaponTrailComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FA9B0  Caver::Proto::WeaponTrailComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7368 string=0x00000000001F736C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::WeaponTrailComponent::default_instance(Caver::Proto::WeaponTrailComponent *this)
{
  return _ZN5Caver5Proto20WeaponTrailComponent16default_instanceEv(this);
}

