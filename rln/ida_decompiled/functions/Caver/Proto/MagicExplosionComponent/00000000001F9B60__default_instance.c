/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9B60
 * Mangled: ._ZN5Caver5Proto23MagicExplosionComponent16default_instanceEv
 * Demangled: Caver::Proto::MagicExplosionComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000286ED8  Caver::MagicExplosionComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FAC78  Caver::Proto::MagicExplosionComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9B68 string=0x00000000001F9B6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::MagicExplosionComponent::default_instance(Caver::Proto::MagicExplosionComponent *this)
{
  return _ZN5Caver5Proto23MagicExplosionComponent16default_instanceEv(this);
}

