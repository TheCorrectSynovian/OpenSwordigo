/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9430
 * Mangled: ._ZN5Caver5Proto14SpellComponent16default_instanceEv
 * Demangled: Caver::Proto::SpellComponent::default_instance(void)
 *
 * Callers: 1
 *   0x000000000028FB40  Caver::SpellComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FAE84  Caver::Proto::SpellComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9438 string=0x00000000001F943C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::SpellComponent::default_instance(Caver::Proto::SpellComponent *this)
{
  return _ZN5Caver5Proto14SpellComponent16default_instanceEv(this);
}

