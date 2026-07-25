/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAD60
 * Mangled: ._ZN5Caver27GUIScrollLocationControllerC2Ev
 * Demangled: Caver::GUIScrollLocationController::GUIScrollLocationController(void)
 *
 * Callers: 1
 *   0x000000000049B5CC  Caver::GUIScrollView::GUIScrollView(void)
 *
 * Callees: 1
 *   0x00000000004A9C74  Caver::GUIScrollLocationController::GUIScrollLocationController(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FAD64 string=0x00000000004A9C74 "h"
 *   insn=0x00000000001FAD68 string=0x00000000001FAD6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIScrollLocationController::GUIScrollLocationController(
        Caver::GUIScrollLocationController *this)
{
  return _ZN5Caver27GUIScrollLocationControllerC2Ev(this);
}

