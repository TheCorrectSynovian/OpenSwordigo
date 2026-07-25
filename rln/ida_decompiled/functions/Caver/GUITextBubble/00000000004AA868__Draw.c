/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AA868
 * Mangled: _ZN5Caver13GUITextBubble4DrawEPNS_16RenderingContextE
 * Demangled: Caver::GUITextBubble::Draw(Caver::RenderingContext *)
 *
 * Callers: 1
 *   0x0000000000202160  Caver::GUITextBubble::Draw(Caver::RenderingContext *)
 *
 * Callees: 9
 *   0x00000000001F3820  Caver::RenderingContext::SetDefaultBlendFunc(void)
 *   0x00000000001F3DD0  Caver::GUITextBubble::UpdateLayout(void)
 *   0x00000000001F5ED0  Caver::RenderingContext::UseProgram(uint)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB1A0  Caver::RenderingContext::SetColor(Caver::Color const&)
 *   0x00000000001FC450  Caver::RenderingContext::SetBlendingEnabled(bool)
 *   0x00000000001FCDA0  Caver::Sprite::Draw(Caver::RenderingContext *)
 *   0x00000000001FE140  Caver::FontText::DrawSubstring(Caver::RenderingContext *,ulong,ulong)
 *   0x00000000002023B0  Caver::GUIRoundedRect::Draw(Caver::RenderingContext *)
 *
 * Referenced strings: 28
 *   insn=0x00000000004AA878 string=0x00000000004AA87C "U"
 *   insn=0x00000000004AA88C string=0x00000000004AA890 "h"
 *   insn=0x00000000004AA894 string=0x00000000004AA8A4 "`"
 *   insn=0x00000000004AA898 string=0x00000000004AA89C "M%"
 *   insn=0x00000000004AA89C string=0x00000000001F3DD0 "P'"
 *   insn=0x00000000004AA8A4 string=0x00000000004AA8A8 "`"
 *   insn=0x00000000004AA8A8 string=0x00000000004AA8B4 "h"@"
 *   insn=0x00000000004AA8B8 string=0x00000000004AA8E8 "`2@"
 *   insn=0x00000000004AA8C4 string=0x00000000001FC450 "0'"
 *   insn=0x00000000004AA8CC string=0x00000000001F3820 "P'"
 *   insn=0x00000000004AA8D4 string=0x00000000004AA8D8 "~-"
 *   insn=0x00000000004AA8D8 string=0x00000000004AA8DC "`"@"
 *   insn=0x00000000004AA8D8 string=0x00000000001F5ED0 "P'"
 *   insn=0x00000000004AA8E0 string=0x00000000004AA8E4 "/I"
 *   insn=0x00000000004AA8E4 string=0x00000000001FCDA0 "0'"
 *   insn=0x00000000004AA8EC string=0x00000000004AA8F0 "cB@"
 *   insn=0x00000000004AA8EC string=0x00000000004AA900 "hFB9h"
 *   insn=0x00000000004AA900 string=0x00000000004AA904 "h"
 *   insn=0x00000000004AA90C string=0x00000000004AA910 "p-"
 *   insn=0x00000000004AA910 string=0x00000000004AA914 "h2@"
 *   insn=0x00000000004AA91C string=0x00000000004AA920 "\tA@9"
 *   insn=0x00000000004AA924 string=0x00000000004AA928 "\tE@9"
 *   insn=0x00000000004AA92C string=0x00000000004AA930 "\tI@9"
 *   insn=0x00000000004AA934 string=0x00000000004AA938 "M@9"
 *   insn=0x00000000004AA940 string=0x00000000004AA944 "`*@"
 *   insn=0x00000000004AA940 string=0x00000000001FB1A0 "0'"
 *   insn=0x00000000004AA95C string=0x00000000004AA974 "W."
 *   insn=0x00000000004AA974 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::FontText *__fastcall Caver::GUITextBubble::Draw(Caver::GUITextBubble *this, Caver::RenderingContext *a2)
{
  Caver::GUIRoundedRect *v4; // x0
  Caver::FontText *result; // x0
  _BYTE *v6; // x8
  _BYTE v7[8]; // [xsp+0h] [xbp-30h] BYREF
  __int64 v8; // [xsp+8h] [xbp-28h]

  v8 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((_BYTE *)this + 32) )
  {
    Caver::GUITextBubble::UpdateLayout(this);
    *((_BYTE *)this + 32) = 0;
  }
  v4 = (Caver::GUIRoundedRect *)*((_QWORD *)this + 6);
  if ( v4 )
    Caver::GUIRoundedRect::Draw(v4, a2);
  if ( *((_QWORD *)this + 8) )
  {
    Caver::RenderingContext::SetBlendingEnabled(a2, 1);
    Caver::RenderingContext::SetDefaultBlendFunc(a2);
    Caver::RenderingContext::UseProgram(a2, 3u);
    Caver::Sprite::Draw(*((Caver::Sprite **)this + 8), a2);
  }
  result = (Caver::FontText *)*((_QWORD *)this + 12);
  if ( result )
    result = (Caver::FontText *)Caver::FontText::DrawSubstring(result, a2, 0, *((_QWORD *)this + 16));
  if ( *((_BYTE *)this + 145) )
  {
    Caver::RenderingContext::UseProgram(a2, 1u);
    v6 = (_BYTE *)*((_QWORD *)this + 12);
    v7[0] = v6[16];
    v7[1] = v6[17];
    v7[2] = v6[18];
    v7[3] = v6[19];
    Caver::RenderingContext::SetColor(a2, (const Caver::Color *)v7);
    return (Caver::FontText *)Caver::Sprite::Draw(*((Caver::Sprite **)this + 10), a2);
  }
  return result;
}

