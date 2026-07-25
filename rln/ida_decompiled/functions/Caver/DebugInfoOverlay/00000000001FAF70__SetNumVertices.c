/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAF70
 * Mangled: ._ZN5Caver16DebugInfoOverlay14SetNumVerticesEii
 * Demangled: Caver::DebugInfoOverlay::SetNumVertices(int,int)
 *
 * Callers: 2
 *   0x00000000003CAB34  Caver::DebugInfoOverlay::Toggle(void)
 *   0x00000000003CC280  Caver::DebugInfoOverlay::Update(float)
 *
 * Callees: 1
 *   0x00000000003CB89C  Caver::DebugInfoOverlay::SetNumVertices(int,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAF78 string=0x00000000001FAF7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::DebugInfoOverlay::SetNumVertices(Caver::DebugInfoOverlay *this, int a2, int a3)
{
  return _ZN5Caver16DebugInfoOverlay14SetNumVerticesEii(this, a2, a3);
}

