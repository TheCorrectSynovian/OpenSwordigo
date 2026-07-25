/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3DD0
 * Mangled: ._ZN5Caver13GUITextBubble12UpdateLayoutEv
 * Demangled: Caver::GUITextBubble::UpdateLayout(void)
 *
 * Callers: 2
 *   0x00000000004AA868  Caver::GUITextBubble::Draw(Caver::RenderingContext *)
 *   0x00000000004AA978  Caver::GUITextBubble::UpdateLayoutIfNeeded(void)
 *
 * Callees: 1
 *   0x00000000004AA9A8  Caver::GUITextBubble::UpdateLayout(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3DD8 string=0x00000000001F3DDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUITextBubble::UpdateLayout(Caver::GUITextBubble *this)
{
  return _ZN5Caver13GUITextBubble12UpdateLayoutEv(this);
}

