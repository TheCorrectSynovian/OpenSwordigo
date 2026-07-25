/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000042F014
 * Mangled: _ZN5Caver10PortalView14LayoutSubviewsEv
 * Demangled: Caver::PortalView::LayoutSubviews(void)
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F3C90  Caver::Rectangle::RectangleByOutsetting(float)
 *   0x00000000001F5CB0  Caver::GUIView::safeBounds(void)
 *   0x00000000001F5F80  Caver::PortalView::AnimateIn(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6F20  Caver::GUIScrollView::ScrollRectToVisible(Caver::Rectangle const&,bool)
 *   0x00000000001F94B0  Caver::GUIView::LayoutSubviews(void)
 *   0x00000000001F9C60  Caver::Rectangle::TranslatedRectangle(Caver::Vector2 const&)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FDA30  Caver::Vector2::Rounded(void)
 *   0x00000000002003B0  Caver::GUIView::ConvertRectFromView(Caver::Rectangle const&,Caver::GUIView*)
 *
 * Referenced strings: 83
 *   insn=0x000000000042F02C string=0x000000000042F030 "U"
 *   insn=0x000000000042F040 string=0x000000000042F044 "`"
 *   insn=0x000000000042F040 string=0x00000000001F94B0 "0'"
 *   insn=0x000000000042F044 string=0x000000000042F048 "a"
 *   insn=0x000000000042F048 string=0x000000000042F04C "I0"
 *   insn=0x000000000042F04C string=0x000000000042F050 "`"
 *   insn=0x000000000042F04C string=0x00000000001FB170 "0'"
 *   insn=0x000000000042F050 string=0x000000000042F054 "`"
 *   insn=0x000000000042F054 string=0x000000000042F058 "a"
 *   insn=0x000000000042F058 string=0x000000000042F05C "h"
 *   insn=0x000000000042F060 string=0x000000000042F064 "\t"
 *   insn=0x000000000042F084 string=0x000000000042F088 ":0"
 *   insn=0x000000000042F088 string=0x000000000042F08C "h"
 *   insn=0x000000000042F08C string=0x000000000042F090 ")"
 *   insn=0x000000000042F090 string=0x000000000042F094 " EA"
 *   insn=0x000000000042F094 string=0x000000000042F098 "i"
 *   insn=0x000000000042F098 string=0x000000000042F09C ""
 *   insn=0x000000000042F09C string=0x000000000042F0A0 "`"
 *   insn=0x000000000042F0AC string=0x000000000042F0B0 "00"
 *   insn=0x000000000042F0B0 string=0x000000000042F0B4 "t"
 *   insn=0x000000000042F0C0 string=0x00000000001F5CB0 "P'"
 *   insn=0x000000000042F0C8 string=0x000000000042F0CC "h"
 *   insn=0x000000000042F0CC string=0x000000000042F0D0 "i"
 *   insn=0x000000000042F0E4 string=0x000000000042F0E8 "$"
 *   insn=0x000000000042F0E8 string=0x000000000042F0EC "\n"
 *   insn=0x000000000042F0F0 string=0x000000000042F0F4 "c*"
 *   insn=0x000000000042F0F4 string=0x000000000042F0F8 "!(#"
 *   insn=0x000000000042F0F8 string=0x000000000042F0FC "B*"
 *   insn=0x000000000042F100 string=0x000000000042F104 "!8""
 *   insn=0x000000000042F108 string=0x000000000042F10C "!@&"
 *   insn=0x000000000042F120 string=0x000000000042F124 "t"
 *   insn=0x000000000042F124 string=0x000000000042F128 ""
 *   insn=0x000000000042F138 string=0x00000000001F3C90 "P'"
 *   insn=0x000000000042F148 string=0x000000000042F14C "t"
 *   insn=0x000000000042F150 string=0x000000000042F154 "h"
 *   insn=0x000000000042F15C string=0x000000000042F160 "i"
 *   insn=0x000000000042F16C string=0x000000000042F170 "$"
 *   insn=0x000000000042F174 string=0x000000000042F178 "c*"
 *   insn=0x000000000042F17C string=0x000000000042F180 "B(#"
 *   insn=0x000000000042F180 string=0x000000000042F184 "!*"
 *   insn=0x000000000042F188 string=0x000000000042F18C "A8!"
 *   insn=0x000000000042F190 string=0x000000000042F194 "!@&"
 *   insn=0x000000000042F1A8 string=0x000000000042F1AC "t"
 *   insn=0x000000000042F1CC string=0x000000000042F1D0 "t"
 *   insn=0x000000000042F1DC string=0x000000000042F1E0 "h"
 *   insn=0x000000000042F1E0 string=0x000000000042F1E4 "i"
 *   insn=0x000000000042F1F8 string=0x000000000042F1FC "$"
 *   insn=0x000000000042F200 string=0x000000000042F204 "c*"
 *   insn=0x000000000042F204 string=0x000000000042F208 "!(#"
 *   insn=0x000000000042F208 string=0x000000000042F20C "B*"
 *   insn=0x000000000042F210 string=0x000000000042F214 "!8""
 *   insn=0x000000000042F218 string=0x000000000042F21C "!@&"
 *   insn=0x000000000042F230 string=0x000000000042F234 "t"
 *   insn=0x000000000042F24C string=0x000000000042F250 "h"
 *   insn=0x000000000042F250 string=0x000000000042F254 "\t"
 *   insn=0x000000000042F258 string=0x000000000042F25C "\t"
 *   insn=0x000000000042F258 string=0x000000000042F2F4 "i"
 *   insn=0x000000000042F25C string=0x000000000042F260 "j"
 *   insn=0x000000000042F260 string=0x000000000042F264 ""
 *   insn=0x000000000042F268 string=0x000000000042F26C ")"
 *   insn=0x000000000042F26C string=0x000000000042F270 "@"
 *   insn=0x000000000042F270 string=0x000000000042F274 "ii"
 *   insn=0x000000000042F27C string=0x000000000042F280 ""
 *   insn=0x000000000042F28C string=0x000000000042F290 " "
 *   insn=0x000000000042F298 string=0x00000000001FDA30 "0'"
 *   insn=0x000000000042F2A4 string=0x000000000042F2A8 "t"
 *   insn=0x000000000042F2A8 string=0x000000000042F2AC "b"
 *   insn=0x000000000042F2B4 string=0x000000000042F2B8 ">D"
 *   insn=0x000000000042F2B8 string=0x000000000042F2BC "h"
 *   insn=0x000000000042F2D4 string=0x000000000042F2D8 "!@!"
 *   insn=0x000000000042F2DC string=0x000000000042F2E0 "`*"
 *   insn=0x000000000042F2E0 string=0x00000000001F9C60 "0'"
 *   insn=0x000000000042F2F0 string=0x00000000001F6F20 "0'"
 *   insn=0x000000000042F2F4 string=0x000000000042F2F8 "h"
 *   insn=0x000000000042F2F8 string=0x000000000042F2FC "t"
 *   insn=0x000000000042F300 string=0x000000000042F304 "!"
 *   insn=0x000000000042F30C string=0x000000000042F310 "$y@"
 *   insn=0x000000000042F310 string=0x000000000042F314 "!*"
 *   insn=0x000000000042F318 string=0x000000000042F31C "c*"
 *   insn=0x000000000042F324 string=0x000000000042F328 "!8#"
 *   insn=0x000000000042F350 string=0x000000000042F354 ""
 *   insn=0x000000000042F354 string=0x00000000001F5F80 "P'"
 *   insn=0x000000000042F384 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PortalView::LayoutSubviews(Caver::GUIView **this)
{
  float *v2; // x0
  unsigned int v3; // w8
  float v4; // s2
  unsigned int v5; // s0
  unsigned int v6; // w9
  unsigned int v7; // w8
  Caver::GUIView *v8; // x0
  Caver::GUIView *v9; // x20
  Caver::GUIView *v10; // x9
  unsigned int v11; // s0
  unsigned int v12; // s1
  Caver::GUIView *v13; // x20
  Caver::GUIView *v14; // x20
  Caver::GUIView *v15; // x9
  unsigned int v16; // s0
  unsigned int v17; // s1
  Caver::GUIView *v18; // x20
  Caver::GUIView *v19; // x20
  Caver::GUIView *v20; // x9
  unsigned int v21; // s0
  unsigned int v22; // s1
  Caver::GUIView *v23; // x20
  Caver::GUIView *v24; // x8
  float32x2_t **v25; // x8
  Caver::GUIView *v26; // x20
  Caver::GUIView *v27; // x8
  float v28; // s1
  float *v29; // x20
  float v30; // s1
  __int64 v31; // x8
  float v33[10]; // [xsp+0h] [xbp-A0h] BYREF
  float v34[2]; // [xsp+28h] [xbp-78h] BYREF
  __int64 v35[2]; // [xsp+30h] [xbp-70h] BYREF
  unsigned __int64 v36; // [xsp+40h] [xbp-60h] BYREF
  __int64 v37; // [xsp+48h] [xbp-58h] BYREF
  float v38; // [xsp+50h] [xbp-50h]
  __int128 v39; // [xsp+58h] [xbp-48h] BYREF
  __int64 v40; // [xsp+68h] [xbp-38h]

  v40 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIView::LayoutSubviews((Caver::GUIView *)this);
  Caver::GUIView::SetFrame(this[32], (const Caver::Rectangle *)((char *)this + 132));
  v2 = (float *)this[42];
  v3 = *((_DWORD *)this + 35);
  v4 = v2[32];
  *(float *)&v5 = (float)((float)(*((float *)this + 34) + *((float *)this + 36)) + -10.0) - v4;
  LODWORD(v39) = 0;
  *(_QWORD *)((char *)&v39 + 4) = __PAIR64__(v3, v5);
  *((float *)&v39 + 3) = v4;
  Caver::GUIView::SetFrame((Caver::GUIView *)v2, (const Caver::Rectangle *)&v39);
  v6 = *((_DWORD *)this + 35);
  v7 = *((_DWORD *)this[42] + 32);
  v8 = this[44];
  *(_QWORD *)&v39 = 0x4120000000000000LL;
  *((_QWORD *)&v39 + 1) = __PAIR64__(v7, v6);
  Caver::GUIView::SetFrame(v8, (const Caver::Rectangle *)&v39);
  v9 = this[36];
  Caver::GUIView::safeBounds((Caver::GUIView *)this);
  v10 = this[36];
  *(float *)&v11 = roundf((float)((float)(v33[6] + v33[8]) + -15.0) - *((float *)v10 + 31));
  *(float *)&v12 = roundf(
                     (float)(*((float *)this[42] + 30) + (float)(*((float *)this[42] + 32) * 0.5))
                   - (float)(*((float *)v10 + 32) * 0.5));
  *((_QWORD *)&v39 + 1) = *(_QWORD *)((char *)v9 + 124);
  *(_QWORD *)&v39 = __PAIR64__(v12, v11);
  Caver::GUIView::SetFrame(v9, (const Caver::Rectangle *)&v39);
  v13 = this[36];
  Caver::Rectangle::RectangleByOutsetting((__int64 *)&v39, (Caver::GUIView *)((char *)v13 + 132), 10.0);
  *(_OWORD *)((char *)v13 + 148) = v39;
  v14 = this[38];
  Caver::GUIView::safeBounds((Caver::GUIView *)this);
  v15 = this[38];
  *(float *)&v16 = roundf((float)((float)(*(float *)&v37 + v38) + -10.0) - *((float *)v15 + 31));
  *(float *)&v17 = roundf(
                     (float)(*((float *)this[44] + 30) + (float)(*((float *)this[44] + 32) * 0.5))
                   - (float)(*((float *)v15 + 32) * 0.5));
  *((_QWORD *)&v39 + 1) = *(_QWORD *)((char *)v14 + 124);
  *(_QWORD *)&v39 = __PAIR64__(v17, v16);
  Caver::GUIView::SetFrame(v14, (const Caver::Rectangle *)&v39);
  v18 = this[38];
  Caver::Rectangle::RectangleByOutsetting((__int64 *)&v39, (Caver::GUIView *)((char *)v18 + 132), 10.0);
  *(_OWORD *)((char *)v18 + 148) = v39;
  v19 = this[40];
  Caver::GUIView::safeBounds((Caver::GUIView *)this);
  v20 = this[40];
  *(float *)&v21 = roundf((float)((float)(v33[2] + v33[4]) + -30.0) - *((float *)v20 + 31));
  *(float *)&v22 = roundf(
                     (float)(*((float *)this[44] + 30) + (float)(*((float *)this[44] + 32) * 0.5))
                   - (float)(*((float *)v20 + 32) * 0.5));
  *((_QWORD *)&v39 + 1) = *(_QWORD *)((char *)v19 + 124);
  *(_QWORD *)&v39 = __PAIR64__(v22, v21);
  Caver::GUIView::SetFrame(v19, (const Caver::Rectangle *)&v39);
  v23 = this[40];
  Caver::Rectangle::RectangleByOutsetting((__int64 *)&v39, (Caver::GUIView *)((char *)v23 + 132), 5.0);
  *(_OWORD *)((char *)v23 + 148) = v39;
  v24 = this[34];
  if ( *((_BYTE *)v24 + 1016) )
  {
    v25 = *(float32x2_t ***)(*((_QWORD *)v24 + 35) + 16LL * *((_QWORD *)v24 + 128));
    *((_QWORD *)&v39 + 1) = *(_QWORD *)((char *)this[32] + 124);
    v36 = vsub_f32((*v25)[1], vmul_f32(*(float32x2_t *)((char *)&v39 + 8), (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
    Caver::Vector2::Rounded(&v37, (Caver::Vector2 *)&v36);
    *(_QWORD *)&v39 = v37;
    v26 = this[32];
    Caver::GUIView::ConvertRectFromView(v35, v26, (const Caver::Rectangle *)&v39, this[34]);
    v27 = this[32];
    v28 = *((float *)v27 + 75);
    v34[0] = -*((float *)v27 + 64);
    v34[1] = -v28;
    Caver::Rectangle::TranslatedRectangle(&v37, (Caver::Rectangle *)v35, (const Caver::Vector2 *)v34);
    Caver::GUIScrollView::ScrollRectToVisible(v26, (const Caver::Rectangle *)&v37, 0);
  }
  v29 = (float *)this[46];
  v30 = (float)(*((float *)this[42] + 30) + (float)(*((float *)this[42] + 32) * 0.5)) - (float)(v29[32] * 0.5);
  v33[0] = (float)(*((float *)this[36] + 29) + -10.0) - v29[31];
  v33[1] = v30;
  Caver::Vector2::Rounded(&v37, (Caver::Vector2 *)v33);
  v31 = *(_QWORD *)(v29 + 31);
  *(_QWORD *)&v39 = v37;
  *((_QWORD *)&v39 + 1) = v31;
  Caver::GUIView::SetFrame((Caver::GUIView *)v29, (const Caver::Rectangle *)&v39);
  return Caver::PortalView::AnimateIn((Caver::PortalView *)this);
}

