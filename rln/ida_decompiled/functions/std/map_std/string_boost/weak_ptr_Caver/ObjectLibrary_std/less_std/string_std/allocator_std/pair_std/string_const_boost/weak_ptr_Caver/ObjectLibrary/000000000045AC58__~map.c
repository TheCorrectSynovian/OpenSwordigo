/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045AC58
 * Mangled: _ZNSt3mapISsN5boost8weak_ptrIN5Caver13ObjectLibraryEEESt4lessISsESaISt4pairIKSsS4_EEED2Ev
 * Demangled: std::map<std::string,boost::weak_ptr<Caver::ObjectLibrary>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>>::~map()
 *
 * Callers: 1
 *   0x000000000020BCE8  sub_20BCE8
 *
 * Callees: 1
 *   0x00000000001FD190  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>> *)
 *
 * Referenced strings: 2
 *   insn=0x000000000045AC58 string=0x000000000045AC5C "M"
 *   insn=0x000000000045AC5C string=0x00000000001FD190 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 std::map<std::string,boost::weak_ptr<Caver::ObjectLibrary>>::~map()
{
  return std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>>::_M_erase();
}

