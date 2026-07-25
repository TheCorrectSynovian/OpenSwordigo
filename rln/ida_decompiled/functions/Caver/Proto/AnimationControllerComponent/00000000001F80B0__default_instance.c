/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F80B0
 * Mangled: ._ZN5Caver5Proto28AnimationControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::AnimationControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x000000000021C604  Caver::AnimationControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002F9E88  Caver::Proto::AnimationControllerComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F80B8 string=0x00000000001F80BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::AnimationControllerComponent::default_instance(
        Caver::Proto::AnimationControllerComponent *this)
{
  return _ZN5Caver5Proto28AnimationControllerComponent16default_instanceEv(this);
}

