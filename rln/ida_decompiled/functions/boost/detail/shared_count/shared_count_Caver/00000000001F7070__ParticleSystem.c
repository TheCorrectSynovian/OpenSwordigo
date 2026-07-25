/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7070
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver14ParticleSystemEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::ParticleSystem>(Caver::ParticleSystem *)
 *
 * Callers: 3
 *   0x00000000002A5CFC  Caver::ParticleEmitterComponent::ParticleEmitterComponent(void)
 *   0x00000000003DA000  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::GUIView>> const&)
 *   0x00000000003E0E08  Caver::OverlayMenuButton::SetSparkling(bool)
 *
 * Callees: 1
 *   0x00000000002AC460  boost::detail::shared_count::shared_count<Caver::ParticleSystem>(Caver::ParticleSystem *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7078 string=0x00000000001F707C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<Caver::ParticleSystem>()
{
  return _ZN5boost6detail12shared_countC2IN5Caver14ParticleSystemEEEPT_();
}

