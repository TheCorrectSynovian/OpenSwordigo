/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C33F4
 * Mangled: _ZN5Caver11FontLibrary16SetSharedLibraryEPS0_
 * Demangled: Caver::FontLibrary::SetSharedLibrary(Caver::FontLibrary*)
 *
 * Callers: 1
 *   0x0000000000201B30  Caver::FontLibrary::SetSharedLibrary(Caver::FontLibrary*)
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB4B0  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::weak_ptr<Caver::Font>>> *)
 *   0x00000000004C3450  Caver::FontLibrary::Clear(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x00000000004C3400 string=0x00000000004C3404 "5"
 *   insn=0x00000000004C3418 string=0x00000000004C341C "%"
 *   insn=0x00000000004C341C string=0x00000000001FB4B0 "0'"
 *   insn=0x00000000004C3424 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FontLibrary::SetSharedLibrary(Caver::FontLibrary *this, Caver::FontLibrary *a2)
{
  void *v2; // x20

  v2 = (void *)qword_6E9FA8;
  if ( qword_6E9FA8 )
  {
    std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>>::_M_erase();
    operator delete(v2);
  }
  qword_6E9FA8 = (__int64)this;
}

