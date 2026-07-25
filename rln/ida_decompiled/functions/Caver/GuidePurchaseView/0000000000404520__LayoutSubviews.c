/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000404520
 * Mangled: _ZN5Caver17GuidePurchaseView14LayoutSubviewsEv
 * Demangled: Caver::GuidePurchaseView::LayoutSubviews(void)
 *
 * Callers: 0
 *
 * Callees: 11
 *   0x00000000001F3C90  Caver::Rectangle::RectangleByOutsetting(float)
 *   0x00000000001F4210  Caver::GuidePurchaseView::UpdateBuyButtonSize(void)
 *   0x00000000001F6060  Caver::GuidePurchaseView::AnimateIn(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B30  Caver::GUIButton::titleLabel(void)
 *   0x00000000001F94B0  Caver::GUIView::LayoutSubviews(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FDA30  Caver::Vector2::Rounded(void)
 *   0x00000000002039B0  Caver::GUILabel::TextSize(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 105
 *   insn=0x0000000000404544 string=0x0000000000404548 "V"
 *   insn=0x0000000000404558 string=0x000000000040455C "b"
 *   insn=0x0000000000404558 string=0x00000000001F94B0 "0'"
 *   insn=0x000000000040455C string=0x0000000000404560 "`"
 *   insn=0x0000000000404560 string=0x0000000000404564 "t"
 *   insn=0x0000000000404564 string=0x0000000000404568 "\t"
 *   insn=0x0000000000404568 string=0x000000000040456C "B)"
 *   insn=0x0000000000404574 string=0x0000000000404578 "c)"
 *   insn=0x0000000000404578 string=0x000000000040457C "!(#"
 *   insn=0x0000000000404588 string=0x000000000040458C "!(""
 *   insn=0x000000000040458C string=0x0000000000404590 "@&"
 *   insn=0x0000000000404598 string=0x000000000040459C "!8""
 *   insn=0x00000000004045A8 string=0x00000000004045AC "!"
 *   insn=0x00000000004045AC string=0x00000000001FDA30 "0'"
 *   insn=0x00000000004045C4 string=0x00000000004045C8 "c"
 *   insn=0x00000000004045C4 string=0x00000000001FB170 "0'"
 *   insn=0x00000000004045C8 string=0x00000000004045CC "b"
 *   insn=0x00000000004045CC string=0x00000000004045D0 "d"
 *   insn=0x00000000004045D0 string=0x00000000004045D4 "`~@"
 *   insn=0x00000000004045D4 string=0x00000000004045D8 ""
 *   insn=0x00000000004045D8 string=0x00000000004045DC "A(!"
 *   insn=0x00000000004045E0 string=0x00000000004045E4 "!(""
 *   insn=0x00000000004045E8 string=0x00000000004045EC "b(""
 *   insn=0x00000000004045F0 string=0x00000000004045F4 "x@"
 *   insn=0x00000000004045F8 string=0x00000000004045FC "\t@G"
 *   insn=0x0000000000404600 string=0x0000000000404604 "I@"
 *   insn=0x0000000000404604 string=0x0000000000404608 "@&"
 *   insn=0x0000000000404608 string=0x000000000040460C "*8("
 *   insn=0x000000000040460C string=0x0000000000404610 "@(#"
 *   insn=0x0000000000404614 string=0x0000000000404618 "@&"
 *   insn=0x0000000000404628 string=0x000000000040462C "`~@"
 *   insn=0x0000000000404634 string=0x0000000000404638 "|@"
 *   insn=0x0000000000404638 string=0x000000000040463C "k9 "
 *   insn=0x000000000040464C string=0x0000000000404650 "h"
 *   insn=0x0000000000404650 string=0x0000000000404654 "?"
 *   insn=0x0000000000404654 string=0x0000000000404658 "A"
 *   insn=0x0000000000404660 string=0x0000000000404664 "t"
 *   insn=0x0000000000404660 string=0x00000000001F4210 "P'"
 *   insn=0x0000000000404664 string=0x0000000000404668 "@\t)"
 *   insn=0x0000000000404674 string=0x0000000000404678 "a)!"
 *   insn=0x0000000000404680 string=0x0000000000404684 "B)"
 *   insn=0x0000000000404684 string=0x0000000000404688 "!8#"
 *   insn=0x00000000004046AC string=0x00000000004046B0 "t"
 *   insn=0x00000000004046B0 string=0x00000000004046B4 ""
 *   insn=0x00000000004046C0 string=0x00000000004046C4 "s"
 *   insn=0x00000000004046C4 string=0x00000000001F3C90 "P'"
 *   insn=0x00000000004046D4 string=0x00000000004046D8 "t"
 *   insn=0x00000000004046D8 string=0x00000000004046DC "`BH"
 *   insn=0x00000000004046DC string=0x00000000004046E0 "a"
 *   insn=0x0000000000404714 string=0x0000000000404718 "t"
 *   insn=0x0000000000404724 string=0x0000000000404728 "Z"
 *   insn=0x0000000000404734 string=0x0000000000404738 "`"
 *   insn=0x0000000000404738 string=0x000000000040473C "b"
 *   insn=0x000000000040473C string=0x0000000000404740 "a"
 *   insn=0x0000000000404744 string=0x0000000000404748 "B)"
 *   insn=0x0000000000404748 string=0x000000000040474C "!(""
 *   insn=0x0000000000404750 string=0x0000000000404754 ""
 *   insn=0x0000000000404758 string=0x000000000040475C " 8 "
 *   insn=0x0000000000404764 string=0x0000000000404768 "4"
 *   insn=0x0000000000404774 string=0x0000000000404778 "t"
 *   insn=0x0000000000404784 string=0x0000000000404788 "B"
 *   insn=0x0000000000404794 string=0x0000000000404798 "t"
 *   insn=0x00000000004047B4 string=0x00000000004047B8 "n"
 *   insn=0x00000000004047B8 string=0x00000000004047BC "h"
 *   insn=0x00000000004047BC string=0x00000000004047C0 "`"
 *   insn=0x00000000004047D0 string=0x00000000004047D4 "!(""
 *   insn=0x00000000004047D8 string=0x00000000004047DC "c)"
 *   insn=0x00000000004047E8 string=0x00000000004047EC "!8""
 *   insn=0x00000000004047F8 string=0x00000000004047FC "]"
 *   insn=0x0000000000404804 string=0x00000000001F6060 "0'"
 *   insn=0x0000000000404810 string=0x0000000000404814 "!\t"
 *   insn=0x0000000000404814 string=0x0000000000404938 "f"
 *   insn=0x000000000040484C string=0x0000000000404850 ""
 *   insn=0x000000000040485C string=0x0000000000404860 ""
 *   insn=0x000000000040487C string=0x0000000000404880 "<"
 *   insn=0x0000000000404888 string=0x000000000040488C "I"
 *   insn=0x00000000004048A8 string=0x00000000004048AC "1"
 *   insn=0x00000000004048B8 string=0x00000000004048BC "k9!"
 *   insn=0x00000000004048D0 string=0x00000000004048D4 "'"
 *   insn=0x00000000004048D4 string=0x00000000004048D8 "4"
 *   insn=0x00000000004048D8 string=0x000000000040491C "h"
 *   insn=0x00000000004048DC string=0x00000000004048E0 ""
 *   insn=0x00000000004048F0 string=0x00000000004048F4 "\t@"
 *   insn=0x00000000004048FC string=0x0000000000404900 ""
 *   insn=0x0000000000404910 string=0x0000000000404914 "@"
 *   insn=0x0000000000404924 string=0x0000000000404928 ")"
 *   insn=0x0000000000404930 string=0x0000000000404934 "J"
 *   insn=0x0000000000404938 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000404954 string=0x0000000000404958 "4"
 *   insn=0x000000000040495C string=0x0000000000404960 ""
 *   insn=0x000000000040496C string=0x0000000000404970 "\t@"
 *   insn=0x000000000040497C string=0x0000000000404980 ""
 *   insn=0x000000000040498C string=0x0000000000404990 "@"
 *   insn=0x00000000004049A0 string=0x00000000004049A4 "j&"
 *   insn=0x00000000004049BC string=0x00000000004049C0 "U"
 *   insn=0x00000000004049D0 string=0x00000000004049D4 "t"
 *   insn=0x00000000004049E4 string=0x00000000004049E8 ")"
 *   insn=0x00000000004049E8 string=0x00000000004049EC "Q"
 *   insn=0x00000000004049EC string=0x00000000001F6B30 "0'"
 *   insn=0x00000000004049F4 string=0x00000000004049F8 "h"
 *   insn=0x0000000000404A04 string=0x0000000000404A08 ""
 *   insn=0x0000000000404A24 string=0x0000000000404A28 "s"
 *   insn=0x0000000000404A30 string=0x0000000000404A34 "`"
 *   insn=0x0000000000404A38 string=0x0000000000404A3C " "
 *   insn=0x0000000000404A44 string=0x0000000000404A48 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GuidePurchaseView::LayoutSubviews(Caver::GuidePurchaseView *this)
{
  float *v2; // x20
  float v3; // s8
  float v4; // s1
  __int64 v5; // x8
  _QWORD *v6; // x0
  int v7; // w8
  float v8; // s8
  float v9; // s10
  float v10; // s11
  __int64 v11; // x0
  float v12; // s0
  float v13; // s11
  __int64 v14; // x8
  float *v15; // x20
  float v16; // s3
  __int64 v17; // x8
  __int64 v18; // x20
  __int64 v19; // x20
  __int64 v25; // x8
  __int64 v26; // x20
  __int64 v27; // x0
  float v28; // s1
  __int64 v29; // x20
  __int64 v30; // x20
  float *v31; // x8
  float *v32; // x0
  float v33; // s2
  unsigned int v34; // s1
  unsigned int v35; // s0
  __int64 v37; // x23
  unsigned __int64 v38; // x24
  __int64 *v39; // x8
  _QWORD *v40; // x20
  __int64 v41; // x21
  __int64 v42; // x8
  __int64 v43; // x8
  float v44; // s0
  __int64 v45; // x8
  __int64 v46; // x8
  unsigned __int64 v47; // [xsp+70h] [xbp-A0h] BYREF
  float v48[2]; // [xsp+78h] [xbp-98h] BYREF
  __int64 v49; // [xsp+80h] [xbp-90h] BYREF
  float v50[2]; // [xsp+88h] [xbp-88h] BYREF
  __int64 v51; // [xsp+90h] [xbp-80h] BYREF
  __int128 v52; // [xsp+98h] [xbp-78h] BYREF
  __int64 v53; // [xsp+A8h] [xbp-68h]

  v53 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIView::LayoutSubviews(this);
  v2 = (float *)*((_QWORD *)this + 36);
  v3 = roundf((float)(*((float *)this + 33) + (float)(*((float *)this + 35) * 0.5)) + 30.0);
  v4 = (float)((float)(*((float *)this + 34) + (float)(*((float *)this + 36) * 0.5)) + 15.0) - (float)(v2[32] * 0.5);
  v50[0] = v3 - v2[31];
  v50[1] = v4;
  Caver::Vector2::Rounded(&v51, (Caver::Vector2 *)v50);
  v5 = *(_QWORD *)(v2 + 31);
  *(_QWORD *)&v52 = v51;
  *((_QWORD *)&v52 + 1) = v5;
  Caver::GUIView::SetFrame((Caver::GUIView *)v2, (const Caver::Rectangle *)&v52);
  v6 = (_QWORD *)*((_QWORD *)this + 31);
  v7 = *(_DWORD *)(v6[30] + 72LL);
  v8 = roundf(v3 + 5.0);
  v9 = (float)((float)(*((float *)this + 33) + *((float *)this + 35)) + -20.0) - v8;
  v10 = roundf((float)(*((float *)this + 34) + (float)(*((float *)this + 36) * 0.5)) + 110.0);
  *(_QWORD *)&v52 = *(_QWORD *)((char *)v6 + 116);
  *((float *)&v52 + 2) = v9;
  HIDWORD(v52) = v7;
  Caver::GUIView::SetFrame((Caver::GUIView *)v6, (const Caver::Rectangle *)&v52);
  v11 = *((_QWORD *)this + 31);
  v12 = *(float *)(v11 + 128);
  v13 = v10 - v12;
  DWORD2(v52) = *(_DWORD *)(v11 + 124);
  *((float *)&v52 + 3) = v12;
  *(_QWORD *)&v52 = __PAIR64__(LODWORD(v13), LODWORD(v8));
  Caver::GUIView::SetFrame((Caver::GUIView *)v11, (const Caver::Rectangle *)&v52);
  v14 = *((_QWORD *)this + 33);
  if ( *((_QWORD *)this + 34) != v14 )
  {
    v37 = 0;
    v38 = 0;
    do
    {
      v39 = (__int64 *)(v14 + v37);
      v41 = *v39;
      v40 = (_QWORD *)v39[1];
      if ( v40 )
        ++v40[1];
      v42 = *(_QWORD *)(v41 + 116);
      *((_QWORD *)&v52 + 1) = LODWORD(v9) | 0x4348000000000000LL;
      *(_QWORD *)&v52 = v42;
      Caver::GUIView::SetFrame((Caver::GUIView *)v41, (const Caver::Rectangle *)&v52);
      Caver::GUILabel::TextSize(&v49, (Caver::GUILabel *)v41);
      v43 = *(_QWORD *)(v41 + 116);
      *((_QWORD *)&v52 + 1) = __PAIR64__(HIDWORD(v49), LODWORD(v9));
      *(_QWORD *)&v52 = v43;
      Caver::GUIView::SetFrame((Caver::GUIView *)v41, (const Caver::Rectangle *)&v52);
      v44 = *(float *)(v41 + 128);
      v13 = v13 - (float)(v44 + 10.0);
      DWORD2(v52) = *(_DWORD *)(v41 + 124);
      *((float *)&v52 + 3) = v44;
      *(_QWORD *)&v52 = __PAIR64__(LODWORD(v13), LODWORD(v8));
      Caver::GUIView::SetFrame((Caver::GUIView *)v41, (const Caver::Rectangle *)&v52);
      if ( v40 )
      {
        v45 = v40[1] - 1LL;
        v40[1] = v45;
        if ( !v45 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v40 + 16LL))(v40);
          v46 = v40[2] - 1LL;
          v40[2] = v46;
          if ( !v46 )
            (*(void (__fastcall **)(_QWORD *))(*v40 + 24LL))(v40);
        }
      }
      v14 = *((_QWORD *)this + 33);
      ++v38;
      v37 += 16;
    }
    while ( v38 < (*((_QWORD *)this + 34) - v14) >> 4 );
  }
  Caver::GuidePurchaseView::UpdateBuyButtonSize(this);
  v15 = (float *)*((_QWORD *)this + 38);
  v16 = v15[32];
  v48[0] = (float)(v8 + (float)(v9 * 0.5)) - (float)(v15[31] * 0.5);
  v48[1] = (float)(v13 + -25.0) - v16;
  Caver::Vector2::Rounded(&v51, (Caver::Vector2 *)v48);
  v17 = *(_QWORD *)(v15 + 31);
  *(_QWORD *)&v52 = v51;
  *((_QWORD *)&v52 + 1) = v17;
  Caver::GUIView::SetFrame((Caver::GUIView *)v15, (const Caver::Rectangle *)&v52);
  v18 = *((_QWORD *)this + 38);
  Caver::Rectangle::RectangleByOutsetting((__int64 *)&v52, (Caver::Rectangle *)(v18 + 132), 10.0);
  *(_OWORD *)(v18 + 148) = v52;
  v19 = *((_QWORD *)this + 40);
  __asm { FMOV            V1.2S, #-10.0 }
  v47 = vsub_f32(
          vadd_f32(vadd_f32(*(float32x2_t *)((char *)this + 132), *(float32x2_t *)((char *)this + 140)), _D1),
          *(float32x2_t *)(v19 + 124)).n64_u64[0];
  Caver::Vector2::Rounded(&v51, (Caver::Vector2 *)&v47);
  v25 = *(_QWORD *)(v19 + 124);
  *(_QWORD *)&v52 = v51;
  *((_QWORD *)&v52 + 1) = v25;
  Caver::GUIView::SetFrame((Caver::GUIView *)v19, (const Caver::Rectangle *)&v52);
  v26 = *((_QWORD *)this + 40);
  Caver::Rectangle::RectangleByOutsetting((__int64 *)&v52, (Caver::Rectangle *)(v26 + 132), 10.0);
  *(_OWORD *)(v26 + 148) = v52;
  v27 = *((_QWORD *)this + 42);
  v28 = *((float *)this + 33) + (float)(*((float *)this + 35) * 0.5);
  *((_QWORD *)&v52 + 1) = *(_QWORD *)(v27 + 124);
  *(_QWORD *)&v52 = COERCE_UNSIGNED_INT(roundf(v28 - (float)(*((float *)&v52 + 2) * 0.5))) | 0x41A0000000000000LL;
  Caver::GUIView::SetFrame((Caver::GUIView *)v27, (const Caver::Rectangle *)&v52);
  v29 = *((_QWORD *)this + 42);
  Caver::Rectangle::RectangleByOutsetting((__int64 *)&v52, (Caver::Rectangle *)(v29 + 132), 10.0);
  *(_OWORD *)(v29 + 148) = v52;
  v30 = *((_QWORD *)this + 44);
  Caver::GUILabel::TextSize(&v51, (Caver::GUILabel *)v30);
  *(_QWORD *)&v52 = *(_QWORD *)(v30 + 116);
  *((_QWORD *)&v52 + 1) = v51;
  Caver::GUIView::SetFrame((Caver::GUIView *)v30, (const Caver::Rectangle *)&v52);
  v31 = (float *)*((_QWORD *)this + 42);
  v32 = (float *)*((_QWORD *)this + 44);
  v33 = v32[32];
  *(float *)&v34 = (float)(v31[30] + -6.0) - v33;
  *(float *)&v35 = roundf((float)(v31[29] + (float)(v31[31] * 0.5)) - (float)(v32[31] * 0.5));
  *((float *)&v52 + 2) = v32[31];
  *((float *)&v52 + 3) = v33;
  *(_QWORD *)&v52 = __PAIR64__(v34, v35);
  Caver::GUIView::SetFrame((Caver::GUIView *)v32, (const Caver::Rectangle *)&v52);
  return Caver::GuidePurchaseView::AnimateIn(this);
}

