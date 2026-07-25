/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA5E0
 * Mangled: ._ZN5Caver5Proto23MagicSpellCastComponent16default_instanceEv
 * Demangled: Caver::Proto::MagicSpellCastComponent::default_instance(void)
 *
 * Callers: 1
 *   0x000000000028B980  Caver::MagicSpellCastComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FAD00  Caver::Proto::MagicSpellCastComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA5E8 string=0x00000000001FA5EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::MagicSpellCastComponent::default_instance(Caver::Proto::MagicSpellCastComponent *this)
{
  return _ZN5Caver5Proto23MagicSpellCastComponent16default_instanceEv(this);
}

