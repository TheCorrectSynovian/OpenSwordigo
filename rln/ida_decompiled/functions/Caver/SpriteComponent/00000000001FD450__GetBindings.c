/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD450
 * Mangled: ._ZN5Caver15SpriteComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::SpriteComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x000000000023C1B0  Caver::SpriteComponent::Prepare(void)
 *
 * Callees: 1
 *   0x000000000023C1B0  Caver::SpriteComponent::Prepare(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD458 string=0x00000000001FD45C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::SpriteComponent::GetBindings()
{
  JUMPOUT(0x23C2B8);
}

