/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA460
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsN5boost13intrusive_ptrIN5Caver16SceneObjectGroupEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE14_M_create_nodeERKS7_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::_M_create_node(std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>> const&)
 *
 * Callers: 1
 *   0x00000000004681E0  Caver::Scene::ObjectIdentifierChanged(std::string const&,std::string const&)
 *
 * Callees: 1
 *   0x000000000046BE88  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::_M_create_node(std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA468 string=0x00000000001FA46C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::_M_create_node()
{
  return _ZNSt8_Rb_treeISsSt4pairIKSsN5boost13intrusive_ptrIN5Caver16SceneObjectGroupEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE14_M_create_nodeERKS7_();
}

