/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044B4C0
 * Mangled: _ZN5Caver12ModelLibrary16SetSharedLibraryEPS0_
 * Demangled: Caver::ModelLibrary::SetSharedLibrary(Caver::ModelLibrary*)
 *
 * Callers: 1
 *   0x0000000000200490  Caver::ModelLibrary::SetSharedLibrary(Caver::ModelLibrary*)
 *
 * Callees: 6
 *   0x00000000001F49B0  std::_Rb_tree<Caver::Model const*,std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model const*>,std::allocator<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>>::_M_erase(std::_Rb_tree_node<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>> *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F83B0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>> *)
 *   0x00000000001F8590  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Model const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 29
 *   insn=0x000000000044B4DC string=0x000000000044B4E0 "a:@"
 *   insn=0x000000000044B4E0 string=0x000000000044B4E4 "`"
 *   insn=0x000000000044B4E8 string=0x000000000044B4EC "a"@"
 *   insn=0x000000000044B4E8 string=0x00000000001F83B0 "0'"
 *   insn=0x000000000044B4EC string=0x000000000044B4F0 "`"
 *   insn=0x000000000044B4F0 string=0x000000000044B4F4 "/"
 *   insn=0x000000000044B4F4 string=0x000000000044B4F8 "a\n@"
 *   insn=0x000000000044B4F4 string=0x00000000001F49B0 "P'"
 *   insn=0x000000000044B4FC string=0x000000000044B500 "$"
 *   insn=0x000000000044B500 string=0x00000000001F8590 "0'"
 *   insn=0x000000000044B504 string=0x000000000044B508 "j"
 *   insn=0x000000000044B508 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000044B520 string=0x000000000044B524 "\n"
 *   insn=0x000000000044B52C string=0x000000000044B540 "a\n@"
 *   insn=0x000000000044B534 string=0x000000000044B538 "`"
 *   insn=0x000000000044B54C string=0x000000000044B550 "X"
 *   insn=0x000000000044B558 string=0x000000000044B55C "|"
 *   insn=0x000000000044B56C string=0x000000000044B570 "a:@"
 *   insn=0x000000000044B570 string=0x000000000044B574 "`"
 *   insn=0x000000000044B574 string=0x000000000044B578 "t"
 *   insn=0x000000000044B57C string=0x000000000044B580 "a"@"
 *   insn=0x000000000044B580 string=0x000000000044B584 "`"
 *   insn=0x000000000044B588 string=0x000000000044B58C "t~"
 *   insn=0x000000000044B58C string=0x000000000044B590 "t"
 *   insn=0x000000000044B590 string=0x000000000044B594 ""
 *   insn=0x000000000044B594 string=0x000000000044B598 "a\n@"
 *   insn=0x000000000044B5A0 string=0x000000000044B5A4 "t~"
 *   insn=0x000000000044B5A4 string=0x000000000044B5A8 "t""
 *   insn=0x000000000044B5B0 string=0x000000000044B5B4 "t~"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ModelLibrary::SetSharedLibrary(Caver::ModelLibrary *this, Caver::ModelLibrary *a2)
{
  void *v2; // x19

  v2 = (void *)qword_6E9A38;
  if ( qword_6E9A38 )
  {
    std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>>::_M_erase();
    std::_Rb_tree<Caver::Model const*,std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model const*>,std::allocator<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>>::_M_erase();
    std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Model const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>>::_M_erase();
    operator delete(v2);
  }
  qword_6E9A38 = (__int64)this;
}

