/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000385748
 * Mangled: _ZN5Caver33OfflineAchievementsViewController8LoadViewEv
 * Demangled: Caver::OfflineAchievementsViewController::LoadView(void)
 *
 * Callers: 1
 *   0x00000000003855E0  Caver::OfflineAchievementsViewController::~OfflineAchievementsViewController()
 *
 * Callees: 16
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B70  boost::detail::function::has_empty_target(...)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F93B0  Caver::OnlineController::SharedController(void)
 *   0x00000000001F9BE0  Caver::GUIControl::AddTargetActionForControlEvent(void *,boost::function<void ()(void *,Caver::GUIEvent *)> const&,Caver::GUIControl::Event)
 *   0x00000000001FA980  boost::throw_exception<boost::bad_weak_ptr>(boost::bad_weak_ptr const&)
 *   0x00000000001FAD80  Caver::OfflineAchievementsView::OfflineAchievementsView(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x00000000001FAE50  Caver::ProfileManager::sharedManager(void)
 *   0x00000000001FCA00  boost::shared_ptr<Caver::OfflineAchievementsView>::shared_ptr<Caver::OfflineAchievementsView>(Caver::OfflineAchievementsView *)
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000385FFC  Caver::OfflineAchievementsViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x000000000038608C  Caver::OfflineAchievementsViewController::GoogleSignInHandler(bool,std::string const&)
 *   0x00000000003863C0  boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::OfflineAchievementsViewController,bool,std::string const&>,boost::_bi::list3<boost::_bi::value<Caver::OfflineAchievementsViewController*>,boost::arg<1>,boost::arg<2>>>>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 199
 *   insn=0x000000000038575C string=0x0000000000385760 "V"
 *   insn=0x0000000000385774 string=0x0000000000385778 "("
 *   insn=0x000000000038577C string=0x0000000000385780 ""
 *   insn=0x000000000038577C string=0x00000000001FAE50 "0'"
 *   insn=0x0000000000385788 string=0x000000000038578C ""
 *   insn=0x0000000000385790 string=0x0000000000385794 "@"
 *   insn=0x00000000003857A0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003857A8 string=0x00000000003857AC "u"
 *   insn=0x00000000003857AC string=0x00000000001FAD80 "0'"
 *   insn=0x00000000003857B8 string=0x00000000003857BC "h"
 *   insn=0x00000000003857B8 string=0x00000000001FCA00 "0'"
 *   insn=0x00000000003857C8 string=0x00000000003857CC "i"
 *   insn=0x00000000003857D0 string=0x00000000003857D4 "4"
 *   insn=0x00000000003857D4 string=0x0000000000385818 "h.@"
 *   insn=0x00000000003857D8 string=0x00000000003857DC ""
 *   insn=0x00000000003857EC string=0x00000000003857F0 "\t@"
 *   insn=0x00000000003857F8 string=0x00000000003857FC ""
 *   insn=0x000000000038580C string=0x0000000000385810 "@"
 *   insn=0x0000000000385818 string=0x000000000038581C "\tq@"
 *   insn=0x000000000038581C string=0x0000000000385820 "?I"
 *   insn=0x0000000000385828 string=0x000000000038582C "I"
 *   insn=0x000000000038582C string=0x0000000000385830 "\tq"
 *   insn=0x0000000000385830 string=0x0000000000385834 "@"
 *   insn=0x0000000000385838 string=0x0000000000583734 "o"
 *   insn=0x000000000038583C string=0x0000000000385840 "!5G"
 *   insn=0x0000000000385848 string=0x000000000038584C ""
 *   insn=0x000000000038584C string=0x0000000000385850 "-@"
 *   insn=0x0000000000385854 string=0x0000000000385858 "h.@"
 *   insn=0x0000000000385880 string=0x0000000000385884 "`"
 *   insn=0x0000000000385880 string=0x00000000001F6B70 "0'"
 *   insn=0x0000000000385888 string=0x000000000038588C ""
 *   insn=0x00000000003858A0 string=0x00000000003858A4 ""
 *   insn=0x00000000003858BC string=0x00000000001F9BE0 "0'"
 *   insn=0x00000000003858C0 string=0x00000000003858C4 "h"
 *   insn=0x00000000003858C4 string=0x00000000003858C8 "("
 *   insn=0x00000000003858C4 string=0x00000000003858F0 "h.@"
 *   insn=0x00000000003858C8 string=0x00000000003858CC ""
 *   insn=0x00000000003858CC string=0x00000000003858D0 ""
 *   insn=0x00000000003858D8 string=0x00000000003858DC " !"
 *   insn=0x0000000000385914 string=0x0000000000385918 "`"
 *   insn=0x000000000038591C string=0x0000000000385920 ""
 *   insn=0x0000000000385934 string=0x0000000000385938 ""
 *   insn=0x0000000000385954 string=0x0000000000385958 "h"
 *   insn=0x0000000000385958 string=0x000000000038595C "("
 *   insn=0x0000000000385958 string=0x0000000000385984 "h.@"
 *   insn=0x000000000038595C string=0x0000000000385960 ""
 *   insn=0x0000000000385960 string=0x0000000000385964 ""
 *   insn=0x000000000038596C string=0x0000000000385970 " !"
 *   insn=0x000000000038598C string=0x0000000000385A1C "t2@"
 *   insn=0x00000000003859A4 string=0x00000000003859A8 "r"
 *   insn=0x00000000003859A8 string=0x00000000003859AC "`"
 *   insn=0x00000000003859B0 string=0x00000000003859B4 ""
 *   insn=0x00000000003859C8 string=0x00000000003859CC ""
 *   insn=0x00000000003859E8 string=0x00000000003859EC "h"
 *   insn=0x00000000003859EC string=0x00000000003859F0 "("
 *   insn=0x00000000003859EC string=0x0000000000385A18 "h.@"
 *   insn=0x00000000003859F0 string=0x00000000003859F4 ""
 *   insn=0x00000000003859F4 string=0x00000000003859F8 ""
 *   insn=0x0000000000385A00 string=0x0000000000385A04 " !"
 *   insn=0x0000000000385A20 string=0x0000000000385A30 "u"
 *   insn=0x0000000000385A24 string=0x0000000000385A28 ")\t"
 *   insn=0x0000000000385A30 string=0x0000000000385A34 "h"
 *   insn=0x0000000000385A34 string=0x0000000000385A38 "5"
 *   insn=0x0000000000385A38 string=0x0000000000385A7C "`"@"
 *   insn=0x0000000000385A3C string=0x0000000000385A40 ""
 *   insn=0x0000000000385A4C string=0x0000000000385A50 "\t@"
 *   insn=0x0000000000385A5C string=0x0000000000385A60 ""
 *   insn=0x0000000000385A6C string=0x0000000000385A70 "@"
 *   insn=0x0000000000385A80 string=0x0000000000385A84 ""
 *   insn=0x0000000000385A80 string=0x0000000000385A94 "4"
 *   insn=0x0000000000385A84 string=0x0000000000385A88 ""
 *   insn=0x0000000000385A94 string=0x0000000000385AD8 "6"
 *   insn=0x0000000000385A98 string=0x0000000000385A9C ""
 *   insn=0x0000000000385AAC string=0x0000000000385AB0 "\t@"
 *   insn=0x0000000000385AB8 string=0x0000000000385ABC ""
 *   insn=0x0000000000385ACC string=0x0000000000385AD0 "@"
 *   insn=0x0000000000385AD8 string=0x0000000000385ADC "t\n@"
 *   insn=0x0000000000385AD8 string=0x00000000001F93B0 "0'"
 *   insn=0x0000000000385AE4 string=0x0000000000385CDC ""
 *   insn=0x0000000000385AF0 string=0x0000000000385AF4 "\t"
 *   insn=0x0000000000385AF4 string=0x0000000000385AF8 "x"
 *   insn=0x0000000000385AFC string=0x0000000000385B00 "7}@"
 *   insn=0x0000000000385B08 string=0x0000000000385B0C ""
 *   insn=0x0000000000385B0C string=0x0000000000385B10 ""
 *   insn=0x0000000000385B24 string=0x0000000000385B28 "`"
 *   insn=0x0000000000385B2C string=0x0000000000385B30 ""
 *   insn=0x0000000000385B40 string=0x0000000000385B44 ""
 *   insn=0x0000000000385B44 string=0x0000000000385B48 ""
 *   insn=0x0000000000385B54 string=0x0000000000385B58 ")"
 *   insn=0x0000000000385B60 string=0x0000000000385B64 ""
 *   insn=0x0000000000385B68 string=0x0000000000385B6C "H"
 *   insn=0x0000000000385B6C string=0x0000000000385B70 ""
 *   insn=0x0000000000385B70 string=0x0000000000385B74 ""
 *   insn=0x0000000000385B78 string=0x0000000000385B7C " !"
 *   insn=0x0000000000385B80 string=0x0000000000385B84 "!a"
 *   insn=0x0000000000385BB0 string=0x0000000000385BB4 "h"
 *   insn=0x0000000000385BB4 string=0x0000000000385BB8 "("
 *   insn=0x0000000000385BB8 string=0x0000000000385BBC ""
 *   insn=0x0000000000385BBC string=0x0000000000385BC0 ""
 *   insn=0x0000000000385BC8 string=0x0000000000385BCC " a"
 *   insn=0x0000000000385BE4 string=0x0000000000385BE8 "@"
 *   insn=0x0000000000385BE8 string=0x0000000000385BEC ""
 *   insn=0x0000000000385BEC string=0x0000000000385BF0 ""
 *   insn=0x0000000000385BF4 string=0x0000000000385BF8 ""
 *   insn=0x0000000000385BF8 string=0x0000000000385BFC "@"
 *   insn=0x0000000000385C04 string=0x0000000000385C08 "h"
 *   insn=0x0000000000385C08 string=0x0000000000385C0C "("
 *   insn=0x0000000000385C0C string=0x0000000000385C10 ""
 *   insn=0x0000000000385C10 string=0x0000000000385C14 ""
 *   insn=0x0000000000385C1C string=0x0000000000385C20 " !"
 *   insn=0x0000000000385C34 string=0x0000000000385C38 ""
 *   insn=0x0000000000385C44 string=0x0000000000385C48 "\t@"
 *   insn=0x0000000000385C54 string=0x0000000000385C58 ""
 *   insn=0x0000000000385C64 string=0x0000000000385C68 "@"
 *   insn=0x0000000000385C74 string=0x0000000000385C78 ""
 *   insn=0x0000000000385C88 string=0x0000000000385C8C "\t@"
 *   insn=0x0000000000385C94 string=0x0000000000385C98 ""
 *   insn=0x0000000000385CA8 string=0x0000000000385CAC "@"
 *   insn=0x0000000000385CC0 string=0x0000000000385CF4 "w"
 *   insn=0x0000000000385CDC string=0x0000000000385CE0 ""
 *   insn=0x0000000000385CE0 string=0x0000000000385CE4 "A"
 *   insn=0x0000000000385CEC string=0x0000000000385CF0 "$"
 *   insn=0x0000000000385CF0 string=0x00000000001FA980 "0'"
 *   insn=0x0000000000385CF4 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000385D0C string=0x0000000000385D10 "t"
 *   insn=0x0000000000385D1C string=0x0000000000385D20 "\t\t@"
 *   insn=0x0000000000385D20 string=0x0000000000385D24 ")"
 *   insn=0x0000000000385D24 string=0x0000000000385D28 "\t\t"
 *   insn=0x0000000000385D28 string=0x0000000000385D2C "!"
 *   insn=0x0000000000385D2C string=0x0000000000385D30 "\t"
 *   insn=0x0000000000385D30 string=0x0000000000385D34 ")@"
 *   insn=0x0000000000385D38 string=0x0000000000385D3C " "
 *   insn=0x0000000000385D3C string=0x0000000000385D40 "\"
 *   insn=0x0000000000385D4C string=0x0000000000385D50 "H"
 *   insn=0x0000000000385D50 string=0x0000000000385D54 "c"
 *   insn=0x0000000000385D50 string=0x0000000000385EB8 "("
 *   insn=0x0000000000385D60 string=0x0000000000385D64 "\t\t@"
 *   insn=0x0000000000385D64 string=0x0000000000385D68 ")"
 *   insn=0x0000000000385D68 string=0x0000000000385D6C "\t\t"
 *   insn=0x0000000000385D70 string=0x0000000000385D74 "\t"
 *   insn=0x0000000000385D74 string=0x0000000000385D78 ")@"
 *   insn=0x0000000000385D7C string=0x0000000000385D80 " "
 *   insn=0x0000000000385D80 string=0x0000000000385D84 "K"
 *   insn=0x0000000000385D8C string=0x0000000000385D90 "d"
 *   insn=0x0000000000385D98 string=0x0000000000385D9C "H"
 *   insn=0x0000000000385D9C string=0x0000000000385DA0 "("
 *   insn=0x0000000000385DA0 string=0x0000000000385DA4 ""
 *   insn=0x0000000000385DA4 string=0x0000000000385DA8 ""
 *   insn=0x0000000000385DB0 string=0x0000000000385DB4 " !"
 *   insn=0x0000000000385DD4 string=0x0000000000385DD8 "h"
 *   insn=0x0000000000385DD8 string=0x0000000000385DDC "("
 *   insn=0x0000000000385DDC string=0x0000000000385DE0 ""
 *   insn=0x0000000000385DE0 string=0x0000000000385DE4 ""
 *   insn=0x0000000000385DEC string=0x0000000000385DF0 " !"
 *   insn=0x0000000000385E14 string=0x0000000000385E18 ""
 *   insn=0x0000000000385E1C string=0x0000000000385E20 "!"
 *   insn=0x0000000000385E24 string=0x0000000000385E28 "\t@"
 *   insn=0x0000000000385E34 string=0x0000000000385E38 ""
 *   insn=0x0000000000385E3C string=0x0000000000385E40 "!"
 *   insn=0x0000000000385E44 string=0x0000000000385E48 "@"
 *   insn=0x0000000000385E50 string=0x0000000000385E54 "T"
 *   insn=0x0000000000385E5C string=0x0000000000385E60 "h"
 *   insn=0x0000000000385E60 string=0x0000000000385E64 "("
 *   insn=0x0000000000385E64 string=0x0000000000385E68 ""
 *   insn=0x0000000000385E68 string=0x0000000000385E6C ""
 *   insn=0x0000000000385E74 string=0x0000000000385E78 " a"
 *   insn=0x0000000000385E90 string=0x0000000000385E94 "@"
 *   insn=0x0000000000385E94 string=0x0000000000385E98 ""
 *   insn=0x0000000000385E98 string=0x0000000000385E9C ""
 *   insn=0x0000000000385EA0 string=0x0000000000385EA4 ""
 *   insn=0x0000000000385EA4 string=0x0000000000385EA8 "@"
 *   insn=0x0000000000385EB0 string=0x0000000000385EB4 "h"
 *   insn=0x0000000000385EB8 string=0x0000000000385EBC ""
 *   insn=0x0000000000385EBC string=0x0000000000385EC0 ""
 *   insn=0x0000000000385EC8 string=0x0000000000385ECC " !"
 *   insn=0x0000000000385EE0 string=0x0000000000385EE4 ""
 *   insn=0x0000000000385EF0 string=0x0000000000385EF4 "\t@"
 *   insn=0x0000000000385F00 string=0x0000000000385F04 ""
 *   insn=0x0000000000385F10 string=0x0000000000385F14 "@"
 *   insn=0x0000000000385F20 string=0x0000000000385F24 ""
 *   insn=0x0000000000385F30 string=0x0000000000385F34 "\t@"
 *   insn=0x0000000000385F40 string=0x0000000000385F44 ""
 *   insn=0x0000000000385F50 string=0x0000000000385F54 "@"
 *   insn=0x0000000000385F6C string=0x0000000000385F70 "\t\t@"
 *   insn=0x0000000000385F70 string=0x0000000000385F74 ")"
 *   insn=0x0000000000385F74 string=0x0000000000385F78 "\t\t"
 *   insn=0x0000000000385F78 string=0x0000000000385F7C "!"
 *   insn=0x0000000000385F7C string=0x0000000000385F80 "\t"
 *   insn=0x0000000000385F80 string=0x0000000000385F84 ")@"
 *   insn=0x0000000000385F88 string=0x0000000000385F8C " "
 *   insn=0x0000000000385F9C string=0x0000000000385FA0 "h"
 *   insn=0x0000000000385FA0 string=0x0000000000385FAC "("
 *   insn=0x0000000000385FA4 string=0x0000000000385FA8 "G"
 *   insn=0x0000000000385FAC string=0x0000000000385FB0 ""
 *   insn=0x0000000000385FB0 string=0x0000000000385FB4 ""
 *   insn=0x0000000000385FBC string=0x0000000000385FC0 " !"
 *   insn=0x0000000000385FD4 string=0x0000000000385FD8 ";"
 *   insn=0x0000000000385FF0 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000385FF4 string=0x0000000000385FF8 "3"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OfflineAchievementsViewController::LoadView(Caver::OnlineController **this)
{
  Caver::ProfileManager *v2; // x0
  __int64 v3; // x0
  Caver::OnlineController *v4; // x20
  Caver::OnlineController *v5; // x9
  Caver::OnlineController *v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8
  Caver::OnlineController *v9; // x8
  float *v10; // x0
  int64x2_t v11; // q0
  _UNKNOWN **v12; // x8
  void (__fastcall *v13)(_BYTE *, _BYTE *, __int64); // x8
  Caver::OnlineController *v14; // x8
  int64x2_t v15; // q0
  _UNKNOWN **v16; // x8
  void (__fastcall *v17)(_BYTE *, _BYTE *, __int64); // x8
  int64x2_t v18; // q0
  _UNKNOWN **v19; // x8
  void (__fastcall *v20)(_BYTE *, _BYTE *, __int64); // x8
  Caver::OnlineController *v21; // x20
  Caver::OnlineController *v22; // x21
  __int64 v23; // x8
  __int64 v24; // x8
  Caver::OnlineController *v25; // x0
  __int64 v26; // x8
  __int64 v27; // x8
  __int64 v28; // x0
  Caver::OnlineController *v29; // x20
  __int64 v30; // x21
  __int64 v31; // x8
  Caver::OnlineController *v32; // x24
  int64x2_t v33; // q0
  void (__fastcall *v34)(__int64, Caver::OnlineController **); // x23
  unsigned __int64 v35; // x8
  void (__fastcall *v36)(__int128 *, __int128 *, __int64); // x8
  __int64 result; // x0
  __int64 v38; // x8
  __int64 (__fastcall *v39)(__int128 *, __int128 *, __int64); // x8
  __int64 v40; // x8
  __int64 v41; // x8
  __int64 v42; // x8
  __int64 v43; // x8
  unsigned __int64 v44; // [xsp+0h] [xbp-C0h]
  __int128 v45; // [xsp+8h] [xbp-B8h] BYREF
  __int64 v46; // [xsp+18h] [xbp-A8h]
  Caver::OnlineController *v47; // [xsp+20h] [xbp-A0h] BYREF
  __int64 v48; // [xsp+28h] [xbp-98h]
  unsigned __int64 v49; // [xsp+30h] [xbp-90h]
  __int128 v50; // [xsp+38h] [xbp-88h] BYREF
  __int64 v51; // [xsp+48h] [xbp-78h]
  _BYTE v52[24]; // [xsp+50h] [xbp-70h] BYREF
  Caver::OfflineAchievementsViewController *v53; // [xsp+68h] [xbp-58h]
  int64x2_t v54; // [xsp+70h] [xbp-50h]
  Caver::OfflineAchievementsViewController *v55; // [xsp+80h] [xbp-40h]
  __int64 v56; // [xsp+88h] [xbp-38h]

  v56 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !this[9] )
  {
    v2 = (Caver::ProfileManager *)Caver::ProfileManager::sharedManager((Caver::ProfileManager *)this);
    if ( !*((_BYTE *)v2 + 120) )
    {
      v3 = Caver::ProfileManager::sharedManager(v2);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 24LL))(v3, 0);
    }
  }
  operator new(0x168u);
  Caver::OfflineAchievementsView::OfflineAchievementsView();
  boost::shared_ptr<Caver::OfflineAchievementsView>::shared_ptr<Caver::OfflineAchievementsView>();
  v4 = this[12];
  v5 = *(Caver::OnlineController **)v52;
  *(_QWORD *)v52 = this[11];
  v6 = *(Caver::OnlineController **)&v52[8];
  this[11] = v5;
  this[12] = v6;
  *(_QWORD *)&v52[8] = v4;
  if ( v4 )
  {
    v7 = *((_QWORD *)v4 + 1) - 1LL;
    *((_QWORD *)v4 + 1) = v7;
    if ( !v7 )
    {
      (*(void (__fastcall **)(Caver::OnlineController *))(*(_QWORD *)v4 + 16LL))(v4);
      v8 = *((_QWORD *)v4 + 2) - 1LL;
      *((_QWORD *)v4 + 2) = v8;
      if ( !v8 )
        (*(void (__fastcall **)(Caver::OnlineController *))(*(_QWORD *)v4 + 24LL))(v4);
    }
  }
  v9 = this[11];
  if ( *((_DWORD *)v9 + 28) != 18 )
  {
    v10 = (float *)*((_QWORD *)v9 + 11);
    *((_DWORD *)v9 + 28) = 18;
    if ( v10 )
    {
      if ( v10[35] > 0.001 )
        (*(void (__fastcall **)(float *))(*(_QWORD *)v10 + 88LL))(v10);
    }
  }
  *(_QWORD *)v52 = 0;
  v11 = vdupq_n_s64(0);
  v55 = (Caver::OfflineAchievementsViewController *)this;
  v11.n128_u64[0] = (unsigned __int64)Caver::OfflineAchievementsViewController::ButtonPressed;
  v54 = v11;
  if ( (boost::detail::function::has_empty_target() & 1) != 0 )
  {
    v12 = 0;
  }
  else
  {
    v53 = v55;
    *(int64x2_t *)&v52[8] = v54;
    v12 = &boost::function2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::OfflineAchievementsViewController,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::OfflineAchievementsViewController*>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::OfflineAchievementsViewController,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::OfflineAchievementsViewController*>,boost::arg<1>,boost::arg<2>>>)::stored_vtable;
  }
  *(_QWORD *)v52 = v12;
  Caver::GUIControl::AddTargetActionForControlEvent();
  if ( *(_QWORD *)v52 )
  {
    if ( (v52[0] & 1) == 0 )
    {
      v13 = *(void (__fastcall **)(_BYTE *, _BYTE *, __int64))(*(_QWORD *)v52 & 0xFFFFFFFFFFFFFFFELL);
      if ( v13 )
        v13(&v52[8], &v52[8], 2);
    }
    *(_QWORD *)v52 = 0;
  }
  v14 = this[11];
  if ( *((_QWORD *)v14 + 41) )
  {
    v15 = vdupq_n_s64(0);
    v15.n128_u64[0] = (unsigned __int64)Caver::OfflineAchievementsViewController::ButtonPressed;
    *(_QWORD *)v52 = 0;
    v54 = v15;
    v55 = (Caver::OfflineAchievementsViewController *)this;
    if ( (boost::detail::function::has_empty_target() & 1) != 0 )
    {
      v16 = 0;
    }
    else
    {
      v53 = v55;
      *(int64x2_t *)&v52[8] = v54;
      v16 = &boost::function2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::OfflineAchievementsViewController,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::OfflineAchievementsViewController*>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::OfflineAchievementsViewController,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::OfflineAchievementsViewController*>,boost::arg<1>,boost::arg<2>>>)::stored_vtable;
    }
    *(_QWORD *)v52 = v16;
    Caver::GUIControl::AddTargetActionForControlEvent();
    if ( *(_QWORD *)v52 )
    {
      if ( (v52[0] & 1) == 0 )
      {
        v17 = *(void (__fastcall **)(_BYTE *, _BYTE *, __int64))(*(_QWORD *)v52 & 0xFFFFFFFFFFFFFFFELL);
        if ( v17 )
          v17(&v52[8], &v52[8], 2);
      }
      *(_QWORD *)v52 = 0;
    }
    v14 = this[11];
  }
  if ( *((_QWORD *)v14 + 43) )
  {
    v18 = vdupq_n_s64(0);
    v18.n128_u64[0] = (unsigned __int64)Caver::OfflineAchievementsViewController::ButtonPressed;
    *(_QWORD *)v52 = 0;
    v54 = v18;
    v55 = (Caver::OfflineAchievementsViewController *)this;
    if ( (boost::detail::function::has_empty_target() & 1) != 0 )
    {
      v19 = 0;
    }
    else
    {
      v53 = v55;
      *(int64x2_t *)&v52[8] = v54;
      v19 = &boost::function2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::OfflineAchievementsViewController,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::OfflineAchievementsViewController*>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::OfflineAchievementsViewController,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::OfflineAchievementsViewController*>,boost::arg<1>,boost::arg<2>>>)::stored_vtable;
    }
    *(_QWORD *)v52 = v19;
    Caver::GUIControl::AddTargetActionForControlEvent();
    if ( *(_QWORD *)v52 )
    {
      if ( (v52[0] & 1) == 0 )
      {
        v20 = *(void (__fastcall **)(_BYTE *, _BYTE *, __int64))(*(_QWORD *)v52 & 0xFFFFFFFFFFFFFFFELL);
        if ( v20 )
          v20(&v52[8], &v52[8], 2);
      }
      *(_QWORD *)v52 = 0;
    }
    v14 = this[11];
  }
  v21 = this[12];
  if ( v21 )
    *((_QWORD *)v21 + 1) += 2LL;
  v22 = this[4];
  this[3] = v14;
  this[4] = v21;
  if ( v22 )
  {
    v23 = *((_QWORD *)v22 + 1) - 1LL;
    *((_QWORD *)v22 + 1) = v23;
    if ( !v23 )
    {
      (*(void (__fastcall **)(Caver::OnlineController *))(*(_QWORD *)v22 + 16LL))(v22);
      v24 = *((_QWORD *)v22 + 2) - 1LL;
      *((_QWORD *)v22 + 2) = v24;
      if ( !v24 )
        (*(void (__fastcall **)(Caver::OnlineController *))(*(_QWORD *)v22 + 24LL))(v22);
    }
  }
  v25 = this[8];
  if ( v25 )
    v25 = (Caver::OnlineController *)(**(__int64 (__fastcall ***)(Caver::OnlineController *, Caver::OfflineAchievementsViewController *))v25)(
                                       v25,
                                       (Caver::OfflineAchievementsViewController *)this);
  if ( v21 )
  {
    v26 = *((_QWORD *)v21 + 1) - 1LL;
    *((_QWORD *)v21 + 1) = v26;
    if ( !v26 )
    {
      v25 = (Caver::OnlineController *)(*(__int64 (__fastcall **)(Caver::OnlineController *))(*(_QWORD *)v21 + 16LL))(v21);
      v27 = *((_QWORD *)v21 + 2) - 1LL;
      *((_QWORD *)v21 + 2) = v27;
      if ( !v27 )
        v25 = (Caver::OnlineController *)(*(__int64 (__fastcall **)(Caver::OnlineController *))(*(_QWORD *)v21 + 24LL))(v21);
    }
  }
  v28 = Caver::OnlineController::SharedController(v25);
  v29 = this[2];
  v30 = v28;
  if ( !v29 || (v31 = *((_QWORD *)v29 + 1)) == 0 )
  {
    *(_QWORD *)v52 = off_6CC4E8;
    boost::throw_exception<boost::bad_weak_ptr>();
  }
  v32 = this[1];
  v33 = vdupq_n_s64(0);
  v34 = *(void (__fastcall **)(__int64, Caver::OnlineController **))(*(_QWORD *)v28 + 248LL);
  *((_QWORD *)v29 + 1) = v31 + 2;
  *(_QWORD *)&v52[16] = this;
  v33.n128_u64[0] = (unsigned __int64)Caver::OfflineAchievementsViewController::GoogleSignInHandler;
  *(int64x2_t *)v52 = v33;
  if ( (boost::detail::function::has_empty_target() & 1) != 0 )
  {
    v35 = 0;
  }
  else
  {
    v46 = *(_QWORD *)&v52[16];
    v45 = *(_OWORD *)v52;
    v35 = (unsigned __int64)boost::function2<void,bool,std::string const&>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::OfflineAchievementsViewController,bool,std::string const&>,boost::_bi::list3<boost::_bi::value<Caver::OfflineAchievementsViewController*>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::OfflineAchievementsViewController,bool,std::string const&>,boost::_bi::list3<boost::_bi::value<Caver::OfflineAchievementsViewController*>,boost::arg<1>,boost::arg<2>>>)::stored_vtable;
  }
  v44 = v35;
  v47 = v32;
  v48 = (__int64)v29;
  ++*((_QWORD *)v29 + 2);
  v49 = 0;
  if ( v35 )
  {
    v49 = v35;
    if ( (v35 & 1) != 0 )
    {
      v51 = v46;
      v50 = v45;
    }
    else
    {
      (*(void (__fastcall **)(__int128 *, __int128 *, _QWORD))(v35 & 0xFFFFFFFFFFFFFFFELL))(&v45, &v50, 0);
    }
  }
  v34(v30, &v47);
  if ( v49 )
  {
    if ( (v49 & 1) == 0 )
    {
      v36 = *(void (__fastcall **)(__int128 *, __int128 *, __int64))(v49 & 0xFFFFFFFFFFFFFFFELL);
      if ( v36 )
        v36(&v50, &v50, 2);
    }
    v49 = 0;
  }
  result = v48;
  if ( v48 )
  {
    v38 = *(_QWORD *)(v48 + 16) - 1LL;
    *(_QWORD *)(v48 + 16) = v38;
    if ( !v38 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 24LL))(result);
  }
  if ( v44 )
  {
    if ( (v44 & 1) == 0 )
    {
      v39 = *(__int64 (__fastcall **)(__int128 *, __int128 *, __int64))(v44 & 0xFFFFFFFFFFFFFFFELL);
      if ( v39 )
        result = v39(&v45, &v45, 2);
    }
  }
  v40 = *((_QWORD *)v29 + 1) - 1LL;
  *((_QWORD *)v29 + 1) = v40;
  if ( !v40 )
  {
    result = (*(__int64 (__fastcall **)(Caver::OnlineController *))(*(_QWORD *)v29 + 16LL))(v29);
    v41 = *((_QWORD *)v29 + 2) - 1LL;
    *((_QWORD *)v29 + 2) = v41;
    if ( !v41 )
      result = (*(__int64 (__fastcall **)(Caver::OnlineController *))(*(_QWORD *)v29 + 24LL))(v29);
  }
  v42 = *((_QWORD *)v29 + 1) - 1LL;
  *((_QWORD *)v29 + 1) = v42;
  if ( !v42 )
  {
    result = (*(__int64 (__fastcall **)(Caver::OnlineController *))(*(_QWORD *)v29 + 16LL))(v29);
    v43 = *((_QWORD *)v29 + 2) - 1LL;
    *((_QWORD *)v29 + 2) = v43;
    if ( !v43 )
      return (*(__int64 (__fastcall **)(Caver::OnlineController *))(*(_QWORD *)v29 + 24LL))(v29);
  }
  return result;
}

