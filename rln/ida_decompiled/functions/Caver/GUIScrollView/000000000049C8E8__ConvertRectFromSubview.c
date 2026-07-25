/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049C8E8
 * Mangled: _ZNK5Caver13GUIScrollView22ConvertRectFromSubviewERKNS_9RectangleEPKNS_7GUIViewE
 * Demangled: Caver::GUIScrollView::ConvertRectFromSubview(Caver::Rectangle const&,Caver::GUIView const*)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F34A0  Caver::GUIView::ConvertPointFromSubview(Caver::Vector2 const&,Caver::GUIView const*)
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 7
 *   insn=0x000000000049C8F8 string=0x000000000049C8FC "V"
 *   insn=0x000000000049C914 string=0x000000000049C918 "h"
 *   insn=0x000000000049C924 string=0x00000000001F34A0 "P'"
 *   insn=0x000000000049C930 string=0x000000000049C934 "h"
 *   insn=0x000000000049C934 string=0x000000000049C938 " "
 *   insn=0x000000000049C954 string=0x000000000049C96C "Yf"
 *   insn=0x000000000049C96C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __usercall Caver::GUIScrollView::ConvertRectFromSubview@<D0>(
        Caver::GUIScrollView *this@<X0>,
        const Caver::Rectangle *a2@<X1>,
        const Caver::GUIView *a3@<X2>,
        float32x2_t *a4@<X8>)
{
  float32x2_t v7; // d0
  float32x2_t result; // d0
  float32x2_t v9; // [xsp+8h] [xbp-38h] BYREF
  _QWORD v10[2]; // [xsp+10h] [xbp-30h] BYREF

  v10[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v10[0] = *(_QWORD *)a2;
  Caver::GUIView::ConvertPointFromSubview((__int64 *)&v9, this, (const Caver::Vector2 *)v10, a3);
  v7.n64_u32[0] = *((_DWORD *)this + 64);
  v7.n64_u32[1] = *((_DWORD *)this + 75);
  result.n64_u64[0] = vadd_f32(v7, v9).n64_u64[0];
  a4[1].n64_u64[0] = *(_QWORD *)((unsigned __int64)a2 + 8);
  a4->n64_u64[0] = result.n64_u64[0];
  return result;
}

