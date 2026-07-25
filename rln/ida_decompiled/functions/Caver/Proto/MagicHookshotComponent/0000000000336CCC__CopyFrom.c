/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000336CCC
 * Mangled: _ZN5Caver5Proto22MagicHookshotComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::MagicHookshotComponent::CopyFrom(Caver::Proto::MagicHookshotComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5620  Caver::Proto::MagicHookshotComponent::MergeFrom(Caver::Proto::MagicHookshotComponent const&)
 *
 * Referenced strings: 4
 *   insn=0x0000000000336CE0 string=0x0000000000336CE4 "@"
 *   insn=0x0000000000336CEC string=0x0000000000336CF0 ""
 *   insn=0x0000000000336D04 string=0x0000000000336D08 "F"
 *   insn=0x0000000000336D08 string=0x00000000001F5620 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MagicHookshotComponent::CopyFrom(
        Caver::Proto::MagicHookshotComponent *this,
        const Caver::Proto::MagicHookshotComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::MagicHookshotComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::MagicHookshotComponent::MergeFrom();
  }
}

