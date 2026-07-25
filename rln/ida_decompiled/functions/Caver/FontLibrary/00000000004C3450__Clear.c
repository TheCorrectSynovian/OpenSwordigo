/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C3450
 * Mangled: _ZN5Caver11FontLibrary5ClearEv
 * Demangled: Caver::FontLibrary::Clear(void)
 *
 * Callers: 2
 *   0x0000000000202590  Caver::FontLibrary::Clear(void)
 *   0x00000000004C33F4  Caver::FontLibrary::SetSharedLibrary(Caver::FontLibrary*)
 *
 * Callees: 1
 *   0x00000000001FB4B0  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::weak_ptr<Caver::Font>>> *)
 *
 * Referenced strings: 4
 *   insn=0x00000000004C345C string=0x00000000004C3460 "a\n@"
 *   insn=0x00000000004C3460 string=0x00000000004C3464 "t""
 *   insn=0x00000000004C3468 string=0x00000000001FB4B0 "0'"
 *   insn=0x00000000004C346C string=0x00000000004C3470 "t~"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FontLibrary::Clear(Caver::FontLibrary *this)
{
  char *v2; // x20

  v2 = (char *)this + 8;
  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>>::_M_erase();
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = v2;
  *((_QWORD *)this + 4) = v2;
  *((_QWORD *)this + 5) = 0;
}

