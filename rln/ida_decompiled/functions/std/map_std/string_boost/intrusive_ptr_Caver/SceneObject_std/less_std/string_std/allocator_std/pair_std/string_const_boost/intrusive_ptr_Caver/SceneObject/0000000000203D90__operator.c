/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203D90
 * Mangled: ._ZNSt3mapISsN5boost13intrusive_ptrIN5Caver11SceneObjectEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_
 * Demangled: std::map<std::string,boost::intrusive_ptr<Caver::SceneObject>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::operator[](std::string const&)
 *
 * Callers: 2
 *   0x0000000000464574  Caver::Scene::AddObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000004681E0  Caver::Scene::ObjectIdentifierChanged(std::string const&,std::string const&)
 *
 * Callees: 1
 *   0x0000000000464F84  std::map<std::string,boost::intrusive_ptr<Caver::SceneObject>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::operator[](std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203D98 string=0x0000000000203D9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::map<std::string,boost::intrusive_ptr<Caver::SceneObject>>::operator[]()
{
  return _ZNSt3mapISsN5boost13intrusive_ptrIN5Caver11SceneObjectEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_();
}

