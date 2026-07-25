/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049C780
 * Mangled: _ZNK5Caver13GUIScrollView21ConvertPointToSubviewERKNS_7Vector2EPKNS_7GUIViewE
 * Demangled: Caver::GUIScrollView::ConvertPointToSubview(Caver::Vector2 const&,Caver::GUIView const*)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FD4A0  Caver::GUIView::ConvertPointToSubview(Caver::Vector2 const&,Caver::GUIView const*)
 *
 * Referenced strings: 7
 *   insn=0x000000000049C790 string=0x000000000049C794 "U"
 *   insn=0x000000000049C7A8 string=0x000000000049C7AC "="
 *   insn=0x000000000049C7AC string=0x000000000049C7B0 "`"
 *   insn=0x000000000049C7AC string=0x00000000001FD4A0 "0'"
 *   insn=0x000000000049C7B0 string=0x000000000049C7B4 "h"
 *   insn=0x000000000049C7BC string=0x000000000049C7C0 " "
 *   insn=0x000000000049C7EC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __usercall Caver::GUIScrollView::ConvertPointToSubview@<D0>(
        Caver::GUIScrollView *this@<X0>,
        const Caver::Vector2 *a2@<X1>,
        const Caver::GUIView *a3@<X2>,
        float32x2_t *a4@<X8>)
{
  float32x2_t v6; // d0
  float32x2_t result; // d0
  float32x2_t v8[2]; // [xsp+0h] [xbp-30h] BYREF

  v8[1] = *(float32x2_t *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIView::ConvertPointToSubview((__int64 *)v8, this, a2, a3);
  v6.n64_u32[0] = *((_DWORD *)this + 64);
  v6.n64_u32[1] = *((_DWORD *)this + 75);
  result.n64_u64[0] = vsub_f32(v8[0], v6).n64_u64[0];
  a4->n64_u64[0] = result.n64_u64[0];
  return result;
}

