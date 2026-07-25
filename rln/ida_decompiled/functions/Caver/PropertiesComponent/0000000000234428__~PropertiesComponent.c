/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000234428
 * Mangled: _ZN5Caver19PropertiesComponentD2Ev
 * Demangled: Caver::PropertiesComponent::~PropertiesComponent()
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7FD0  Caver::PropertiesComponent::InitWithComponent(Caver::PropertiesComponent const*)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x0000000000202C60  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,std::string>> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 39
 *   insn=0x0000000000234434 string=0x0000000000234438 ""
 *   insn=0x000000000023443C string=0x0000000000234440 "aZ@"
 *   insn=0x0000000000234440 string=0x0000000000234444 "`"
 *   insn=0x0000000000234444 string=0x0000000000234448 "\n"
 *   insn=0x0000000000234448 string=0x000000000023444C "\tA"
 *   insn=0x000000000023444C string=0x0000000000234450 ""
 *   insn=0x0000000000234450 string=0x0000000000234454 "@"
 *   insn=0x0000000000234458 string=0x000000000023445C "i"
 *   insn=0x000000000023445C string=0x0000000000234460 "`"
 *   insn=0x0000000000234464 string=0x0000000000234468 "`"
 *   insn=0x000000000023447C string=0x00000000001FA4D0 "0'"
 *   insn=0x0000000000234488 string=0x000000000023448C "`"
 *   insn=0x000000000023449C string=0x00000000002344A0 "\t5"
 *   insn=0x00000000002344B4 string=0x00000000002344B8 ""
 *   insn=0x00000000002344BC string=0x00000000002344C0 "aZ@"
 *   insn=0x00000000002344C0 string=0x00000000002344C4 "`"
 *   insn=0x00000000002344C4 string=0x00000000002344C8 "\n"
 *   insn=0x00000000002344C8 string=0x00000000002344CC "\tA"
 *   insn=0x00000000002344CC string=0x00000000002344D0 ""
 *   insn=0x00000000002344D0 string=0x00000000002344D4 "@"
 *   insn=0x00000000002344D8 string=0x00000000002344DC "i"
 *   insn=0x00000000002344DC string=0x00000000002344E0 "`"
 *   insn=0x00000000002344E4 string=0x00000000002344E8 "`"
 *   insn=0x0000000000234500 string=0x0000000000234504 "k"
 *   insn=0x0000000000234504 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000234508 string=0x000000000023450C ""
 *   insn=0x0000000000234518 string=0x000000000023451C "`"
 *   insn=0x000000000023452C string=0x0000000000234530 "`"
 *   insn=0x0000000000234550 string=0x0000000000234554 "#"
 *   insn=0x0000000000234554 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000234568 string=0x000000000023456C ""
 *   insn=0x000000000023456C string=0x0000000000234570 "J"
 *   insn=0x0000000000234578 string=0x000000000023457C "a"
 *   insn=0x000000000023457C string=0x0000000000234580 "L"
 *   insn=0x0000000000234580 string=0x0000000000234584 "KA"
 *   insn=0x0000000000234588 string=0x000000000023458C "J"
 *   insn=0x0000000000234590 string=0x0000000000234594 " "
 *   insn=0x000000000023459C string=0x00000000002345A0 "A"
 *   insn=0x00000000002345D0 string=0x00000000001F7FD0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PropertiesComponent::~PropertiesComponent(Caver::PropertiesComponent *this)
{
  __int128 v2; // q0

  *(_QWORD *)&v2 = &off_6BB1B8;
  *((_QWORD *)&v2 + 1) = &off_6BB1F8;
  *(_QWORD *)this = off_6BB0A0;
  *((_OWORD *)this + 1) = v2;
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase();
  Caver::Program::~Program((Caver::PropertiesComponent *)((char *)this + 120));
  Caver::Component::~Component(this);
}

