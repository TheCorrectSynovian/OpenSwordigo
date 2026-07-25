/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033C498
 * Mangled: _ZN5Caver5Proto10PackedMesh8CopyFromERKS1_
 * Demangled: Caver::Proto::PackedMesh::CopyFrom(Caver::Proto::PackedMesh const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000201D70  Caver::Proto::PackedMesh::MergeFrom(Caver::Proto::PackedMesh const&)
 *
 * Referenced strings: 3
 *   insn=0x000000000033C4AC string=0x000000000033C4B0 "@"
 *   insn=0x000000000033C4B8 string=0x000000000033C4BC ""
 *   insn=0x000000000033C4D0 string=0x000000000033C4D4 "'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::PackedMesh::CopyFrom(Caver::Proto::PackedMesh *this, const Caver::Proto::PackedMesh *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::PackedMesh *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::PackedMesh::MergeFrom(this, a2);
  }
}

