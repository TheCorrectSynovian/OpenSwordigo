/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049B990
 * Mangled: _ZNK5Caver13GUIScrollView23HorizontalScrollEnabledEv
 * Demangled: Caver::GUIScrollView::HorizontalScrollEnabled(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::GUIScrollView::HorizontalScrollEnabled(Caver::GUIScrollView *this)
{
  return *((float *)this + 61) > *((float *)this + 35);
}

