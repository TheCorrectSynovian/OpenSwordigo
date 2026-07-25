/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003381B0
 * Mangled: _ZN5Caver5Proto8MeshData8CopyFromERKS1_
 * Demangled: Caver::Proto::MeshData::CopyFrom(Caver::Proto::MeshData const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002015D0  Caver::Proto::MeshData::MergeFrom(Caver::Proto::MeshData const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000003381C4 string=0x00000000003381C8 "@"
 *   insn=0x00000000003381D0 string=0x00000000003381D4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MeshData::CopyFrom(Caver::Proto::MeshData *this, const Caver::Proto::MeshData *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::MeshData *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::MeshData::MergeFrom();
  }
}

