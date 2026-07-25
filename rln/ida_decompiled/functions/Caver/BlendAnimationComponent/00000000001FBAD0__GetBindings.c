/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBAD0
 * Mangled: ._ZN5Caver23BlendAnimationComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::BlendAnimationComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x000000000021E83C  Caver::BlendAnimationComponent::setAnimation1(Caver::AnimationComponent *)
 *
 * Callees: 1
 *   0x000000000021E83C  Caver::BlendAnimationComponent::setAnimation1(Caver::AnimationComponent *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBAD8 string=0x00000000001FBADC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::BlendAnimationComponent::GetBindings()
{
  JUMPOUT(0x21EAD4);
}

