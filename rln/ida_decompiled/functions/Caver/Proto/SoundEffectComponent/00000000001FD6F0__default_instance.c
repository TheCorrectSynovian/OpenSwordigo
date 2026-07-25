/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD6F0
 * Mangled: ._ZN5Caver5Proto20SoundEffectComponent16default_instanceEv
 * Demangled: Caver::Proto::SoundEffectComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000239BE0  Caver::SoundEffectComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002F9E54  Caver::Proto::SoundEffectComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD6F8 string=0x00000000001FD6FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::SoundEffectComponent::default_instance(Caver::Proto::SoundEffectComponent *this)
{
  return _ZN5Caver5Proto20SoundEffectComponent16default_instanceEv(this);
}

