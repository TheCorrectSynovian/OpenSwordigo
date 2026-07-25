/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049B9A4
 * Mangled: _ZNK5Caver13GUIScrollView21VerticalScrollEnabledEv
 * Demangled: Caver::GUIScrollView::VerticalScrollEnabled(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::GUIScrollView::VerticalScrollEnabled(Caver::GUIScrollView *this)
{
  return *((float *)this + 62) > *((float *)this + 36);
}

