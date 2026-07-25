/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002442A8
 * Mangled: _ZN5Caver16ComponentFactory22RegisterComponentClassERKSsN5boost8functionIFPNS_9ComponentEvEEE
 * Demangled: Caver::ComponentFactory::RegisterComponentClass(std::string const&,boost::function<Caver::Component * ()(void)>)
 *
 * Callers: 1
 *   0x00000000001F6B50  Caver::ComponentFactory::RegisterComponentClass(std::string const&,boost::function<Caver::Component * ()(void)>)
 *
 * Callees: 4
 *   0x00000000001F83A0  std::vector<std::string,std::allocator<std::string>>::_M_insert_aux(__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,std::string const&)
 *   0x00000000001FDB10  std::map<std::string,boost::function<Caver::Component * ()(void)>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::operator[](std::string const&)
 *   0x00000000001FF050  boost::function<Caver::Component * ()(void)>::operator=(boost::function<Caver::Component * ()(void)> const&)
 *   0x000000000056A528  sub_56A528
 *
 * Referenced strings: 10
 *   insn=0x00000000002442C4 string=0x00000000001FDB10 "0'"
 *   insn=0x00000000002442C8 string=0x00000000002442CC "a"
 *   insn=0x00000000002442CC string=0x00000000002442D0 "h"
 *   insn=0x00000000002442D4 string=0x00000000002442D8 "`"
 *   insn=0x00000000002442D8 string=0x0000000000244304 "`"
 *   insn=0x00000000002442E4 string=0x00000000002442E8 "h"
 *   insn=0x00000000002442E8 string=0x00000000002442EC "!"
 *   insn=0x00000000002442EC string=0x00000000002442F0 "h"
 *   insn=0x0000000000244318 string=0x000000000024431C "!"
 *   insn=0x000000000024431C string=0x00000000001F83A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ComponentFactory::RegisterComponentClass(__int64 a1, __int64 a2)
{
  std::map<std::string,boost::function<Caver::Component * ()(void)>>::operator[]();
  boost::function<Caver::Component * ()(void)>::operator=();
  if ( *(_QWORD *)(a1 + 56) == *(_QWORD *)(a1 + 64) )
  {
    std::vector<std::string>::_M_insert_aux();
  }
  else
  {
    sub_56A528(*(_QWORD *)(a1 + 56), a2);
    *(_QWORD *)(a1 + 56) += 8LL;
  }
}

