/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC2C0
 * Mangled: ._ZN5Caver13GameSceneView23SetCinematicModeEnabledEbbb
 * Demangled: Caver::GameSceneView::SetCinematicModeEnabled(bool,bool,bool)
 *
 * Callers: 1
 *   0x00000000003601E8  sub_3601E8
 *
 * Callees: 1
 *   0x000000000034FB34  Caver::GameSceneView::SetCinematicModeEnabled(bool,bool,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC2C8 string=0x00000000001FC2CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameSceneView::SetCinematicModeEnabled(Caver::GameSceneView *this, bool a2, bool a3, bool a4)
{
  return _ZN5Caver13GameSceneView23SetCinematicModeEnabledEbbb(this, a2, a3, a4);
}

