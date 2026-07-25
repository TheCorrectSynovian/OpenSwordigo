/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDEA0
 * Mangled: ._ZN5Caver9GUIEffect8HideBarsEf
 * Demangled: Caver::GUIEffect::HideBars(float)
 *
 * Callers: 1
 *   0x000000000034FB34  Caver::GameSceneView::SetCinematicModeEnabled(bool,bool,bool)
 *
 * Callees: 1
 *   0x00000000004A7324  Caver::GUIEffect::HideBars(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDEA8 string=0x00000000001FDEAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIEffect::HideBars(Caver::GUIEffect *this, float a2)
{
  return _ZN5Caver9GUIEffect8HideBarsEf(this, a2);
}

