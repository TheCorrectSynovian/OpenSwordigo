/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049C7F0
 * Mangled: _ZNK5Caver13GUIScrollView23ConvertPointFromSubviewERKNS_7Vector2EPKNS_7GUIViewE
 * Demangled: Caver::GUIScrollView::ConvertPointFromSubview(Caver::Vector2 const&,Caver::GUIView const*)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F34A0  Caver::GUIView::ConvertPointFromSubview(Caver::Vector2 const&,Caver::GUIView const*)
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 6
 *   insn=0x000000000049C800 string=0x000000000049C804 "U"
 *   insn=0x000000000049C818 string=0x000000000049C81C "!["
 *   insn=0x000000000049C81C string=0x000000000049C820 "`"
 *   insn=0x000000000049C81C string=0x00000000001F34A0 "P'"
 *   insn=0x000000000049C820 string=0x000000000049C824 "h"
 *   insn=0x000000000049C85C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __usercall Caver::GUIScrollView::ConvertPointFromSubview@<D0>(
        Caver::GUIScrollView *this@<X0>,
        const Caver::Vector2 *a2@<X1>,
        const Caver::GUIView *a3@<X2>,
        float32x2_t *a4@<X8>)
{
  float32x2_t v6; // d0
  float32x2_t result; // d0
  float32x2_t v8[2]; // [xsp+0h] [xbp-30h] BYREF

  v8[1] = *(float32x2_t *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIView::ConvertPointFromSubview((__int64 *)v8, this, a2, a3);
  v6.n64_u32[0] = *((_DWORD *)this + 64);
  v6.n64_u32[1] = *((_DWORD *)this + 75);
  result.n64_u64[0] = vadd_f32(v6, v8[0]).n64_u64[0];
  a4->n64_u64[0] = result.n64_u64[0];
  return result;
}

