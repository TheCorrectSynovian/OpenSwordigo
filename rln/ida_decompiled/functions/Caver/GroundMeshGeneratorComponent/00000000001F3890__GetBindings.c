/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3890
 * Mangled: ._ZN5Caver28GroundMeshGeneratorComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::GroundMeshGeneratorComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x00000000002BCEE0  Caver::GroundMeshGeneratorComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 1
 *   0x00000000002BCEE0  Caver::GroundMeshGeneratorComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3898 string=0x00000000001F389C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GroundMeshGeneratorComponent::GetBindings()
{
  return _ZN5Caver28GroundMeshGeneratorComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE();
}

