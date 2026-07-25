/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000037D8F4
 * Mangled: _ZN5Caver19AchievementsManager6UpdateEf
 * Demangled: Caver::AchievementsManager::Update(float)
 *
 * Callers: 2
 *   0x00000000001F4A40  Caver::AchievementsManager::Update(float)
 *   0x000000000037D7FC  std::deque<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>::~deque()
 *
 * Callees: 11
 *   0x00000000001F3840  Caver::AchievementNotificationView::AchievementNotificationView(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6420  Caver::AchievementNotificationView::SetAchievement(boost::shared_ptr<Caver::Achievement> const&)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7980  std::map<std::string,boost::shared_ptr<Caver::Achievement>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>>::operator[](std::string const&)
 *   0x00000000001F7D40  Caver::AchievementNotificationView::PresentInView(Caver::GUIView *)
 *   0x00000000001F93B0  Caver::OnlineController::SharedController(void)
 *   0x0000000000203150  boost::shared_ptr<Caver::AchievementNotificationView>::shared_ptr<Caver::AchievementNotificationView>(Caver::AchievementNotificationView *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 95
 *   insn=0x000000000037D908 string=0x000000000037D90C "U"
 *   insn=0x000000000037D914 string=0x000000000037D918 ""
 *   insn=0x000000000037D918 string=0x000000000037D91C "v"
 *   insn=0x000000000037D920 string=0x000000000037D924 "h"
 *   insn=0x000000000037D924 string=0x000000000037D928 "h"
 *   insn=0x000000000037D928 string=0x000000000037D92C "-@"
 *   insn=0x000000000037D928 string=0x000000000037D934 "i"
 *   insn=0x000000000037D930 string=0x000000000037D98C "t"
 *   insn=0x000000000037D934 string=0x000000000037D938 "hv@"
 *   insn=0x000000000037D938 string=0x000000000037D93C "?"
 *   insn=0x000000000037D93C string=0x000000000037D940 " "
 *   insn=0x000000000037D940 string=0x000000000037D944 "`:A"
 *   insn=0x000000000037D944 string=0x000000000037D948 "  "
 *   insn=0x000000000037D950 string=0x000000000037D954 "`:"
 *   insn=0x000000000037D960 string=0x000000000037D9DC "\t"
 *   insn=0x000000000037D998 string=0x000000000037D99C ""
 *   insn=0x000000000037D9AC string=0x000000000037D9B0 "\t@"
 *   insn=0x000000000037D9B8 string=0x000000000037D9BC ""
 *   insn=0x000000000037D9CC string=0x000000000037D9D0 "@"
 *   insn=0x000000000037D9E0 string=0x000000000037D9E4 "\t"
 *   insn=0x000000000037D9EC string=0x000000000037D9F0 "*"
 *   insn=0x000000000037D9EC string=0x000000000037D9FC "i~@"
 *   insn=0x000000000037D9F0 string=0x000000000037D9F4 "J"
 *   insn=0x000000000037D9F4 string=0x000000000037D9F8 "*"
 *   insn=0x000000000037D9FC string=0x000000000037DA00 ")A"
 *   insn=0x000000000037DA0C string=0x000000000037DA10 "4"
 *   insn=0x000000000037DA10 string=0x000000000037DA54 "hv@"
 *   insn=0x000000000037DA14 string=0x000000000037DA18 ""
 *   insn=0x000000000037DA24 string=0x000000000037DA28 "\t@"
 *   insn=0x000000000037DA34 string=0x000000000037DA38 ""
 *   insn=0x000000000037DA44 string=0x000000000037DA48 "@"
 *   insn=0x000000000037DA54 string=0x000000000037DA58 "A"
 *   insn=0x000000000037DA58 string=0x000000000037DA5C "hv"
 *   insn=0x000000000037DA60 string=0x000000000037DAD0 "8"
 *   insn=0x000000000037DA64 string=0x000000000037DA68 "4"
 *   insn=0x000000000037DA68 string=0x000000000037DAAC "`z@"
 *   insn=0x000000000037DA6C string=0x000000000037DA70 ""
 *   insn=0x000000000037DA7C string=0x000000000037DA80 "\t@"
 *   insn=0x000000000037DA8C string=0x000000000037DA90 ""
 *   insn=0x000000000037DA9C string=0x000000000037DAA0 "@"
 *   insn=0x000000000037DAB0 string=0x000000000037DAB4 "h"
 *   insn=0x000000000037DAB0 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000037DAB4 string=0x000000000037DAB8 "\t!"
 *   insn=0x000000000037DAB8 string=0x000000000037DABC "i"
 *   insn=0x000000000037DABC string=0x000000000037DAC0 ""
 *   insn=0x000000000037DAC0 string=0x000000000037DAC4 "h"
 *   insn=0x000000000037DAC4 string=0x000000000037DAC8 ""
 *   insn=0x000000000037DAC8 string=0x000000000037DACC "h~"
 *   insn=0x000000000037DAD0 string=0x000000000037DAD4 ""
 *   insn=0x000000000037DAD0 string=0x00000000001F93B0 "0'"
 *   insn=0x000000000037DAD4 string=0x000000000037DAD8 "@"
 *   insn=0x000000000037DAE8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000037DAF0 string=0x000000000037DAF4 "S"
 *   insn=0x000000000037DAF4 string=0x00000000001F3840 "P'"
 *   insn=0x000000000037DB00 string=0x000000000037DB04 "h"
 *   insn=0x000000000037DB10 string=0x000000000037DB14 "i"
 *   insn=0x000000000037DB18 string=0x000000000037DB1C "4"
 *   insn=0x000000000037DB20 string=0x000000000037DB24 ""
 *   insn=0x000000000037DB30 string=0x000000000037DB34 "\t@"
 *   insn=0x000000000037DB40 string=0x000000000037DB44 ""
 *   insn=0x000000000037DB50 string=0x000000000037DB54 "@"
 *   insn=0x000000000037DB64 string=0x000000000037DB68 "."
 *   insn=0x000000000037DB68 string=0x000000000037DB6C "af@"
 *   insn=0x000000000037DB68 string=0x00000000001F6420 "0'"
 *   insn=0x000000000037DB6C string=0x000000000037DB70 "a"
 *   insn=0x000000000037DB74 string=0x000000000037DB78 "r"
 *   insn=0x000000000037DB78 string=0x00000000001F7D40 "0'"
 *   insn=0x000000000037DB7C string=0x000000000037DB80 "3"
 *   insn=0x000000000037DB80 string=0x000000000037DB84 "h"
 *   insn=0x000000000037DB84 string=0x000000000037DB88 ""
 *   insn=0x000000000037DB88 string=0x000000000037DB8C "h"
 *   insn=0x000000000037DB90 string=0x000000000037DB94 "h"
 *   insn=0x000000000037DB98 string=0x000000000037DB9C "\t@"
 *   insn=0x000000000037DBA0 string=0x000000000037DBA4 "h\n@"
 *   insn=0x000000000037DBA4 string=0x000000000037DBA8 ""
 *   insn=0x000000000037DBA8 string=0x000000000037DBAC "h\n"
 *   insn=0x000000000037DBB0 string=0x000000000037DBB4 "h"
 *   insn=0x000000000037DBB8 string=0x000000000037DBBC "@"
 *   insn=0x000000000037DBC0 string=0x000000000037DBC4 "h"
 *   insn=0x000000000037DBC8 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000037DBE8 string=0x000000000037DBEC "4"
 *   insn=0x000000000037DBF0 string=0x000000000037DBF4 ""
 *   insn=0x000000000037DC00 string=0x000000000037DC04 "\t@"
 *   insn=0x000000000037DC10 string=0x000000000037DC14 ""
 *   insn=0x000000000037DC20 string=0x000000000037DC24 "@"
 *   insn=0x000000000037DC30 string=0x000000000037DC34 "$"
 *   insn=0x000000000037DC4C string=0x000000000037DC50 "L"
 *   insn=0x000000000037DC50 string=0x000000000037DC54 ""
 *   insn=0x000000000037DC50 string=0x00000000001F7980 "0'"
 *   insn=0x000000000037DC54 string=0x000000000037DC58 "h"
 *   insn=0x000000000037DC58 string=0x000000000037DC5C ""
 *   insn=0x000000000037DC5C string=0x000000000037DC60 "h"
 *   insn=0x000000000037DC64 string=0x000000000037DC68 "\t"
 *   insn=0x000000000037DC68 string=0x000000000037DC6C ")"
 *   insn=0x000000000037DC6C string=0x000000000037DC70 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::AchievementsManager::Update(Caver::AchievementsManager *this, float a2)
{
  Caver::AchievementsManager *v2; // x19
  Caver::AchievementNotificationView **v4; // x22
  __int64 v5; // x8
  __int64 v6; // x8
  float v7; // s0
  _QWORD *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x8
  _QWORD *v11; // x9
  _QWORD *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x8
  _QWORD *v15; // x20
  __int64 v16; // x8
  __int64 v17; // x8
  __int64 *v18; // x9
  __int64 v19; // x8
  __int64 v20; // x0
  Caver::AchievementNotificationView *v21; // x0
  _QWORD *v22; // x20
  __int64 v23; // x8
  __int64 v24; // x8
  Caver::GUIView *v25; // x1
  __int64 v26; // x8
  __int64 v27; // x8
  _QWORD *v28; // [xsp+30h] [xbp-50h]
  __int64 v29; // [xsp+38h] [xbp-48h]
  __int64 v30; // [xsp+40h] [xbp-40h]

  v2 = this;
  v4 = (Caver::AchievementNotificationView **)((char *)this + 296);
  _ReadStatusReg(TPIDR_EL0);
  v5 = *((_QWORD *)this + 37);
  if ( v5 )
  {
    if ( !*(_QWORD *)(v5 + 88) )
    {
      v8 = (_QWORD *)*((_QWORD *)this + 38);
      *v4 = 0;
      *((_QWORD *)this + 38) = 0;
      if ( v8 )
      {
        v9 = v8[1] - 1LL;
        v8[1] = v9;
        if ( !v9 )
        {
          this = (Caver::AchievementsManager *)(*(__int64 (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
          v10 = v8[2] - 1LL;
          v8[2] = v10;
          if ( !v10 )
            this = (Caver::AchievementsManager *)(*(__int64 (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
        }
      }
    }
  }
  v6 = *((_QWORD *)v2 + 29);
  if ( *((_QWORD *)v2 + 33) != v6 )
  {
    v7 = *((float *)v2 + 78);
    if ( v7 <= 0.0 )
    {
      if ( !*v4 )
      {
        v11 = *(_QWORD **)(v6 + 8);
        v28 = v11;
        if ( v11 )
          ++v11[1];
        if ( v6 == *((_QWORD *)v2 + 31) - 16LL )
        {
          v15 = *(_QWORD **)(v6 + 8);
          if ( v15 )
          {
            v16 = v15[1] - 1LL;
            v15[1] = v16;
            if ( !v16 )
            {
              (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
              v17 = v15[2] - 1LL;
              v15[2] = v17;
              if ( !v17 )
                (*(void (__fastcall **)(_QWORD *))(*v15 + 24LL))(v15);
            }
          }
          operator delete(*((void **)v2 + 30));
          v18 = (__int64 *)(*((_QWORD *)v2 + 32) + 8LL);
          *((_QWORD *)v2 + 32) = v18;
          v19 = *v18;
          *((_QWORD *)v2 + 29) = *v18;
          *((_QWORD *)v2 + 30) = v19;
          *((_QWORD *)v2 + 31) = v19 + 512;
        }
        else
        {
          v12 = *(_QWORD **)(v6 + 8);
          if ( v12 )
          {
            v13 = v12[1] - 1LL;
            v12[1] = v13;
            if ( !v13 )
            {
              this = (Caver::AchievementsManager *)(*(__int64 (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
              v14 = v12[2] - 1LL;
              v12[2] = v14;
              if ( !v14 )
                this = (Caver::AchievementsManager *)(*(__int64 (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
            }
          }
          *((_QWORD *)v2 + 29) += 16LL;
        }
        v20 = Caver::OnlineController::SharedController(this);
        if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 24LL))(v20) & 1) != 0 )
        {
          v21 = (Caver::AchievementNotificationView *)operator new(0x180u);
          Caver::AchievementNotificationView::AchievementNotificationView(v21);
          boost::shared_ptr<Caver::AchievementNotificationView>::shared_ptr<Caver::AchievementNotificationView>();
          v22 = (_QWORD *)*((_QWORD *)v2 + 38);
          *((_QWORD *)v2 + 37) = v29;
          *((_QWORD *)v2 + 38) = v30;
          if ( v22 )
          {
            v23 = v22[1] - 1LL;
            v22[1] = v23;
            if ( !v23 )
            {
              (*(void (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
              v24 = v22[2] - 1LL;
              v22[2] = v24;
              if ( !v24 )
                (*(void (__fastcall **)(_QWORD *))(*v22 + 24LL))(v22);
            }
          }
          Caver::AchievementNotificationView::SetAchievement();
          v25 = (Caver::GUIView *)*((_QWORD *)v2 + 25);
          if ( v25 )
            Caver::AchievementNotificationView::PresentInView(*v4, v25);
        }
        if ( v28 )
        {
          v26 = v28[1] - 1LL;
          v28[1] = v26;
          if ( !v26 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28);
            v27 = v28[2] - 1LL;
            v28[2] = v27;
            if ( !v27 )
              (*(void (__fastcall **)(_QWORD *))(*v28 + 24LL))(v28);
          }
        }
      }
    }
    else
    {
      *((float *)v2 + 78) = v7 - a2;
    }
  }
}

