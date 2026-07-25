/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B9CB0
 * Mangled: _ZN5Caver16GUITextFieldImpl8DrawRectEPNS_16RenderingContextERKNS_9RectangleERKNS_7Matrix4E
 * Demangled: Caver::GUITextFieldImpl::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F4510  Caver::GUILabel::BoundsForCharacterAtIndex(int)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7210  Caver::RenderingContext::SetIdentityMatrix(void)
 *   0x00000000001F9850  Caver::GUIView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000002003B0  Caver::GUIView::ConvertRectFromView(Caver::Rectangle const&,Caver::GUIView*)
 *   0x0000000000203620  Caver::RenderingContext::FillRect(Caver::Rectangle const&,Caver::Color const&,float)
 *
 * Referenced strings: 13
 *   insn=0x00000000004B9CC0 string=0x00000000004B9CC4 "V"
 *   insn=0x00000000004B9CDC string=0x00000000001F9850 "0'"
 *   insn=0x00000000004B9CF4 string=0x00000000004B9CF8 ""
 *   insn=0x00000000004B9D00 string=0x00000000004B9D04 "C"
 *   insn=0x00000000004B9D04 string=0x00000000001F7210 "0'"
 *   insn=0x00000000004B9D18 string=0x00000000001F4510 "P'"
 *   insn=0x00000000004B9D30 string=0x00000000004B9D34 ""
 *   insn=0x00000000004B9D5C string=0x00000000004B9D60 ""
 *   insn=0x00000000004B9D68 string=0x00000000004B9D6C "h"
 *   insn=0x00000000004B9D70 string=0x00000000004B9D74 "h"
 *   insn=0x00000000004B9D8C string=0x00000000004B9D90 "$&"
 *   insn=0x00000000004B9DA0 string=0x00000000004B9DB8 "F"
 *   insn=0x00000000004B9DB8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUITextFieldImpl::DrawRect(
        Caver::GUILabel **this,
        Caver::RenderingContext *a2,
        const Caver::Rectangle *a3,
        const Caver::Matrix4 *a4)
{
  __int64 v7; // x8
  float v8; // s0
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  __int64 v10; // [xsp+18h] [xbp-38h] BYREF
  int v11; // [xsp+20h] [xbp-30h]
  float v12; // [xsp+24h] [xbp-2Ch]
  __int64 v13; // [xsp+28h] [xbp-28h]

  v13 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIView::DrawRect();
  if ( *((_BYTE *)this + 409) )
  {
    (*((void (__fastcall **)(Caver::GUILabel **, Caver::RenderingContext *, const Caver::Matrix4 *))*this + 37))(
      this,
      a2,
      a4);
    Caver::RenderingContext::SetIdentityMatrix(a2);
    Caver::GUILabel::BoundsForCharacterAtIndex(v9, this[41], *((_DWORD *)this[49] - 6));
    Caver::GUIView::ConvertRectFromView(&v10, (Caver::GUIView *)this, (const Caver::Rectangle *)v9, this[41]);
    v7 = *((_QWORD *)this[49] - 3);
    if ( (_DWORD)v7 )
    {
      if ( v7 != (int)v7 )
      {
LABEL_7:
        v11 = 1077936128;
        v12 = v12 + 2.0;
        LODWORD(v9[0]) = -12865285;
        Caver::RenderingContext::FillRect(a2, (const Caver::Rectangle *)&v10, (const Caver::Color *)v9, 0.0);
        return;
      }
      v8 = 2.0;
    }
    else
    {
      v8 = -2.0;
    }
    *(float *)&v10 = v8 + *(float *)&v10;
    goto LABEL_7;
  }
}

