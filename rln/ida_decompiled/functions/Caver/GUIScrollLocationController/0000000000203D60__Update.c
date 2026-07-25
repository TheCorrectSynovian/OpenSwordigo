/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203D60
 * Mangled: ._ZN5Caver27GUIScrollLocationController6UpdateEf
 * Demangled: Caver::GUIScrollLocationController::Update(float)
 *
 * Callers: 1
 *   0x000000000049B75C  Caver::GUIScrollView::Update(float)
 *
 * Callees: 1
 *   0x00000000004A9CA0  Caver::GUIScrollLocationController::Update(float)
 *
 * Referenced strings: 2
 *   insn=0x0000000000203D64 string=0x00000000004A9CA0 ""
 *   insn=0x0000000000203D68 string=0x0000000000203D6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIScrollLocationController::Update(Caver::GUIScrollLocationController *this, float a2)
{
  return _ZN5Caver27GUIScrollLocationController6UpdateEf(this, a2);
}

