/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030DF8C
 * Mangled: _ZN5Caver5Proto15HealthComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::HealthComponent::CopyFrom(Caver::Proto::HealthComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8920  Caver::Proto::HealthComponent::MergeFrom(Caver::Proto::HealthComponent const&)
 *
 * Referenced strings: 4
 *   insn=0x000000000030DFA0 string=0x000000000030DFA4 "@"
 *   insn=0x000000000030DFAC string=0x000000000030DFB0 ""
 *   insn=0x000000000030DFC4 string=0x000000000030DFC8 "V"
 *   insn=0x000000000030DFC8 string=0x00000000001F8920 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::HealthComponent::CopyFrom(
        Caver::Proto::HealthComponent *this,
        const Caver::Proto::HealthComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::HealthComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::HealthComponent::MergeFrom();
  }
}

