/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A3668
 * Mangled: _ZN5Caver29MagicParticleEmitterComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::MagicParticleEmitterComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8070  Caver::ParticleEmitterComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000002A3668 string=0x00000000001F8070 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::MagicParticleEmitterComponent::GetBindings()
{
  return Caver::ParticleEmitterComponent::GetBindings();
}

