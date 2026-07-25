/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000441904
 * Mangled: _ZN5Caver14TabbedMenuView19UpdateContentLayoutEv
 * Demangled: Caver::TabbedMenuView::UpdateContentLayout(void)
 *
 * Callers: 1
 *   0x0000000000200580  Caver::TabbedMenuView::UpdateContentLayout(void)
 *
 * Callees: 4
 *   0x00000000001F5CB0  Caver::GUIView::safeBounds(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x0000000000202DC0  Caver::GUIView::SetTouchBoundsToIncludeSubviewTouchBounds(void)
 *
 * Referenced strings: 24
 *   insn=0x0000000000441914 string=0x0000000000441918 "U"
 *   insn=0x0000000000441924 string=0x0000000000441928 "`"
 *   insn=0x0000000000441928 string=0x000000000044192C " "
 *   insn=0x000000000044192C string=0x0000000000441930 "h"
 *   insn=0x000000000044192C string=0x0000000000441970 "t"
 *   insn=0x0000000000441930 string=0x0000000000441934 "`"
 *   insn=0x000000000044193C string=0x0000000000441940 "h"
 *   insn=0x0000000000441940 string=0x0000000000441944 "a"
 *   insn=0x0000000000441948 string=0x000000000044194C "h"
 *   insn=0x0000000000441958 string=0x000000000044195C "A(#"
 *   insn=0x000000000044196C string=0x00000000001FB170 "0'"
 *   insn=0x0000000000441974 string=0x0000000000441978 "`"
 *   insn=0x0000000000441980 string=0x00000000001F5CB0 "P'"
 *   insn=0x0000000000441988 string=0x000000000044198C "h"
 *   insn=0x000000000044198C string=0x0000000000441990 "i"
 *   insn=0x000000000044199C string=0x00000000004419A0 "#"
 *   insn=0x00000000004419AC string=0x00000000004419B0 "!"
 *   insn=0x00000000004419B0 string=0x00000000004419B4 "c""
 *   insn=0x00000000004419BC string=0x00000000004419C0 "!(#"
 *   insn=0x00000000004419C0 string=0x00000000004419C4 "!8""
 *   insn=0x00000000004419C4 string=0x00000000004419C8 "!@&"
 *   insn=0x00000000004419D8 string=0x00000000004419DC "`"
 *   insn=0x00000000004419F0 string=0x0000000000441A08 "2"
 *   insn=0x0000000000441A08 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::GUIView *__fastcall Caver::TabbedMenuView::UpdateContentLayout(Caver::TabbedMenuView *this)
{
  Caver::GUIView *result; // x0
  float v3; // s0
  float v4; // s1
  __int64 v5; // x8
  float v6; // s2
  float v7; // s3
  __int64 v8; // x20
  __int64 v9; // x8
  float v10; // s0
  float v11; // s1
  float v12; // [xsp+8h] [xbp-48h]
  float v13; // [xsp+10h] [xbp-40h]
  float v14; // [xsp+18h] [xbp-38h] BYREF
  float v15; // [xsp+1Ch] [xbp-34h]
  __int64 v16; // [xsp+20h] [xbp-30h]
  __int64 v17; // [xsp+28h] [xbp-28h]

  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = (Caver::GUIView *)*((_QWORD *)this + 39);
  if ( result )
  {
    v3 = *((float *)this + 33);
    v15 = *((float *)this + 34);
    v4 = *((float *)this + 35);
    HIDWORD(v16) = *((_DWORD *)this + 36);
    v5 = *((_QWORD *)this + 32);
    v6 = *(float *)(v5 + 116);
    v7 = *(float *)(v5 + 124);
    *(float *)&v16 = (float)(v3 + v4) - (float)(v6 + v7);
    v14 = v6 + v7;
    result = (Caver::GUIView *)Caver::GUIView::SetFrame(result, (const Caver::Rectangle *)&v14);
  }
  v8 = *((_QWORD *)this + 47);
  if ( v8 )
  {
    Caver::GUIView::safeBounds(*((Caver::GUIView **)this + 41));
    v9 = *((_QWORD *)this + 47);
    v10 = roundf((float)(v12 + v13) - *(float *)(v9 + 124));
    v11 = roundf(
            (float)(*(float *)(*((_QWORD *)this + 41) + 136LL)
                  + (float)(*(float *)(*((_QWORD *)this + 41) + 144LL) * 0.5))
          - (float)(*(float *)(v9 + 128) * 0.5));
    v16 = *(_QWORD *)(v8 + 124);
    v14 = v10;
    v15 = v11;
    Caver::GUIView::SetFrame((Caver::GUIView *)v8, (const Caver::Rectangle *)&v14);
    return (Caver::GUIView *)Caver::GUIView::SetTouchBoundsToIncludeSubviewTouchBounds(*((Caver::GUIView **)this + 41));
  }
  return result;
}

