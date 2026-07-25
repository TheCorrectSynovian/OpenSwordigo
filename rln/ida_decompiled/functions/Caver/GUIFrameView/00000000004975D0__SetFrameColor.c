/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004975D0
 * Mangled: _ZN5Caver12GUIFrameView13SetFrameColorERKNS_5ColorE
 * Demangled: Caver::GUIFrameView::SetFrameColor(Caver::Color const&)
 *
 * Callers: 2
 *   0x00000000001FEC30  Caver::GUIFrameView::SetFrameColor(Caver::Color const&)
 *   0x0000000000497274  Caver::GUIFrameView::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&,bool)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F64D0  Caver::GUIRoundedRect::SetColor(Caver::Color)
 *
 * Referenced strings: 14
 *   insn=0x00000000004975DC string=0x00000000004975E0 "T"
 *   insn=0x00000000004975EC string=0x00000000004975F0 "("
 *   insn=0x00000000004975F0 string=0x00000000004975F4 "`~@"
 *   insn=0x00000000004975F4 string=0x00000000004975F8 "h"
 *   insn=0x00000000004975F8 string=0x00000000004975FC "@"
 *   insn=0x00000000004975FC string=0x0000000000497600 "\t}"
 *   insn=0x00000000004975FC string=0x0000000000497624 "hz@"
 *   insn=0x0000000000497600 string=0x0000000000497604 "\n}"
 *   insn=0x0000000000497604 string=0x0000000000497608 "}S"
 *   insn=0x0000000000497620 string=0x00000000001F64D0 "0'"
 *   insn=0x0000000000497624 string=0x0000000000497628 "h"
 *   insn=0x0000000000497628 string=0x000000000049762C "i"
 *   insn=0x000000000049762C string=0x0000000000497630 "\t"
 *   insn=0x0000000000497654 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIFrameView::SetFrameColor(Caver::GUIFrameView *this, const Caver::Color *a2)
{
  __int64 result; // x0
  __int64 v4; // x8

  _ReadStatusReg(TPIDR_EL0);
  result = *((_QWORD *)this + 31);
  *(_DWORD *)((char *)this + 233) = *(_DWORD *)a2;
  if ( result )
    result = Caver::GUIRoundedRect::SetColor();
  v4 = *((_QWORD *)this + 30);
  if ( v4 )
    *(_DWORD *)(v4 + 28) = *(_DWORD *)((char *)this + 233);
  return result;
}

