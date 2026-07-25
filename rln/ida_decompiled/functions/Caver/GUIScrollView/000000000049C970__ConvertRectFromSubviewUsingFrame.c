/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049C970
 * Mangled: _ZNK5Caver13GUIScrollView32ConvertRectFromSubviewUsingFrameERKNS_9RectangleEPKNS_7GUIViewES3_
 * Demangled: Caver::GUIScrollView::ConvertRectFromSubviewUsingFrame(Caver::Rectangle const&,Caver::GUIView const*,Caver::Rectangle const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4AC0  Caver::GUIView::ConvertRectFromSubviewUsingFrame(Caver::Rectangle const&,Caver::GUIView const*,Caver::Rectangle const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9C60  Caver::Rectangle::TranslatedRectangle(Caver::Vector2 const&)
 *
 * Referenced strings: 8
 *   insn=0x000000000049C980 string=0x000000000049C984 "U"
 *   insn=0x000000000049C998 string=0x000000000049C99C "I`"
 *   insn=0x000000000049C99C string=0x000000000049C9A0 "h"
 *   insn=0x000000000049C99C string=0x00000000001F4AC0 "P'"
 *   insn=0x000000000049C9A0 string=0x000000000049C9A4 "i.A"
 *   insn=0x000000000049C9B8 string=0x00000000001F9C60 "0'"
 *   insn=0x000000000049C9C8 string=0x000000000049C9E0 "<f"
 *   insn=0x000000000049C9E0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__usercall Caver::GUIScrollView::ConvertRectFromSubviewUsingFrame@<X0>(
        Caver::GUIScrollView *this@<X0>,
        const Caver::Rectangle *a2@<X1>,
        const Caver::GUIView *a3@<X2>,
        const Caver::Rectangle *a4@<X3>,
        __int64 *a5@<X8>)
{
  int v7; // w9
  _DWORD v9[2]; // [xsp+0h] [xbp-40h] BYREF
  __int64 v10[3]; // [xsp+8h] [xbp-38h] BYREF

  v10[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIView::ConvertRectFromSubviewUsingFrame(v10, this, a2, a3, a4);
  v7 = *((_DWORD *)this + 75);
  v9[0] = *((_DWORD *)this + 64);
  v9[1] = v7;
  return Caver::Rectangle::TranslatedRectangle(a5, (Caver::Rectangle *)v10, (const Caver::Vector2 *)v9);
}

