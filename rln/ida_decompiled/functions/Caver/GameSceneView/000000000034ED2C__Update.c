/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000034ED2C
 * Mangled: _ZN5Caver13GameSceneView6UpdateEf
 * Demangled: Caver::GameSceneView::Update(float)
 *
 * Callers: 0
 *
 * Callees: 31
 *   0x00000000001F3FE0  Caver::CharControllerComponent::CanPickup(void)
 *   0x00000000001F45D0  Caver::GUIEffect::FadeIn(float)
 *   0x00000000001F4B70  Caver::GUIAnimation::GUIAnimation(void)
 *   0x00000000001F55B0  Caver::GUIEffect::Draw(Caver::RenderingContext *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5770  Caver::GameOverlayView::SetControlsHidden(bool)
 *   0x00000000001F5C90  Caver::ManaBar::SetMaxMana(int)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7090  Caver::CoinBar::SetCurrentCoins(int)
 *   0x00000000001F7210  Caver::RenderingContext::SetIdentityMatrix(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7580  Caver::GameOverlayView::SetSkillButtonDisabled(bool)
 *   0x00000000001F8090  Caver::GUIPropertyValue::ValueWithFloat(float)
 *   0x00000000001F8550  Caver::GUIEffect::Update(float)
 *   0x00000000001F8580  Caver::CharControllerComponent::CanUse(void)
 *   0x00000000001F8650  Caver::GUIView::DrawSubviewRect(Caver::GUIView*,Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000001F8A30  Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000001F9850  Caver::GUIView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000001FA5A0  Caver::GUIView::RemoveAllAnimations(void)
 *   0x00000000001FA710  Caver::GameOverlayView::SetShowsUseButton(bool)
 *   0x00000000001FABF0  boost::detail::shared_count::shared_count<Caver::GUIAnimation>(Caver::GUIAnimation *)
 *   0x00000000001FAC80  Caver::HealthBar::SetCurrentHealth(int)
 *   0x00000000001FAEB0  Caver::GameSceneView::HideCinematicSkipButton(bool)
 *   0x00000000001FE6C0  Caver::GUIView::Update(float)
 *   0x00000000001FF640  Caver::HealthBar::SetMaxHealth(int)
 *   0x0000000000201D10  Caver::ManaBar::SetCurrentMana(int)
 *   0x0000000000201D50  Caver::GameSceneController::CanCastSkill(boost::shared_ptr<Caver::Skill> const&)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000203CC0  Caver::GUIEffect::FadeOut(float)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 185
 *   insn=0x000000000034ED44 string=0x000000000034ED48 "U"
 *   insn=0x000000000034ED50 string=0x000000000034ED54 ""
 *   insn=0x000000000034ED58 string=0x000000000034ED5C "h"
 *   insn=0x000000000034ED60 string=0x000000000034ED64 "iz@"
 *   insn=0x000000000034ED60 string=0x000000000034EEF0 "hz@"
 *   insn=0x000000000034ED68 string=0x000000000034ED6C "6"
 *   insn=0x000000000034ED6C string=0x000000000034ED70 "`"
 *   insn=0x000000000034ED74 string=0x000000000034ED78 "y"
 *   insn=0x000000000034ED7C string=0x000000000034ED80 "0"
 *   insn=0x000000000034ED80 string=0x000000000034ED84 "h"
 *   insn=0x000000000034ED8C string=0x000000000034ED90 ""
 *   insn=0x000000000034ED90 string=0x000000000034ED94 "?"
 *   insn=0x000000000034ED98 string=0x000000000034ED9C "h"
 *   insn=0x000000000034EDA8 string=0x000000000034EDAC "\tI"
 *   insn=0x000000000034EDAC string=0x000000000034EDB0 "`"
 *   insn=0x000000000034EDB8 string=0x000000000034EDBC "`"
 *   insn=0x000000000034EDC4 string=0x000000000034EDC8 "h"
 *   insn=0x000000000034EDC4 string=0x00000000001F45D0 "P'"
 *   insn=0x000000000034EDD4 string=0x000000000034EDD8 "h"
 *   insn=0x000000000034EDD4 string=0x00000000001FAC80 "0'"
 *   insn=0x000000000034EDE0 string=0x000000000034EEDC "h"
 *   insn=0x000000000034EDE8 string=0x000000000034EDEC "}\t"
 *   insn=0x000000000034EDF4 string=0x000000000034EDF8 "h"
 *   insn=0x000000000034EDF4 string=0x00000000001F5C90 "P'"
 *   insn=0x000000000034EE04 string=0x000000000034EE08 "hz@"
 *   insn=0x000000000034EE08 string=0x000000000034EE0C ""
 *   insn=0x000000000034EE14 string=0x000000000034EE50 "w"
 *   insn=0x000000000034EE24 string=0x000000000034EE28 "\t@"
 *   insn=0x000000000034EE30 string=0x000000000034EE34 ""
 *   insn=0x000000000034EE44 string=0x000000000034EE48 "@"
 *   insn=0x000000000034EE50 string=0x000000000034EE54 "`z@"
 *   insn=0x000000000034EE54 string=0x000000000034EE58 "t"
 *   insn=0x000000000034EE58 string=0x000000000034EE5C ""
 *   insn=0x000000000034EE5C string=0x000000000034EE60 "\t5@"
 *   insn=0x000000000034EE60 string=0x000000000034EE64 "9@"
 *   insn=0x000000000034EE6C string=0x000000000034EE70 "\t"
 *   insn=0x000000000034EE70 string=0x000000000034EE74 ")"
 *   insn=0x000000000034EE74 string=0x000000000034EE78 "\t"
 *   insn=0x000000000034EE90 string=0x00000000001F7580 "0'"
 *   insn=0x000000000034EE94 string=0x000000000034EE98 "4"
 *   insn=0x000000000034EE9C string=0x000000000034EEA0 ""
 *   insn=0x000000000034EEB0 string=0x000000000034EEB4 "\t@"
 *   insn=0x000000000034EEBC string=0x000000000034EEC0 ""
 *   insn=0x000000000034EED0 string=0x000000000034EED4 "@"
 *   insn=0x000000000034EEE0 string=0x000000000034EEE4 "`"
 *   insn=0x000000000034EEE8 string=0x000000000034EEEC "i"
 *   insn=0x000000000034EEEC string=0x00000000001F7090 "0'"
 *   insn=0x000000000034EEF0 string=0x000000000034EEF4 ""
 *   insn=0x000000000034EEF4 string=0x000000000034EEF8 "!@"
 *   insn=0x000000000034EEFC string=0x000000000034EF00 "l"
 *   insn=0x000000000034EF00 string=0x000000000034EF04 "hbF9"
 *   insn=0x000000000034EF00 string=0x000000000034EF0C "`"
 *   insn=0x000000000034EF08 string=0x000000000034EFDC "`"
 *   insn=0x000000000034EF14 string=0x000000000034EF18 "hz@"
 *   insn=0x000000000034EF14 string=0x00000000001F5770 "P'"
 *   insn=0x000000000034EF20 string=0x000000000034EF24 "t"
 *   insn=0x000000000034EF20 string=0x000000000034EF50 "hbE9("
 *   insn=0x000000000034EF24 string=0x000000000034EF28 "."
 *   insn=0x000000000034EF28 string=0x000000000034EF2C "`"
 *   insn=0x000000000034EF28 string=0x00000000001F3FE0 "P'"
 *   insn=0x000000000034EF2C string=0x000000000034EF38 "hz@"
 *   insn=0x000000000034EF40 string=0x00000000001F8580 "0'"
 *   insn=0x000000000034EF4C string=0x00000000001FA710 "0'"
 *   insn=0x000000000034EF50 string=0x000000000034EF54 "("
 *   insn=0x000000000034EF54 string=0x000000000034EF58 "`^A"
 *   insn=0x000000000034EF54 string=0x000000000034EF78 "`"
 *   insn=0x000000000034EF5C string=0x000000000034EF60 "  "
 *   insn=0x000000000034EF60 string=0x000000000034EF64 "`^"
 *   insn=0x000000000034EF74 string=0x00000000001FAEB0 "0'"
 *   insn=0x000000000034EF78 string=0x000000000034EF7C "`"
 *   insn=0x000000000034EF7C string=0x000000000034EF88 "`"
 *   insn=0x000000000034EF80 string=0x000000000034EF84 "s"
 *   insn=0x000000000034EF84 string=0x00000000001F8550 "0'"
 *   insn=0x000000000034EF88 string=0x000000000034EF8C "`"
 *   insn=0x000000000034EF8C string=0x000000000034EF98 "`"
 *   insn=0x000000000034EF90 string=0x000000000034EF94 "o"
 *   insn=0x000000000034EF9C string=0x000000000034EFA0 "l"
 *   insn=0x000000000034EFB8 string=0x000000000034EFBC "a"
 *   insn=0x000000000034EFE8 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000034EFF0 string=0x000000000034EFF4 "4"
 *   insn=0x000000000034EFF8 string=0x000000000034EFFC ""
 *   insn=0x000000000034F008 string=0x000000000034F00C "\t@"
 *   insn=0x000000000034F018 string=0x000000000034F01C ""
 *   insn=0x000000000034F028 string=0x000000000034F02C "@"
 *   insn=0x000000000034F038 string=0x000000000034F03C """
 *   insn=0x000000000034F054 string=0x000000000034F058 "U"
 *   insn=0x000000000034F064 string=0x000000000034F068 "`"
 *   insn=0x000000000034F070 string=0x000000000034F074 "hbE9H"
 *   insn=0x000000000034F070 string=0x000000000034F2AC ""
 *   insn=0x000000000034F074 string=0x000000000034F078 "H"
 *   insn=0x000000000034F07C string=0x000000000034F080 "X"
 *   insn=0x000000000034F080 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000034F088 string=0x00000000001F4B70 "P'"
 *   insn=0x000000000034F09C string=0x00000000001FABF0 "0'"
 *   insn=0x000000000034F0A8 string=0x000000000034F0AC ")"
 *   insn=0x000000000034F0C4 string=0x00000000001F8090 "0'"
 *   insn=0x000000000034F0D4 string=0x000000000034F0D8 "\n"
 *   insn=0x000000000034F0D8 string=0x000000000034F0DC "J"
 *   insn=0x000000000034F0DC string=0x000000000034F0E0 "\n"
 *   insn=0x000000000034F0E8 string=0x000000000034F0EC "4"
 *   insn=0x000000000034F0F0 string=0x000000000034F0F4 ""
 *   insn=0x000000000034F100 string=0x000000000034F104 "\t@"
 *   insn=0x000000000034F110 string=0x000000000034F114 ""
 *   insn=0x000000000034F120 string=0x000000000034F124 "@"
 *   insn=0x000000000034F130 string=0x000000000034F134 "4"
 *   insn=0x000000000034F138 string=0x000000000034F13C ""
 *   insn=0x000000000034F148 string=0x000000000034F14C "\t@"
 *   insn=0x000000000034F158 string=0x000000000034F15C ""
 *   insn=0x000000000034F168 string=0x000000000034F16C "@"
 *   insn=0x000000000034F194 string=0x000000000034F198 "\n"
 *   insn=0x000000000034F198 string=0x000000000034F19C "J"
 *   insn=0x000000000034F19C string=0x000000000034F1A0 "\n"
 *   insn=0x000000000034F1A8 string=0x000000000034F1AC "4"
 *   insn=0x000000000034F1B0 string=0x000000000034F1B4 ""
 *   insn=0x000000000034F1C0 string=0x000000000034F1C4 "\t@"
 *   insn=0x000000000034F1D0 string=0x000000000034F1D4 ""
 *   insn=0x000000000034F1E0 string=0x000000000034F1E4 "@"
 *   insn=0x000000000034F1F0 string=0x000000000034F1F4 "4"
 *   insn=0x000000000034F1F8 string=0x000000000034F1FC ""
 *   insn=0x000000000034F208 string=0x000000000034F20C "\t@"
 *   insn=0x000000000034F218 string=0x000000000034F21C ""
 *   insn=0x000000000034F228 string=0x000000000034F22C "@"
 *   insn=0x000000000034F238 string=0x000000000034F23C "\t"
 *   insn=0x000000000034F240 string=0x000000000034F244 "\t]"
 *   insn=0x000000000034F244 string=0x000000000034F248 "\n"
 *   insn=0x000000000034F248 string=0x000000000034F24C "t"
 *   insn=0x000000000034F254 string=0x00000000001FA5A0 "0'"
 *   insn=0x000000000034F260 string=0x00000000001F8A30 "0'"
 *   insn=0x000000000034F26C string=0x000000000034F270 ""
 *   insn=0x000000000034F274 string=0x000000000034F278 "A"
 *   insn=0x000000000034F280 string=0x000000000034F284 "\t@"
 *   insn=0x000000000034F28C string=0x000000000034F290 ""
 *   insn=0x000000000034F294 string=0x000000000034F298 "A"
 *   insn=0x000000000034F2A0 string=0x000000000034F2A4 "@"
 *   insn=0x000000000034F2B0 string=0x000000000034F2B4 "\t"
 *   insn=0x000000000034F2B4 string=0x000000000034F2B8 "=@"
 *   insn=0x000000000034F2F0 string=0x000000000034F2F4 "4"
 *   insn=0x000000000034F2F8 string=0x000000000034F2FC ""
 *   insn=0x000000000034F308 string=0x000000000034F30C "\t@"
 *   insn=0x000000000034F318 string=0x000000000034F31C ""
 *   insn=0x000000000034F328 string=0x000000000034F32C "@"
 *   insn=0x000000000034F334 string=0x000000000034F338 " "
 *   insn=0x000000000034F348 string=0x000000000034F34C ""
 *   insn=0x000000000034F350 string=0x000000000034F354 "!"
 *   insn=0x000000000034F358 string=0x000000000034F35C "\t@"
 *   insn=0x000000000034F368 string=0x000000000034F36C ""
 *   insn=0x000000000034F370 string=0x000000000034F374 "!"
 *   insn=0x000000000034F378 string=0x000000000034F37C "@"
 *   insn=0x000000000034F394 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000034F398 string=0x000000000034F39C "J"
 *   insn=0x000000000034F3B8 string=0x000000000034F3BC "4"
 *   insn=0x000000000034F3C0 string=0x000000000034F3C4 ""
 *   insn=0x000000000034F3D0 string=0x000000000034F3D4 "\t@"
 *   insn=0x000000000034F3E0 string=0x000000000034F3E4 ""
 *   insn=0x000000000034F3F0 string=0x000000000034F3F4 "@"
 *   insn=0x000000000034F400 string=0x000000000034F404 "0"
 *   insn=0x000000000034F434 string=0x000000000034F438 ""
 *   insn=0x000000000034F438 string=0x000000000034F43C ""
 *   insn=0x000000000034F450 string=0x000000000034F454 ""
 *   insn=0x000000000034F45C string=0x000000000034F460 "l"
 *   insn=0x000000000034F460 string=0x00000000001F7210 "0'"
 *   insn=0x000000000034F468 string=0x000000000034F46C "Q"
 *   insn=0x000000000034F46C string=0x00000000001F55B0 "P'"
 *   insn=0x000000000034F474 string=0x000000000034F478 "y@"
 *   insn=0x000000000034F47C string=0x000000000034F480 ""
 *   insn=0x000000000034F480 string=0x000000000034F484 "\t"
 *   insn=0x000000000034F488 string=0x000000000034F48C " "
 *   insn=0x000000000034F48C string=0x000000000034F490 "\t@"
 *   insn=0x000000000034F494 string=0x000000000034F498 "!5G"
 *   insn=0x000000000034F494 string=0x0000000000583734 "o"
 *   insn=0x000000000034F4A0 string=0x000000000034F4A4 "l"
 *   insn=0x000000000034F4A4 string=0x000000000034F4A8 ""
 *   insn=0x000000000034F4A8 string=0x000000000034F4AC ""
 *   insn=0x000000000034F4C8 string=0x00000000001F9850 "0'"
 *   insn=0x000000000034F4E0 string=0x000000000034F4E4 ""
 *   insn=0x000000000034F4EC string=0x000000000034F4F0 "H"
 *   insn=0x000000000034F4F8 string=0x000000000034F4FC "-"
 *   insn=0x000000000034F514 string=0x000000000034F518 ""
 *   insn=0x000000000034F520 string=0x000000000034F524 ";"
 *   insn=0x000000000034F52C string=0x000000000034F530 " "
 *   insn=0x000000000034F538 string=0x000000000034F53C "(,@"
 *   insn=0x000000000034F53C string=0x000000000034F540 "h"
 *   insn=0x000000000034F540 string=0x000000000034F544 "("
 *   insn=0x000000000034F574 string=0x000000000034F578 "6"
 *   insn=0x000000000034F578 string=0x00000000001F8650 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameSceneView::Update(Caver::GameSceneView *this, float a2)
{
  __int64 v4; // x8
  __int64 v5; // x9
  Caver::HealthBar *v6; // x0
  _DWORD *v7; // x22
  int v8; // w1
  Caver::HealthBar *v9; // x0
  Caver::ManaBar *v10; // x0
  __int64 v11; // x8
  _QWORD *v12; // x20
  __int64 v13; // x23
  __int64 v14; // x8
  Caver::GameOverlayView *v15; // x20
  _QWORD *v16; // x8
  char CanCastSkill; // w0
  __int64 v18; // x8
  __int64 v19; // x8
  Caver::CoinBar *v20; // x0
  Caver::GameOverlayView *v21; // x0
  bool v22; // w1
  Caver::CharControllerComponent *v23; // x0
  Caver::GameOverlayView *v24; // x20
  char CanUse; // w0
  float v26; // s0
  Caver::GUIEffect *v27; // x0
  Caver::GUIEffect *v28; // x0
  _QWORD *v30; // [xsp+A0h] [xbp-40h]

  _ReadStatusReg(TPIDR_EL0);
  v4 = *((_QWORD *)this + 32);
  if ( v4 )
  {
    v5 = *((_QWORD *)this + 30);
    v6 = *(Caver::HealthBar **)(v4 + 488);
    v7 = *(_DWORD **)(v5 + 8);
    if ( v6 )
    {
      Caver::HealthBar::SetMaxHealth(v6, 2 * v7[47] + 4);
      v8 = v7[42];
      v9 = *(Caver::HealthBar **)(*((_QWORD *)this + 32) + 488LL);
      if ( v8 < *((_DWORD *)v9 + 68) )
      {
        *(_DWORD *)(*((_QWORD *)this + 46) + 72LL) = -872415028;
        Caver::GUIEffect::FadeOut(*((Caver::GUIEffect **)this + 46), 0.0);
        Caver::GUIEffect::FadeIn(*((Caver::GUIEffect **)this + 46), 0.6);
        v8 = v7[42];
        v9 = *(Caver::HealthBar **)(*((_QWORD *)this + 32) + 488LL);
      }
      Caver::HealthBar::SetCurrentHealth(v9, v8);
      v4 = *((_QWORD *)this + 32);
    }
    v10 = *(Caver::ManaBar **)(v4 + 504);
    if ( v10 )
    {
      Caver::ManaBar::SetMaxMana(v10, 20 * v7[49] + 10);
      Caver::ManaBar::SetCurrentMana(*(Caver::ManaBar **)(*((_QWORD *)this + 32) + 504LL), v7[43]);
      v11 = *(_QWORD *)(*((_QWORD *)this + 30) + 8LL);
      v13 = *(_QWORD *)(v11 + 104);
      v12 = *(_QWORD **)(v11 + 112);
      if ( v12 )
      {
        if ( !v12[1] )
        {
          (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
          v14 = v12[2] - 1LL;
          v12[2] = v14;
          if ( !v14 )
            (*(void (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
        }
      }
      if ( v13 )
      {
        v15 = (Caver::GameOverlayView *)*((_QWORD *)this + 32);
        v16 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 30) + 8LL) + 112LL);
        v30 = v16;
        if ( v16 )
          ++v16[1];
        CanCastSkill = Caver::GameSceneController::CanCastSkill();
        Caver::GameOverlayView::SetSkillButtonDisabled(v15, (CanCastSkill & 1) == 0);
        if ( v30 )
        {
          v18 = v30[1] - 1LL;
          v30[1] = v18;
          if ( !v18 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v30 + 16LL))(v30);
            v19 = v30[2] - 1LL;
            v30[2] = v19;
            if ( !v19 )
              (*(void (__fastcall **)(_QWORD *))(*v30 + 24LL))(v30);
          }
        }
      }
    }
    v20 = *(Caver::CoinBar **)(*((_QWORD *)this + 32) + 568LL);
    if ( v20 )
      Caver::CoinBar::SetCurrentCoins(v20);
  }
  if ( *(int *)(*(_QWORD *)(*((_QWORD *)this + 30) + 32LL) + 32LL) > 0 || *((_BYTE *)this + 408) )
  {
    v21 = (Caver::GameOverlayView *)*((_QWORD *)this + 32);
    v22 = 1;
  }
  else
  {
    v21 = (Caver::GameOverlayView *)*((_QWORD *)this + 32);
    v22 = 0;
  }
  Caver::GameOverlayView::SetControlsHidden(v21, v22);
  v23 = *(Caver::CharControllerComponent **)(*((_QWORD *)this + 30) + 224LL);
  if ( v23 )
  {
    v24 = (Caver::GameOverlayView *)*((_QWORD *)this + 32);
    if ( (Caver::CharControllerComponent::CanPickup(v23) & 1) != 0 )
      CanUse = 1;
    else
      CanUse = Caver::CharControllerComponent::CanUse(*(Caver::CharControllerComponent **)(*((_QWORD *)this + 30) + 224LL));
    Caver::GameOverlayView::SetShowsUseButton(v24, CanUse & 1);
  }
  if ( *((_BYTE *)this + 344) )
  {
    v26 = *((float *)this + 87) - a2;
    *((float *)this + 87) = v26;
    if ( v26 <= 0.0 )
      Caver::GameSceneView::HideCinematicSkipButton(this);
  }
  v27 = (Caver::GUIEffect *)*((_QWORD *)this + 49);
  if ( v27 )
    Caver::GUIEffect::Update(v27, a2);
  v28 = (Caver::GUIEffect *)*((_QWORD *)this + 44);
  if ( v28 )
    Caver::GUIEffect::Update(v28, a2);
  Caver::GUIEffect::Update(*((Caver::GUIEffect **)this + 46), a2);
  return Caver::GUIView::Update(this, a2);
}

