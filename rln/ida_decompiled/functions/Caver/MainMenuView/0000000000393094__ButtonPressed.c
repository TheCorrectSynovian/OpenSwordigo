/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000393094
 * Mangled: _ZN5Caver12MainMenuView13ButtonPressedEPvPNS_8GUIEventE
 * Demangled: Caver::MainMenuView::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callers: 1
 *   0x000000000038DF1C  Caver::MainMenuView::MainMenuView(void)
 *
 * Callees: 19
 *   0x00000000001F3C90  Caver::Rectangle::RectangleByOutsetting(float)
 *   0x00000000001F5CB0  Caver::GUIView::safeBounds(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8BD0  Caver::AchievementsManager::ReportAllAchievements(void)
 *   0x00000000001F8D90  Caver::GameOptions::ApplyAudioOptions(void)
 *   0x00000000001F93B0  Caver::OnlineController::SharedController(void)
 *   0x00000000001F94B0  Caver::GUIView::LayoutSubviews(void)
 *   0x00000000001FA700  Caver::MainMenuView::SetOnlineMenuVisible(bool)
 *   0x00000000001FAD50  Caver::MainMenuView::AnimateButtonsIn(float)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FC750  Caver::GUIButton::SetImage(boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000001FD2D0  Caver::AchievementsManager::sharedManager(void)
 *   0x00000000001FD940  Caver::GameOptions::sharedOptions(void)
 *   0x00000000001FDA30  Caver::Vector2::Rounded(void)
 *   0x0000000000202DF0  Caver::GameOptions::SaveToFile(void)
 *   0x00000000002039B0  Caver::GUILabel::TextSize(void)
 *   0x0000000000203AF0  Caver::MainMenuView::UpdateAudioControls(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 344
 *   insn=0x00000000003930A0 string=0x00000000003930A4 "T"
 *   insn=0x00000000003930B0 string=0x00000000003930B4 "h"
 *   insn=0x00000000003930BC string=0x00000000003930C0 "h"
 *   insn=0x00000000003930BC string=0x0000000000393174 "`z@"
 *   insn=0x00000000003930C8 string=0x00000000003930CC "h"
 *   insn=0x00000000003930D4 string=0x00000000003930D8 "h"
 *   insn=0x00000000003930E0 string=0x00000000003930E4 "h"
 *   insn=0x00000000003930E0 string=0x00000000003931D4 "`z@"
 *   insn=0x00000000003930EC string=0x00000000003930F0 "h"
 *   insn=0x00000000003930EC string=0x00000000003931E8 "`z@"
 *   insn=0x00000000003930F4 string=0x00000000003930F8 " "
 *   insn=0x00000000003930F8 string=0x00000000003930FC "h&A"
 *   insn=0x00000000003930F8 string=0x00000000003931FC "`z@"
 *   insn=0x0000000000393104 string=0x0000000000393108 "h.A"
 *   insn=0x0000000000393104 string=0x0000000000393234 "_"
 *   insn=0x0000000000393110 string=0x0000000000393114 "h"
 *   insn=0x0000000000393110 string=0x0000000000393248 "Z"
 *   insn=0x000000000039311C string=0x0000000000393120 "h"
 *   insn=0x0000000000393124 string=0x0000000000393128 "`"
 *   insn=0x0000000000393128 string=0x000000000039312C "h"
 *   insn=0x000000000039312C string=0x0000000000393130 ""
 *   insn=0x0000000000393138 string=0x000000000039313C "h"
 *   insn=0x0000000000393144 string=0x0000000000393148 "h"
 *   insn=0x0000000000393150 string=0x0000000000393154 "h6A"
 *   insn=0x0000000000393160 string=0x0000000000393164 ""
 *   insn=0x0000000000393160 string=0x00000000001F93B0 "0'"
 *   insn=0x0000000000393164 string=0x0000000000393168 ""
 *   insn=0x000000000039316C string=0x0000000000393170 ")"
 *   insn=0x0000000000393178 string=0x000000000039317C ""
 *   insn=0x000000000039317C string=0x0000000000393180 ""
 *   insn=0x0000000000393180 string=0x0000000000393184 """
 *   insn=0x0000000000393188 string=0x000000000039318C ""
 *   insn=0x000000000039318C string=0x0000000000393190 "\t@"
 *   insn=0x0000000000393194 string=0x0000000000393198 "`"
 *   insn=0x0000000000393198 string=0x000000000039319C "`z@"
 *   insn=0x00000000003931A0 string=0x00000000003931A4 ""
 *   insn=0x00000000003931A4 string=0x00000000003931A8 "@"
 *   insn=0x00000000003931B0 string=0x00000000003931B4 ""
 *   insn=0x00000000003931B4 string=0x00000000003931B8 "e@"
 *   insn=0x00000000003931C8 string=0x00000000003931CC "M"
 *   insn=0x00000000003931CC string=0x00000000001FA700 "0'"
 *   insn=0x00000000003931D8 string=0x00000000003931DC ""
 *   insn=0x00000000003931DC string=0x00000000003931E0 ""
 *   insn=0x00000000003931E0 string=0x00000000003931E4 "\n"
 *   insn=0x00000000003931E8 string=0x00000000003931EC "@"
 *   insn=0x00000000003931EC string=0x00000000003931F0 ""
 *   insn=0x00000000003931F0 string=0x00000000003931F4 "\t@"
 *   insn=0x0000000000393200 string=0x0000000000393204 ""
 *   insn=0x0000000000393204 string=0x0000000000393208 ""
 *   insn=0x000000000039321C string=0x0000000000393220 "!"
 *   insn=0x0000000000393234 string=0x0000000000393238 ""
 *   insn=0x0000000000393238 string=0x000000000039323C ""
 *   insn=0x0000000000393248 string=0x000000000039324C ""
 *   insn=0x000000000039324C string=0x0000000000393250 "!@"
 *   insn=0x0000000000393260 string=0x00000000001FD940 "0'"
 *   insn=0x0000000000393264 string=0x0000000000393268 ""
 *   insn=0x0000000000393268 string=0x000000000039326C "\t"
 *   insn=0x000000000039326C string=0x0000000000393270 "\t"
 *   insn=0x0000000000393270 string=0x0000000000393274 "H"
 *   insn=0x0000000000393290 string=0x0000000000393294 "$"
 *   insn=0x0000000000393294 string=0x0000000000393298 "\t"
 *   insn=0x00000000003932A4 string=0x00000000001F8D90 "0'"
 *   insn=0x00000000003932BC string=0x00000000003932C0 ""
 *   insn=0x00000000003932C0 string=0x00000000003932C4 "\t"
 *   insn=0x00000000003932C4 string=0x00000000003932C8 "\t"
 *   insn=0x00000000003932C8 string=0x00000000003932CC "H"
 *   insn=0x00000000003932E8 string=0x00000000003932EC "("
 *   insn=0x00000000003932EC string=0x00000000003932F0 "\t"
 *   insn=0x0000000000393308 string=0x000000000039330C "S"
 *   insn=0x000000000039330C string=0x0000000000393310 "h"
 *   insn=0x0000000000393310 string=0x0000000000393314 ""
 *   insn=0x0000000000393314 string=0x0000000000393318 "h"
 *   insn=0x000000000039331C string=0x0000000000393320 "h"
 *   insn=0x0000000000393324 string=0x0000000000393328 "\t@"
 *   insn=0x000000000039332C string=0x0000000000393330 "h\n@"
 *   insn=0x0000000000393330 string=0x0000000000393334 ""
 *   insn=0x0000000000393334 string=0x0000000000393338 "h\n"
 *   insn=0x000000000039333C string=0x0000000000393340 "h"
 *   insn=0x0000000000393344 string=0x0000000000393348 "@"
 *   insn=0x0000000000393364 string=0x00000000001FD2D0 "0'"
 *   insn=0x0000000000393368 string=0x00000000001F8BD0 "0'"
 *   insn=0x0000000000393370 string=0x0000000000393374 ""
 *   insn=0x0000000000393374 string=0x0000000000393378 "i@"
 *   insn=0x0000000000393384 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000393394 string=0x0000000000393398 ""
 *   insn=0x000000000039339C string=0x00000000003933A0 "!"
 *   insn=0x00000000003933A4 string=0x00000000003933A8 "\t@"
 *   insn=0x00000000003933B4 string=0x00000000003933B8 ""
 *   insn=0x00000000003933BC string=0x00000000003933C0 "!"
 *   insn=0x00000000003933C4 string=0x00000000003933C8 "@"
 *   insn=0x00000000003933DC string=0x00000000003933E0 "4"
 *   insn=0x00000000003933E4 string=0x00000000003933E8 ""
 *   insn=0x00000000003933F4 string=0x00000000003933F8 "\t@"
 *   insn=0x0000000000393404 string=0x0000000000393408 ""
 *   insn=0x0000000000393414 string=0x0000000000393418 "@"
 *   insn=0x0000000000393424 string=0x0000000000393428 "'"
 *   insn=0x000000000039343C string=0x0000000000393440 "T"
 *   insn=0x0000000000393450 string=0x0000000000393454 ";"
 *   insn=0x0000000000393458 string=0x000000000039345C "`"
 *   insn=0x000000000039345C string=0x0000000000393460 ""
 *   insn=0x0000000000393464 string=0x0000000000393468 "ab"
 *   insn=0x0000000000393464 string=0x0000000000393474 "a"
 *   insn=0x000000000039346C string=0x00000000001FC750 "0'"
 *   insn=0x000000000039347C string=0x0000000000393480 "`"
 *   insn=0x0000000000393480 string=0x0000000000393484 ""
 *   insn=0x0000000000393488 string=0x000000000039348C "a"
 *   insn=0x0000000000393488 string=0x00000000003934FC "a"
 *   insn=0x0000000000393494 string=0x0000000000393498 "3"
 *   insn=0x0000000000393498 string=0x000000000039349C "h"
 *   insn=0x000000000039349C string=0x00000000003934A0 ""
 *   insn=0x00000000003934A0 string=0x00000000003934A4 "h"
 *   insn=0x00000000003934A8 string=0x00000000003934AC "h"
 *   insn=0x00000000003934B0 string=0x00000000003934B4 "\t@"
 *   insn=0x00000000003934B8 string=0x00000000003934BC "h\n@"
 *   insn=0x00000000003934BC string=0x00000000003934C0 ""
 *   insn=0x00000000003934C0 string=0x00000000003934C4 "h\n"
 *   insn=0x00000000003934C8 string=0x00000000003934CC "h"
 *   insn=0x00000000003934D0 string=0x00000000003934D4 "@"
 *   insn=0x00000000003934E8 string=0x0000000000393508 "r"
 *   insn=0x0000000000393510 string=0x0000000000393514 "4"
 *   insn=0x0000000000393518 string=0x000000000039351C ""
 *   insn=0x0000000000393528 string=0x000000000039352C "\t@"
 *   insn=0x0000000000393538 string=0x000000000039353C ""
 *   insn=0x0000000000393548 string=0x000000000039354C "@"
 *   insn=0x000000000039355C string=0x0000000000393560 "{"
 *   insn=0x0000000000393584 string=0x0000000000393588 "U"
 *   insn=0x0000000000393598 string=0x00000000001F94B0 "0'"
 *   insn=0x00000000003935A4 string=0x00000000003935A8 "`"
 *   insn=0x00000000003935A4 string=0x00000000001F5CB0 "P'"
 *   insn=0x00000000003935AC string=0x00000000003935B0 "\nP$"
 *   insn=0x00000000003935B0 string=0x00000000003935B4 "t~@"
 *   insn=0x00000000003935B4 string=0x00000000003935B8 """"
 *   insn=0x00000000003935B8 string=0x00000000003935BC "B"
 *   insn=0x00000000003935BC string=0x00000000003935C0 "\t"
 *   insn=0x00000000003935C4 string=0x00000000003935C8 "B)"
 *   insn=0x00000000003935C8 string=0x00000000003935CC "H  "
 *   insn=0x00000000003935CC string=0x00000000003935D0 "a"
 *   insn=0x00000000003935D0 string=0x00000000003935D4 "m"
 *   insn=0x00000000003935E4 string=0x00000000003935E8 "B#"
 *   insn=0x00000000003935E8 string=0x00000000003935EC "@"
 *   insn=0x00000000003935EC string=0x00000000003935F0 "  "
 *   insn=0x00000000003935F8 string=0x00000000001F3C90 "P'"
 *   insn=0x0000000000393604 string=0x0000000000393608 "t"
 *   insn=0x0000000000393604 string=0x00000000001FB170 "0'"
 *   insn=0x0000000000393608 string=0x000000000039360C "`"
 *   insn=0x000000000039360C string=0x0000000000393610 "a"
 *   insn=0x0000000000393620 string=0x0000000000393624 "A(#"
 *   insn=0x000000000039362C string=0x0000000000393630 "X!"
 *   insn=0x0000000000393640 string=0x0000000000393644 "\t@"
 *   insn=0x000000000039364C string=0x0000000000393650 ""
 *   insn=0x000000000039364C string=0x0000000000393680 ""
 *   insn=0x0000000000393650 string=0x0000000000393654 ""
 *   insn=0x0000000000393658 string=0x000000000039365C "h"
 *   insn=0x000000000039365C string=0x0000000000393660 ""
 *   insn=0x0000000000393660 string=0x0000000000393664 ""
 *   insn=0x000000000039366C string=0x0000000000393670 ") "
 *   insn=0x0000000000393678 string=0x000000000039367C "6"
 *   insn=0x000000000039368C string=0x0000000000393690 ") "
 *   insn=0x0000000000393690 string=0x0000000000393694 "H"
 *   insn=0x0000000000393698 string=0x000000000039369C "@"
 *   insn=0x000000000039369C string=0x00000000003936A0 "@"
 *   insn=0x000000000039369C string=0x00000000003936C4 ""
 *   insn=0x00000000003936A4 string=0x00000000003936A8 "("
 *   insn=0x00000000003936A8 string=0x00000000003936AC ""
 *   insn=0x00000000003936AC string=0x00000000003936B0 ""
 *   insn=0x00000000003936E4 string=0x00000000003936E8 "t"
 *   insn=0x00000000003936EC string=0x00000000003936F0 "H"
 *   insn=0x00000000003936F8 string=0x00000000003936FC "\t@"
 *   insn=0x0000000000393700 string=0x0000000000393704 "i"
 *   insn=0x0000000000393704 string=0x0000000000393708 ""
 *   insn=0x0000000000393708 string=0x000000000039370C ""
 *   insn=0x0000000000393710 string=0x0000000000393714 "h"
 *   insn=0x0000000000393720 string=0x0000000000393724 ""
 *   insn=0x0000000000393724 string=0x0000000000393728 ") "
 *   insn=0x000000000039373C string=0x0000000000393740 ") "
 *   insn=0x0000000000393748 string=0x000000000039374C "6"
 *   insn=0x0000000000393758 string=0x000000000039375C ") "
 *   insn=0x0000000000393764 string=0x0000000000393768 "@"
 *   insn=0x0000000000393764 string=0x0000000000393784 ""
 *   insn=0x0000000000393770 string=0x0000000000393774 ""
 *   insn=0x0000000000393774 string=0x0000000000393778 ""
 *   insn=0x00000000003937A0 string=0x00000000003937A4 "s"
 *   insn=0x00000000003937A4 string=0x00000000003937A8 "t"
 *   insn=0x00000000003937AC string=0x00000000003937B0 "H"
 *   insn=0x00000000003937B8 string=0x00000000003937BC "\t@"
 *   insn=0x00000000003937C0 string=0x00000000003937C4 "i"
 *   insn=0x00000000003937C4 string=0x00000000003937C8 ""
 *   insn=0x00000000003937C8 string=0x00000000003937CC ""
 *   insn=0x00000000003937D0 string=0x00000000003937D4 "h"
 *   insn=0x00000000003937E0 string=0x00000000003937E4 ""
 *   insn=0x00000000003937E4 string=0x00000000003937E8 ") "
 *   insn=0x00000000003937FC string=0x0000000000393800 ") "
 *   insn=0x0000000000393808 string=0x000000000039380C "6"
 *   insn=0x0000000000393818 string=0x000000000039381C ") "
 *   insn=0x0000000000393824 string=0x0000000000393828 "@"
 *   insn=0x0000000000393824 string=0x0000000000393844 ""
 *   insn=0x0000000000393830 string=0x0000000000393834 ""
 *   insn=0x0000000000393834 string=0x0000000000393838 ""
 *   insn=0x0000000000393860 string=0x0000000000393864 "C"
 *   insn=0x0000000000393864 string=0x0000000000393868 "t"
 *   insn=0x000000000039386C string=0x0000000000393870 "H"
 *   insn=0x0000000000393878 string=0x000000000039387C "\t@"
 *   insn=0x0000000000393880 string=0x0000000000393884 "i"
 *   insn=0x0000000000393884 string=0x0000000000393888 ""
 *   insn=0x0000000000393888 string=0x000000000039388C ""
 *   insn=0x0000000000393890 string=0x0000000000393894 "h"
 *   insn=0x00000000003938A0 string=0x00000000003938A4 ""
 *   insn=0x00000000003938A4 string=0x00000000003938A8 ") "
 *   insn=0x00000000003938BC string=0x00000000003938C0 ") "
 *   insn=0x00000000003938C8 string=0x00000000003938CC "6"
 *   insn=0x00000000003938D8 string=0x00000000003938DC ") "
 *   insn=0x00000000003938E4 string=0x00000000003938E8 "@"
 *   insn=0x00000000003938E4 string=0x0000000000393904 ""
 *   insn=0x00000000003938F0 string=0x00000000003938F4 ""
 *   insn=0x00000000003938F4 string=0x00000000003938F8 ""
 *   insn=0x0000000000393924 string=0x0000000000393928 "h"
 *   insn=0x0000000000393928 string=0x000000000039392C ")"
 *   insn=0x000000000039392C string=0x0000000000393930 "*"
 *   insn=0x0000000000393930 string=0x0000000000393934 "_"
 *   insn=0x0000000000393938 string=0x000000000039393C "6"
 *   insn=0x0000000000393938 string=0x00000000003939EC ""
 *   insn=0x000000000039393C string=0x0000000000393940 ")"
 *   insn=0x0000000000393944 string=0x0000000000393948 ")("
 *   insn=0x0000000000393948 string=0x000000000039394C "7A"
 *   insn=0x000000000039394C string=0x0000000000393950 ""
 *   insn=0x0000000000393958 string=0x0000000000393968 "i"
 *   insn=0x0000000000393970 string=0x0000000000393974 " "
 *   insn=0x0000000000393974 string=0x0000000000393978 "!"
 *   insn=0x000000000039399C string=0x00000000003939A0 "h"
 *   insn=0x00000000003939AC string=0x00000000003939B0 "("
 *   insn=0x00000000003939B0 string=0x00000000003939B4 "I"
 *   insn=0x00000000003939BC string=0x00000000003939C0 "i-@"
 *   insn=0x00000000003939C0 string=0x00000000003939C4 ""
 *   insn=0x00000000003939C8 string=0x00000000003939CC "`) "
 *   insn=0x00000000003939D4 string=0x00000000003939D8 "(!"
 *   insn=0x00000000003939D8 string=0x00000000003939DC " "
 *   insn=0x00000000003939E4 string=0x000000000039395C "h"
 *   insn=0x00000000003939E8 string=0x00000000003939F0 "`"
 *   insn=0x00000000003939F8 string=0x00000000003939FC "@G"
 *   insn=0x00000000003939FC string=0x0000000000393A00 "\t|@"
 *   insn=0x0000000000393A10 string=0x0000000000393A14 "`"
 *   insn=0x0000000000393A14 string=0x0000000000393A18 "`"
 *   insn=0x0000000000393A18 string=0x0000000000393A1C "a"
 *   insn=0x0000000000393A1C string=0x0000000000393A20 ""
 *   insn=0x0000000000393A28 string=0x0000000000393A2C "A)"
 *   insn=0x0000000000393A30 string=0x0000000000393A34 "a(!"
 *   insn=0x0000000000393A34 string=0x0000000000393A38 "!(+"
 *   insn=0x0000000000393A3C string=0x0000000000393A40 "!8#"
 *   insn=0x0000000000393A44 string=0x0000000000393A48 "!@&"
 *   insn=0x0000000000393A54 string=0x0000000000393A58 "`"
 *   insn=0x0000000000393A58 string=0x0000000000393A5C "`"
 *   insn=0x0000000000393A5C string=0x0000000000393A60 "a"
 *   insn=0x0000000000393A60 string=0x0000000000393A64 "h"
 *   insn=0x0000000000393A88 string=0x0000000000393A8C "`"
 *   insn=0x0000000000393A98 string=0x0000000000393A9C ""
 *   insn=0x0000000000393AB8 string=0x0000000000393ABC "t"
 *   insn=0x0000000000393ABC string=0x0000000000393AC0 ""
 *   insn=0x0000000000393ACC string=0x0000000000393AD0 "p"
 *   insn=0x0000000000393AE4 string=0x0000000000393AE8 "`"
 *   insn=0x0000000000393AF0 string=0x0000000000393AF4 ""
 *   insn=0x0000000000393AF8 string=0x0000000000393AFC " ( "
 *   insn=0x0000000000393B08 string=0x0000000000393B0C "t"
 *   insn=0x0000000000393B18 string=0x0000000000393B1C "]"
 *   insn=0x0000000000393B34 string=0x0000000000393B38 "`"
 *   insn=0x0000000000393B38 string=0x0000000000393B3C "b"
 *   insn=0x0000000000393B3C string=0x0000000000393B40 "c"
 *   insn=0x0000000000393B48 string=0x0000000000393B4C "B)"
 *   insn=0x0000000000393B4C string=0x0000000000393B50 ""
 *   insn=0x0000000000393B50 string=0x0000000000393B54 "b(""
 *   insn=0x0000000000393B54 string=0x0000000000393B58 "A(!"
 *   insn=0x0000000000393B58 string=0x0000000000393B5C "!@&"
 *   insn=0x0000000000393B68 string=0x0000000000393B6C "`.A"
 *   insn=0x0000000000393B6C string=0x0000000000393B70 "h"
 *   insn=0x0000000000393B80 string=0x0000000000393B84 "\t|@"
 *   insn=0x0000000000393B8C string=0x0000000000393B90 "`"
 *   insn=0x0000000000393BA4 string=0x0000000000393BA8 "r"
 *   insn=0x0000000000393BA8 string=0x0000000000393BAC "h.A"
 *   insn=0x0000000000393BAC string=0x0000000000393BB0 "`&A"
 *   insn=0x0000000000393BBC string=0x0000000000393BC0 "\t"
 *   insn=0x0000000000393BC0 string=0x0000000000393BC4 "y@"
 *   insn=0x0000000000393BD8 string=0x0000000000393BDC "e"
 *   insn=0x0000000000393BE4 string=0x0000000000393BE8 "2"
 *   insn=0x0000000000393BE8 string=0x0000000000393BEC "`"
 *   insn=0x0000000000393BFC string=0x0000000000393C00 ""
 *   insn=0x0000000000393C08 string=0x0000000000393C0C "a(*"
 *   insn=0x0000000000393C1C string=0x0000000000393C20 "T"
 *   insn=0x0000000000393C20 string=0x0000000000393C24 "h6A"
 *   insn=0x0000000000393C24 string=0x0000000000393C28 ""
 *   insn=0x0000000000393C28 string=0x0000000000393C2C "t>A"
 *   insn=0x0000000000393C28 string=0x0000000000393D08 "`"
 *   insn=0x0000000000393C34 string=0x0000000000393C38 "^"
 *   insn=0x0000000000393C4C string=0x0000000000393C50 "H"
 *   insn=0x0000000000393C50 string=0x0000000000393C54 "t>A"
 *   insn=0x0000000000393C54 string=0x0000000000393C58 "h6A"
 *   insn=0x0000000000393C58 string=0x0000000000393C5C "b"
 *   insn=0x0000000000393C5C string=0x0000000000393C60 "`"
 *   insn=0x0000000000393C68 string=0x0000000000393C6C "B)"
 *   insn=0x0000000000393C70 string=0x0000000000393C74 "b(("
 *   insn=0x0000000000393C74 string=0x0000000000393C78 "B($"
 *   insn=0x0000000000393C78 string=0x0000000000393C7C "B)"
 *   insn=0x0000000000393C80 string=0x0000000000393C84 "!(*"
 *   insn=0x0000000000393C94 string=0x0000000000393C98 "f"
 *   insn=0x0000000000393C98 string=0x00000000001FDA30 "0'"
 *   insn=0x0000000000393CAC string=0x0000000000393CB0 "0"
 *   insn=0x0000000000393CB0 string=0x0000000000393CB4 "h>A"
 *   insn=0x0000000000393CB4 string=0x0000000000393CB8 "t6A"
 *   insn=0x0000000000393CD0 string=0x0000000000393CD4 "A)"
 *   insn=0x0000000000393CD4 string=0x0000000000393CD8 "b)"
 *   insn=0x0000000000393CE0 string=0x0000000000393CE4 "!8""
 *   insn=0x0000000000393CE8 string=0x0000000000393CEC "Q"
 *   insn=0x0000000000393D00 string=0x0000000000393D04 ""
 *   insn=0x0000000000393D0C string=0x0000000000393D10 "b"
 *   insn=0x0000000000393D10 string=0x0000000000393D14 "`"
 *   insn=0x0000000000393D1C string=0x0000000000393D20 "!(#"
 *   insn=0x0000000000393D20 string=0x0000000000393D24 "B)"
 *   insn=0x0000000000393D28 string=0x0000000000393D2C ""
 *   insn=0x0000000000393D48 string=0x0000000000393D4C "\t"
 *   insn=0x0000000000393D4C string=0x0000000000393D50 "t"
 *   insn=0x0000000000393D6C string=0x0000000000393D70 "t"
 *   insn=0x0000000000393D90 string=0x0000000000393D94 "h"
 *   insn=0x0000000000393D94 string=0x0000000000393D98 "`"
 *   insn=0x0000000000393DA8 string=0x0000000000393DAC " ( "
 *   insn=0x0000000000393DB0 string=0x0000000000393DB4 "B(+"
 *   insn=0x0000000000393DB8 string=0x0000000000393DBC "c)"
 *   insn=0x0000000000393DC0 string=0x0000000000393DC4 "A8!"
 *   insn=0x0000000000393DD0 string=0x0000000000393DD4 "`"
 *   insn=0x0000000000393DD4 string=0x0000000000393DD8 " "
 *   insn=0x0000000000393DDC string=0x0000000000393DE0 "`"
 *   insn=0x0000000000393DE0 string=0x0000000000393DE4 "b"
 *   insn=0x0000000000393DF0 string=0x0000000000393DF4 ""
 *   insn=0x0000000000393DF4 string=0x0000000000393DF8 "#)"
 *   insn=0x0000000000393DF8 string=0x0000000000393DFC "@( "
 *   insn=0x0000000000393E14 string=0x0000000000393E18 "t"
 *   insn=0x0000000000393E34 string=0x0000000000393E38 "t"
 *   insn=0x0000000000393E58 string=0x0000000000393E5C "h"
 *   insn=0x0000000000393E5C string=0x0000000000393E60 "`"
 *   insn=0x0000000000393E70 string=0x0000000000393E74 "B)"
 *   insn=0x0000000000393E74 string=0x0000000000393E78 "!(""
 *   insn=0x0000000000393E78 string=0x0000000000393E7C "e)"
 *   insn=0x0000000000393E80 string=0x0000000000393E84 "!8%"
 *   insn=0x0000000000393E88 string=0x0000000000393E8C "!@&"
 *   insn=0x0000000000393EA4 string=0x00000000001FAD50 "0'"
 *   insn=0x0000000000393EA8 string=0x0000000000393EAC "h"
 *   insn=0x0000000000393EB8 string=0x0000000000393EBC "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MainMenuView::ButtonPressed(Caver::MainMenuView *this, __int64 a2)
{
  __int64 v3; // x0
  void (***v4)(void); // x0
  void (*v5)(void); // x8
  __int64 v6; // x0
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  Caver::GameOptions *v14; // x0
  int v15; // w8
  int v16; // w8
  _QWORD *v17; // x19
  __int64 v18; // x8
  __int64 v19; // x8
  Caver::AchievementsManager *v20; // x0
  __int64 v21; // x0
  Caver::GameOptions *v22; // [xsp+100h] [xbp-28h] BYREF
  _QWORD *v23; // [xsp+108h] [xbp-20h]
  __int64 v24; // [xsp+110h] [xbp-18h]

  v24 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((_QWORD *)this + 35) == a2 )
  {
    v4 = (void (***)(void))*((_QWORD *)this + 30);
    if ( !v4 )
      return;
    v5 = **v4;
    goto LABEL_29;
  }
  if ( *((_QWORD *)this + 37) == a2 )
  {
    v6 = Caver::OnlineController::SharedController(this);
    if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6) & 1) == 0 )
    {
      Caver::MainMenuView::SetOnlineMenuVisible(this, 1);
      return;
    }
    v7 = *((_QWORD *)this + 30);
    if ( !v7 )
      return;
    v5 = *(void (**)(void))(*(_QWORD *)v7 + 24LL);
LABEL_29:
    v5();
    return;
  }
  if ( *((_QWORD *)this + 39) == a2 )
  {
    v8 = Caver::OnlineController::SharedController(this);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 200LL))(v8);
    return;
  }
  if ( *((_QWORD *)this + 41) == a2 )
  {
    v9 = *((_QWORD *)this + 30);
    if ( !v9 )
      return;
    v5 = *(void (**)(void))(*(_QWORD *)v9 + 8LL);
    goto LABEL_29;
  }
  if ( *((_QWORD *)this + 43) == a2 )
  {
    v10 = *((_QWORD *)this + 30);
    if ( !v10 )
      return;
    v5 = *(void (**)(void))(*(_QWORD *)v10 + 16LL);
    goto LABEL_29;
  }
  if ( *((_QWORD *)this + 45) == a2 )
  {
    v11 = *((_QWORD *)this + 30);
    if ( !v11 )
      return;
    v5 = *(void (**)(void))(*(_QWORD *)v11 + 32LL);
    goto LABEL_29;
  }
  if ( *((_QWORD *)this + 73) == a2 )
  {
    v12 = Caver::OnlineController::SharedController(this);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 56LL))(v12);
    return;
  }
  if ( *((_QWORD *)this + 75) == a2 )
  {
    v13 = Caver::OnlineController::SharedController(this);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 64LL))(v13);
    return;
  }
  if ( *((_QWORD *)this + 57) == a2 )
  {
    Caver::GameOptions::sharedOptions((__int64 *)&v22, this);
    v14 = v22;
    v15 = *((unsigned __int8 *)v22 + 32);
    *((_BYTE *)v22 + 32) = v15 ^ 1;
    if ( !v15 && *((float *)v14 + 9) < 0.05 )
    {
      *((_DWORD *)v14 + 9) = 1065353216;
      *((_BYTE *)v14 + 32) = 1;
    }
  }
  else
  {
    if ( *((_QWORD *)this + 55) != a2 )
    {
      if ( *(_QWORD *)(*((_QWORD *)this + 53) + 312LL) == a2 )
      {
        Caver::MainMenuView::SetOnlineMenuVisible(this, 0);
      }
      else if ( *((_QWORD *)this + 65) == a2 )
      {
        v20 = (Caver::AchievementsManager *)Caver::AchievementsManager::sharedManager(this);
        Caver::AchievementsManager::ReportAllAchievements(v20);
      }
      else if ( *((_QWORD *)this + 71) == a2 )
      {
        v21 = Caver::OnlineController::SharedController(this);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 208LL))(v21);
      }
      else if ( *((_QWORD *)this + 77) == a2 )
      {
        v3 = Caver::OnlineController::SharedController(this);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 256LL))(v3);
      }
      return;
    }
    Caver::GameOptions::sharedOptions((__int64 *)&v22, this);
    v14 = v22;
    v16 = *((unsigned __int8 *)v22 + 33);
    *((_BYTE *)v22 + 33) = v16 ^ 1;
    if ( !v16 && *((float *)v14 + 10) < 0.05 )
    {
      *((_DWORD *)v14 + 10) = 1065353216;
      *((_BYTE *)v14 + 33) = 1;
    }
  }
  Caver::GameOptions::SaveToFile(v14);
  Caver::GameOptions::ApplyAudioOptions(v22);
  Caver::MainMenuView::UpdateAudioControls(this);
  v17 = v23;
  if ( v23 )
  {
    v18 = v23[1] - 1LL;
    v23[1] = v18;
    if ( !v18 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
      v19 = v17[2] - 1LL;
      v17[2] = v19;
      if ( !v19 )
        (*(void (__fastcall **)(_QWORD *))(*v17 + 24LL))(v17);
    }
  }
}

