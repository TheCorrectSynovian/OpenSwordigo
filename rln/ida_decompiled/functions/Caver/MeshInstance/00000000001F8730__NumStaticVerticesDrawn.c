/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8730
 * Mangled: ._ZN5Caver12MeshInstance22NumStaticVerticesDrawnEv
 * Demangled: Caver::MeshInstance::NumStaticVerticesDrawn(void)
 *
 * Callers: 1
 *   0x00000000003CC280  Caver::DebugInfoOverlay::Update(float)
 *
 * Callees: 1
 *   0x00000000004482A4  Caver::MeshClipper::ClippedMesh(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F8734 string=0x00000000004484B8 ""
 *   insn=0x00000000001F8738 string=0x00000000001F873C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::MeshInstance::NumStaticVerticesDrawn(Caver::MeshInstance *this)
{
  JUMPOUT(0x4484B8);
}

