/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB1F0
 * Mangled: ._ZN5Caver26KeyframeAnimationComponentC2Ev
 * Demangled: Caver::KeyframeAnimationComponent::KeyframeAnimationComponent(void)
 *
 * Callers: 1
 *   0x0000000000221910  Caver::KeyframeAnimationComponent::Clone(void)
 *
 * Callees: 1
 *   0x000000000021F9D8  Caver::KeyframeAnimationComponent::KeyframeAnimationComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB1F8 string=0x00000000001FB1FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::KeyframeAnimationComponent::KeyframeAnimationComponent(
        Caver::KeyframeAnimationComponent *this)
{
  return _ZN5Caver26KeyframeAnimationComponentC2Ev(this);
}

