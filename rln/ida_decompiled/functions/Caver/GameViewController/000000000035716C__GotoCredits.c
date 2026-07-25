/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000035716C
 * Mangled: _ZN5Caver18GameViewController11GotoCreditsEv
 * Demangled: Caver::GameViewController::GotoCredits(void)
 *
 * Callers: 1
 *   0x00000000002004D0  Caver::GameViewController::GotoCredits(void)
 *
 * Callees: 26
 *   0x00000000001F40B0  Caver::GUIViewController::GUIViewController(void)
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F4CC0  Caver::MusicPlayer::FadeOut(float)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6D40  boost::shared_ptr<Caver::MainMenuViewController>::shared_ptr<Caver::MainMenuViewController>(Caver::MainMenuViewController *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7760  Caver::GameViewController::SaveGameState(bool)
 *   0x00000000001F78D0  Caver::ProfileManager::RemoveDelegate(Caver::IProfileManagerDelegate *)
 *   0x00000000001F8B10  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::CreditsViewController,Caver::CreditsViewController>(boost::shared_ptr<Caver::CreditsViewController> const*,Caver::CreditsViewController *)
 *   0x00000000001F8F50  Caver::GameViewController::GameMenuViewControllerDidQuitToMenu(Caver::GameMenuViewController *)
 *   0x00000000001F93B0  Caver::OnlineController::SharedController(void)
 *   0x00000000001FA960  boost::shared_ptr<Caver::CreditsViewController>::shared_ptr<Caver::CreditsViewController>(Caver::CreditsViewController *)
 *   0x00000000001FAC50  Caver::MainMenuViewController::MainMenuViewController(void)
 *   0x00000000001FAE50  Caver::ProfileManager::sharedManager(void)
 *   0x00000000001FBC40  .memset
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FDED0  Caver::GameEvent::SetEventsEnabled(bool)
 *   0x00000000001FDF30  Caver::AudioSystem::sharedSystem(void)
 *   0x00000000001FFE50  Caver::GameState::PercentCompleted(void)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 167
 *   insn=0x000000000035717C string=0x0000000000357180 "U"
 *   insn=0x0000000000357194 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003571A4 string=0x00000000001FBC40 "0'"
 *   insn=0x00000000003571AC string=0x00000000003571B0 "h"
 *   insn=0x00000000003571AC string=0x00000000001F40B0 "P'"
 *   insn=0x00000000003571B0 string=0x00000000003571B4 "uE"
 *   insn=0x00000000003571C0 string=0x00000000003571C4 "A"
 *   insn=0x00000000003571CC string=0x00000000001FA960 "0'"
 *   insn=0x00000000003571D8 string=0x00000000003571DC "\t"
 *   insn=0x00000000003571DC string=0x00000000003571E0 ")"
 *   insn=0x00000000003571E0 string=0x00000000003571E4 "\t"
 *   insn=0x00000000003571E8 string=0x00000000003571EC "9"
 *   insn=0x00000000003571EC string=0x00000000003571F0 "`"@"
 *   insn=0x00000000003571EC string=0x00000000001FDED0 "0'"
 *   insn=0x00000000003571F0 string=0x00000000003571F4 ""
 *   insn=0x00000000003571F4 string=0x00000000003571F8 ""
 *   insn=0x00000000003571F8 string=0x00000000003571FC "i"
 *   insn=0x00000000003571FC string=0x0000000000357200 " "
 *   insn=0x0000000000357214 string=0x0000000000357218 "3"
 *   insn=0x0000000000357218 string=0x000000000035721C "h"
 *   insn=0x000000000035721C string=0x0000000000357220 ""
 *   insn=0x0000000000357220 string=0x0000000000357224 "h"
 *   insn=0x0000000000357228 string=0x000000000035722C "h"
 *   insn=0x000000000035722C string=0x0000000000357230 "\t@"
 *   insn=0x0000000000357238 string=0x000000000035723C "h\n@"
 *   insn=0x000000000035723C string=0x0000000000357240 ""
 *   insn=0x0000000000357240 string=0x0000000000357244 "h\n"
 *   insn=0x0000000000357248 string=0x000000000035724C "h"
 *   insn=0x000000000035724C string=0x0000000000357250 "@"
 *   insn=0x000000000035725C string=0x0000000000357260 "3"
 *   insn=0x0000000000357260 string=0x0000000000357264 "h"
 *   insn=0x0000000000357264 string=0x0000000000357268 ""
 *   insn=0x0000000000357268 string=0x000000000035726C "h"
 *   insn=0x0000000000357270 string=0x0000000000357274 "h"
 *   insn=0x0000000000357278 string=0x000000000035727C "\t@"
 *   insn=0x0000000000357280 string=0x0000000000357284 "h\n@"
 *   insn=0x0000000000357284 string=0x0000000000357288 ""
 *   insn=0x0000000000357288 string=0x000000000035728C "h\n"
 *   insn=0x0000000000357290 string=0x0000000000357294 "h"
 *   insn=0x0000000000357298 string=0x000000000035729C "@"
 *   insn=0x00000000003572C8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003572D4 string=0x00000000003572D8 "+"
 *   insn=0x00000000003572E4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003572E8 string=0x00000000003572EC "v"
 *   insn=0x00000000003572F4 string=0x00000000003572F8 "4"
 *   insn=0x00000000003572FC string=0x0000000000357300 ""
 *   insn=0x000000000035730C string=0x0000000000357310 "\t@"
 *   insn=0x000000000035731C string=0x0000000000357320 ""
 *   insn=0x000000000035732C string=0x0000000000357330 "@"
 *   insn=0x000000000035733C string=0x0000000000357340 "4"
 *   insn=0x0000000000357344 string=0x0000000000357348 ""
 *   insn=0x0000000000357354 string=0x0000000000357358 "\t@"
 *   insn=0x0000000000357364 string=0x0000000000357368 ""
 *   insn=0x0000000000357374 string=0x0000000000357378 "@"
 *   insn=0x0000000000357384 string=0x0000000000357388 "O"
 *   insn=0x00000000003573AC string=0x00000000003573B0 "i"
 *   insn=0x00000000003573B0 string=0x00000000003573B4 ")"
 *   insn=0x00000000003573C0 string=0x00000000003573C4 "(A"
 *   insn=0x00000000003573C8 string=0x00000000003573CC ""
 *   insn=0x00000000003573D4 string=0x00000000003573D8 "`""
 *   insn=0x00000000003573E4 string=0x00000000001F8B10 "0'"
 *   insn=0x00000000003573F8 string=0x00000000003573FC "4"
 *   insn=0x0000000000357400 string=0x0000000000357404 ""
 *   insn=0x0000000000357410 string=0x0000000000357414 "\t@"
 *   insn=0x0000000000357420 string=0x0000000000357424 ""
 *   insn=0x0000000000357430 string=0x0000000000357434 "@"
 *   insn=0x0000000000357440 string=0x0000000000357444 " "
 *   insn=0x0000000000357448 string=0x000000000035744C "et"
 *   insn=0x000000000035744C string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000357450 string=0x0000000000357454 "h"
 *   insn=0x0000000000357454 string=0x0000000000357458 ""
 *   insn=0x0000000000357468 string=0x000000000035746C "I"
 *   insn=0x000000000035746C string=0x00000000001FD590 "0'"
 *   insn=0x0000000000357488 string=0x000000000035748C "U"
 *   insn=0x0000000000357498 string=0x000000000035749C "m"
 *   insn=0x000000000035749C string=0x00000000003574A0 "a"
 *   insn=0x000000000035749C string=0x00000000001FAE50 "0'"
 *   insn=0x00000000003574A0 string=0x00000000003574A4 ""
 *   insn=0x00000000003574A4 string=0x00000000001F78D0 "0'"
 *   insn=0x00000000003574B0 string=0x00000000001F7760 "0'"
 *   insn=0x00000000003574B4 string=0x00000000001FDF30 "0'"
 *   insn=0x00000000003574C0 string=0x00000000003574C4 "`V@"
 *   insn=0x00000000003574C0 string=0x00000000001F4CC0 "P'"
 *   insn=0x00000000003574C4 string=0x00000000003574C8 "@"
 *   insn=0x00000000003574C8 string=0x00000000003574CC "a"
 *   insn=0x00000000003574DC string=0x00000000001F93B0 "0'"
 *   insn=0x00000000003574EC string=0x000000000058EEB3 "quit_to_menu"
 *   insn=0x00000000003574FC string=0x0000000000357500 "h"
 *   insn=0x0000000000357518 string=0x000000000035751C "i"
 *   insn=0x000000000035751C string=0x0000000000357520 ")"
 *   insn=0x000000000035752C string=0x0000000000357644 "i"
 *   insn=0x0000000000357530 string=0x0000000000357534 "+x"
 *   insn=0x000000000035753C string=0x00000000001FAC50 "0'"
 *   insn=0x0000000000357548 string=0x00000000001F6D40 "0'"
 *   insn=0x0000000000357554 string=0x0000000000357558 "\t"
 *   insn=0x0000000000357558 string=0x000000000035755C ")"
 *   insn=0x000000000035755C string=0x0000000000357560 "\t"
 *   insn=0x0000000000357564 string=0x0000000000357568 "Z"
 *   insn=0x0000000000357568 string=0x000000000035756C "`"@"
 *   insn=0x000000000035756C string=0x0000000000357570 ""
 *   insn=0x0000000000357570 string=0x0000000000357574 ""
 *   insn=0x0000000000357574 string=0x0000000000357578 "i"
 *   insn=0x0000000000357578 string=0x000000000035757C " "
 *   insn=0x0000000000357590 string=0x0000000000357594 "3"
 *   insn=0x0000000000357594 string=0x0000000000357598 "h"
 *   insn=0x0000000000357598 string=0x000000000035759C ""
 *   insn=0x000000000035759C string=0x00000000003575A0 "h"
 *   insn=0x00000000003575A4 string=0x00000000003575A8 "h"
 *   insn=0x00000000003575A8 string=0x00000000003575AC "\t@"
 *   insn=0x00000000003575B4 string=0x00000000003575B8 "h\n@"
 *   insn=0x00000000003575B8 string=0x00000000003575BC ""
 *   insn=0x00000000003575BC string=0x00000000003575C0 "h\n"
 *   insn=0x00000000003575C4 string=0x00000000003575C8 "h"
 *   insn=0x00000000003575C8 string=0x00000000003575CC "@"
 *   insn=0x00000000003575D8 string=0x00000000003575DC "3"
 *   insn=0x00000000003575DC string=0x00000000003575E0 "h"
 *   insn=0x00000000003575E0 string=0x00000000003575E4 ""
 *   insn=0x00000000003575E4 string=0x00000000003575E8 "h"
 *   insn=0x00000000003575EC string=0x00000000003575F0 "h"
 *   insn=0x00000000003575F4 string=0x00000000003575F8 "\t@"
 *   insn=0x00000000003575FC string=0x0000000000357600 "h\n@"
 *   insn=0x0000000000357600 string=0x0000000000357604 ""
 *   insn=0x0000000000357604 string=0x0000000000357608 "h\n"
 *   insn=0x000000000035760C string=0x0000000000357610 "h"
 *   insn=0x0000000000357614 string=0x0000000000357618 "@"
 *   insn=0x0000000000357644 string=0x0000000000357648 ")=G"
 *   insn=0x0000000000357648 string=0x000000000035764C "!"
 *   insn=0x0000000000357650 string=0x0000000000357654 "\t"
 *   insn=0x0000000000357650 string=0x0000000000357668 "\t"
 *   insn=0x0000000000357654 string=0x0000000000357658 "*"
 *   insn=0x0000000000357658 string=0x000000000035765C "\n"
 *   insn=0x0000000000357664 string=0x0000000000357674 "?"
 *   insn=0x0000000000357668 string=0x000000000035766C "*"
 *   insn=0x000000000035766C string=0x0000000000357670 "\n"
 *   insn=0x000000000035767C string=0x0000000000357680 "IK"
 *   insn=0x000000000035768C string=0x0000000000357690 "j"
 *   insn=0x0000000000357690 string=0x0000000000357694 "J"
 *   insn=0x0000000000357698 string=0x000000000035769C "(a"
 *   insn=0x00000000003576A4 string=0x00000000003576A8 "j"
 *   insn=0x00000000003576A8 string=0x00000000003576AC "J=G"
 *   insn=0x00000000003576AC string=0x00000000003576B0 ")!"
 *   insn=0x00000000003576B4 string=0x00000000003576B8 "*"
 *   insn=0x00000000003576B4 string=0x00000000003576E4 "*"
 *   insn=0x00000000003576B8 string=0x00000000003576BC "K"
 *   insn=0x00000000003576BC string=0x00000000003576C0 "+"
 *   insn=0x00000000003576C4 string=0x00000000003576C8 "_"
 *   insn=0x00000000003576C8 string=0x00000000003576CC "l"
 *   insn=0x00000000003576D4 string=0x00000000003576D8 "3K"
 *   insn=0x00000000003576DC string=0x00000000003576E0 "y"
 *   insn=0x00000000003576E4 string=0x00000000003576E8 "K"
 *   insn=0x00000000003576E8 string=0x00000000003576EC "+"
 *   insn=0x00000000003576EC string=0x00000000003576F0 "_"
 *   insn=0x00000000003576F4 string=0x00000000003576F8 "0"
 *   insn=0x0000000000357708 string=0x000000000035770C "+"
 *   insn=0x000000000035771C string=0x0000000000357720 "i"
 *   insn=0x0000000000357728 string=0x000000000035772C "4"
 *   insn=0x0000000000357730 string=0x0000000000357734 ""
 *   insn=0x0000000000357740 string=0x0000000000357744 "\t@"
 *   insn=0x0000000000357750 string=0x0000000000357754 ""
 *   insn=0x0000000000357760 string=0x0000000000357764 "@"
 *   insn=0x0000000000357770 string=0x0000000000357774 "4"
 *   insn=0x0000000000357778 string=0x000000000035777C ""
 *   insn=0x0000000000357788 string=0x000000000035778C "\t@"
 *   insn=0x0000000000357798 string=0x000000000035779C ""
 *   insn=0x00000000003577A8 string=0x00000000003577AC "@"
 *   insn=0x00000000003577B8 string=0x00000000003577BC "B"
 *   insn=0x00000000003577C8 string=0x00000000001F8F50 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameViewController::GotoCredits(Caver::GameViewController *this)
{
  _QWORD *v2; // x20
  bool v3; // w1
  long double v4; // q0
  __int64 result; // x0
  _QWORD *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x8
  _QWORD *v9; // x19
  __int64 v10; // x8
  __int64 v11; // x8
  __int64 v12; // [xsp+68h] [xbp-48h] BYREF
  _QWORD *v13; // [xsp+70h] [xbp-40h]
  __int64 v14; // [xsp+78h] [xbp-38h]
  _QWORD *v15; // [xsp+80h] [xbp-30h]
  __int64 v16; // [xsp+88h] [xbp-28h]

  v16 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (_QWORD *)operator new(0x58u);
  memset(v2, 0, 0x58u);
  Caver::GUIViewController::GUIViewController((Caver::GUIViewController *)v2);
  v2[9] = 0;
  v2[10] = 0;
  *v2 = off_6CDC70;
  boost::shared_ptr<Caver::CreditsViewController>::shared_ptr<Caver::CreditsViewController>();
  v12 = v14;
  v13 = v15;
  if ( v15 )
    ++v15[1];
  Caver::GameEvent::SetEventsEnabled(0, v3);
  LODWORD(v4) = 1053609165;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _QWORD, float, long double))(**((_QWORD **)this + 8) + 8LL))(
             *((_QWORD *)this + 8),
             &v12,
             0,
             0.4,
             v4);
  v6 = v13;
  if ( v13 )
  {
    v7 = v13[1] - 1LL;
    v13[1] = v7;
    if ( !v7 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      v8 = v6[2] - 1LL;
      v6[2] = v8;
      if ( !v8 )
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
    }
  }
  v9 = v15;
  if ( v15 )
  {
    v10 = v15[1] - 1LL;
    v15[1] = v10;
    if ( !v10 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
      v11 = v9[2] - 1LL;
      v9[2] = v11;
      if ( !v11 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
    }
  }
  return result;
}

