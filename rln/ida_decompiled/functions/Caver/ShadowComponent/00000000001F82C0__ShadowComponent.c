/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F82C0
 * Mangled: ._ZN5Caver15ShadowComponentC2Ev
 * Demangled: Caver::ShadowComponent::ShadowComponent(void)
 *
 * Callers: 4
 *   0x000000000024F944  Caver::ShadowComponent::Create(void)
 *   0x000000000027267C  Caver::HeroEntityComponent::Prepare(void)
 *   0x000000000027BDB8  Caver::MonsterEntityComponent::Prepare(void)
 *   0x000000000027F440  Caver::PhysicsObjectComponent::Prepare(void)
 *
 * Callees: 1
 *   0x0000000000234A18  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_create_node(std::pair<std::string const,std::string> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F82C8 string=0x00000000001F82CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ShadowComponent::ShadowComponent(Caver::ShadowComponent *this)
{
  JUMPOUT(0x234B28);
}

