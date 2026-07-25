/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F38D0
 * Mangled: ._ZN5Caver12MeshInstance23NumSkinnedVerticesDrawnEv
 * Demangled: Caver::MeshInstance::NumSkinnedVerticesDrawn(void)
 *
 * Callers: 1
 *   0x00000000003CC280  Caver::DebugInfoOverlay::Update(float)
 *
 * Callees: 1
 *   0x00000000004484C4  Caver::MeshInstance::NumSkinnedVerticesDrawn(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F38D4 string=0x00000000004484C4 ""
 *   insn=0x00000000001F38D8 string=0x00000000001F38DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MeshInstance::NumSkinnedVerticesDrawn(Caver::MeshInstance *this)
{
  return _ZN5Caver12MeshInstance23NumSkinnedVerticesDrawnEv(this);
}

