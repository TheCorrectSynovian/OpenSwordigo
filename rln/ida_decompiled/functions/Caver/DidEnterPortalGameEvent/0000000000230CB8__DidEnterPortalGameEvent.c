/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000230CB8
 * Mangled: _ZN5Caver23DidEnterPortalGameEventC2ERKSsS2_
 * Demangled: Caver::DidEnterPortalGameEvent::DidEnterPortalGameEvent(std::string const&,std::string const&)
 *
 * Callers: 1
 *   0x00000000001F8900  Caver::DidEnterPortalGameEvent::DidEnterPortalGameEvent(std::string const&,std::string const&)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA800  Caver::PortalComponent::Enter(void)
 *   0x00000000001FCA40  std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,int>> *)
 *   0x0000000000202C60  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,std::string>> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 40
 *   insn=0x0000000000230CC8 string=0x0000000000230CCC "V"
 *   insn=0x0000000000230CD8 string=0x0000000000230CDC "u"
 *   insn=0x0000000000230CE4 string=0x0000000000230CE8 "h"
 *   insn=0x0000000000230CF0 string=0x0000000000230CF4 "h""
 *   insn=0x0000000000230D08 string=0x0000000000230D0C "h"
 *   insn=0x0000000000230D14 string=0x0000000000230D18 "`"
 *   insn=0x0000000000230D24 string=0x0000000000230D28 ""
 *   insn=0x0000000000230D28 string=0x0000000000230D2C "a"
 *   insn=0x0000000000230D2C string=0x0000000000230D30 "h>"
 *   insn=0x0000000000230D40 string=0x0000000000230D58 "^"
 *   insn=0x0000000000230D58 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000230D60 string=0x0000000000230D64 "J"
 *   insn=0x0000000000230D68 string=0x0000000000230D6C "(a"
 *   insn=0x0000000000230D74 string=0x0000000000230DCC "a&@"
 *   insn=0x0000000000230D78 string=0x0000000000230D7C "J=G"
 *   insn=0x0000000000230D7C string=0x0000000000230D80 ")!"
 *   insn=0x0000000000230D80 string=0x0000000000230D84 "j"
 *   insn=0x0000000000230D84 string=0x0000000000230D88 "*"
 *   insn=0x0000000000230D84 string=0x0000000000230DB0 "*"
 *   insn=0x0000000000230D88 string=0x0000000000230D8C "K"
 *   insn=0x0000000000230D8C string=0x0000000000230D90 "+"
 *   insn=0x0000000000230D94 string=0x0000000000230D98 "_"
 *   insn=0x0000000000230DA8 string=0x0000000000230DAC ""
 *   insn=0x0000000000230DB0 string=0x0000000000230DB4 "K"
 *   insn=0x0000000000230DB4 string=0x0000000000230DB8 "+"
 *   insn=0x0000000000230DB8 string=0x0000000000230DBC "_"
 *   insn=0x0000000000230DBC string=0x0000000000230DC0 ""
 *   insn=0x0000000000230DCC string=0x0000000000230DD0 "`"
 *   insn=0x0000000000230DD0 string=0x0000000000230DD4 "/"
 *   insn=0x0000000000230DD4 string=0x0000000000230DD8 "a"
 *   insn=0x0000000000230DD4 string=0x00000000001FCA40 "0'"
 *   insn=0x0000000000230DD8 string=0x0000000000230DDC "`""
 *   insn=0x0000000000230DF0 string=0x0000000000230DF4 "Vu"
 *   insn=0x0000000000230DF4 string=0x0000000000230DF8 "a"
 *   insn=0x0000000000230DFC string=0x0000000000230E00 "`""
 *   insn=0x0000000000230E08 string=0x0000000000230E0C "Pu"
 *   insn=0x0000000000230E0C string=0x0000000000230E10 "Ou"
 *   insn=0x0000000000230E10 string=0x0000000000230E14 "?X"
 *   insn=0x0000000000230E20 string=0x0000000000230E24 "w&"
 *   insn=0x0000000000230E24 string=0x00000000001FA800 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::DidEnterPortalGameEvent::DidEnterPortalGameEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // x0

  _ReadStatusReg(TPIDR_EL0);
  *(_DWORD *)a1 = 4;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 32) = a1 + 16;
  *(_QWORD *)(a1 + 40) = a1 + 16;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = a1 + 64;
  *(_QWORD *)(a1 + 88) = a1 + 64;
  *(_QWORD *)(a1 + 96) = 0;
  sub_56A528(a1 + 104, a2);
  result = sub_56A528(a1 + 112, a3);
  *(_QWORD *)(a1 + 120) = &byte_6FD2F8;
  return result;
}

