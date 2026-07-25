/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033B1B4
 * Mangled: _ZN5Caver5Proto4Mesh8CopyFromERKS1_
 * Demangled: Caver::Proto::Mesh::CopyFrom(Caver::Proto::Mesh const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA9D0  Caver::Proto::Mesh::MergeFrom(Caver::Proto::Mesh const&)
 *
 * Referenced strings: 3
 *   insn=0x000000000033B1C8 string=0x000000000033B1CC "@"
 *   insn=0x000000000033B1D4 string=0x000000000033B1D8 ""
 *   insn=0x000000000033B1F0 string=0x00000000001FA9D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Mesh::CopyFrom(Caver::Proto::Mesh *this, const Caver::Proto::Mesh *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::Mesh *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::Mesh::MergeFrom(this, a2);
  }
}

