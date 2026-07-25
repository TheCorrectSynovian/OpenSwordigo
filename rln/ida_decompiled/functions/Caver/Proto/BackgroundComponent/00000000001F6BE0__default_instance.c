/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6BE0
 * Mangled: ._ZN5Caver5Proto19BackgroundComponent16default_instanceEv
 * Demangled: Caver::Proto::BackgroundComponent::default_instance(void)
 *
 * Callers: 1
 *   0x000000000021D77C  Caver::BackgroundComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callees: 1
 *   0x00000000002FA2EC  Caver::Proto::BackgroundComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6BE8 string=0x00000000001F6BEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::BackgroundComponent::default_instance(Caver::Proto::BackgroundComponent *this)
{
  return _ZN5Caver5Proto19BackgroundComponent16default_instanceEv(this);
}

