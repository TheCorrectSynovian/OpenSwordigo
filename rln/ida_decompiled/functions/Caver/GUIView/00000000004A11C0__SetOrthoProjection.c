/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A11C0
 * Mangled: _ZN5Caver7GUIView18SetOrthoProjectionEPNS_16RenderingContextERKNS_7Matrix4E
 * Demangled: Caver::GUIView::SetOrthoProjection(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FBDC0  Caver::RenderingContext::SetProjectionMatrix(Caver::Matrix4 const&)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *
 * Referenced strings: 5
 *   insn=0x00000000004A11CC string=0x00000000004A11D0 "T"
 *   insn=0x00000000004A11EC string=0x00000000004A11F0 "({"
 *   insn=0x00000000004A11FC string=0x00000000001FBDC0 "0'"
 *   insn=0x00000000004A120C string=0x00000000004A1220 ",T"
 *   insn=0x00000000004A1220 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIView::SetOrthoProjection(
        Caver::GUIView *this,
        Caver::RenderingContext *a2,
        const Caver::Matrix4 *a3)
{
  float v5[16]; // [xsp+8h] [xbp-58h] BYREF
  __int64 v6; // [xsp+48h] [xbp-18h]

  v6 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  C_Matrix4Mul((const float *)a3, (const float *)this + 41, v5);
  return Caver::RenderingContext::SetProjectionMatrix(a2, (const Caver::Matrix4 *)v5);
}

