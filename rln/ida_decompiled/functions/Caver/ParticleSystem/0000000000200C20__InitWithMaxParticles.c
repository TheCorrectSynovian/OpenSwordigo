/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200C20
 * Mangled: ._ZN5Caver14ParticleSystem20InitWithMaxParticlesEi
 * Demangled: Caver::ParticleSystem::InitWithMaxParticles(int)
 *
 * Callers: 4
 *   0x00000000002A9CC0  Caver::ParticleEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002AA5B4  Caver::ParticleEmitterComponent::Prepare(void)
 *   0x00000000003DA000  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::GUIView>> const&)
 *   0x00000000003E0E08  Caver::OverlayMenuButton::SetSparkling(bool)
 *
 * Callees: 1
 *   0x0000000000453B50  Caver::ParticleSystem::InitWithMaxParticles(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200C28 string=0x0000000000200C2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ParticleSystem::InitWithMaxParticles(Caver::ParticleSystem *this, int a2)
{
  return _ZN5Caver14ParticleSystem20InitWithMaxParticlesEi(this, a2);
}

