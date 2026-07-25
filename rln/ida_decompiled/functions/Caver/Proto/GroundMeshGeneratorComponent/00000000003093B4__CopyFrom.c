/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003093B4
 * Mangled: _ZN5Caver5Proto28GroundMeshGeneratorComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::GroundMeshGeneratorComponent::CopyFrom(Caver::Proto::GroundMeshGeneratorComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA930  Caver::Proto::GroundMeshGeneratorComponent::MergeFrom(Caver::Proto::GroundMeshGeneratorComponent const&)
 *
 * Referenced strings: 4
 *   insn=0x00000000003093C8 string=0x00000000003093CC "@"
 *   insn=0x00000000003093D4 string=0x00000000003093D8 ""
 *   insn=0x00000000003093EC string=0x00000000003093F0 "P"
 *   insn=0x00000000003093F0 string=0x00000000001FA930 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::GroundMeshGeneratorComponent::CopyFrom(
        Caver::Proto::GroundMeshGeneratorComponent *this,
        const Caver::Proto::GroundMeshGeneratorComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::GroundMeshGeneratorComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::GroundMeshGeneratorComponent::MergeFrom();
  }
}

