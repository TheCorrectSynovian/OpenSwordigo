/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000037ED68
 * Mangled: _ZN5Caver19AchievementsManager21ReportAllAchievementsEv
 * Demangled: Caver::AchievementsManager::ReportAllAchievements(void)
 *
 * Callers: 1
 *   0x00000000001F8BD0  Caver::AchievementsManager::ReportAllAchievements(void)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F93A0  std::_Rb_tree<std::string,std::pair<std::string const,double>,std::_Select1st<std::pair<std::string const,double>>,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,double>> *)
 *   0x00000000001FAE50  Caver::ProfileManager::sharedManager(void)
 *   0x00000000001FC240  Caver::PlayerProfile::ValueForCounter(std::string const&)
 *   0x00000000001FC250  Caver::AchievementsManager::SetCounterValue(std::string const&,int,int)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000037EF7C  std::_Rb_tree<std::string,std::pair<std::string const,double>,std::_Select1st<std::pair<std::string const,double>>,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,double>> *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 31
 *   insn=0x000000000037ED80 string=0x000000000037ED84 "W"
 *   insn=0x000000000037ED98 string=0x000000000037ED9C "-"
 *   insn=0x000000000037ED9C string=0x000000000037EDA0 ""
 *   insn=0x000000000037ED9C string=0x00000000001FAE50 "0'"
 *   insn=0x000000000037EDA0 string=0x000000000037EDA4 "@"
 *   insn=0x000000000037EDB8 string=0x000000000037EE8C "s"
 *   insn=0x000000000037EDC8 string=0x000000000037EDCC "u"
 *   insn=0x000000000037EDCC string=0x00000000001F93A0 "0'"
 *   insn=0x000000000037EDE0 string=0x000000000037EDE4 "`"
 *   insn=0x000000000037EDE0 string=0x000000000037EE1C "sB"
 *   insn=0x000000000037EDEC string=0x00000000001FC240 "0'"
 *   insn=0x000000000037EE0C string=0x00000000001FC250 "0'"
 *   insn=0x000000000037EE10 string=0x000000000037EE14 "_"
 *   insn=0x000000000037EE14 string=0x000000000037EE18 "a"
 *   insn=0x000000000037EE34 string=0x000000000037EE38 "4"
 *   insn=0x000000000037EE3C string=0x000000000037EE40 ""
 *   insn=0x000000000037EE4C string=0x000000000037EE50 "\t@"
 *   insn=0x000000000037EE5C string=0x000000000037EE60 ""
 *   insn=0x000000000037EE6C string=0x000000000037EE70 "@"
 *   insn=0x000000000037EE90 string=0x000000000037EE94 ""
 *   insn=0x000000000037EE94 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000037EEC4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000037EED0 string=0x000000000037EED4 "h"
 *   insn=0x000000000037EEE0 string=0x000000000037EEE4 "x\n"
 *   insn=0x000000000037EEF8 string=0x000000000037EF54 "t"
 *   insn=0x000000000037EEFC string=0x000000000037EF00 "5"
 *   insn=0x000000000037EF04 string=0x000000000037EF08 ""
 *   insn=0x000000000037EF14 string=0x000000000037EF18 "\t@"
 *   insn=0x000000000037EF24 string=0x000000000037EF28 ""
 *   insn=0x000000000037EF34 string=0x000000000037EF38 "@"
 *   insn=0x000000000037EF64 string=0x000000000037EF68 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::AchievementsManager::ReportAllAchievements(Caver::AchievementsManager *this)
{
  __int64 v2; // x0
  char *v3; // x19
  char *v4; // x24
  char *v5; // x25
  __int64 v6; // x22
  __int64 v7; // x26
  char *v8; // x21
  _QWORD *v9; // x20
  __int64 v10; // x8
  __int64 v11; // x8
  void *p; // [xsp+0h] [xbp-60h] BYREF
  char *v13; // [xsp+8h] [xbp-58h]
  __int64 v14; // [xsp+10h] [xbp-50h]
  __int64 v15; // [xsp+18h] [xbp-48h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  p = 0;
  v13 = 0;
  v14 = 0;
  v2 = Caver::ProfileManager::sharedManager(this);
  (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v2 + 24LL))(v2, &p);
  v3 = (char *)p;
  v4 = v13;
  if ( p != v13 )
  {
    v5 = (char *)this + 336;
    do
    {
      std::_Rb_tree<std::string,std::pair<std::string const,double>,std::_Select1st<std::pair<std::string const,double>>,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::_M_erase();
      v6 = *((_QWORD *)this + 9);
      v7 = *((_QWORD *)this + 10);
      *((_QWORD *)this + 43) = 0;
      *((_QWORD *)this + 44) = v5;
      *((_QWORD *)this + 45) = v5;
      for ( *((_QWORD *)this + 46) = 0; v7 != v6; v6 += 8 )
      {
        if ( (int)Caver::PlayerProfile::ValueForCounter() >= 1 )
          Caver::AchievementsManager::SetCounterValue();
      }
      v3 += 16;
    }
    while ( v3 != v4 );
    v8 = (char *)p;
    v3 = v13;
    if ( p != v13 )
    {
      do
      {
        v9 = (_QWORD *)*((_QWORD *)v8 + 1);
        if ( v9 )
        {
          v10 = v9[1] - 1LL;
          v9[1] = v10;
          if ( !v10 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
            v11 = v9[2] - 1LL;
            v9[2] = v11;
            if ( !v11 )
              (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
          }
        }
        v8 += 16;
      }
      while ( v3 != v8 );
      v3 = (char *)p;
    }
  }
  if ( v3 )
    operator delete(v3);
}

