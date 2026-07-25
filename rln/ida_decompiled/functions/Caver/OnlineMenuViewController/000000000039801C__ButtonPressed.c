/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000039801C
 * Mangled: _ZN5Caver24OnlineMenuViewController13ButtonPressedEPvPNS_8GUIEventE
 * Demangled: Caver::OnlineMenuViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callers: 1
 *   0x0000000000397B98  Caver::OnlineMenuViewController::LoadView(void)
 *
 * Callees: 2
 *   0x00000000001F7010  Caver::GUIViewController::DismissModalViewController(void)
 *   0x00000000001FF0E0  Caver::OnlineMenuView::AnimateOut(void)
 *
 * Referenced strings: 5
 *   insn=0x0000000000398028 string=0x000000000039802C "h"
 *   insn=0x0000000000398030 string=0x0000000000398034 "`&@"
 *   insn=0x0000000000398034 string=0x0000000000398038 "*"
 *   insn=0x0000000000398038 string=0x000000000039803C "`"
 *   insn=0x0000000000398048 string=0x00000000001F7010 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OnlineMenuViewController::ButtonPressed(__int64 result)
{
  __int64 v1; // x19

  v1 = result;
  if ( *(_QWORD *)(result + 40) )
  {
    Caver::OnlineMenuView::AnimateOut(*(Caver::OnlineMenuView **)(result + 72));
    return Caver::GUIViewController::DismissModalViewController(*(Caver::GUIViewController **)(v1 + 40));
  }
  return result;
}

