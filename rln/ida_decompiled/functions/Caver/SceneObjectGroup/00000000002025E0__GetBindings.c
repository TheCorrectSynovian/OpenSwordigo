/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002025E0
 * Mangled: ._ZN5Caver16SceneObjectGroup11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::SceneObjectGroup::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x0000000000475498  Caver::SceneObjectGroup::FinishLoad(void)
 *
 * Callees: 1
 *   0x0000000000475498  Caver::SceneObjectGroup::FinishLoad(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002025E8 string=0x00000000002025EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::SceneObjectGroup::GetBindings()
{
  JUMPOUT(0x4755B4);
}

