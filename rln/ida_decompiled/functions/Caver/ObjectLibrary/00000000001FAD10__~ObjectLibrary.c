/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAD10
 * Mangled: ._ZN5Caver13ObjectLibraryD2Ev
 * Demangled: Caver::ObjectLibrary::~ObjectLibrary()
 *
 * Callers: 2
 *   0x000000000045E6EC  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>>::_M_create_node(std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>> const&)
 *   0x000000000045E7FC  boost::detail::sp_counted_impl_p<Caver::ObjectLibrary>::dispose(void)
 *
 * Callees: 1
 *   0x000000000045C260  Caver::ObjectLibrary::~ObjectLibrary()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAD18 string=0x00000000001FAD1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ObjectLibrary::~ObjectLibrary(Caver::ObjectLibrary *this)
{
  _ZN5Caver13ObjectLibraryD2Ev(this);
}

