/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3EA0
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver13ObjectLibraryEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::ObjectLibrary>(Caver::ObjectLibrary *)
 *
 * Callers: 2
 *   0x000000000045AC60  Caver::ObjectLibrary::LibraryWithName(std::string const&)
 *   0x00000000004625B0  Caver::Scene::Scene(void)
 *
 * Callees: 1
 *   0x000000000045E6EC  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>>::_M_create_node(std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3EA8 string=0x00000000001F3EAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::detail::shared_count::shared_count<Caver::ObjectLibrary>()
{
  JUMPOUT(0x45E768);
}

