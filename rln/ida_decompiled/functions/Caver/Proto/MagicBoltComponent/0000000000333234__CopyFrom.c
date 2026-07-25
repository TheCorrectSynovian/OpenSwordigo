/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000333234
 * Mangled: _ZN5Caver5Proto18MagicBoltComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::MagicBoltComponent::CopyFrom(Caver::Proto::MagicBoltComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC760  Caver::Proto::MagicBoltComponent::MergeFrom(Caver::Proto::MagicBoltComponent const&)
 *
 * Referenced strings: 4
 *   insn=0x0000000000333248 string=0x000000000033324C "@"
 *   insn=0x0000000000333254 string=0x0000000000333258 ""
 *   insn=0x000000000033326C string=0x0000000000333270 "<%"
 *   insn=0x0000000000333270 string=0x00000000001FC760 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MagicBoltComponent::CopyFrom(
        Caver::Proto::MagicBoltComponent *this,
        const Caver::Proto::MagicBoltComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::MagicBoltComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::MagicBoltComponent::MergeFrom();
  }
}

