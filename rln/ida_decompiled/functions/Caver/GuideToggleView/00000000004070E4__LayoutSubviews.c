/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004070E4
 * Mangled: _ZN5Caver15GuideToggleView14LayoutSubviewsEv
 * Demangled: Caver::GuideToggleView::LayoutSubviews(void)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F94B0  Caver::GUIView::LayoutSubviews(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FDA30  Caver::Vector2::Rounded(void)
 *   0x0000000000202DC0  Caver::GUIView::SetTouchBoundsToIncludeSubviewTouchBounds(void)
 *
 * Referenced strings: 27
 *   insn=0x00000000004070F4 string=0x00000000004070F8 "U"
 *   insn=0x0000000000407108 string=0x000000000040710C "c"
 *   insn=0x0000000000407108 string=0x00000000001F94B0 "0'"
 *   insn=0x000000000040710C string=0x0000000000407110 "b"
 *   insn=0x0000000000407110 string=0x0000000000407114 "t"
 *   insn=0x0000000000407118 string=0x000000000040711C "d"
 *   insn=0x000000000040711C string=0x0000000000407120 "@( "
 *   insn=0x0000000000407130 string=0x0000000000407134 "c($"
 *   insn=0x0000000000407138 string=0x000000000040713C "A%"
 *   insn=0x000000000040713C string=0x0000000000407140 "a8!"
 *   insn=0x000000000040714C string=0x0000000000407150 "8"
 *   insn=0x0000000000407150 string=0x00000000001FDA30 "0'"
 *   insn=0x0000000000407168 string=0x000000000040716C "h"
 *   insn=0x0000000000407168 string=0x00000000001FB170 "0'"
 *   insn=0x000000000040716C string=0x0000000000407170 "`"
 *   insn=0x0000000000407170 string=0x0000000000407174 "aBH"
 *   insn=0x0000000000407174 string=0x0000000000407178 "`~@"
 *   insn=0x0000000000407188 string=0x000000000040718C "B(#"
 *   insn=0x000000000040718C string=0x0000000000407190 "A8!"
 *   insn=0x000000000040719C string=0x00000000004071A0 "h"
 *   insn=0x00000000004071B0 string=0x00000000004071B4 "\t"
 *   insn=0x00000000004071B4 string=0x00000000004071B8 "\n"
 *   insn=0x00000000004071C8 string=0x00000000004071CC "@( "
 *   insn=0x00000000004071D4 string=0x00000000004071D8 "\t"
 *   insn=0x00000000004071E0 string=0x00000000004071E4 "\n"
 *   insn=0x00000000004071F8 string=0x0000000000407210 "0"
 *   insn=0x0000000000407210 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GuideToggleView::LayoutSubviews(Caver::GuideToggleView *this)
{
  float *v2; // x20
  float v3; // s2
  float v4; // s3
  __int64 v5; // x8
  Caver::GUIView *v6; // x0
  float v7; // s2
  float v8; // s0
  __int64 v9; // x8
  float v10; // s0
  int v11; // w10
  float v12; // s2
  float v13; // s0
  float v15[2]; // [xsp+8h] [xbp-48h] BYREF
  __int64 v16; // [xsp+10h] [xbp-40h] BYREF
  __int64 v17; // [xsp+18h] [xbp-38h] BYREF
  __int64 v18; // [xsp+20h] [xbp-30h]
  __int64 v19; // [xsp+28h] [xbp-28h]

  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIView::LayoutSubviews(this);
  v2 = (float *)*((_QWORD *)this + 33);
  v3 = v2[32];
  v4 = *((float *)this + 34) + (float)(*((float *)this + 36) * 0.5);
  v15[0] = (float)((float)(*((float *)this + 33) + *((float *)this + 35)) + -7.0) - v2[31];
  v15[1] = v4 - (float)(v3 * 0.5);
  Caver::Vector2::Rounded(&v16, (Caver::Vector2 *)v15);
  v5 = *(_QWORD *)(v2 + 31);
  v17 = v16;
  v18 = v5;
  Caver::GUIView::SetFrame((Caver::GUIView *)v2, (const Caver::Rectangle *)&v17);
  v6 = (Caver::GUIView *)*((_QWORD *)this + 31);
  v7 = *(float *)(*((_QWORD *)this + 33) + 116LL);
  v8 = *((float *)this + 36) + -2.0;
  v17 = *(_QWORD *)((char *)this + 132);
  *(float *)&v18 = (float)(v7 + -2.0) - *(float *)&v17;
  *((float *)&v18 + 1) = v8;
  Caver::GUIView::SetFrame(v6, (const Caver::Rectangle *)&v17);
  v9 = *((_QWORD *)this + 33);
  v10 = *(float *)(v9 + 132);
  v11 = *(_DWORD *)(v9 + 144);
  v12 = v10 + -10.0;
  v13 = (float)((float)((float)(v10 + -10.0) + (float)((float)(v10 + *(float *)(v9 + 140)) - (float)(v10 + -10.0)))
              + 10.0)
      - (float)(v10 + -10.0);
  *(_DWORD *)(v9 + 152) = *(_DWORD *)(v9 + 136);
  *(float *)(v9 + 148) = v12;
  *(float *)(v9 + 156) = v13;
  *(_DWORD *)(v9 + 160) = v11;
  return Caver::GUIView::SetTouchBoundsToIncludeSubviewTouchBounds(this);
}

