/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203AE0
 * Mangled: ._ZN5Caver16DebugInfoOverlay15SetNumTrianglesEi
 * Demangled: Caver::DebugInfoOverlay::SetNumTriangles(int)
 *
 * Callers: 2
 *   0x00000000003CAB34  Caver::DebugInfoOverlay::Toggle(void)
 *   0x00000000003CC280  Caver::DebugInfoOverlay::Update(float)
 *
 * Callees: 1
 *   0x00000000003CBF00  Caver::DebugInfoOverlay::SetNumTriangles(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203AE8 string=0x0000000000203AEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::DebugInfoOverlay::SetNumTriangles(Caver::DebugInfoOverlay *this, int a2)
{
  return _ZN5Caver16DebugInfoOverlay15SetNumTrianglesEi(this, a2);
}

