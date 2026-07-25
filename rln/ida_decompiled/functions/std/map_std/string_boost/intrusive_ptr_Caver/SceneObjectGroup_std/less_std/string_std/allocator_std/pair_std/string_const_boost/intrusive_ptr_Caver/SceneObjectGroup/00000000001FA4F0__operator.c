/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA4F0
 * Mangled: ._ZNSt3mapISsN5boost13intrusive_ptrIN5Caver16SceneObjectGroupEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_
 * Demangled: std::map<std::string,boost::intrusive_ptr<Caver::SceneObjectGroup>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::operator[](std::string const&)
 *
 * Callers: 3
 *   0x00000000004640C0  Caver::Scene::AddGroup(boost::intrusive_ptr<Caver::SceneObjectGroup> const&)
 *   0x00000000004681E0  Caver::Scene::ObjectIdentifierChanged(std::string const&,std::string const&)
 *   0x0000000000468A54  Caver::Scene::GroupIdentifierChanged(std::string const&,std::string const&)
 *
 * Callees: 1
 *   0x00000000004681E0  Caver::Scene::ObjectIdentifierChanged(std::string const&,std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA4F8 string=0x00000000001FA4FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::map<std::string,boost::intrusive_ptr<Caver::SceneObjectGroup>>::operator[]()
{
  JUMPOUT(0x468490);
}

