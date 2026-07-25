/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203570
 * Mangled: ._ZN5Caver12MeshInstance17NumTrianglesDrawnEv
 * Demangled: Caver::MeshInstance::NumTrianglesDrawn(void)
 *
 * Callers: 1
 *   0x00000000003CC280  Caver::DebugInfoOverlay::Update(float)
 *
 * Callees: 1
 *   0x00000000004484D0  Caver::MeshInstance::NumTrianglesDrawn(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000203574 string=0x00000000004484D0 ""
 *   insn=0x0000000000203578 string=0x000000000020357C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MeshInstance::NumTrianglesDrawn(Caver::MeshInstance *this)
{
  return _ZN5Caver12MeshInstance17NumTrianglesDrawnEv(this);
}

