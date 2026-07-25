/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000041CD00
 * Mangled: _ZN5Caver11LoadingView6UpdateEf
 * Demangled: Caver::LoadingView::Update(float)
 *
 * Callers: 1
 *   0x00000000001FBD20  Caver::LoadingView::Update(float)
 *
 * Callees: 1
 *   0x00000000001FE6C0  Caver::GUIView::Update(float)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::LoadingView::Update(Caver::GUIView *this, float a2)
{
  return Caver::GUIView::Update(this, a2);
}

