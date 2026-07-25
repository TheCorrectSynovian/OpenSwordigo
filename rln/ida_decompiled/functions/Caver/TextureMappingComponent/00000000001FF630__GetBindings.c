/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF630
 * Mangled: ._ZN5Caver23TextureMappingComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::TextureMappingComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x000000000023E3D0  Caver::TextureMappingComponent::Prepare(void)
 *
 * Callees: 1
 *   0x000000000023E3D0  Caver::TextureMappingComponent::Prepare(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF638 string=0x00000000001FF63C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::TextureMappingComponent::GetBindings()
{
  JUMPOUT(0x23E4DC);
}

