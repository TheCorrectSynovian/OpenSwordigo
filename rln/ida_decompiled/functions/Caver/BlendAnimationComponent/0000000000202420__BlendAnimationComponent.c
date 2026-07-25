/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202420
 * Mangled: ._ZN5Caver23BlendAnimationComponentC2Ev_0
 * Demangled: Caver::BlendAnimationComponent::BlendAnimationComponent(void)
 *
 * Callers: 1
 *   0x000000000021F7E0  Caver::BlendAnimationComponent::Clone(void)
 *
 * Callees: 1
 *   0x000000000021E4A0  Caver::BlendAnimationComponent::BlendAnimationComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202428 string=0x000000000020242C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BlendAnimationComponent::BlendAnimationComponent(Caver::BlendAnimationComponent *this)
{
  return _ZN5Caver23BlendAnimationComponentC2Ev(this);
}

