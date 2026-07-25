/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F44D0
 * Mangled: ._ZN5Caver22GroundPolygonComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::GroundPolygonComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x00000000002BF0C8  Caver::GroundPolygonComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 1
 *   0x00000000002BF0C8  Caver::GroundPolygonComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F44D8 string=0x00000000001F44DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GroundPolygonComponent::GetBindings()
{
  return _ZN5Caver22GroundPolygonComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE();
}

