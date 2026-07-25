/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202540
 * Mangled: ._ZN5Caver9GUIEffect8ShowBarsEf
 * Demangled: Caver::GUIEffect::ShowBars(float)
 *
 * Callers: 2
 *   0x000000000034FB34  Caver::GameSceneView::SetCinematicModeEnabled(bool,bool,bool)
 *   0x000000000038BFD8  Caver::CreditsView::CreditsView(void)
 *
 * Callees: 1
 *   0x00000000004A72F0  Caver::GUIEffect::ShowBars(float)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202548 string=0x000000000020254C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIEffect::ShowBars(Caver::GUIEffect *this, float a2)
{
  return _ZN5Caver9GUIEffect8ShowBarsEf(this, a2);
}

