/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000398058
 * Mangled: _ZN5Caver24OnlineMenuViewController13ViewDidAppearEv
 * Demangled: Caver::OnlineMenuViewController::ViewDidAppear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4030  Caver::OnlineMenuView::AnimateIn(void)
 *
 * Referenced strings: 1
 *   insn=0x000000000039805C string=0x00000000001F4030 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OnlineMenuViewController::ViewDidAppear(Caver::OnlineMenuView **this)
{
  return Caver::OnlineMenuView::AnimateIn(this[9]);
}

