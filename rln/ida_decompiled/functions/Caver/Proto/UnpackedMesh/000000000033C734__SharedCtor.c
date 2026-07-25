/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033C734
 * Mangled: _ZN5Caver5Proto12UnpackedMesh10SharedCtorEv
 * Demangled: Caver::Proto::UnpackedMesh::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x000000000033C734 string=0x000000000033C738 "H"
 *   insn=0x000000000033C738 string=0x000000000033C73C ""
 *   insn=0x000000000033C740 string=0x000000000033C744 "8"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::UnpackedMesh::SharedCtor(__int64 this)
{
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 120) = 0;
  *(_QWORD *)(this + 112) = &Caver::Proto::UnpackedMesh::_default_vertex_data_;
  return this;
}

