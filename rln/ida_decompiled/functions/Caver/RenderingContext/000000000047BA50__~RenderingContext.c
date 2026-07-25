/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047BA50
 * Mangled: _ZN5Caver16RenderingContextD2Ev
 * Demangled: Caver::RenderingContext::~RenderingContext()
 *
 * Callers: 1
 *   0x00000000001FB590  Caver::RenderingContext::~RenderingContext()
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FBF60  std::_Rb_tree<uint,std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<uint>,std::allocator<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>>::_M_erase(std::_Rb_tree_node<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 31
 *   insn=0x000000000047BA60 string=0x000000000047BA64 "`"
 *   insn=0x000000000047BA68 string=0x000000000047BA6C "@"
 *   insn=0x000000000047BA68 string=0x000000000047BA88 "t"@"
 *   insn=0x000000000047BA6C string=0x000000000047BA70 ""
 *   insn=0x000000000047BA70 string=0x000000000047BA74 ""
 *   insn=0x000000000047BA78 string=0x000000000047BA7C ""
 *   insn=0x000000000047BA7C string=0x000000000047BA80 ""
 *   insn=0x000000000047BA88 string=0x000000000047BA8C "4"
 *   insn=0x000000000047BA8C string=0x000000000047BAD0 "a"
 *   insn=0x000000000047BA90 string=0x000000000047BA94 ""
 *   insn=0x000000000047BAA0 string=0x000000000047BAA4 "\t@"
 *   insn=0x000000000047BAB0 string=0x000000000047BAB4 ""
 *   insn=0x000000000047BAC0 string=0x000000000047BAC4 "@"
 *   insn=0x000000000047BAD0 string=0x000000000047BAD4 "`""
 *   insn=0x000000000047BAE4 string=0x00000000001FBF60 "0'"
 *   insn=0x000000000047BAEC string=0x000000000047BAF0 "u"
 *   insn=0x000000000047BAF0 string=0x000000000047BB3C "a"
 *   insn=0x000000000047BAF4 string=0x000000000047BAF8 ""
 *   insn=0x000000000047BB04 string=0x000000000047BB08 "\t@"
 *   insn=0x000000000047BB14 string=0x000000000047BB18 ""
 *   insn=0x000000000047BB24 string=0x000000000047BB28 "@"
 *   insn=0x000000000047BB3C string=0x000000000047BB40 "`""
 *   insn=0x000000000047BB40 string=0x000000000047BB44 ""
 *   insn=0x000000000047BB48 string=0x000000000047BB4C "^"
 *   insn=0x000000000047BB68 string=0x000000000047BB6C "t"
 *   insn=0x000000000047BB84 string=0x000000000047BB88 "6"
 *   insn=0x000000000047BB8C string=0x000000000047BB90 ""
 *   insn=0x000000000047BBA0 string=0x000000000047BBA4 "\t@"
 *   insn=0x000000000047BBAC string=0x000000000047BBB0 ""
 *   insn=0x000000000047BBC0 string=0x000000000047BBC4 "@"
 *   insn=0x000000000047BBD0 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::RenderingContext::~RenderingContext(Caver::RenderingContext *this)
{
  _DWORD *v2; // x0
  int v3; // w8
  _QWORD *v4; // x20
  __int64 v5; // x8
  __int64 v6; // x8

  v2 = (_DWORD *)*((_QWORD *)this + 39);
  if ( v2 )
  {
    v3 = v2[2] - 1;
    v2[2] = v3;
    if ( !v3 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v4 = (_QWORD *)*((_QWORD *)this + 8);
  if ( v4 )
  {
    v5 = v4[1] - 1LL;
    v4[1] = v5;
    if ( !v5 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
      v6 = v4[2] - 1LL;
      v4[2] = v6;
      if ( !v6 )
        (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
    }
  }
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned int const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,boost::shared_ptr<Caver::RenderingProgram>>>>::_M_erase();
}

