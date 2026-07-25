/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA2E0
 * Mangled: ._ZN5Caver5Proto22MagicHookshotComponent16default_instanceEv
 * Demangled: Caver::Proto::MagicHookshotComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000002895F8  Caver::MagicHookshotComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FAE30  Caver::Proto::MagicHookshotComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA2E8 string=0x00000000001FA2EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::MagicHookshotComponent::default_instance(Caver::Proto::MagicHookshotComponent *this)
{
  return _ZN5Caver5Proto22MagicHookshotComponent16default_instanceEv(this);
}

