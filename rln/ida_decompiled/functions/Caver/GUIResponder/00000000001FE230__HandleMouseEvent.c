/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE230
 * Mangled: ._ZN5Caver12GUIResponder16HandleMouseEventERKNS_13GUIMouseEventE
 * Demangled: Caver::GUIResponder::HandleMouseEvent(Caver::GUIMouseEvent const&)
 *
 * Callers: 1
 *   0x000000000049C6D8  Caver::GUIScrollView::HandleMouseEvent(Caver::GUIMouseEvent const&)
 *
 * Callees: 1
 *   0x000000000049B504  Caver::GUIResponder::HandleMouseEvent(Caver::GUIMouseEvent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE238 string=0x00000000001FE23C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUIResponder::HandleMouseEvent()
{
  return _ZN5Caver12GUIResponder16HandleMouseEventERKNS_13GUIMouseEventE();
}

