/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000037E7C4
 * Mangled: _ZN5Caver19AchievementsManager25ReportPendingAchievementsEv
 * Demangled: Caver::AchievementsManager::ReportPendingAchievements(void)
 *
 * Callers: 1
 *   0x00000000001F6FD0  Caver::AchievementsManager::ReportPendingAchievements(void)
 *
 * Callees: 19
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5AF0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>>::equal_range(std::string const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7980  std::map<std::string,boost::shared_ptr<Caver::Achievement>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>>::operator[](std::string const&)
 *   0x00000000001F93A0  std::_Rb_tree<std::string,std::pair<std::string const,double>,std::_Select1st<std::pair<std::string const,double>>,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,double>> *)
 *   0x00000000001F93B0  Caver::OnlineController::SharedController(void)
 *   0x00000000001F9720  std::deque<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>::_M_reallocate_map(ulong,bool)
 *   0x00000000001FBFF0  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::operator[](std::string const&)
 *   0x00000000001FC0F0  Caver::AchievementsManager::ReportPercentCompleted(boost::shared_ptr<Caver::Achievement> const&,double)
 *   0x00000000001FC240  Caver::PlayerProfile::ValueForCounter(std::string const&)
 *   0x00000000001FC250  Caver::AchievementsManager::SetCounterValue(std::string const&,int,int)
 *   0x00000000001FEFF0  std::map<std::string,double,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::operator[](std::string const&)
 *   0x0000000000200DD0  Caver::AchievementsManager::SetAchievementCompleted(boost::shared_ptr<Caver::Achievement> const&,bool)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C640  sub_54C640
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 125
 *   insn=0x000000000037E7E4 string=0x000000000037E7E8 "X"
 *   insn=0x000000000037E7E8 string=0x000000000037E7EC ""
 *   insn=0x000000000037E7F0 string=0x000000000037E7F4 "y"
 *   insn=0x000000000037E7F8 string=0x000000000037E7FC "v"
 *   insn=0x000000000037E7FC string=0x000000000037E800 "?"
 *   insn=0x000000000037E804 string=0x000000000037E808 "`\t"
 *   insn=0x000000000037E808 string=0x000000000037E80C ";"
 *   insn=0x000000000037E808 string=0x000000000037E934 "a"
 *   insn=0x000000000037E80C string=0x000000000037E810 ":"
 *   insn=0x000000000037E810 string=0x000000000037E814 "{"
 *   insn=0x000000000037E814 string=0x000000000037E818 "Z?G"
 *   insn=0x000000000037E818 string=0x000000000037E81C "tb"
 *   insn=0x000000000037E81C string=0x000000000037E820 "u""
 *   insn=0x000000000037E82C string=0x000000000037E830 "\t"
 *   insn=0x000000000037E82C string=0x000000000037E844 "\t"
 *   insn=0x000000000037E830 string=0x000000000037E834 "*"
 *   insn=0x000000000037E834 string=0x000000000037E838 "\n"
 *   insn=0x000000000037E840 string=0x000000000037E850 "?"
 *   insn=0x000000000037E844 string=0x000000000037E848 "*"
 *   insn=0x000000000037E848 string=0x000000000037E84C "\n"
 *   insn=0x000000000037E868 string=0x000000000037E86C "E"
 *   insn=0x000000000037E86C string=0x000000000037E870 "\@"
 *   insn=0x000000000037E86C string=0x00000000001F7980 "0'"
 *   insn=0x000000000037E87C string=0x000000000037E880 ")"
 *   insn=0x000000000037E888 string=0x000000000037E8D8 "7"
 *   insn=0x000000000037E890 string=0x000000000037E894 ""
 *   insn=0x000000000037E890 string=0x00000000001F93B0 "0'"
 *   insn=0x000000000037E894 string=0x000000000037E898 "m@"
 *   insn=0x000000000037E8BC string=0x000000000037E8C0 ""
 *   insn=0x000000000037E8BC string=0x00000000001FEFF0 "0'"
 *   insn=0x000000000037E8D0 string=0x000000000037E828 "!"
 *   insn=0x000000000037E8DC string=0x000000000037E8E0 ""
 *   insn=0x000000000037E8F0 string=0x000000000037E8F4 "\t@"
 *   insn=0x000000000037E8FC string=0x000000000037E900 ""
 *   insn=0x000000000037E910 string=0x000000000037E914 "@"
 *   insn=0x000000000037E91C string=0x000000000037E920 "H7"
 *   insn=0x000000000037E924 string=0x000000000037E928 "?"
 *   insn=0x000000000037E934 string=0x000000000037E938 "`"
 *   insn=0x000000000037E93C string=0x00000000001F93A0 "0'"
 *   insn=0x000000000037E940 string=0x000000000037E944 "y"
 *   insn=0x000000000037E944 string=0x000000000037E948 ""
 *   insn=0x000000000037E950 string=0x000000000037E954 "A"
 *   insn=0x000000000037E954 string=0x000000000037E97C "U"
 *   insn=0x000000000037E97C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000037E984 string=0x000000000037E988 "(a"
 *   insn=0x000000000037E990 string=0x000000000037E994 ")!"
 *   insn=0x000000000037E998 string=0x000000000037E99C "*"
 *   insn=0x000000000037E998 string=0x000000000037E9CC "*"
 *   insn=0x000000000037E99C string=0x000000000037E9A0 "K"
 *   insn=0x000000000037E9A0 string=0x000000000037E9A4 "+"
 *   insn=0x000000000037E9A8 string=0x000000000037E9AC "_"
 *   insn=0x000000000037E9B8 string=0x000000000037E9BC "z"
 *   insn=0x000000000037E9C4 string=0x000000000037E9C8 ""
 *   insn=0x000000000037E9CC string=0x000000000037E9D0 "K"
 *   insn=0x000000000037E9D0 string=0x000000000037E9D4 "+"
 *   insn=0x000000000037E9D4 string=0x000000000037E9D8 "_"
 *   insn=0x000000000037E9EC string=0x000000000037E9F0 "4"
 *   insn=0x000000000037E9F4 string=0x000000000037E9F8 ""
 *   insn=0x000000000037EA04 string=0x000000000037EA08 "\t@"
 *   insn=0x000000000037EA14 string=0x000000000037EA18 ""
 *   insn=0x000000000037EA24 string=0x000000000037EA28 "@"
 *   insn=0x000000000037EA38 string=0x000000000037EA3C "D>"
 *   insn=0x000000000037EA60 string=0x000000000037EA64 "Z"
 *   insn=0x000000000037EA64 string=0x000000000037EA68 "H"
 *   insn=0x000000000037EA80 string=0x000000000037EA84 "["
 *   insn=0x000000000037EA84 string=0x00000000001FBFF0 "0'"
 *   insn=0x000000000037EA94 string=0x00000000001F5AF0 "P'"
 *   insn=0x000000000037EAA8 string=0x000000000037EAAC ""
 *   insn=0x000000000037EAAC string=0x000000000037EAB0 "`"
 *   insn=0x000000000037EAB8 string=0x000000000037EABC "\th"
 *   insn=0x000000000037EABC string=0x000000000037EAC0 ""
 *   insn=0x000000000037EACC string=0x000000000037EAD0 "*"
 *   insn=0x000000000037EAD0 string=0x000000000037EAD4 "J"
 *   insn=0x000000000037EAD4 string=0x000000000037EAD8 "*"
 *   insn=0x000000000037EADC string=0x000000000037EAE0 " "
 *   insn=0x000000000037EAE0 string=0x000000000037EAE4 " "
 *   insn=0x000000000037EAF4 string=0x000000000037EAF8 "?"
 *   insn=0x000000000037EAF4 string=0x00000000001FC0F0 "0'"
 *   insn=0x000000000037EAF8 string=0x000000000037EAFC "L"
 *   insn=0x000000000037EB0C string=0x000000000037EB10 "?"
 *   insn=0x000000000037EB20 string=0x000000000037EB24 "A"
 *   insn=0x000000000037EB2C string=0x000000000037EB30 ")A"
 *   insn=0x000000000037EB3C string=0x000000000037EB40 "\t"
 *   insn=0x000000000037EB44 string=0x000000000037EB48 "\t"
 *   insn=0x000000000037EB4C string=0x000000000037EB50 "*"
 *   insn=0x000000000037EB4C string=0x000000000037EB5C "A"
 *   insn=0x000000000037EB50 string=0x000000000037EB54 "J"
 *   insn=0x000000000037EB54 string=0x000000000037EB58 "*"
 *   insn=0x000000000037EB6C string=0x000000000037EB70 ""
 *   insn=0x000000000037EB70 string=0x000000000037EB74 "H"
 *   insn=0x000000000037EB8C string=0x00000000001F9720 "0'"
 *   insn=0x000000000037EB94 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000037EBA4 string=0x000000000037EBA8 "("
 *   insn=0x000000000037EBAC string=0x000000000037EBB0 "("
 *   insn=0x000000000037EBB4 string=0x000000000037EBB8 "\t"
 *   insn=0x000000000037EBB8 string=0x000000000037EBBC ")"
 *   insn=0x000000000037EBBC string=0x000000000037EBC0 "\t"
 *   insn=0x000000000037EBC4 string=0x000000000037EBC8 "\t!"
 *   insn=0x000000000037EBCC string=0x000000000037EBD0 ""
 *   insn=0x000000000037EBD4 string=0x000000000037EBD8 ""
 *   insn=0x000000000037EBE4 string=0x000000000037EBE8 "9"
 *   insn=0x000000000037EBE8 string=0x000000000037EBEC "(@"
 *   insn=0x000000000037EBEC string=0x000000000037EBF0 ""
 *   insn=0x000000000037EBF0 string=0x000000000037EBF4 "("
 *   insn=0x000000000037EBF8 string=0x000000000037EBFC "("
 *   insn=0x000000000037EC00 string=0x000000000037EC04 "\t@"
 *   insn=0x000000000037EC08 string=0x000000000037EC0C "(@"
 *   insn=0x000000000037EC0C string=0x000000000037EC10 ""
 *   insn=0x000000000037EC10 string=0x000000000037EC14 "("
 *   insn=0x000000000037EC18 string=0x000000000037EC1C "("
 *   insn=0x000000000037EC20 string=0x000000000037EC24 "@"
 *   insn=0x000000000037EC38 string=0x000000000037EC3C "A"
 *   insn=0x000000000037EC40 string=0x000000000037EC48 "H"
 *   insn=0x000000000037EC50 string=0x000000000037EC54 "a"
 *   insn=0x000000000037EC88 string=0x000000000037EC8C "4"
 *   insn=0x000000000037EC90 string=0x000000000037EC94 ""
 *   insn=0x000000000037ECA0 string=0x000000000037ECA4 "\t@"
 *   insn=0x000000000037ECB0 string=0x000000000037ECB4 ""
 *   insn=0x000000000037ECC0 string=0x000000000037ECC4 "@"
 *   insn=0x000000000037ED18 string=0x000000000037ED1C "`"
 *   insn=0x000000000037ED20 string=0x000000000037ED24 "G"
 *   insn=0x000000000037ED24 string=0x00000000001FC240 "0'"
 *   insn=0x000000000037ED40 string=0x000000000037ED44 "C"
 *   insn=0x000000000037ED44 string=0x00000000001FC250 "0'"
 *   insn=0x000000000037ED4C string=0x000000000037ED50 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AchievementsManager::ReportPendingAchievements(Caver::AchievementsManager *this)
{
  long double v1; // q8
  char *v3; // x25
  __int64 v4; // x22
  unsigned int *v5; // x8
  int v6; // w9
  Caver::OnlineController *v7; // x0
  __int64 v8; // x8
  _QWORD *v9; // x23
  __int64 v10; // x0
  void *v11; // x0
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 result; // x0
  __int64 v15; // [xsp+D0h] [xbp-80h] BYREF
  __int64 v16; // [xsp+D8h] [xbp-78h] BYREF
  _QWORD *v17; // [xsp+E0h] [xbp-70h]
  Caver::AchievementsManager *v18; // [xsp+E8h] [xbp-68h]
  __int64 v19; // [xsp+F8h] [xbp-58h]

  v3 = (char *)this + 384;
  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v18 = (Caver::AchievementsManager *)*((_QWORD *)this + 50);
  v4 = (__int64)v18;
  if ( (Caver::AchievementsManager *)((char *)this + 384) != v18 )
  {
    do
    {
      v7 = (Caver::OnlineController *)std::map<std::string,boost::shared_ptr<Caver::Achievement>>::operator[]();
      v8 = *(_QWORD *)v7;
      v9 = (_QWORD *)*((_QWORD *)v7 + 1);
      v16 = *(_QWORD *)v7;
      v17 = v9;
      if ( v9 )
        ++v9[1];
      if ( v8 )
      {
        *(_QWORD *)&v1 = *(_QWORD *)(v4 + 40);
        v10 = Caver::OnlineController::SharedController(v7);
        (*(void (__fastcall **)(__int64, __int64 *, long double))(*(_QWORD *)v10 + 216LL))(v10, &v16, v1);
        sub_56A528(&v15, v16);
        *(_QWORD *)std::map<std::string,double>::operator[]() = *(_QWORD *)&v1;
        v11 = (void *)(v15 - 24);
        if ( (__int64 *)(v15 - 24) != &qword_6FD2E0 )
        {
          v5 = (unsigned int *)(v15 - 8);
          if ( &pthread_create )
          {
            do
              v6 = __ldaxr(v5);
            while ( __stlxr(v6 - 1, v5) );
          }
          else
          {
            v6 = (*v5)--;
          }
          if ( v6 <= 0 )
            operator delete(v11);
        }
        v9 = v17;
      }
      if ( v9 )
      {
        v12 = v9[1] - 1LL;
        v9[1] = v12;
        if ( !v12 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
          v13 = v9[2] - 1LL;
          v9[2] = v13;
          if ( !v13 )
            (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
        }
      }
      v4 = sub_54C640(v18);
      v18 = (Caver::AchievementsManager *)v4;
    }
    while ( v3 != (char *)v4 );
  }
  result = std::_Rb_tree<std::string,std::pair<std::string const,double>,std::_Select1st<std::pair<std::string const,double>>,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::_M_erase();
  *((_QWORD *)this + 49) = 0;
  *((_QWORD *)this + 50) = v3;
  *((_QWORD *)this + 51) = v3;
  *((_QWORD *)this + 52) = 0;
  return result;
}

