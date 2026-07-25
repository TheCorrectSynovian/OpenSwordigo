/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004853D0
 * Mangled: _ZN5Caver12SoundLibrary16SetSharedLibraryEPS0_
 * Demangled: Caver::SoundLibrary::SetSharedLibrary(Caver::SoundLibrary*)
 *
 * Callers: 1
 *   0x00000000001FB470  Caver::SoundLibrary::SetSharedLibrary(Caver::SoundLibrary*)
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7940  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>> *)
 *   0x00000000001FE070  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x00000000004853DC string=0x00000000004853E0 "5"
 *   insn=0x00000000004853E8 string=0x00000000004853EC "3"
 *   insn=0x00000000004853EC string=0x00000000004853F0 "a"@"
 *   insn=0x00000000004853F0 string=0x00000000004853F4 "`"
 *   insn=0x00000000004853F8 string=0x00000000004853FC "a\n@"
 *   insn=0x0000000000485400 string=0x0000000000485404 "O"
 *   insn=0x0000000000485404 string=0x00000000001F7940 "0'"
 *   insn=0x000000000048540C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000485434 string=0x0000000000485438 "B"
 *   insn=0x000000000048546C string=0x0000000000485470 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SoundLibrary::SetSharedLibrary(Caver::SoundLibrary *this, Caver::SoundLibrary *a2)
{
  void *v2; // x19

  v2 = (void *)qword_6E9DB8;
  if ( qword_6E9DB8 )
  {
    std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>>::_M_erase();
    std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>>::_M_erase();
    operator delete(v2);
  }
  qword_6E9DB8 = (__int64)this;
}

