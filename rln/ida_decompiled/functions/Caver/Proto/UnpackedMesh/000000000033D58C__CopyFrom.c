/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033D58C
 * Mangled: _ZN5Caver5Proto12UnpackedMesh8CopyFromERKS1_
 * Demangled: Caver::Proto::UnpackedMesh::CopyFrom(Caver::Proto::UnpackedMesh const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002023C0  Caver::Proto::UnpackedMesh::MergeFrom(Caver::Proto::UnpackedMesh const&)
 *
 * Referenced strings: 3
 *   insn=0x000000000033D5A0 string=0x000000000033D5A4 "@"
 *   insn=0x000000000033D5AC string=0x000000000033D5B0 ""
 *   insn=0x000000000033D5C4 string=0x000000000033D5C8 "~"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::UnpackedMesh::CopyFrom(
        Caver::Proto::UnpackedMesh *this,
        const Caver::Proto::UnpackedMesh *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::UnpackedMesh *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::UnpackedMesh::MergeFrom(this, a2);
  }
}

