/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003748B4
 * Mangled: _ZN5Caver27AchievementNotificationView12UpdateLayoutEv
 * Demangled: Caver::AchievementNotificationView::UpdateLayout(void)
 *
 * Callers: 1
 *   0x00000000002007D0  Caver::AchievementNotificationView::UpdateLayout(void)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000002039B0  Caver::GUILabel::TextSize(void)
 *
 * Referenced strings: 36
 *   insn=0x00000000003748D0 string=0x00000000003748D4 "U"
 *   insn=0x00000000003748E4 string=0x00000000003748E8 "`"
 *   insn=0x00000000003748F0 string=0x00000000003748F4 "\t@G"
 *   insn=0x0000000000374900 string=0x0000000000374904 "`"
 *   insn=0x0000000000374900 string=0x00000000001FB170 "0'"
 *   insn=0x0000000000374904 string=0x0000000000374908 "<A"
 *   insn=0x0000000000374914 string=0x0000000000374918 "<"
 *   insn=0x000000000037491C string=0x0000000000374920 "`"
 *   insn=0x000000000037491C string=0x00000000001F8510 "0'"
 *   insn=0x0000000000374924 string=0x0000000000374928 ""
 *   insn=0x000000000037492C string=0x0000000000374930 "`"
 *   insn=0x0000000000374938 string=0x000000000037493C "`"
 *   insn=0x000000000037494C string=0x0000000000374950 "|@"
 *   insn=0x0000000000374954 string=0x0000000000374958 "(!"
 *   insn=0x0000000000374978 string=0x000000000037497C "h"
 *   insn=0x000000000037497C string=0x0000000000374980 "t"
 *   insn=0x0000000000374998 string=0x000000000037499C ")#"
 *   insn=0x00000000003749A0 string=0x00000000003749A4 "\t(""
 *   insn=0x00000000003749AC string=0x00000000003749B0 "`"
 *   insn=0x00000000003749B0 string=0x00000000003749B4 "\n"
 *   insn=0x00000000003749DC string=0x00000000003749E0 "h"
 *   insn=0x00000000003749E0 string=0x00000000003749E4 "t"
 *   insn=0x00000000003749F4 string=0x00000000003749F8 "(!"
 *   insn=0x0000000000374A00 string=0x0000000000374A04 "`"
 *   insn=0x0000000000374A08 string=0x0000000000374A0C "k9 "
 *   insn=0x0000000000374A14 string=0x0000000000374A18 "`"
 *   insn=0x0000000000374A40 string=0x0000000000374A44 "`"
 *   insn=0x0000000000374A4C string=0x0000000000374A50 "`"
 *   insn=0x0000000000374A68 string=0x0000000000374A6C "t"
 *   insn=0x0000000000374A6C string=0x0000000000374A70 "`! "
 *   insn=0x0000000000374A78 string=0x0000000000374A7C " ) "
 *   insn=0x0000000000374A88 string=0x0000000000374A8C "\t(!"
 *   insn=0x0000000000374AB0 string=0x0000000000374AB4 "h"
 *   insn=0x0000000000374AB4 string=0x0000000000374AB8 "iBG"
 *   insn=0x0000000000374AEC string=0x0000000000374AF0 "!"
 *   insn=0x0000000000374B14 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AchievementNotificationView::UpdateLayout(Caver::AchievementNotificationView *this)
{
  __int64 v2; // x0
  unsigned __int64 v3; // x9
  __int64 v4; // x0
  __int64 v5; // x0
  float v6; // s2
  float v7; // s8
  Caver::GUILabel *v8; // x20
  float v9; // s9
  unsigned int v10; // s12
  Caver::GUILabel *v11; // x20
  float v12; // s11
  unsigned int v13; // s11
  unsigned int v14; // s12
  float v15; // s11
  float v16; // s0
  Caver::GUIView *v17; // x20
  unsigned int v18; // s9
  __int64 v19; // x8
  float v20; // s0
  float v21; // s1
  __int64 v23; // [xsp+0h] [xbp-A0h] BYREF
  __int64 v24; // [xsp+8h] [xbp-98h] BYREF
  __int64 v25; // [xsp+10h] [xbp-90h] BYREF
  __int64 v26; // [xsp+18h] [xbp-88h] BYREF
  __int64 v27; // [xsp+20h] [xbp-80h] BYREF
  __int64 v28; // [xsp+28h] [xbp-78h] BYREF
  __int64 v29; // [xsp+30h] [xbp-70h] BYREF
  __int64 v30; // [xsp+38h] [xbp-68h] BYREF
  __int64 v31; // [xsp+40h] [xbp-60h] BYREF
  unsigned __int64 v32; // [xsp+48h] [xbp-58h] BYREF
  unsigned __int64 v33; // [xsp+50h] [xbp-50h]
  __int64 v34; // [xsp+58h] [xbp-48h]

  v34 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *((_QWORD *)this + 44);
  v3 = *(_QWORD *)(v2 + 116);
  v33 = 0x42C80000435C0000LL;
  v32 = v3;
  Caver::GUIView::SetFrame((Caver::GUIView *)v2, (const Caver::Rectangle *)&v32);
  v4 = *((_QWORD *)this + 44);
  if ( *(_DWORD *)(v4 + 316) != 2 )
  {
    *(_DWORD *)(v4 + 316) = 2;
    Caver::GUILabel::UpdateText((Caver::GUILabel *)v4);
    v4 = *((_QWORD *)this + 44);
  }
  *(_BYTE *)(v4 + 312) = 1;
  Caver::GUILabel::UpdateText((Caver::GUILabel *)v4);
  Caver::GUILabel::TextSize(&v31, *((Caver::GUILabel **)this + 44));
  v5 = *((_QWORD *)this + 40);
  v6 = *(float *)(v5 + 128);
  v7 = *((float *)&v31 + 1) + 36.0;
  LODWORD(v33) = *(_DWORD *)(v5 + 124);
  *((float *)&v33 + 1) = v6;
  LODWORD(v32) = roundf((float)((float)(*((float *)&v31 + 1) + 36.0) - v6) * 0.5);
  HIDWORD(v32) = v32;
  Caver::GUIView::SetFrame((Caver::GUIView *)v5, (const Caver::Rectangle *)&v32);
  v8 = (Caver::GUILabel *)*((_QWORD *)this + 42);
  v9 = (float)(*(float *)(*((_QWORD *)this + 40) + 116LL) + *(float *)(*((_QWORD *)this + 40) + 124LL)) + 12.0;
  Caver::GUILabel::TextSize(&v30, v8);
  *(float *)&v10 = *(float *)&v30 + 1.0;
  Caver::GUILabel::TextSize(&v29, *((Caver::GUILabel **)this + 42));
  *(float *)&v32 = v9;
  *((float *)&v32 + 1) = v7 + -21.0;
  v33 = __PAIR64__(HIDWORD(v29), v10);
  Caver::GUIView::SetFrame(v8, (const Caver::Rectangle *)&v32);
  v11 = (Caver::GUILabel *)*((_QWORD *)this + 44);
  v12 = *(float *)(*((_QWORD *)this + 42) + 120LL) + -7.0;
  Caver::GUILabel::TextSize(&v28, v11);
  *(float *)&v13 = v12 - *((float *)&v28 + 1);
  Caver::GUILabel::TextSize(&v27, *((Caver::GUILabel **)this + 44));
  *(float *)&v14 = *(float *)&v27 + 1.0;
  Caver::GUILabel::TextSize(&v26, *((Caver::GUILabel **)this + 44));
  v32 = __PAIR64__(v13, LODWORD(v9));
  v33 = __PAIR64__(HIDWORD(v26), v14);
  Caver::GUIView::SetFrame(v11, (const Caver::Rectangle *)&v32);
  Caver::GUILabel::TextSize(&v25, *((Caver::GUILabel **)this + 42));
  v15 = *(float *)&v25;
  Caver::GUILabel::TextSize(&v24, *((Caver::GUILabel **)this + 44));
  v16 = *(float *)&v24;
  v17 = (Caver::GUIView *)*((_QWORD *)this + 46);
  if ( v15 >= *(float *)&v24 )
    v16 = v15;
  *(float *)&v18 = (float)(v9 + fmaxf(v16, 180.0)) + 25.0;
  Caver::GUILabel::TextSize(&v23, *((Caver::GUILabel **)this + 46));
  v32 = v18;
  *(float *)&v33 = *(float *)&v23 + 1.0;
  *((float *)&v33 + 1) = v7;
  Caver::GUIView::SetFrame(v17, (const Caver::Rectangle *)&v32);
  v19 = *((_QWORD *)this + 46);
  v20 = *(float *)(v19 + 116);
  v21 = *(float *)(v19 + 124);
  v32 = *(_QWORD *)((char *)this + 116);
  *(float *)&v33 = (float)(v20 + v21) + 8.0;
  *((float *)&v33 + 1) = v7;
  return Caver::GUIView::SetFrame(this, (const Caver::Rectangle *)&v32);
}

