/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000330EF0
 * Mangled: _ZN5Caver5Proto17ItemDropComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::ItemDropComponent::CopyFrom(Caver::Proto::ItemDropComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC5F0  Caver::Proto::ItemDropComponent::MergeFrom(Caver::Proto::ItemDropComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x0000000000330F04 string=0x0000000000330F08 "@"
 *   insn=0x0000000000330F10 string=0x0000000000330F14 ""
 *   insn=0x0000000000330F2C string=0x00000000001FC5F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ItemDropComponent::CopyFrom(
        Caver::Proto::ItemDropComponent *this,
        const Caver::Proto::ItemDropComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::ItemDropComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::ItemDropComponent::MergeFrom();
  }
}

