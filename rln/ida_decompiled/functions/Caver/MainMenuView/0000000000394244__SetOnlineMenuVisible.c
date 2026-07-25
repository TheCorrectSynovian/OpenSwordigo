/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000394244
 * Mangled: _ZN5Caver12MainMenuView20SetOnlineMenuVisibleEb
 * Demangled: Caver::MainMenuView::SetOnlineMenuVisible(bool)
 *
 * Callers: 1
 *   0x00000000001FA700  Caver::MainMenuView::SetOnlineMenuVisible(bool)
 *
 * Callees: 8
 *   0x00000000001F4030  Caver::OnlineMenuView::AnimateIn(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8A30  Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000001FA5A0  Caver::GUIView::RemoveAllAnimations(void)
 *   0x00000000001FAD50  Caver::MainMenuView::AnimateButtonsIn(float)
 *   0x0000000000200B40  Caver::GUIAnimation::AlphaAnimation(float,float,float)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 89
 *   insn=0x0000000000394254 string=0x0000000000394258 "U"
 *   insn=0x0000000000394264 string=0x0000000000394268 "`"
 *   insn=0x0000000000394268 string=0x000000000039426C ""
 *   insn=0x0000000000394274 string=0x0000000000394278 ""
 *   insn=0x000000000039427C string=0x0000000000394280 "A\t"
 *   insn=0x0000000000394280 string=0x0000000000394284 "h"
 *   insn=0x0000000000394288 string=0x000000000039428C "\t"
 *   insn=0x0000000000394290 string=0x0000000000394294 "g"
 *   insn=0x0000000000394294 string=0x0000000000394298 "t"
 *   insn=0x0000000000394294 string=0x00000000001F4030 "P'"
 *   insn=0x00000000003942A8 string=0x00000000003942AC "h"
 *   insn=0x00000000003942B4 string=0x00000000003942B8 """
 *   insn=0x00000000003942C0 string=0x00000000001FA5A0 "0'"
 *   insn=0x00000000003942CC string=0x00000000001F8A30 "0'"
 *   insn=0x00000000003942D0 string=0x00000000003942D4 "4"
 *   insn=0x00000000003942D4 string=0x0000000000394318 "t"
 *   insn=0x00000000003942D8 string=0x00000000003942DC ""
 *   insn=0x00000000003942EC string=0x00000000003942F0 "\t@"
 *   insn=0x00000000003942F8 string=0x00000000003942FC ""
 *   insn=0x000000000039430C string=0x0000000000394310 "@"
 *   insn=0x0000000000394344 string=0x0000000000394348 "4"
 *   insn=0x0000000000394348 string=0x000000000039438C "h"
 *   insn=0x000000000039434C string=0x0000000000394350 ""
 *   insn=0x0000000000394360 string=0x0000000000394364 "\t@"
 *   insn=0x000000000039436C string=0x0000000000394370 ""
 *   insn=0x0000000000394380 string=0x0000000000394384 "@"
 *   insn=0x0000000000394394 string=0x0000000000394398 "\t"
 *   insn=0x0000000000394398 string=0x000000000039439C "h"
 *   insn=0x000000000039439C string=0x00000000003943A0 "\t"
 *   insn=0x00000000003943A0 string=0x00000000003943A4 "J"
 *   insn=0x00000000003943AC string=0x00000000003943B0 "h"
 *   insn=0x00000000003943BC string=0x00000000003943C0 "d"
 *   insn=0x00000000003943C0 string=0x00000000003943C4 "h"
 *   insn=0x00000000003943C0 string=0x00000000001FAD50 "0'"
 *   insn=0x00000000003943C8 string=0x00000000003943CC "h"
 *   insn=0x00000000003943D0 string=0x00000000003943D4 "t"
 *   insn=0x00000000003943DC string=0x00000000003943E0 "h"
 *   insn=0x00000000003943FC string=0x0000000000394400 "h"
 *   insn=0x0000000000394410 string=0x0000000000394414 "4"
 *   insn=0x0000000000394414 string=0x0000000000394458 "s"
 *   insn=0x0000000000394418 string=0x000000000039441C ""
 *   insn=0x000000000039442C string=0x0000000000394430 "\t@"
 *   insn=0x0000000000394438 string=0x000000000039443C ""
 *   insn=0x000000000039444C string=0x0000000000394450 "@"
 *   insn=0x0000000000394470 string=0x0000000000394474 "K"
 *   insn=0x000000000039447C string=0x0000000000394480 "l"
 *   insn=0x0000000000394484 string=0x0000000000394488 "3"
 *   insn=0x0000000000394488 string=0x000000000039448C "h"
 *   insn=0x000000000039448C string=0x0000000000394490 ""
 *   insn=0x0000000000394490 string=0x0000000000394494 "h"
 *   insn=0x0000000000394498 string=0x000000000039449C "h"
 *   insn=0x00000000003944A0 string=0x00000000003944A4 "\t@"
 *   insn=0x00000000003944A8 string=0x00000000003944AC "h\n@"
 *   insn=0x00000000003944AC string=0x00000000003944B0 ""
 *   insn=0x00000000003944B0 string=0x00000000003944B4 "h\n"
 *   insn=0x00000000003944B8 string=0x00000000003944BC "h"
 *   insn=0x00000000003944C0 string=0x00000000003944C4 "@"
 *   insn=0x00000000003944D8 string=0x00000000003944F0 "x"
 *   insn=0x00000000003944F0 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000394500 string=0x0000000000394504 ""
 *   insn=0x0000000000394508 string=0x000000000039450C "!\t"
 *   insn=0x0000000000394510 string=0x0000000000394514 "\t@"
 *   insn=0x0000000000394520 string=0x0000000000394524 ""
 *   insn=0x0000000000394528 string=0x000000000039452C "!"
 *   insn=0x0000000000394530 string=0x0000000000394534 "@"
 *   insn=0x000000000039453C string=0x0000000000394540 "<"
 *   insn=0x0000000000394548 string=0x000000000039454C "4"
 *   insn=0x0000000000394550 string=0x0000000000394554 ""
 *   insn=0x0000000000394560 string=0x0000000000394564 "\t@"
 *   insn=0x0000000000394570 string=0x0000000000394574 ""
 *   insn=0x0000000000394580 string=0x0000000000394584 "@"
 *   insn=0x000000000039458C string=0x0000000000394590 "("
 *   insn=0x00000000003945A0 string=0x00000000003945A4 ""
 *   insn=0x00000000003945A8 string=0x00000000003945AC "!"
 *   insn=0x00000000003945B0 string=0x00000000003945B4 "\t@"
 *   insn=0x00000000003945C0 string=0x00000000003945C4 ""
 *   insn=0x00000000003945C8 string=0x00000000003945CC "!"
 *   insn=0x00000000003945D0 string=0x00000000003945D4 "@"
 *   insn=0x00000000003945E8 string=0x00000000003945EC "4"
 *   insn=0x00000000003945F0 string=0x00000000003945F4 ""
 *   insn=0x0000000000394600 string=0x0000000000394604 "\t@"
 *   insn=0x0000000000394610 string=0x0000000000394614 ""
 *   insn=0x0000000000394620 string=0x0000000000394624 "@"
 *   insn=0x0000000000394634 string=0x0000000000394638 "E"
 *   insn=0x0000000000394638 string=0x000000000039463C "4A"
 *   insn=0x0000000000394644 string=0x0000000000394648 ")"
 *   insn=0x0000000000394648 string=0x000000000039464C "\t"
 *   insn=0x000000000039464C string=0x0000000000394650 "<A"
 *   insn=0x0000000000394650 string=0x0000000000394654 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::OnlineMenuView *__fastcall Caver::MainMenuView::SetOnlineMenuVisible(Caver::MainMenuView *this, int a2)
{
  Caver::OnlineMenuView *result; // x0
  Caver::GUIAnimation *v4; // x0
  Caver::GUIView *v5; // x20
  Caver::GUIAnimation *v6; // x0
  _QWORD *v7; // x20
  __int64 v8; // x8
  __int64 v9; // x8
  Caver::GUIView *v10; // x20
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 v14; // x8
  Caver::GUIView *v15; // x20
  Caver::GUIAnimation *v16; // x0
  _QWORD *v17; // x20
  __int64 v18; // x8
  __int64 v19; // x8
  Caver::GUIView *v20; // x19
  _QWORD *v21; // x19
  __int64 v22; // x8
  __int64 v23; // x8
  __int64 v24; // [xsp+8h] [xbp-38h] BYREF
  _QWORD *v25; // [xsp+10h] [xbp-30h]
  __int64 v26; // [xsp+18h] [xbp-28h]

  v26 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = (Caver::OnlineMenuView *)*((_QWORD *)this + 53);
  if ( (((*((_BYTE *)result + 228) == 0) ^ a2) & 1) != 0 )
  {
    if ( (a2 & 1) != 0 )
    {
      *(_BYTE *)(*((_QWORD *)this + 33) + 228LL) = 1;
      *((_BYTE *)result + 228) = 0;
      v4 = (Caver::GUIAnimation *)Caver::OnlineMenuView::AnimateIn(result);
      v5 = (Caver::GUIView *)*((_QWORD *)this + 65);
      *((_BYTE *)v5 + 228) = 0;
      *(_BYTE *)(*((_QWORD *)this + 67) + 228LL) = 0;
      Caver::GUIAnimation::AlphaAnimation(&v24, v4, 0.0, 1.0, 0.5);
      Caver::GUIView::RemoveAllAnimations(v5);
      v6 = (Caver::GUIAnimation *)Caver::GUIView::AddAnimation();
      v7 = v25;
      if ( v25 )
      {
        v8 = v25[1] - 1LL;
        v25[1] = v8;
        if ( !v8 )
        {
          v6 = (Caver::GUIAnimation *)(*(__int64 (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
          v9 = v7[2] - 1LL;
          v7[2] = v9;
          if ( !v9 )
            v6 = (Caver::GUIAnimation *)(*(__int64 (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
        }
      }
      v10 = (Caver::GUIView *)*((_QWORD *)this + 67);
      Caver::GUIAnimation::AlphaAnimation(&v24, v6, 0.0, 1.0, 0.5);
      Caver::GUIView::RemoveAllAnimations(v10);
      result = (Caver::OnlineMenuView *)Caver::GUIView::AddAnimation();
      v11 = v25;
      if ( v25 )
      {
        v12 = v25[1] - 1LL;
        v25[1] = v12;
        if ( !v12 )
        {
          result = (Caver::OnlineMenuView *)(*(__int64 (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
          v13 = v11[2] - 1LL;
          v11[2] = v13;
          if ( !v13 )
            result = (Caver::OnlineMenuView *)(*(__int64 (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
        }
      }
      v14 = *((_QWORD *)this + 71);
      if ( v14 )
      {
        *(_BYTE *)(v14 + 228) = 1;
        *(_BYTE *)(*((_QWORD *)this + 69) + 228LL) = 1;
      }
    }
    else
    {
      *((_BYTE *)result + 228) = 1;
      *(_BYTE *)(*((_QWORD *)this + 33) + 228LL) = 0;
      result = (Caver::OnlineMenuView *)Caver::MainMenuView::AnimateButtonsIn(this, 0.0);
      *(_BYTE *)(*((_QWORD *)this + 65) + 228LL) = 1;
      *(_BYTE *)(*((_QWORD *)this + 67) + 228LL) = 1;
      v15 = (Caver::GUIView *)*((_QWORD *)this + 71);
      if ( v15 )
      {
        *((_BYTE *)v15 + 228) = 0;
        *(_BYTE *)(*((_QWORD *)this + 69) + 228LL) = 0;
        Caver::GUIAnimation::AlphaAnimation(&v24, result, 0.0, 1.0, 0.5);
        Caver::GUIView::RemoveAllAnimations(v15);
        v16 = (Caver::GUIAnimation *)Caver::GUIView::AddAnimation();
        v17 = v25;
        if ( v25 )
        {
          v18 = v25[1] - 1LL;
          v25[1] = v18;
          if ( !v18 )
          {
            v16 = (Caver::GUIAnimation *)(*(__int64 (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
            v19 = v17[2] - 1LL;
            v17[2] = v19;
            if ( !v19 )
              v16 = (Caver::GUIAnimation *)(*(__int64 (__fastcall **)(_QWORD *))(*v17 + 24LL))(v17);
          }
        }
        v20 = (Caver::GUIView *)*((_QWORD *)this + 69);
        Caver::GUIAnimation::AlphaAnimation(&v24, v16, 0.0, 1.0, 0.5);
        Caver::GUIView::RemoveAllAnimations(v20);
        result = (Caver::OnlineMenuView *)Caver::GUIView::AddAnimation();
        v21 = v25;
        if ( v25 )
        {
          v22 = v25[1] - 1LL;
          v25[1] = v22;
          if ( !v22 )
          {
            result = (Caver::OnlineMenuView *)(*(__int64 (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
            v23 = v21[2] - 1LL;
            v21[2] = v23;
            if ( !v23 )
              return (Caver::OnlineMenuView *)(*(__int64 (__fastcall **)(_QWORD *))(*v21 + 24LL))(v21);
          }
        }
      }
    }
  }
  return result;
}

