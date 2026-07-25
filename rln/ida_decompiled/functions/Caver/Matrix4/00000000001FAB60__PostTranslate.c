/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAB60
 * Mangled: ._ZN5Caver7Matrix413PostTranslateEfff
 * Demangled: Caver::Matrix4::PostTranslate(float,float,float)
 *
 * Callers: 1
 *   0x000000000049E954  Caver::GUIView::PurgeRemovedSubviews(void)
 *
 * Callees: 1
 *   0x00000000004AF198  Caver::Matrix4::PostTranslate(float,float,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAB68 string=0x00000000001FAB6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Matrix4::PostTranslate(Caver::Matrix4 *this, float a2, float a3, float a4)
{
  return _ZN5Caver7Matrix413PostTranslateEfff(this, a2, a3, a4);
}

