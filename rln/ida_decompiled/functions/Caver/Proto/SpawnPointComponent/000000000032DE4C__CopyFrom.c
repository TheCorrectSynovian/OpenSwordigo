/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032DE4C
 * Mangled: _ZN5Caver5Proto19SpawnPointComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::SpawnPointComponent::CopyFrom(Caver::Proto::SpawnPointComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6E80  Caver::Proto::SpawnPointComponent::MergeFrom(Caver::Proto::SpawnPointComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x000000000032DE60 string=0x000000000032DE64 "@"
 *   insn=0x000000000032DE6C string=0x000000000032DE70 ""
 *   insn=0x000000000032DE88 string=0x00000000001F6E80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SpawnPointComponent::CopyFrom(
        Caver::Proto::SpawnPointComponent *this,
        const Caver::Proto::SpawnPointComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::SpawnPointComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::SpawnPointComponent::MergeFrom();
  }
}

