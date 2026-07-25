/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9210
 * Mangled: ._ZN5Caver33ModelTransformControllerComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::ModelTransformControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x0000000000226F20  Caver::ModelTransformControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 1
 *   0x0000000000226F20  Caver::ModelTransformControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9218 string=0x00000000001F921C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ModelTransformControllerComponent::GetBindings()
{
  return _ZN5Caver33ModelTransformControllerComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE();
}

