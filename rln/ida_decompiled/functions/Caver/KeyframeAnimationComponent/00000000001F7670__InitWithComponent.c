/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7670
 * Mangled: ._ZN5Caver26KeyframeAnimationComponent17InitWithComponentEPKS0_
 * Demangled: Caver::KeyframeAnimationComponent::InitWithComponent(Caver::KeyframeAnimationComponent const*)
 *
 * Callers: 1
 *   0x0000000000221910  Caver::KeyframeAnimationComponent::Clone(void)
 *
 * Callees: 1
 *   0x000000000021F9D8  Caver::KeyframeAnimationComponent::KeyframeAnimationComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7678 string=0x00000000001F767C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::KeyframeAnimationComponent::InitWithComponent()
{
  JUMPOUT(0x21FCB8);
}

