/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BD270
 * Mangled: _ZN5Caver23StoreController_AndroidD2Ev
 * Demangled: Caver::StoreController_Android::~StoreController_Android()
 *
 * Callers: 1
 *   0x00000000001F8A10  Caver::StoreController_Android::~StoreController_Android()
 *
 * Callees: 11
 *   0x00000000001F3B20  std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>> *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8A10  Caver::StoreController_Android::~StoreController_Android()
 *   0x00000000001FC110  std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>> *)
 *   0x00000000001FF1E0  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(std::_Rb_tree_node<std::string> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004BD434  Caver::StoreController_Android::GetStoreName(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 63
 *   insn=0x00000000004BD27C string=0x00000000004BD280 "T"
 *   insn=0x00000000004BD288 string=0x00000000004BD28C "`"
 *   insn=0x00000000004BD290 string=0x00000000004BD294 "H"
 *   insn=0x00000000004BD294 string=0x00000000004BD298 "IG"
 *   insn=0x00000000004BD298 string=0x00000000004BD29C "aB@"
 *   insn=0x00000000004BD29C string=0x00000000004BD2A0 "A"
 *   insn=0x00000000004BD2A0 string=0x00000000004BD2A4 "h"
 *   insn=0x00000000004BD2A8 string=0x00000000004BD2AC "a*@"
 *   insn=0x00000000004BD2AC string=0x00000000004BD2B0 "`"
 *   insn=0x00000000004BD2B4 string=0x00000000004BD2B8 "a"
 *   insn=0x00000000004BD2B4 string=0x00000000001FC110 "0'"
 *   insn=0x00000000004BD2B8 string=0x00000000004BD2BC "`B"
 *   insn=0x00000000004BD2C0 string=0x00000000004BD2C4 "h"
 *   insn=0x00000000004BD2C0 string=0x00000000001F3B20 "P'"
 *   insn=0x00000000004BD2C4 string=0x00000000004BD2C8 "I"
 *   insn=0x00000000004BD2C8 string=0x00000000004BD2CC "J"
 *   insn=0x00000000004BD2CC string=0x00000000004BD2D0 ")=C"
 *   insn=0x00000000004BD2D0 string=0x00000000004BD2D4 "J"
 *   insn=0x00000000004BD2D8 string=0x00000000004BD2DC ")A"
 *   insn=0x00000000004BD2E0 string=0x00000000004BD2E4 "i"
 *   insn=0x00000000004BD2E4 string=0x00000000004BD2E8 "!"
 *   insn=0x00000000004BD2E8 string=0x00000000004BD30C ")"
 *   insn=0x00000000004BD30C string=0x00000000004BD310 ")=G"
 *   insn=0x00000000004BD310 string=0x00000000004BD314 "!"
 *   insn=0x00000000004BD318 string=0x00000000004BD31C "\t"
 *   insn=0x00000000004BD318 string=0x00000000004BD330 "\t"
 *   insn=0x00000000004BD31C string=0x00000000004BD320 "*"
 *   insn=0x00000000004BD320 string=0x00000000004BD324 "\n"
 *   insn=0x00000000004BD32C string=0x00000000004BD33C "?"
 *   insn=0x00000000004BD330 string=0x00000000004BD334 "*"
 *   insn=0x00000000004BD334 string=0x00000000004BD338 "\n"
 *   insn=0x00000000004BD33C string=0x00000000004BD340 "l"
 *   insn=0x00000000004BD350 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004BD354 string=0x00000000004BD358 "\n"
 *   insn=0x00000000004BD358 string=0x00000000004BD380 "h"
 *   insn=0x00000000004BD360 string=0x00000000004BD374 "a"
 *   insn=0x00000000004BD368 string=0x00000000004BD36C "`"
 *   insn=0x00000000004BD36C string=0x00000000004BD370 "h"
 *   insn=0x00000000004BD374 string=0x00000000004BD378 "`B"
 *   insn=0x00000000004BD380 string=0x00000000004BD384 "I"
 *   insn=0x00000000004BD384 string=0x00000000004BD388 "J"
 *   insn=0x00000000004BD388 string=0x00000000004BD38C ")=C"
 *   insn=0x00000000004BD38C string=0x00000000004BD390 "J"
 *   insn=0x00000000004BD394 string=0x00000000004BD398 ")A"
 *   insn=0x00000000004BD39C string=0x00000000004BD3A0 "i"
 *   insn=0x00000000004BD3A4 string=0x00000000004BD3A8 ")"
 *   insn=0x00000000004BD3A8 string=0x00000000004BD3AC ")=G"
 *   insn=0x00000000004BD3AC string=0x00000000004BD3B0 "!"
 *   insn=0x00000000004BD3B0 string=0x00000000004BD3B4 "i"
 *   insn=0x00000000004BD3B4 string=0x00000000004BD3B8 "\t"
 *   insn=0x00000000004BD3B4 string=0x00000000004BD3E0 "\t"
 *   insn=0x00000000004BD3B8 string=0x00000000004BD3BC "*"
 *   insn=0x00000000004BD3BC string=0x00000000004BD3C0 "\n"
 *   insn=0x00000000004BD3C4 string=0x00000000004BD3C8 "?"
 *   insn=0x00000000004BD3C8 string=0x00000000004BD3CC "l"
 *   insn=0x00000000004BD3D8 string=0x00000000004BD3DC ":"
 *   insn=0x00000000004BD3E0 string=0x00000000004BD3E4 "*"
 *   insn=0x00000000004BD3E4 string=0x00000000004BD3E8 "\n"
 *   insn=0x00000000004BD3E8 string=0x00000000004BD3EC "?"
 *   insn=0x00000000004BD3EC string=0x00000000004BD3F0 ""
 *   insn=0x00000000004BD40C string=0x00000000001F8A10 "0'"
 *   insn=0x00000000004BD41C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004BD42C string=0x00000000004BD430 "%"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::StoreController_Android::~StoreController_Android(Caver::StoreController_Android *this)
{
  __int64 v2; // x8
  void *v3; // x0
  unsigned int *v4; // x8
  int v5; // w9

  _ReadStatusReg(TPIDR_EL0);
  *(_QWORD *)this = off_6D7B60;
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase();
  std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>>::_M_erase();
  std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>>::_M_erase();
  v2 = *((_QWORD *)this + 1);
  v3 = (void *)(v2 - 24);
  *(_QWORD *)this = off_6CEC48;
  if ( (__int64 *)(v2 - 24) != &qword_6FD2E0 )
  {
    v4 = (unsigned int *)(v2 - 8);
    if ( &pthread_create )
    {
      do
        v5 = __ldaxr(v4);
      while ( __stlxr(v5 - 1, v4) );
    }
    else
    {
      v5 = (*v4)--;
    }
    if ( v5 <= 0 )
      operator delete(v3);
  }
}

