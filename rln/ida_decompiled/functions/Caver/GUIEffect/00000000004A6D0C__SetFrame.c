/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A6D0C
 * Mangled: _ZN5Caver9GUIEffect8SetFrameERKNS_9RectangleE
 * Demangled: Caver::GUIEffect::SetFrame(Caver::Rectangle const&)
 *
 * Callers: 1
 *   0x00000000001FC500  Caver::GUIEffect::SetFrame(Caver::Rectangle const&)
 *
 * Callees: 1
 *   0x00000000001FE7F0  Caver::GUIEffect::CreateVertices(void)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIEffect::SetFrame(Caver::GUIEffect *this, const Caver::Rectangle *a2)
{
  *((_OWORD *)this + 5) = *(_OWORD *)a2;
  return Caver::GUIEffect::CreateVertices(this);
}

