/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201170
 * Mangled: ._ZN5Caver26KeyframeAnimationComponentC2Ev_0
 * Demangled: Caver::KeyframeAnimationComponent::KeyframeAnimationComponent(void)
 *
 * Callers: 1
 *   0x000000000024F544  Caver::KeyframeAnimationComponent::Create(void)
 *
 * Callees: 1
 *   0x000000000021F9D8  Caver::KeyframeAnimationComponent::KeyframeAnimationComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201178 string=0x000000000020117C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::KeyframeAnimationComponent::KeyframeAnimationComponent(
        Caver::KeyframeAnimationComponent *this)
{
  return _ZN5Caver26KeyframeAnimationComponentC2Ev(this);
}

