/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000041F7D4
 * Mangled: _ZN5Caver11MapMenuPage28MapViewDidSelectionDidChangeEPNS_7MapViewE
 * Demangled: Caver::MapMenuPage::MapViewDidSelectionDidChange(Caver::MapView *)
 *
 * Callers: 1
 *   0x00000000001F8530  Caver::MapMenuPage::MapViewDidSelectionDidChange(Caver::MapView *)
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6F20  Caver::GUIScrollView::ScrollRectToVisible(Caver::Rectangle const&,bool)
 *   0x00000000001F9C60  Caver::Rectangle::TranslatedRectangle(Caver::Vector2 const&)
 *   0x00000000001FD030  Caver::MapMenuPage::UpdateTitle(void)
 *   0x00000000002003B0  Caver::GUIView::ConvertRectFromView(Caver::Rectangle const&,Caver::GUIView*)
 *
 * Referenced strings: 20
 *   insn=0x000000000041F7E4 string=0x000000000041F7E8 "U"
 *   insn=0x000000000041F7F4 string=0x000000000041F7F8 "("
 *   insn=0x000000000041F7FC string=0x000000000041F800 "b"
 *   insn=0x000000000041F804 string=0x000000000041F808 "H"
 *   insn=0x000000000041F808 string=0x000000000041F80C "I"
 *   insn=0x000000000041F80C string=0x000000000041F810 ""
 *   insn=0x000000000041F810 string=0x000000000041F814 "(ih"
 *   insn=0x000000000041F814 string=0x000000000041F818 "I"
 *   insn=0x000000000041F818 string=0x000000000041F81C " "
 *   insn=0x000000000041F820 string=0x000000000041F824 ""
 *   insn=0x000000000041F824 string=0x000000000041F828 ""yC"
 *   insn=0x000000000041F82C string=0x000000000041F830 "@"
 *   insn=0x000000000041F834 string=0x000000000041F838 " ( "
 *   insn=0x000000000041F840 string=0x000000000041F844 "t"
 *   insn=0x000000000041F850 string=0x000000000041F854 "h"
 *   insn=0x000000000041F86C string=0x000000000041F870 "!@!"
 *   insn=0x000000000041F878 string=0x00000000001F9C60 "0'"
 *   insn=0x000000000041F888 string=0x00000000001F6F20 "0'"
 *   insn=0x000000000041F890 string=0x00000000001FD030 "0'"
 *   insn=0x000000000041F8B8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MapMenuPage::MapViewDidSelectionDidChange(Caver::MapMenuPage *this, Caver::MapView *a2)
{
  Caver::GUIView *v3; // x2
  __int64 v4; // x8
  float v5; // s1
  Caver::GUIView *v6; // x20
  __int64 v7; // x8
  float v8; // s1
  float v10[2]; // [xsp+0h] [xbp-60h] BYREF
  __int64 v11[2]; // [xsp+8h] [xbp-58h] BYREF
  __int64 v12[2]; // [xsp+18h] [xbp-48h] BYREF
  float v13[2]; // [xsp+28h] [xbp-38h] BYREF
  __int64 v14; // [xsp+30h] [xbp-30h]
  __int64 v15; // [xsp+38h] [xbp-28h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((_BYTE *)a2 + 1016) )
  {
    v3 = (Caver::GUIView *)*((_QWORD *)this + 57);
    v4 = **(_QWORD **)(*((_QWORD *)v3 + 35) + 16LL * *((_QWORD *)v3 + 128));
    v5 = *(float *)(v4 + 8);
    LODWORD(v4) = *(_DWORD *)(v4 + 12);
    v14 = 1128792064;
    v13[0] = v5 + -100.0;
    LODWORD(v13[1]) = v4;
    v6 = (Caver::GUIView *)*((_QWORD *)this + 55);
    Caver::GUIView::ConvertRectFromView(v11, v6, (const Caver::Rectangle *)v13, v3);
    v7 = *((_QWORD *)this + 55);
    v8 = *(float *)(v7 + 300);
    v10[0] = -*(float *)(v7 + 256);
    v10[1] = -v8;
    Caver::Rectangle::TranslatedRectangle(v12, (Caver::Rectangle *)v11, (const Caver::Vector2 *)v10);
    Caver::GUIScrollView::ScrollRectToVisible(v6, (const Caver::Rectangle *)v12, 1);
  }
  return Caver::MapMenuPage::UpdateTitle(this);
}

