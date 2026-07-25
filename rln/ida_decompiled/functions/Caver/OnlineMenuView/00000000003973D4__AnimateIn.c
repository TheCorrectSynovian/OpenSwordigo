/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003973D4
 * Mangled: _ZN5Caver14OnlineMenuView9AnimateInEv
 * Demangled: Caver::OnlineMenuView::AnimateIn(void)
 *
 * Callers: 1
 *   0x00000000001F4030  Caver::OnlineMenuView::AnimateIn(void)
 *
 * Callees: 10
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8A30  Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000001F9C60  Caver::Rectangle::TranslatedRectangle(Caver::Vector2 const&)
 *   0x00000000001FA5A0  Caver::GUIView::RemoveAllAnimations(void)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x0000000000203320  Caver::GUIAnimation::FrameAnimation(Caver::Rectangle const&,Caver::Rectangle const&,float)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000397AAC  Caver::OnlineMenuView::~OnlineMenuView()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 126
 *   insn=0x00000000003973EC string=0x00000000003973F0 "V"
 *   insn=0x00000000003973FC string=0x0000000000397400 "h&O"
 *   insn=0x0000000000397400 string=0x0000000000397404 "?"
 *   insn=0x0000000000397404 string=0x0000000000397408 " "
 *   insn=0x000000000039740C string=0x0000000000397410 ")"
 *   insn=0x0000000000397418 string=0x000000000039741C ""
 *   insn=0x0000000000397420 string=0x0000000000397424 "`"
 *   insn=0x0000000000397424 string=0x0000000000397428 "a"
 *   insn=0x0000000000397450 string=0x00000000001F9C60 "0'"
 *   insn=0x0000000000397478 string=0x000000000039747C "I"
 *   insn=0x000000000039747C string=0x00000000001FA5A0 "0'"
 *   insn=0x0000000000397484 string=0x0000000000397488 "j"
 *   insn=0x0000000000397488 string=0x00000000001F8A30 "0'"
 *   insn=0x000000000039748C string=0x0000000000397490 "4"
 *   insn=0x0000000000397490 string=0x00000000003974D4 "h&O"
 *   insn=0x0000000000397494 string=0x0000000000397498 ""
 *   insn=0x00000000003974A8 string=0x00000000003974AC "\t@"
 *   insn=0x00000000003974B4 string=0x00000000003974B8 ""
 *   insn=0x00000000003974C8 string=0x00000000003974CC "@"
 *   insn=0x00000000003974DC string=0x00000000003974E0 ")"
 *   insn=0x00000000003974F8 string=0x0000000000397518 "n{"
 *   insn=0x0000000000397518 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000397520 string=0x0000000000397524 "4"
 *   insn=0x0000000000397528 string=0x000000000039752C ""
 *   insn=0x0000000000397538 string=0x000000000039753C "\t@"
 *   insn=0x0000000000397548 string=0x000000000039754C ""
 *   insn=0x0000000000397558 string=0x000000000039755C "@"
 *   insn=0x000000000039756C string=0x0000000000397570 "w"
 *   insn=0x000000000039758C string=0x0000000000397590 "V"
 *   insn=0x000000000039759C string=0x00000000003975A0 "h&O"
 *   insn=0x00000000003975A0 string=0x00000000003975A4 "?"
 *   insn=0x00000000003975B0 string=0x00000000003975B4 ""
 *   insn=0x00000000003975B8 string=0x00000000003975BC "`"
 *   insn=0x00000000003975BC string=0x00000000003975C0 "a"
 *   insn=0x00000000003975F8 string=0x00000000003975FC "I"
 *   insn=0x000000000039761C string=0x0000000000397620 "4"
 *   insn=0x0000000000397620 string=0x0000000000397664 "h&O"
 *   insn=0x0000000000397624 string=0x0000000000397628 ""
 *   insn=0x0000000000397638 string=0x000000000039763C "\t@"
 *   insn=0x0000000000397644 string=0x0000000000397648 ""
 *   insn=0x0000000000397658 string=0x000000000039765C "@"
 *   insn=0x000000000039766C string=0x0000000000397670 ")"
 *   insn=0x0000000000397688 string=0x00000000003976A8 "\n{"
 *   insn=0x00000000003976B0 string=0x00000000003976B4 "4"
 *   insn=0x00000000003976B8 string=0x00000000003976BC ""
 *   insn=0x00000000003976C8 string=0x00000000003976CC "\t@"
 *   insn=0x00000000003976D8 string=0x00000000003976DC ""
 *   insn=0x00000000003976E8 string=0x00000000003976EC "@"
 *   insn=0x00000000003976F8 string=0x00000000003976FC "r"
 *   insn=0x000000000039771C string=0x0000000000397720 "t"
 *   insn=0x0000000000397720 string=0x0000000000397724 ""
 *   insn=0x0000000000397724 string=0x0000000000397728 "A"
 *   insn=0x0000000000397728 string=0x000000000039772C "h"
 *   insn=0x000000000039772C string=0x0000000000397730 "4"
 *   insn=0x0000000000397730 string=0x0000000000397774 "t"
 *   insn=0x0000000000397734 string=0x0000000000397738 ""
 *   insn=0x0000000000397744 string=0x0000000000397748 "\t@"
 *   insn=0x0000000000397754 string=0x0000000000397758 ""
 *   insn=0x0000000000397764 string=0x0000000000397768 "@"
 *   insn=0x0000000000397774 string=0x0000000000397778 "4"
 *   insn=0x0000000000397778 string=0x00000000003977BC "t"
 *   insn=0x000000000039777C string=0x0000000000397780 ""
 *   insn=0x000000000039778C string=0x0000000000397790 "\t@"
 *   insn=0x000000000039779C string=0x00000000003977A0 ""
 *   insn=0x00000000003977AC string=0x00000000003977B0 "@"
 *   insn=0x00000000003977BC string=0x00000000003977C0 "4"
 *   insn=0x00000000003977C0 string=0x0000000000397804 "t"
 *   insn=0x00000000003977C4 string=0x00000000003977C8 ""
 *   insn=0x00000000003977D4 string=0x00000000003977D8 "\t@"
 *   insn=0x00000000003977E4 string=0x00000000003977E8 ""
 *   insn=0x00000000003977F4 string=0x00000000003977F8 "@"
 *   insn=0x0000000000397804 string=0x0000000000397808 "4"
 *   insn=0x0000000000397808 string=0x000000000039784C "tZO"
 *   insn=0x000000000039780C string=0x0000000000397810 ""
 *   insn=0x000000000039781C string=0x0000000000397820 "\t@"
 *   insn=0x000000000039782C string=0x0000000000397830 ""
 *   insn=0x000000000039783C string=0x0000000000397840 "@"
 *   insn=0x0000000000397854 string=0x00000000003978B0 "t"
 *   insn=0x0000000000397858 string=0x000000000039785C "5"
 *   insn=0x0000000000397860 string=0x0000000000397864 ""
 *   insn=0x0000000000397870 string=0x0000000000397874 "\t@"
 *   insn=0x0000000000397880 string=0x0000000000397884 ""
 *   insn=0x0000000000397890 string=0x0000000000397894 "@"
 *   insn=0x00000000003978A8 string=0x00000000003978AC "tz@"
 *   insn=0x00000000003978B4 string=0x00000000003978B8 "~~"
 *   insn=0x00000000003978B8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003978CC string=0x00000000003978D0 "X"
 *   insn=0x00000000003978D4 string=0x00000000003978D8 "@"
 *   insn=0x00000000003978D8 string=0x00000000003979D8 "h^O"
 *   insn=0x00000000003978DC string=0x00000000003978E0 "u"
 *   insn=0x00000000003978E4 string=0x00000000003978E8 "<"
 *   insn=0x00000000003978EC string=0x00000000003978F0 "u"
 *   insn=0x00000000003978F4 string=0x00000000003978F8 "&"
 *   insn=0x00000000003978F8 string=0x0000000000397990 "u"
 *   insn=0x0000000000397900 string=0x0000000000397904 "5"
 *   insn=0x0000000000397904 string=0x0000000000397948 "u"
 *   insn=0x0000000000397908 string=0x000000000039790C ""
 *   insn=0x0000000000397918 string=0x000000000039791C "\t@"
 *   insn=0x0000000000397928 string=0x000000000039792C ""
 *   insn=0x0000000000397938 string=0x000000000039793C "@"
 *   insn=0x0000000000397948 string=0x000000000039794C "5"
 *   insn=0x0000000000397950 string=0x0000000000397954 ""
 *   insn=0x0000000000397960 string=0x0000000000397964 "\t@"
 *   insn=0x0000000000397970 string=0x0000000000397974 ""
 *   insn=0x0000000000397980 string=0x0000000000397984 "@"
 *   insn=0x0000000000397990 string=0x0000000000397994 "5"
 *   insn=0x0000000000397998 string=0x000000000039799C ""
 *   insn=0x00000000003979A8 string=0x00000000003979AC "\t@"
 *   insn=0x00000000003979B8 string=0x00000000003979BC ""
 *   insn=0x00000000003979C8 string=0x00000000003979CC "@"
 *   insn=0x00000000003979E0 string=0x00000000003979E4 "`"
 *   insn=0x00000000003979F0 string=0x0000000000397A40 "A"
 *   insn=0x00000000003979F4 string=0x00000000003979F8 ")"
 *   insn=0x0000000000397A04 string=0x0000000000397A08 ")\t@"
 *   insn=0x0000000000397A10 string=0x0000000000397A14 " "
 *   insn=0x0000000000397A1C string=0x0000000000397A20 ")"
 *   insn=0x0000000000397A2C string=0x0000000000397A30 "@"
 *   insn=0x0000000000397A44 string=0x0000000000397A48 "!"
 *   insn=0x0000000000397A48 string=0x0000000000397A4C "`z@"
 *   insn=0x0000000000397A50 string=0x0000000000397A8C "\t~"
 *   insn=0x0000000000397A5C string=0x0000000000397A60 "h"
 *   insn=0x0000000000397A64 string=0x0000000000397A68 "9"
 *   insn=0x0000000000397A74 string=0x0000000000397A78 "5"
 *   insn=0x0000000000397A78 string=0x0000000000397A7C "hz@"
 *   insn=0x0000000000397A80 string=0x0000000000397A84 "h"
 *   insn=0x0000000000397AA4 string=0x0000000000397AA8 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OnlineMenuView::AnimateIn(__int64 this)
{
  __int64 v1; // x19
  __int64 v2; // x8
  __int64 v3; // x23
  unsigned __int64 v4; // x24
  float *v5; // x20
  float v6; // s2
  float v7; // s0
  _QWORD *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x8
  float v11[2]; // [xsp+C0h] [xbp-70h] BYREF
  __int64 v12[3]; // [xsp+C8h] [xbp-68h] BYREF
  _QWORD *v13; // [xsp+E0h] [xbp-50h]
  __int64 v14; // [xsp+E8h] [xbp-48h]

  v1 = this;
  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *(_QWORD *)(this + 240);
  if ( *(_QWORD *)(this + 248) != v2 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      v5 = *(float **)(v2 + v3);
      v6 = v5[29];
      v7 = *(float *)(v1 + 132) + *(float *)(v1 + 140);
      v11[1] = 0.0;
      v11[0] = v7 - v6;
      Caver::Rectangle::TranslatedRectangle(v12, (Caver::Rectangle *)(v5 + 29), (const Caver::Vector2 *)v11);
      Caver::GUIAnimation::FrameAnimation();
      *(float *)(v12[2] + 88) = (float)v4 * 0.05;
      Caver::GUIView::RemoveAllAnimations((Caver::GUIView *)v5);
      this = Caver::GUIView::AddAnimation();
      v8 = v13;
      if ( v13 )
      {
        v9 = v13[1] - 1LL;
        v13[1] = v9;
        if ( !v9 )
        {
          this = (*(__int64 (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
          v10 = v8[2] - 1LL;
          v8[2] = v10;
          if ( !v10 )
            this = (*(__int64 (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
        }
      }
      v2 = *(_QWORD *)(v1 + 240);
      ++v4;
      v3 += 16;
    }
    while ( v4 < (*(_QWORD *)(v1 + 248) - v2) >> 4 );
  }
  return this;
}

