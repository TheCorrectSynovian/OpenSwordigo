/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB7F0
 * Mangled: ._ZN5Caver5Proto18MagicBombComponent16default_instanceEv
 * Demangled: Caver::Proto::MagicBombComponent::default_instance(void)
 *
 * Callers: 1
 *   0x000000000028598C  Caver::MagicBombComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FADDC  Caver::Proto::MagicBombComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB7F8 string=0x00000000001FB7FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::MagicBombComponent::default_instance(Caver::Proto::MagicBombComponent *this)
{
  return _ZN5Caver5Proto18MagicBombComponent16default_instanceEv(this);
}

