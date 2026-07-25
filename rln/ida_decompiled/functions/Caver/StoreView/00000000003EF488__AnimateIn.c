/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003EF488
 * Mangled: _ZN5Caver9StoreView9AnimateInEv
 * Demangled: Caver::StoreView::AnimateIn(void)
 *
 * Callers: 1
 *   0x00000000001F3AF0  Caver::StoreView::AnimateIn(void)
 *
 * Callees: 11
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8A30  Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000001F9C60  Caver::Rectangle::TranslatedRectangle(Caver::Vector2 const&)
 *   0x00000000001FA5A0  Caver::GUIView::RemoveAllAnimations(void)
 *   0x00000000001FB420  Caver::GUIResponder::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *   0x00000000001FEA30  Caver::GUIAnimation::ScaleAnimation(float,float,float)
 *   0x0000000000200B40  Caver::GUIAnimation::AlphaAnimation(float,float,float)
 *   0x0000000000203320  Caver::GUIAnimation::FrameAnimation(Caver::Rectangle const&,Caver::Rectangle const&,float)
 *   0x0000000000203510  Caver::GUIControl::SendActionsForControlEvent(Caver::GUIControl::Event,uint)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 84
 *   insn=0x00000000003EF4A0 string=0x00000000003EF4A4 "V"
 *   insn=0x00000000003EF4C8 string=0x00000000003EF4CC "5,"
 *   insn=0x00000000003EF4CC string=0x00000000001FA5A0 "0'"
 *   insn=0x00000000003EF4D4 string=0x00000000003EF4D8 "V%"
 *   insn=0x00000000003EF4D8 string=0x00000000003EF4DC "h&T"
 *   insn=0x00000000003EF4D8 string=0x00000000001F8A30 "0'"
 *   insn=0x00000000003EF4DC string=0x00000000003EF4E0 "?"
 *   insn=0x00000000003EF4E8 string=0x00000000003EF4EC "3"
 *   insn=0x00000000003EF4EC string=0x00000000003EF4F0 "h"
 *   insn=0x00000000003EF4F0 string=0x00000000003EF4F4 ""
 *   insn=0x00000000003EF4F4 string=0x00000000003EF4F8 "h"
 *   insn=0x00000000003EF4FC string=0x00000000003EF500 "h"
 *   insn=0x00000000003EF504 string=0x00000000003EF508 "\t@"
 *   insn=0x00000000003EF50C string=0x00000000003EF510 "h\n@"
 *   insn=0x00000000003EF510 string=0x00000000003EF514 ""
 *   insn=0x00000000003EF514 string=0x00000000003EF518 "h\n"
 *   insn=0x00000000003EF51C string=0x00000000003EF520 "h"
 *   insn=0x00000000003EF524 string=0x00000000003EF528 "@"
 *   insn=0x00000000003EF560 string=0x00000000003EF564 "(iO"
 *   insn=0x00000000003EF564 string=0x00000000003EF568 "I"
 *   insn=0x00000000003EF57C string=0x00000000003EF580 "h"
 *   insn=0x00000000003EF594 string=0x00000000003EF598 "A8#"
 *   insn=0x00000000003EF598 string=0x00000000003EF59C " 8 "
 *   insn=0x00000000003EF5B0 string=0x00000000001F9C60 "0'"
 *   insn=0x00000000003EF5C0 string=0x00000000003EF5C4 "WO"
 *   insn=0x00000000003EF5F0 string=0x00000000003EF5F4 "4"
 *   insn=0x00000000003EF5F4 string=0x00000000003EF638 "h&T"
 *   insn=0x00000000003EF5F8 string=0x00000000003EF5FC ""
 *   insn=0x00000000003EF608 string=0x00000000003EF60C "\t@"
 *   insn=0x00000000003EF618 string=0x00000000003EF61C ""
 *   insn=0x00000000003EF628 string=0x00000000003EF62C "@"
 *   insn=0x00000000003EF640 string=0x00000000003EF644 ")"
 *   insn=0x00000000003EF644 string=0x00000000003EF648 ")"
 *   insn=0x00000000003EF648 string=0x00000000003EF64C "?"
 *   insn=0x00000000003EF64C string=0x00000000003EF650 "("
 *   insn=0x00000000003EF658 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003EF668 string=0x00000000003EF66C "4"
 *   insn=0x00000000003EF670 string=0x00000000003EF674 ""
 *   insn=0x00000000003EF680 string=0x00000000003EF684 "\t@"
 *   insn=0x00000000003EF690 string=0x00000000003EF694 ""
 *   insn=0x00000000003EF6A0 string=0x00000000003EF6A4 "@"
 *   insn=0x00000000003EF6C0 string=0x00000000003EF6C4 "4"
 *   insn=0x00000000003EF6C8 string=0x00000000003EF6CC ""
 *   insn=0x00000000003EF6D8 string=0x00000000003EF6DC "\t@"
 *   insn=0x00000000003EF6E8 string=0x00000000003EF6EC ""
 *   insn=0x00000000003EF6F8 string=0x00000000003EF6FC "@"
 *   insn=0x00000000003EF708 string=0x00000000003EF70C "nH"
 *   insn=0x00000000003EF724 string=0x00000000003EF728 "U"
 *   insn=0x00000000003EF734 string=0x00000000003EF738 "hz@"
 *   insn=0x00000000003EF738 string=0x00000000003EF73C ""
 *   insn=0x00000000003EF758 string=0x00000000003EF75C "tz@"
 *   insn=0x00000000003EF774 string=0x00000000003EF778 "4"
 *   insn=0x00000000003EF77C string=0x00000000003EF780 ""
 *   insn=0x00000000003EF790 string=0x00000000003EF794 "\t@"
 *   insn=0x00000000003EF79C string=0x00000000003EF7A0 ""
 *   insn=0x00000000003EF7B0 string=0x00000000003EF7B4 "@"
 *   insn=0x00000000003EF7D8 string=0x00000000003EF7DC "q+"
 *   insn=0x00000000003EF7EC string=0x00000000003EF7F0 "3"
 *   insn=0x00000000003EF7F0 string=0x00000000003EF7F4 "h"
 *   insn=0x00000000003EF7F4 string=0x00000000003EF7F8 ""
 *   insn=0x00000000003EF7F8 string=0x00000000003EF7FC "h"
 *   insn=0x00000000003EF800 string=0x00000000003EF804 "h"
 *   insn=0x00000000003EF808 string=0x00000000003EF80C "\t@"
 *   insn=0x00000000003EF810 string=0x00000000003EF814 "h\n@"
 *   insn=0x00000000003EF814 string=0x00000000003EF818 ""
 *   insn=0x00000000003EF818 string=0x00000000003EF81C "h\n"
 *   insn=0x00000000003EF820 string=0x00000000003EF824 "h"
 *   insn=0x00000000003EF828 string=0x00000000003EF82C "@"
 *   insn=0x00000000003EF868 string=0x00000000003EF86C ""
 *   insn=0x00000000003EF870 string=0x00000000003EF874 "!"
 *   insn=0x00000000003EF878 string=0x00000000003EF87C "\t@"
 *   insn=0x00000000003EF888 string=0x00000000003EF88C ""
 *   insn=0x00000000003EF890 string=0x00000000003EF894 "!"
 *   insn=0x00000000003EF898 string=0x00000000003EF89C "@"
 *   insn=0x00000000003EF8B0 string=0x00000000003EF8B4 "4"
 *   insn=0x00000000003EF8B8 string=0x00000000003EF8BC ""
 *   insn=0x00000000003EF8C8 string=0x00000000003EF8CC "\t@"
 *   insn=0x00000000003EF8D8 string=0x00000000003EF8DC ""
 *   insn=0x00000000003EF8E8 string=0x00000000003EF8EC "@"
 *   insn=0x00000000003EF900 string=0x00000000003EF904 "("
 *   insn=0x00000000003EF908 string=0x00000000003EF90C "A"
 *   insn=0x00000000003EF90C string=0x00000000003EF910 "("
 *   insn=0x00000000003EF914 string=0x00000000003EF918 "`"
 *   insn=0x00000000003EF934 string=0x00000000001FB420 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::StoreView::AnimateIn(Caver::StoreView *this)
{
  __int64 result; // x0
  __int64 v3; // x8
  _QWORD *v4; // x19
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v7; // x23
  unsigned __int64 v8; // x24
  float *v9; // x20
  __int64 v10; // x8
  float v11; // s2
  float v12; // s3
  float v13; // s0
  _QWORD *v14; // x20
  __int64 v15; // x8
  __int64 v16; // x8
  float v17[2]; // [xsp+48h] [xbp-80h] BYREF
  __int64 v18[3]; // [xsp+50h] [xbp-78h] BYREF
  _QWORD *v19; // [xsp+68h] [xbp-60h]
  __int64 v20; // [xsp+70h] [xbp-58h] BYREF
  _QWORD *v21; // [xsp+78h] [xbp-50h]
  __int64 v22; // [xsp+80h] [xbp-48h]

  v22 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIAnimation::AlphaAnimation(&v20, this, 0.0, 1.0, 0.25);
  Caver::GUIView::RemoveAllAnimations(this);
  result = Caver::GUIView::AddAnimation();
  v3 = *((_QWORD *)this + 40);
  if ( *((_QWORD *)this + 41) != v3 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      v9 = *(float **)(v3 + v7);
      v10 = *((_QWORD *)this + 38);
      v11 = *(float *)(v10 + 132);
      v12 = *(float *)(v10 + 116);
      v13 = v9[29] + v9[31];
      v17[1] = 0.0;
      v17[0] = (float)(v11 - v12) - v13;
      Caver::Rectangle::TranslatedRectangle(v18, (Caver::Rectangle *)(v9 + 29), (const Caver::Vector2 *)v17);
      Caver::GUIAnimation::FrameAnimation();
      *(float *)(v18[2] + 88) = (float)((float)(int)v8 * 0.05) + 0.05;
      Caver::GUIView::RemoveAllAnimations((Caver::GUIView *)v9);
      result = Caver::GUIView::AddAnimation();
      v14 = v19;
      if ( v19 )
      {
        v15 = v19[1] - 1LL;
        v19[1] = v15;
        if ( !v15 )
        {
          result = (*(__int64 (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
          v16 = v14[2] - 1LL;
          v14[2] = v16;
          if ( !v16 )
            result = (*(__int64 (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
        }
      }
      v3 = *((_QWORD *)this + 40);
      ++v8;
      v7 += 16;
    }
    while ( (*((_QWORD *)this + 41) - v3) >> 4 > v8 );
  }
  v4 = v21;
  if ( v21 )
  {
    v5 = v21[1] - 1LL;
    v21[1] = v5;
    if ( !v5 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
      v6 = v4[2] - 1LL;
      v4[2] = v6;
      if ( !v6 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
    }
  }
  return result;
}

