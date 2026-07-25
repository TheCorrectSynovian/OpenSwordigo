/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203750
 * Mangled: ._ZN5Caver19BackgroundComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::BackgroundComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 3
 *   0x000000000021D92C  Caver::BackgroundComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000002B66D4  Caver::RotatingBackgroundComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000002B66D8  `non-virtual thunk to'Caver::RotatingBackgroundComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 1
 *   0x000000000021D92C  Caver::BackgroundComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203758 string=0x000000000020375C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::BackgroundComponent::GetBindings()
{
  return _ZN5Caver19BackgroundComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE();
}

