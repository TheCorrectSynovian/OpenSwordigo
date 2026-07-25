/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC290
 * Mangled: ._ZN5Caver26KeyframeAnimationComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::KeyframeAnimationComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x00000000002202CC  Caver::KeyframeAnimationComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 1
 *   0x00000000002202CC  Caver::KeyframeAnimationComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC298 string=0x00000000001FC29C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::KeyframeAnimationComponent::GetBindings()
{
  return _ZN5Caver26KeyframeAnimationComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE();
}

