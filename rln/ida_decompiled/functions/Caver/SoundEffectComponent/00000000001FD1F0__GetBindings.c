/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD1F0
 * Mangled: ._ZN5Caver20SoundEffectComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::SoundEffectComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x0000000000239C98  Caver::SoundEffectComponent::Prepare(void)
 *
 * Callees: 1
 *   0x0000000000239C98  Caver::SoundEffectComponent::Prepare(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD1F8 string=0x00000000001FD1FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::SoundEffectComponent::GetBindings()
{
  JUMPOUT(0x239D94);
}

