/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047DA4C
 * Mangled: _ZN5Caver7FWShell11AddArgumentERKSs
 * Demangled: Caver::FWShell::AddArgument(std::string const&)
 *
 * Callers: 2
 *   0x00000000001FCD50  Caver::FWShell::AddArgument(std::string const&)
 *   0x000000000047DA14  Caver::FWShell::~FWShell()
 *
 * Callees: 2
 *   0x00000000001F83A0  std::vector<std::string,std::allocator<std::string>>::_M_insert_aux(__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,std::string const&)
 *   0x000000000056A528  sub_56A528
 *
 * Referenced strings: 8
 *   insn=0x000000000047DA58 string=0x000000000047DA5C "h&A"
 *   insn=0x000000000047DA64 string=0x000000000047DA68 "@"
 *   insn=0x000000000047DA74 string=0x000000000047DA78 "h\n@"
 *   insn=0x000000000047DA78 string=0x000000000047DA7C "!"
 *   insn=0x000000000047DA7C string=0x000000000047DA80 "h\n"
 *   insn=0x000000000047DA90 string=0x000000000047DA94 "`""
 *   insn=0x000000000047DAA0 string=0x000000000047DAA4 "?"
 *   insn=0x000000000047DAA4 string=0x00000000001F83A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FWShell::AddArgument(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a1 + 16) == *(_QWORD *)(a1 + 24) )
  {
    std::vector<std::string>::_M_insert_aux();
  }
  else
  {
    sub_56A528(*(_QWORD *)(a1 + 16), a2);
    *(_QWORD *)(a1 + 16) += 8LL;
  }
}

