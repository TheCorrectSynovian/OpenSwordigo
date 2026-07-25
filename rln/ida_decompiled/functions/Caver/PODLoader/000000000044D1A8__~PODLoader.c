/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044D1A8
 * Mangled: _ZN5Caver9PODLoaderD2Ev
 * Demangled: Caver::PODLoader::~PODLoader()
 *
 * Callers: 1
 *   0x00000000001F5500  Caver::PODLoader::~PODLoader()
 *
 * Callees: 6
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FCA40  std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,int>> *)
 *   0x00000000001FF020  std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,int>> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 57
 *   insn=0x000000000044D1B4 string=0x000000000044D1B8 "aB@"
 *   insn=0x000000000044D1B8 string=0x000000000044D1BC "`"
 *   insn=0x000000000044D1BC string=0x000000000044D1C0 " "
 *   insn=0x000000000044D1C0 string=0x000000000044D1C4 "`.@"
 *   insn=0x000000000044D1C0 string=0x00000000001FCA40 "0'"
 *   insn=0x000000000044D1C4 string=0x000000000044D1C8 "@"
 *   insn=0x000000000044D1C8 string=0x000000000044D1CC "9"
 *   insn=0x000000000044D1C8 string=0x000000000044D1D0 "a"
 *   insn=0x000000000044D1CC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000044D1D0 string=0x000000000044D1D4 "`"
 *   insn=0x000000000044D1D8 string=0x000000000044D1DC "`"
 *   insn=0x000000000044D1DC string=0x000000000044D1E0 "@"
 *   insn=0x000000000044D1E0 string=0x000000000044D1E4 "_"
 *   insn=0x000000000044D1E0 string=0x000000000044D1E8 "`\n@"
 *   insn=0x000000000044D1E4 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000044D1E8 string=0x000000000044D1EC "@"
 *   insn=0x000000000044D1EC string=0x000000000044D1F0 "\"
 *   insn=0x000000000044D1EC string=0x000000000044D1F4 "s"
 *   insn=0x000000000044D1F8 string=0x000000000044D1FC "h"
 *   insn=0x000000000044D1FC string=0x000000000044D200 ""
 *   insn=0x000000000044D200 string=0x000000000044D204 "h"
 *   insn=0x000000000044D204 string=0x000000000044D208 "!"
 *   insn=0x000000000044D208 string=0x000000000044D20C "h"
 *   insn=0x000000000044D210 string=0x000000000044D214 "\t@"
 *   insn=0x000000000044D218 string=0x000000000044D21C "h\n@"
 *   insn=0x000000000044D21C string=0x000000000044D220 ""
 *   insn=0x000000000044D220 string=0x000000000044D224 "h\n"
 *   insn=0x000000000044D228 string=0x000000000044D238 "h"
 *   insn=0x000000000044D248 string=0x000000000044D24C " "
 *   insn=0x000000000044D250 string=0x000000000044D254 "`"
 *   insn=0x000000000044D258 string=0x000000000044D288 "`\n@"
 *   insn=0x000000000044D25C string=0x000000000044D29C "1"
 *   insn=0x000000000044D264 string=0x000000000044D268 "h"
 *   insn=0x000000000044D268 string=0x000000000044D274 "a"
 *   insn=0x000000000044D274 string=0x000000000044D278 "`"
 *   insn=0x000000000044D278 string=0x000000000044D27C "i"
 *   insn=0x000000000044D27C string=0x000000000044D280 "`"
 *   insn=0x000000000044D28C string=0x000000000044D290 "s"
 *   insn=0x000000000044D28C string=0x000000000044D2A8 "."
 *   insn=0x000000000044D294 string=0x000000000044D2B4 "h"
 *   insn=0x000000000044D29C string=0x000000000044D2A0 "`\n@"
 *   insn=0x000000000044D2A0 string=0x000000000044D2A4 "`"
 *   insn=0x000000000044D2A8 string=0x000000000044D2AC "s"
 *   insn=0x000000000044D2AC string=0x000000000044D2B0 "3"
 *   insn=0x000000000044D2B4 string=0x000000000044D2B8 ""
 *   insn=0x000000000044D2B8 string=0x000000000044D2BC "h"
 *   insn=0x000000000044D2C0 string=0x000000000044D2C4 "h"
 *   insn=0x000000000044D2C4 string=0x000000000044D2C8 "\t@"
 *   insn=0x000000000044D2D0 string=0x000000000044D2D4 "h\n@"
 *   insn=0x000000000044D2D4 string=0x000000000044D2D8 ""
 *   insn=0x000000000044D2D8 string=0x000000000044D2DC "h\n"
 *   insn=0x000000000044D2E0 string=0x000000000044D2E4 "h"
 *   insn=0x000000000044D2E4 string=0x000000000044D2E8 "@"
 *   insn=0x000000000044D2F4 string=0x000000000044D2F8 "s"
 *   insn=0x000000000044D314 string=0x000000000044D318 "4"
 *   insn=0x000000000044D320 string=0x000000000044D324 "?"
 *   insn=0x000000000044D334 string=0x000000000044D338 "5"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PODLoader::~PODLoader(Caver::PODLoader *this)
{
  void *v2; // x0
  void *v3; // x0
  void *v4; // x0
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x8

  std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_erase();
  v2 = (void *)*((_QWORD *)this + 11);
  if ( v2 )
    operator delete(v2);
  std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_erase();
  v3 = (void *)*((_QWORD *)this + 3);
  if ( v3 )
    operator delete[](v3);
  v4 = (void *)*((_QWORD *)this + 2);
  if ( v4 )
    operator delete[](v4);
  v5 = (_QWORD *)*((_QWORD *)this + 1);
  if ( v5 )
  {
    v6 = v5[1] - 1LL;
    v5[1] = v6;
    if ( !v6 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
      v7 = v5[2] - 1LL;
      v5[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    }
  }
}

