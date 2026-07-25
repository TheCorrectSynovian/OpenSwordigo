/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAF20
 * Mangled: ._ZN5Caver5Proto26KeyframeAnimationComponent16default_instanceEv
 * Demangled: Caver::Proto::KeyframeAnimationComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000002201E8  Caver::KeyframeAnimationComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002F995C  Caver::Proto::KeyframeAnimationComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAF28 string=0x00000000001FAF2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::KeyframeAnimationComponent::default_instance(
        Caver::Proto::KeyframeAnimationComponent *this)
{
  return _ZN5Caver5Proto26KeyframeAnimationComponent16default_instanceEv(this);
}

