/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A7308
 * Mangled: _ZN5Caver14ProfileManager21PlayerProfileWasSavedEPNS_13PlayerProfileEb
 * Demangled: Caver::ProfileManager::PlayerProfileWasSaved(Caver::PlayerProfile *,bool)
 *
 * Callers: 1
 *   0x0000000000200AE0  Caver::ProfileManager::PlayerProfileWasSaved(Caver::PlayerProfile *,bool)
 *
 * Callees: 11
 *   0x00000000001F3610  Caver::AchievementsManager::ReportScore(std::string const&,long long,std::string const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6FD0  Caver::AchievementsManager::ReportPendingAchievements(void)
 *   0x00000000001FA8C0  Caver::PlayerProfile::FormattedTimePlayed(double,bool)
 *   0x00000000001FC250  Caver::AchievementsManager::SetCounterValue(std::string const&,int,int)
 *   0x00000000001FD2D0  Caver::AchievementsManager::sharedManager(void)
 *   0x000000000054C640  sub_54C640
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 74
 *   insn=0x00000000003A731C string=0x00000000003A7320 "U"
 *   insn=0x00000000003A7334 string=0x00000000003A7338 "&?"
 *   insn=0x00000000003A7334 string=0x00000000001FD2D0 "0'"
 *   insn=0x00000000003A7338 string=0x00000000003A733C "`2@"
 *   insn=0x00000000003A7338 string=0x00000000001F6FD0 "P'"
 *   insn=0x00000000003A733C string=0x00000000003A7340 "vB"
 *   insn=0x00000000003A734C string=0x00000000003A7350 ""
 *   insn=0x00000000003A734C string=0x00000000003A7368 "H"
 *   insn=0x00000000003A7354 string=0x00000000003A7358 ")`"
 *   insn=0x00000000003A7360 string=0x00000000003A7364 "a"
 *   insn=0x00000000003A7374 string=0x00000000003A7378 "\t@%"
 *   insn=0x00000000003A737C string=0x00000000003A7380 " ! "
 *   insn=0x00000000003A7380 string=0x00000000003A7384 "k"
 *   insn=0x00000000003A7384 string=0x00000000003A7388 " "
 *   insn=0x00000000003A738C string=0x00000000003A7390 "aB@"
 *   insn=0x00000000003A738C string=0x00000000003A73A4 "`B"
 *   insn=0x00000000003A7394 string=0x00000000003A7398 "!(b"
 *   insn=0x00000000003A7398 string=0x00000000003A739C "  `"
 *   insn=0x00000000003A73AC string=0x00000000003A73B0 "A"
 *   insn=0x00000000003A73B0 string=0x000000000059191D "timeplayed"
 *   insn=0x00000000003A73CC string=0x00000000003A73D0 "<M"
 *   insn=0x00000000003A73D0 string=0x00000000003A73D4 """
 *   insn=0x00000000003A73D0 string=0x00000000001FA8C0 "0'"
 *   insn=0x00000000003A73E4 string=0x00000000001F3610 "P'"
 *   insn=0x00000000003A73EC string=0x00000000003A73F0 "s"
 *   insn=0x00000000003A7418 string=0x00000000003A741C "!"
 *   insn=0x00000000003A7438 string=0x00000000003A743C ")=G"
 *   insn=0x00000000003A743C string=0x00000000003A7440 "!"
 *   insn=0x00000000003A7444 string=0x00000000003A7448 "\t"
 *   insn=0x00000000003A7444 string=0x00000000003A7480 "\t"
 *   insn=0x00000000003A7448 string=0x00000000003A744C "*"
 *   insn=0x00000000003A744C string=0x00000000003A7450 "\n"
 *   insn=0x00000000003A7454 string=0x00000000003A7458 ""
 *   insn=0x00000000003A7458 string=0x00000000003A748C "?"
 *   insn=0x00000000003A745C string=0x00000000003A7460 ")=G"
 *   insn=0x00000000003A7460 string=0x00000000003A7464 "!"
 *   insn=0x00000000003A7468 string=0x00000000003A746C "\t"
 *   insn=0x00000000003A7468 string=0x00000000003A74A0 "\t"
 *   insn=0x00000000003A746C string=0x00000000003A7470 "*"
 *   insn=0x00000000003A7470 string=0x00000000003A7474 "\n"
 *   insn=0x00000000003A747C string=0x00000000003A74AC "?"
 *   insn=0x00000000003A7480 string=0x00000000003A7484 "*"
 *   insn=0x00000000003A7484 string=0x00000000003A7488 "\n"
 *   insn=0x00000000003A74A0 string=0x00000000003A74A4 "*"
 *   insn=0x00000000003A74A4 string=0x00000000003A74A8 "\n"
 *   insn=0x00000000003A74C0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003A74C8 string=0x00000000003A74CC "J"
 *   insn=0x00000000003A74D0 string=0x00000000003A74D4 "(a"
 *   insn=0x00000000003A74E0 string=0x00000000003A74E4 "J=G"
 *   insn=0x00000000003A74E4 string=0x00000000003A74E8 ")!"
 *   insn=0x00000000003A74EC string=0x00000000003A74F0 "*"
 *   insn=0x00000000003A74EC string=0x00000000003A7504 "*"
 *   insn=0x00000000003A74F0 string=0x00000000003A74F4 "K"
 *   insn=0x00000000003A74F4 string=0x00000000003A74F8 "+"
 *   insn=0x00000000003A7500 string=0x00000000003A7510 "_"
 *   insn=0x00000000003A7504 string=0x00000000003A7508 "K"
 *   insn=0x00000000003A7508 string=0x00000000003A750C "+"
 *   insn=0x00000000003A7530 string=0x00000000003A7534 ")"
 *   insn=0x00000000003A7544 string=0x00000000003A7548 ")=G"
 *   insn=0x00000000003A7548 string=0x00000000003A754C "!"
 *   insn=0x00000000003A754C string=0x00000000003A7550 "i"
 *   insn=0x00000000003A7550 string=0x00000000003A7554 "\t"
 *   insn=0x00000000003A7550 string=0x00000000003A757C "\t"
 *   insn=0x00000000003A7554 string=0x00000000003A7558 "*"
 *   insn=0x00000000003A7558 string=0x00000000003A755C "\n"
 *   insn=0x00000000003A7560 string=0x00000000003A7564 "?"
 *   insn=0x00000000003A7564 string=0x00000000003A7568 "l"
 *   insn=0x00000000003A757C string=0x00000000003A7580 "*"
 *   insn=0x00000000003A7580 string=0x00000000003A7584 "\n"
 *   insn=0x00000000003A7584 string=0x00000000003A7588 "?"
 *   insn=0x00000000003A7588 string=0x00000000003A758C ""
 *   insn=0x00000000003A75B0 string=0x00000000003A75B4 "GW"
 *   insn=0x00000000003A75CC string=0x00000000003A75D0 " S"
 *   insn=0x00000000003A75D0 string=0x00000000001FC250 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ProfileManager::PlayerProfileWasSaved(
        Caver::AchievementsManager **this,
        Caver::PlayerProfile *a2,
        char a3)
{
  Caver::AchievementsManager *v5; // x0
  Caver::AchievementsManager *v6; // x0
  double i; // d8
  float v8; // s0
  float v9; // s9
  double v10; // d0
  bool v11; // w1
  void *v12; // x0
  void *v13; // x0
  unsigned int *v14; // x8
  int v15; // w9
  unsigned int *v16; // x8
  int v17; // w9
  __int64 v18; // [xsp+38h] [xbp-58h] BYREF
  _QWORD v19[3]; // [xsp+48h] [xbp-48h] BYREF

  v19[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = (Caver::AchievementsManager *)Caver::AchievementsManager::sharedManager((Caver::AchievementsManager *)this);
  Caver::AchievementsManager::ReportPendingAchievements(v5);
  v6 = this[12];
  for ( i = 0.0; this + 10 != (Caver::AchievementsManager **)v6; v6 = (Caver::AchievementsManager *)sub_54C640(v6) )
    i = i + *(double *)(*((_QWORD *)v6 + 5) + 64LL);
  v8 = i / 60.0;
  v9 = floorf(v8);
  if ( v9 >= 1.0 )
  {
    v10 = v9;
    if ( (a3 & 1) != 0 || *((double *)this + 16) + 5.0 < v10 )
    {
      *((double *)this + 16) = v10;
      Caver::AchievementsManager::sharedManager(v6);
      sub_566BB8((int)v19, "timeplayed");
      Caver::PlayerProfile::FormattedTimePlayed(&v18, 0, i, v11);
      Caver::AchievementsManager::ReportScore();
      v12 = (void *)(v18 - 24);
      if ( (__int64 *)(v18 - 24) != &qword_6FD2E0 )
      {
        v14 = (unsigned int *)(v18 - 8);
        if ( &pthread_create )
        {
          do
            v15 = __ldaxr(v14);
          while ( __stlxr(v15 - 1, v14) );
        }
        else
        {
          v15 = (*v14)--;
        }
        if ( v15 <= 0 )
          operator delete(v12);
      }
      v13 = (void *)(v19[0] - 24LL);
      if ( (__int64 *)(v19[0] - 24LL) != &qword_6FD2E0 )
      {
        v16 = (unsigned int *)(v19[0] - 8LL);
        if ( &pthread_create )
        {
          do
            v17 = __ldaxr(v16);
          while ( __stlxr(v17 - 1, v16) );
        }
        else
        {
          v17 = (*v16)--;
        }
        if ( v17 <= 0 )
          operator delete(v13);
      }
    }
  }
}

