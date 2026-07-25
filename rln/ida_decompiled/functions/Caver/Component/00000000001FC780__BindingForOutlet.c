/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC780
 * Mangled: ._ZNK5Caver9Component16BindingForOutletEi
 * Demangled: Caver::Component::BindingForOutlet(int)
 *
 * Callers: 2
 *   0x00000000002422D0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000002A724C  Caver::ParticleEmitterComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 1
 *   0x0000000000242488  Caver::Component::BindingForOutlet(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC788 string=0x00000000001FC78C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Component::BindingForOutlet(Caver::Component *this, int a2)
{
  return _ZNK5Caver9Component16BindingForOutletEi(this, a2);
}

