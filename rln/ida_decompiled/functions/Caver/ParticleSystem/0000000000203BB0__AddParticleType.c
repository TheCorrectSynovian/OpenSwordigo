/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203BB0
 * Mangled: ._ZN5Caver14ParticleSystem15AddParticleTypeERKN5boost13intrusive_ptrINS_7TextureEEERKNS_9RectangleE
 * Demangled: Caver::ParticleSystem::AddParticleType(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&)
 *
 * Callers: 3
 *   0x00000000002A5938  Caver::ParticleComponent::AddTypeToParticleSystem(Caver::ParticleSystem *)
 *   0x00000000003DA000  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::GUIView>> const&)
 *   0x00000000003E0E08  Caver::OverlayMenuButton::SetSparkling(bool)
 *
 * Callees: 1
 *   0x0000000000453C94  Caver::ParticleSystem::AddParticleType(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203BB8 string=0x0000000000203BBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ParticleSystem::AddParticleType()
{
  return _ZN5Caver14ParticleSystem15AddParticleTypeERKN5boost13intrusive_ptrINS_7TextureEEERKNS_9RectangleE();
}

