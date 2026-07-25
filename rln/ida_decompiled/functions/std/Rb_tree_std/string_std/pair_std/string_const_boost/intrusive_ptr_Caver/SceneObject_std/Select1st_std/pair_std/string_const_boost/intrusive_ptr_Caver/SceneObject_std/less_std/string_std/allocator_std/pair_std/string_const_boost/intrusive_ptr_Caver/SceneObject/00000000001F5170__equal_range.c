/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5170
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsN5boost13intrusive_ptrIN5Caver11SceneObjectEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE11equal_rangeERS1_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::equal_range(std::string const&)
 *
 * Callers: 2
 *   0x00000000004653C4  Caver::Scene::RemoveObject(boost::intrusive_ptr<Caver::SceneObject> const&,bool)
 *   0x00000000004681E0  Caver::Scene::ObjectIdentifierChanged(std::string const&,std::string const&)
 *
 * Callees: 1
 *   0x000000000046A968  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::_M_create_node(std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5178 string=0x00000000001F517C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::equal_range()
{
  JUMPOUT(0x46A9DC);
}

