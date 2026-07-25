/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC8F0
 * Mangled: ._ZN5Caver5Proto19WeaponGlowComponent16default_instanceEv
 * Demangled: Caver::Proto::WeaponGlowComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000002CA9B4  Caver::WeaponGlowComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FA95C  Caver::Proto::WeaponGlowComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC8F8 string=0x00000000001FC8FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::WeaponGlowComponent::default_instance(Caver::Proto::WeaponGlowComponent *this)
{
  return _ZN5Caver5Proto19WeaponGlowComponent16default_instanceEv(this);
}

