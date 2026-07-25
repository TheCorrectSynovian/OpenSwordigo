/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E0734
 * Mangled: _ZN5Caver13OverlayButton8DrawRectEPNS_16RenderingContextERKNS_9RectangleERKNS_7Matrix4E
 * Demangled: Caver::OverlayButton::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x00000000001FF730  Caver::OverlayButton::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callees: 3
 *   0x00000000001F5960  Caver::GUIButton::SetTintColor(Caver::Color)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FBC10  Caver::GUIButton::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Referenced strings: 36
 *   insn=0x00000000003E0750 string=0x00000000003E0754 "W"
 *   insn=0x00000000003E076C string=0x00000000003E0770 "(m"
 *   insn=0x00000000003E0770 string=0x00000000003E0774 "hbG9"
 *   insn=0x00000000003E0770 string=0x00000000001FBC10 "0'"
 *   insn=0x00000000003E0778 string=0x00000000003E077C ""
 *   insn=0x00000000003E0778 string=0x00000000003E0790 "`"
 *   insn=0x00000000003E077C string=0x00000000003E0780 "`"
 *   insn=0x00000000003E077C string=0x0000000000583944 "\n"
 *   insn=0x00000000003E0790 string=0x00000000003E0794 "x"
 *   insn=0x00000000003E0794 string=0x00000000003E0798 "y"
 *   insn=0x00000000003E0798 string=0x00000000003E079C "{"
 *   insn=0x00000000003E079C string=0x00000000003E07A0 "z"
 *   insn=0x00000000003E07AC string=0x00000000003E0804 " 8 "
 *   insn=0x00000000003E07C8 string=0x00000000003E07CC "H"
 *   insn=0x00000000003E07D8 string=0x00000000003E07DC "\n"
 *   insn=0x00000000003E07DC string=0x00000000003E07E0 ""
 *   insn=0x00000000003E07E0 string=0x00000000003E07E4 "_"
 *   insn=0x00000000003E07E4 string=0x00000000003E07E8 "I"
 *   insn=0x00000000003E0808 string=0x00000000003E080C ""
 *   insn=0x00000000003E0820 string=0x00000000003E0824 "H"
 *   insn=0x00000000003E0828 string=0x00000000003E082C "\n"
 *   insn=0x00000000003E0830 string=0x00000000003E0834 "_"
 *   insn=0x00000000003E0834 string=0x00000000003E0838 "I"
 *   insn=0x00000000003E083C string=0x00000000003E0840 ""
 *   insn=0x00000000003E0858 string=0x00000000003E085C "AT"
 *   insn=0x00000000003E085C string=0x00000000003E0860 "h"
 *   insn=0x00000000003E085C string=0x00000000001F5960 "P'"
 *   insn=0x00000000003E0860 string=0x00000000003E0864 "h"
 *   insn=0x00000000003E0864 string=0x00000000003E0868 "\t"
 *   insn=0x00000000003E0880 string=0x00000000003E0884 "\n"
 *   insn=0x00000000003E0898 string=0x00000000003E089C "\t"
 *   insn=0x00000000003E08A0 string=0x00000000003E08A4 "h"
 *   insn=0x00000000003E08C0 string=0x00000000003E08C4 "'T"
 *   insn=0x00000000003E08D0 string=0x00000000003E08D4 "!"
 *   insn=0x00000000003E08D4 string=0x00000000003E08F8 "vV"
 *   insn=0x00000000003E08F8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OverlayButton::DrawRect(
        Caver::OverlayButton *this,
        Caver::RenderingContext *a2,
        const Caver::Rectangle *a3,
        const Caver::Matrix4 *a4)
{
  __int64 result; // x0
  __int64 v9; // x8

  _ReadStatusReg(TPIDR_EL0);
  result = Caver::GUIButton::DrawRect(this, a2, a3, a4);
  if ( *((_BYTE *)this + 472) || *((float *)this + 119) > 0.01 )
  {
    Caver::GUIButton::SetTintColor();
    v9 = *((_QWORD *)this + 60);
    if ( v9 && !*(_BYTE *)(v9 + 228) )
    {
      *(_BYTE *)(v9 + 228) = 1;
      Caver::GUIButton::DrawRect(this, a2, a3, a4);
      *(_BYTE *)(*((_QWORD *)this + 60) + 228LL) = 0;
    }
    else
    {
      Caver::GUIButton::DrawRect(this, a2, a3, a4);
    }
    return Caver::GUIButton::SetTintColor();
  }
  return result;
}

