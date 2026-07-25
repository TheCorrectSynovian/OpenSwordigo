/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000037E234
 * Mangled: _ZN5Caver19AchievementsManager22ReportPercentCompletedERKN5boost10shared_ptrINS_11AchievementEEEd
 * Demangled: Caver::AchievementsManager::ReportPercentCompleted(boost::shared_ptr<Caver::Achievement> const&,double)
 *
 * Callers: 1
 *   0x00000000001FC0F0  Caver::AchievementsManager::ReportPercentCompleted(boost::shared_ptr<Caver::Achievement> const&,double)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F93B0  Caver::OnlineController::SharedController(void)
 *   0x00000000001FEFF0  std::map<std::string,double,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::operator[](std::string const&)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 79
 *   insn=0x000000000037E24C string=0x000000000037E250 "V"
 *   insn=0x000000000037E258 string=0x000000000037E25C ""
 *   insn=0x000000000037E264 string=0x000000000037E268 "a"
 *   insn=0x000000000037E280 string=0x000000000037E284 "["
 *   insn=0x000000000037E284 string=0x00000000001FEFF0 "0'"
 *   insn=0x000000000037E288 string=0x000000000037E28C "7"
 *   insn=0x000000000037E29C string=0x000000000037E2A0 "a"
 *   insn=0x000000000037E2A0 string=0x000000000037E38C ")"
 *   insn=0x000000000037E2B0 string=0x000000000037E2B4 "e"
 *   insn=0x000000000037E2B8 string=0x0000000000590350 "N"
 *   insn=0x000000000037E2C4 string=0x000000000037E2C8 "a"
 *   insn=0x000000000037E2C4 string=0x000000000037E31C "%"
 *   insn=0x000000000037E2DC string=0x000000000037E2E0 "D"
 *   insn=0x000000000037E2E0 string=0x000000000037E2E4 ""
 *   insn=0x000000000037E2F0 string=0x000000000037E2F4 "`"
 *   insn=0x000000000037E2F4 string=0x000000000037E2F8 ")"
 *   insn=0x000000000037E2F8 string=0x000000000037E2FC ")=G"
 *   insn=0x000000000037E2FC string=0x000000000037E300 "!"
 *   insn=0x000000000037E304 string=0x000000000037E308 "\t"
 *   insn=0x000000000037E304 string=0x000000000037E3FC "\t"
 *   insn=0x000000000037E308 string=0x000000000037E30C "*"
 *   insn=0x000000000037E30C string=0x000000000037E310 "\n"
 *   insn=0x000000000037E314 string=0x000000000037E318 "<"
 *   insn=0x000000000037E318 string=0x000000000037E408 "?"
 *   insn=0x000000000037E31C string=0x000000000037E320 ""
 *   insn=0x000000000037E31C string=0x00000000001F93B0 "0'"
 *   insn=0x000000000037E328 string=0x000000000037E32C "m@"
 *   insn=0x000000000037E330 string=0x000000000037E334 "a"
 *   insn=0x000000000037E338 string=0x000000000037E33C "{"
 *   insn=0x000000000037E344 string=0x000000000037E348 "*"
 *   insn=0x000000000037E348 string=0x000000000037E34C ""
 *   insn=0x000000000037E35C string=0x000000000037E3D8 ")"
 *   insn=0x000000000037E38C string=0x000000000037E390 ")=G"
 *   insn=0x000000000037E390 string=0x000000000037E394 "!"
 *   insn=0x000000000037E398 string=0x000000000037E39C "\t"
 *   insn=0x000000000037E398 string=0x000000000037E3B0 "\t"
 *   insn=0x000000000037E39C string=0x000000000037E3A0 "*"
 *   insn=0x000000000037E3A0 string=0x000000000037E3A4 "\n"
 *   insn=0x000000000037E3AC string=0x000000000037E3BC "?"
 *   insn=0x000000000037E3B0 string=0x000000000037E3B4 "*"
 *   insn=0x000000000037E3B4 string=0x000000000037E3B8 "\n"
 *   insn=0x000000000037E3BC string=0x000000000037E3C0 ","
 *   insn=0x000000000037E3D8 string=0x000000000037E3DC ")=G"
 *   insn=0x000000000037E3DC string=0x000000000037E3E0 "!"
 *   insn=0x000000000037E3E4 string=0x000000000037E3E8 "\t"
 *   insn=0x000000000037E3E8 string=0x000000000037E3EC "*"
 *   insn=0x000000000037E3EC string=0x000000000037E3F0 "\n"
 *   insn=0x000000000037E3FC string=0x000000000037E400 "*"
 *   insn=0x000000000037E400 string=0x000000000037E404 "\n"
 *   insn=0x000000000037E41C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000037E424 string=0x000000000037E428 "(a"
 *   insn=0x000000000037E430 string=0x000000000037E434 "*"
 *   insn=0x000000000037E434 string=0x000000000037E438 "J=G"
 *   insn=0x000000000037E438 string=0x000000000037E43C ")!"
 *   insn=0x000000000037E43C string=0x000000000037E440 "J"
 *   insn=0x000000000037E440 string=0x000000000037E444 "*"
 *   insn=0x000000000037E440 string=0x000000000037E4E8 "*"
 *   insn=0x000000000037E444 string=0x000000000037E448 "K"
 *   insn=0x000000000037E448 string=0x000000000037E44C "+"
 *   insn=0x000000000037E454 string=0x000000000037E4CC "_"
 *   insn=0x000000000037E45C string=0x000000000037E460 "(a"
 *   insn=0x000000000037E468 string=0x000000000037E46C "*"
 *   insn=0x000000000037E46C string=0x000000000037E470 "J=G"
 *   insn=0x000000000037E470 string=0x000000000037E474 ")!"
 *   insn=0x000000000037E478 string=0x000000000037E47C "*"
 *   insn=0x000000000037E47C string=0x000000000037E480 "K"
 *   insn=0x000000000037E480 string=0x000000000037E484 "+"
 *   insn=0x000000000037E490 string=0x000000000037E494 "*"
 *   insn=0x000000000037E494 string=0x000000000037E498 "J"
 *   insn=0x000000000037E49C string=0x000000000037E4A0 "(a"
 *   insn=0x000000000037E4A8 string=0x000000000037E4AC "*"
 *   insn=0x000000000037E4AC string=0x000000000037E4B0 "J=G"
 *   insn=0x000000000037E4B0 string=0x000000000037E4B4 ")!"
 *   insn=0x000000000037E4B8 string=0x000000000037E4BC "*"
 *   insn=0x000000000037E4BC string=0x000000000037E4C0 "K"
 *   insn=0x000000000037E4C0 string=0x000000000037E4C4 "+"
 *   insn=0x000000000037E4E8 string=0x000000000037E4EC "K"
 *   insn=0x000000000037E4EC string=0x000000000037E4F0 "+"
 *   insn=0x000000000037E4F0 string=0x000000000037E4F4 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::AchievementsManager::ReportPercentCompleted(long double a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // x1
  double v6; // d0
  void *v7; // x0
  void *v8; // x0
  unsigned int *v9; // x8
  int v10; // w9
  __int64 v11; // x0
  unsigned int *v12; // x8
  int v13; // w9
  double v14; // [xsp+0h] [xbp-50h]
  _QWORD v15[3]; // [xsp+8h] [xbp-48h] BYREF

  v15[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *a3;
  if ( v5 )
  {
    sub_56A528(v15, v5);
    v6 = *(double *)std::map<std::string,double>::operator[]();
    v7 = (void *)(v15[0] - 24LL);
    if ( (__int64 *)(v15[0] - 24LL) != &qword_6FD2E0 )
    {
      v12 = (unsigned int *)(v15[0] - 8LL);
      if ( &pthread_create )
      {
        do
          v13 = __ldaxr(v12);
        while ( __stlxr(v13 - 1, v12) );
      }
      else
      {
        v13 = (*v12)--;
      }
      if ( v13 <= 0 )
      {
        v14 = v6;
        operator delete(v7);
        v6 = v14;
      }
    }
    if ( v6 + 0.001 < *(double *)&a1 )
    {
      if ( *(double *)&a1 >= 99.9999 )
      {
        v11 = Caver::OnlineController::SharedController((Caver::OnlineController *)v7);
        (*(void (__fastcall **)(__int64, _QWORD *, long double))(*(_QWORD *)v11 + 216LL))(v11, a3, a1);
        sub_56A528(v15, *a3);
        *(_QWORD *)std::map<std::string,double>::operator[]() = *(_QWORD *)&a1;
        v8 = (void *)(v15[0] - 24LL);
        if ( (__int64 *)(v15[0] - 24LL) == &qword_6FD2E0 )
          return;
        v9 = (unsigned int *)(v15[0] - 8LL);
        if ( &pthread_create )
        {
          do
            v10 = __ldaxr(v9);
          while ( __stlxr(v10 - 1, v9) );
          goto LABEL_21;
        }
      }
      else
      {
        sub_56A528(v15, *a3);
        *(_QWORD *)std::map<std::string,double>::operator[]() = *(_QWORD *)&a1;
        v8 = (void *)(v15[0] - 24LL);
        if ( (__int64 *)(v15[0] - 24LL) == &qword_6FD2E0 )
          return;
        v9 = (unsigned int *)(v15[0] - 8LL);
        if ( &pthread_create )
        {
          do
            v10 = __ldaxr(v9);
          while ( __stlxr(v10 - 1, v9) );
          goto LABEL_21;
        }
      }
      v10 = (*v9)--;
LABEL_21:
      if ( v10 <= 0 )
        operator delete(v8);
    }
  }
}

