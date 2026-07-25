/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000041C61C
 * Mangled: _ZN5Caver11LevelUpView14LayoutSubviewsEv
 * Demangled: Caver::LevelUpView::LayoutSubviews(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FDA30  Caver::Vector2::Rounded(void)
 *
 * Referenced strings: 27
 *   insn=0x000000000041C634 string=0x000000000041C638 "T"
 *   insn=0x000000000041C644 string=0x000000000041C648 "`"
 *   insn=0x000000000041C64C string=0x000000000041C684 "h"
 *   insn=0x000000000041C650 string=0x000000000041C654 "c"
 *   insn=0x000000000041C654 string=0x000000000041C658 "b"
 *   insn=0x000000000041C660 string=0x000000000041C664 "c(%"
 *   insn=0x000000000041C664 string=0x000000000041C668 "A(!"
 *   insn=0x000000000041C66C string=0x000000000041C670 "A(!"
 *   insn=0x000000000041C680 string=0x00000000001FB170 "0'"
 *   insn=0x000000000041C684 string=0x000000000041C688 ""
 *   insn=0x000000000041C68C string=0x000000000041C690 "i"
 *   insn=0x000000000041C694 string=0x000000000041C698 "h"
 *   insn=0x000000000041C698 string=0x000000000041C69C "J"
 *   insn=0x000000000041C6A0 string=0x000000000041C6A4 "E!C"
 *   insn=0x000000000041C6A4 string=0x000000000041C6A8 "("
 *   insn=0x000000000041C6A8 string=0x000000000041C6AC "b"
 *   insn=0x000000000041C6B4 string=0x000000000041C6B8 "f"
 *   insn=0x000000000041C6C8 string=0x000000000041C6CC "c(%"
 *   insn=0x000000000041C6E4 string=0x000000000041C6E8 "B(&"
 *   insn=0x000000000041C6F0 string=0x000000000041C6F4 "A8$"
 *   insn=0x000000000041C704 string=0x000000000041C708 "h"
 *   insn=0x000000000041C704 string=0x00000000001FDA30 "0'"
 *   insn=0x000000000041C718 string=0x000000000041C71C ""
 *   insn=0x000000000041C724 string=0x000000000041C728 "h"
 *   insn=0x000000000041C750 string=0x000000000041C754 "h"
 *   insn=0x000000000041C758 string=0x000000000041C75C "k"
 *   insn=0x000000000041C78C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall Caver::LevelUpView::LayoutSubviews(Caver::LevelUpView *this)
{
  __int64 *result; // x0
  unsigned __int64 v3; // d0
  float v4; // s3
  int v5; // w8
  bool v6; // vf
  int v7; // w8
  __int64 v8; // x9
  float v9; // w21
  float v10; // w22
  float v11; // s0
  unsigned __int64 v12; // d0
  __int64 v13; // x23
  __int64 v14; // x24
  Caver::GUIView *v15; // x0
  float v16[2]; // [xsp+8h] [xbp-68h] BYREF
  float32x2_t v17; // [xsp+10h] [xbp-60h] BYREF
  unsigned __int64 v18; // [xsp+18h] [xbp-58h] BYREF
  unsigned __int64 v19; // [xsp+20h] [xbp-50h]
  __int64 v20; // [xsp+28h] [xbp-48h]

  v20 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = (__int64 *)*((_QWORD *)this + 33);
  if ( result )
  {
    v3 = *(__int64 *)((char *)result + 124);
    v4 = *((float *)this + 34) + 6.0;
    *(float *)&v18 = (float)(-6.0 - *(float *)&v3) + (float)(*((float *)this + 33) + *((float *)this + 35));
    *((float *)&v18 + 1) = v4;
    v19 = v3;
    result = (__int64 *)Caver::GUIView::SetFrame((Caver::GUIView *)result, (const Caver::Rectangle *)&v18);
  }
  v5 = *((_DWORD *)this + 70);
  v6 = __OFSUB__(v5, 1);
  v7 = v5 - 1;
  if ( v7 < 0 == v6 )
  {
    v8 = *((_QWORD *)this + 36);
    v9 = *(float *)(*(_QWORD *)v8 + 124LL);
    v10 = *(float *)(*(_QWORD *)v8 + 128LL);
    v11 = (float)((float)((float)((float)((float)v7 * 40.0) + v10) * 0.5) - v10)
        + (float)(*((float *)this + 34) + (float)(*((float *)this + 36) * 0.5));
    v16[0] = (float)(*((float *)this + 33) + (float)(*((float *)this + 35) * 0.5))
           - (float)((float)((float)((float)v7 * 35.0) + v9) * 0.5);
    v16[1] = v11;
    result = Caver::Vector2::Rounded((__int64 *)&v17, (Caver::Vector2 *)v16);
    if ( *((int *)this + 70) >= 1 )
    {
      v12 = v17.n64_u64[0];
      v13 = 0;
      v14 = 0;
      do
      {
        v15 = *(Caver::GUIView **)(*((_QWORD *)this + 36) + v13);
        v18 = v12;
        v19 = __PAIR64__(LODWORD(v10), LODWORD(v9));
        result = (__int64 *)Caver::GUIView::SetFrame(v15, (const Caver::Rectangle *)&v18);
        ++v14;
        v13 += 16;
        v12 = vadd_f32(v17, (float32x2_t)0xC2200000420C0000LL).n64_u64[0];
        v17.n64_u64[0] = v12;
      }
      while ( v14 < *((int *)this + 70) );
    }
  }
  return result;
}

