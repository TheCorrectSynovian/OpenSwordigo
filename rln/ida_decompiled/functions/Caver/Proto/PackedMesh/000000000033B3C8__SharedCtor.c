/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033B3C8
 * Mangled: _ZN5Caver5Proto10PackedMesh10SharedCtorEv
 * Demangled: Caver::Proto::PackedMesh::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x000000000033B3C8 string=0x000000000033B3CC "h"
 *   insn=0x000000000033B3CC string=0x000000000033B3D0 "uB"
 *   insn=0x000000000033B3D4 string=0x000000000033B3D8 "D"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PackedMesh::SharedCtor(__int64 this)
{
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 144) = 0;
  *(_QWORD *)(this + 136) = &Caver::Proto::PackedMesh::_default_vertex_data_;
  return this;
}

