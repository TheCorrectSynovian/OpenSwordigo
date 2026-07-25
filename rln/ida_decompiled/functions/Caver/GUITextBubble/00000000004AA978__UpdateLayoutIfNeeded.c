/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AA978
 * Mangled: _ZN5Caver13GUITextBubble20UpdateLayoutIfNeededEv
 * Demangled: Caver::GUITextBubble::UpdateLayoutIfNeeded(void)
 *
 * Callers: 1
 *   0x00000000001F7650  Caver::GUITextBubble::UpdateLayoutIfNeeded(void)
 *
 * Callees: 1
 *   0x00000000001F3DD0  Caver::GUITextBubble::UpdateLayout(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000004AA984 string=0x00000000004AA988 "h"
 *   insn=0x00000000004AA994 string=0x00000000001F3DD0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_BYTE *__fastcall Caver::GUITextBubble::UpdateLayoutIfNeeded(_BYTE *this)
{
  _BYTE *v1; // x19

  v1 = this;
  if ( this[32] )
  {
    this = (_BYTE *)Caver::GUITextBubble::UpdateLayout((Caver::GUITextBubble *)this);
    v1[32] = 0;
  }
  return this;
}

