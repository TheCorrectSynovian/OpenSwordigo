/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A27CC
 * Mangled: _ZN5Caver20ProfileSelectionView9AnimateInEv
 * Demangled: Caver::ProfileSelectionView::AnimateIn(void)
 *
 * Callers: 1
 *   0x00000000001F4B30  Caver::ProfileSelectionView::AnimateIn(void)
 *
 * Callees: 10
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8A30  Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000001F9C60  Caver::Rectangle::TranslatedRectangle(Caver::Vector2 const&)
 *   0x00000000001FA5A0  Caver::GUIView::RemoveAllAnimations(void)
 *   0x00000000001FB420  Caver::GUIResponder::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *   0x00000000002010A0  Caver::ProfilePanelView::AnimateOut(void)
 *   0x00000000002018E0  Caver::ProfilePanelView::AnimateIn(void)
 *   0x0000000000203320  Caver::GUIAnimation::FrameAnimation(Caver::Rectangle const&,Caver::Rectangle const&,float)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 104
 *   insn=0x00000000003A27E4 string=0x00000000003A27E8 "V"
 *   insn=0x00000000003A27F4 string=0x00000000003A27F8 "`"
 *   insn=0x00000000003A27FC string=0x00000000003A2800 "`"
 *   insn=0x00000000003A27FC string=0x00000000003A28AC "h"
 *   insn=0x00000000003A2800 string=0x00000000003A2804 "a"
 *   insn=0x00000000003A2824 string=0x00000000003A2828 "h"
 *   insn=0x00000000003A2824 string=0x00000000001F9C60 "0'"
 *   insn=0x00000000003A2830 string=0x00000000003A2834 ""
 *   insn=0x00000000003A2848 string=0x00000000003A284C "t"
 *   insn=0x00000000003A2850 string=0x00000000003A2854 "S_"
 *   insn=0x00000000003A2854 string=0x00000000001FA5A0 "0'"
 *   insn=0x00000000003A285C string=0x00000000003A2860 "tX"
 *   insn=0x00000000003A2860 string=0x00000000001F8A30 "0'"
 *   insn=0x00000000003A2864 string=0x00000000003A2868 "4"
 *   insn=0x00000000003A286C string=0x00000000003A2870 ""
 *   insn=0x00000000003A2880 string=0x00000000003A2884 "\t@"
 *   insn=0x00000000003A288C string=0x00000000003A2890 ""
 *   insn=0x00000000003A28A0 string=0x00000000003A28A4 "@"
 *   insn=0x00000000003A28B4 string=0x00000000003A28B8 ""
 *   insn=0x00000000003A28B8 string=0x00000000003A28BC ")"
 *   insn=0x00000000003A28BC string=0x00000000003A28C0 "iO"
 *   insn=0x00000000003A28C0 string=0x00000000003A28C4 ")"
 *   insn=0x00000000003A28CC string=0x00000000003A28D0 "h"
 *   insn=0x00000000003A28DC string=0x00000000003A28E0 "`"
 *   insn=0x00000000003A28E0 string=0x00000000003A28E4 "a"
 *   insn=0x00000000003A2944 string=0x00000000003A2948 ":X"
 *   insn=0x00000000003A294C string=0x00000000003A2950 "4"
 *   insn=0x00000000003A2950 string=0x00000000003A2994 "h"
 *   insn=0x00000000003A2954 string=0x00000000003A2958 ""
 *   insn=0x00000000003A2968 string=0x00000000003A296C "\t@"
 *   insn=0x00000000003A2974 string=0x00000000003A2978 ""
 *   insn=0x00000000003A2988 string=0x00000000003A298C "@"
 *   insn=0x00000000003A29A0 string=0x00000000003A29A4 "k"
 *   insn=0x00000000003A29B4 string=0x00000000003A29D4 "?N"
 *   insn=0x00000000003A29D4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003A29E4 string=0x00000000003A29E8 ""
 *   insn=0x00000000003A29EC string=0x00000000003A29F0 "!"
 *   insn=0x00000000003A29F4 string=0x00000000003A29F8 "\t@"
 *   insn=0x00000000003A2A04 string=0x00000000003A2A08 ""
 *   insn=0x00000000003A2A0C string=0x00000000003A2A10 "!"
 *   insn=0x00000000003A2A14 string=0x00000000003A2A18 "@"
 *   insn=0x00000000003A2A2C string=0x00000000003A2A30 "4"
 *   insn=0x00000000003A2A34 string=0x00000000003A2A38 ""
 *   insn=0x00000000003A2A44 string=0x00000000003A2A48 "\t@"
 *   insn=0x00000000003A2A54 string=0x00000000003A2A58 ""
 *   insn=0x00000000003A2A64 string=0x00000000003A2A68 "@"
 *   insn=0x00000000003A2A78 string=0x00000000003A2A7C "4"
 *   insn=0x00000000003A2A98 string=0x00000000003A2A9C "V"
 *   insn=0x00000000003A2AA8 string=0x00000000003A2AAC "h"
 *   insn=0x00000000003A2AB0 string=0x00000000003A2AB4 "k"
 *   insn=0x00000000003A2AB4 string=0x00000000003A2AE0 "t"
 *   insn=0x00000000003A2ABC string=0x00000000003A2AC0 "h"
 *   insn=0x00000000003A2AC4 string=0x00000000003A2AC8 "vy"
 *   insn=0x00000000003A2AC8 string=0x00000000003A2ACC "h"
 *   insn=0x00000000003A2AD8 string=0x00000000003A2ADC "+"
 *   insn=0x00000000003A2AE4 string=0x00000000003A2AE8 "`"
 *   insn=0x00000000003A2AE8 string=0x00000000003A2AEC "a"
 *   insn=0x00000000003A2B0C string=0x00000000003A2B10 "T\"
 *   insn=0x00000000003A2B10 string=0x00000000003A2B14 ""
 *   insn=0x00000000003A2B34 string=0x00000000003A2B38 "t"
 *   insn=0x00000000003A2B50 string=0x00000000003A2B54 "4"
 *   insn=0x00000000003A2B54 string=0x00000000003A2B98 "h"
 *   insn=0x00000000003A2B58 string=0x00000000003A2B5C ""
 *   insn=0x00000000003A2B6C string=0x00000000003A2B70 "\t@"
 *   insn=0x00000000003A2B78 string=0x00000000003A2B7C ""
 *   insn=0x00000000003A2B8C string=0x00000000003A2B90 "@"
 *   insn=0x00000000003A2BA0 string=0x00000000003A2BA4 ""
 *   insn=0x00000000003A2BA4 string=0x00000000003A2BA8 ")"
 *   insn=0x00000000003A2BA8 string=0x00000000003A2BAC "iO"
 *   insn=0x00000000003A2BAC string=0x00000000003A2BB0 ")QK"
 *   insn=0x00000000003A2BB8 string=0x00000000003A2BBC "h"
 *   insn=0x00000000003A2BC4 string=0x00000000003A2BC8 "F{"
 *   insn=0x00000000003A2BC8 string=0x00000000003A2BCC "`"
 *   insn=0x00000000003A2BCC string=0x00000000003A2BD0 "a"
 *   insn=0x00000000003A2C28 string=0x00000000003A2C2C "]^"
 *   insn=0x00000000003A2C34 string=0x00000000003A2C38 "~W"
 *   insn=0x00000000003A2C3C string=0x00000000003A2C40 "4"
 *   insn=0x00000000003A2C40 string=0x00000000003A2C84 "h"
 *   insn=0x00000000003A2C44 string=0x00000000003A2C48 ""
 *   insn=0x00000000003A2C58 string=0x00000000003A2C5C "\t@"
 *   insn=0x00000000003A2C64 string=0x00000000003A2C68 ""
 *   insn=0x00000000003A2C78 string=0x00000000003A2C7C "@"
 *   insn=0x00000000003A2C90 string=0x00000000003A2C94 "K"
 *   insn=0x00000000003A2CD4 string=0x00000000003A2CD8 ""
 *   insn=0x00000000003A2CDC string=0x00000000003A2CE0 "!"
 *   insn=0x00000000003A2CE4 string=0x00000000003A2CE8 "\t@"
 *   insn=0x00000000003A2CF4 string=0x00000000003A2CF8 ""
 *   insn=0x00000000003A2CFC string=0x00000000003A2D00 "!"
 *   insn=0x00000000003A2D04 string=0x00000000003A2D08 "@"
 *   insn=0x00000000003A2D1C string=0x00000000003A2D20 "4"
 *   insn=0x00000000003A2D24 string=0x00000000003A2D28 ""
 *   insn=0x00000000003A2D34 string=0x00000000003A2D38 "\t@"
 *   insn=0x00000000003A2D44 string=0x00000000003A2D48 ""
 *   insn=0x00000000003A2D54 string=0x00000000003A2D58 "@"
 *   insn=0x00000000003A2D68 string=0x00000000003A2D6C "x"
 *   insn=0x00000000003A2D6C string=0x00000000003A2D70 "("
 *   insn=0x00000000003A2D7C string=0x00000000003A2D80 ")"
 *   insn=0x00000000003A2D80 string=0x00000000003A2D84 "?"
 *   insn=0x00000000003A2D84 string=0x00000000003A2D88 "`"
 *   insn=0x00000000003A2D88 string=0x00000000003A2D8C "?m"
 *   insn=0x00000000003A2D98 string=0x00000000003A2D9C "\t"
 *   insn=0x00000000003A2DA0 string=0x00000000003A2DA4 """
 *   insn=0x00000000003A2DA4 string=0x00000000003A2DA8 "@"
 *   insn=0x00000000003A2DB0 string=0x00000000001FB420 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProfileSelectionView::AnimateIn(Caver::ProfileSelectionView *this)
{
  __int64 result; // x0
  _QWORD *v3; // x20
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x23
  __int64 v7; // x24
  __int64 v8; // x20
  _QWORD *v9; // x20
  __int64 v10; // x8
  __int64 v11; // x8
  float v12; // [xsp+80h] [xbp-70h] BYREF
  int v13; // [xsp+84h] [xbp-6Ch]
  __int64 v14[2]; // [xsp+88h] [xbp-68h] BYREF
  __int64 v15; // [xsp+98h] [xbp-58h]
  _QWORD *v16; // [xsp+A0h] [xbp-50h]
  __int64 v17; // [xsp+A8h] [xbp-48h]

  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = *((_QWORD *)this + 36);
  if ( result )
  {
    v12 = (float)(*((float *)this + 33) + *((float *)this + 35)) - *(float *)(result + 116);
    v13 = 0;
    Caver::Rectangle::TranslatedRectangle(v14, (Caver::Rectangle *)(result + 116), (const Caver::Vector2 *)&v12);
    Caver::GUIAnimation::FrameAnimation();
    *(_DWORD *)(v15 + 88) = 0;
    Caver::GUIView::RemoveAllAnimations(*((Caver::GUIView **)this + 36));
    result = Caver::GUIView::AddAnimation();
    v3 = v16;
    if ( v16 )
    {
      v4 = v16[1] - 1LL;
      v16[1] = v4;
      if ( !v4 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
        v5 = v3[2] - 1LL;
        v3[2] = v5;
        if ( !v5 )
          result = (*(__int64 (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
      }
    }
  }
  if ( *((int *)this + 68) >= 1 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = *(_QWORD *)(*((_QWORD *)this + 35) + v6);
      Caver::ProfilePanelView::AnimateIn((Caver::ProfilePanelView *)v8);
      v12 = (float)(*((float *)this + 33) + *((float *)this + 35)) - *(float *)(v8 + 116);
      v13 = 0;
      Caver::Rectangle::TranslatedRectangle(v14, (Caver::Rectangle *)(v8 + 116), (const Caver::Vector2 *)&v12);
      Caver::GUIAnimation::FrameAnimation();
      *(float *)(v15 + 88) = (float)((float)(int)v7 * 0.05) + 0.05;
      Caver::GUIView::RemoveAllAnimations((Caver::GUIView *)v8);
      result = Caver::GUIView::AddAnimation();
      v9 = v16;
      if ( v16 )
      {
        v10 = v16[1] - 1LL;
        v16[1] = v10;
        if ( !v10 )
        {
          result = (*(__int64 (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
          v11 = v9[2] - 1LL;
          v9[2] = v11;
          if ( !v11 )
            result = (*(__int64 (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
        }
      }
      ++v7;
      v6 += 16;
    }
    while ( v7 < *((int *)this + 68) );
  }
  return result;
}

