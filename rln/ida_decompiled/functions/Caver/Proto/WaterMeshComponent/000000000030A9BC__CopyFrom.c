/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030A9BC
 * Mangled: _ZN5Caver5Proto18WaterMeshComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::WaterMeshComponent::CopyFrom(Caver::Proto::WaterMeshComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9180  Caver::Proto::WaterMeshComponent::MergeFrom(Caver::Proto::WaterMeshComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x000000000030A9D0 string=0x000000000030A9D4 "@"
 *   insn=0x000000000030A9DC string=0x000000000030A9E0 ""
 *   insn=0x000000000030A9F8 string=0x00000000001F9180 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::WaterMeshComponent::CopyFrom(
        Caver::Proto::WaterMeshComponent *this,
        const Caver::Proto::WaterMeshComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::WaterMeshComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::WaterMeshComponent::MergeFrom();
  }
}

