/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044353C
 * Mangled: _ZN5Caver7TabView6UpdateEf
 * Demangled: Caver::TabView::Update(float)
 *
 * Callers: 1
 *   0x00000000004431AC  Caver::TabView::UpdateSprite(void)
 *
 * Callees: 1
 *   0x00000000001FE6C0  Caver::GUIView::Update(float)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TabView::Update(Caver::GUIView *this, float a2)
{
  return Caver::GUIView::Update(this, a2);
}

