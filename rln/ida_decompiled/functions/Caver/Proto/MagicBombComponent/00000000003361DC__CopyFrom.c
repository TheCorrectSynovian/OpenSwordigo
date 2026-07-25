/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003361DC
 * Mangled: _ZN5Caver5Proto18MagicBombComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::MagicBombComponent::CopyFrom(Caver::Proto::MagicBombComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC5C0  Caver::Proto::MagicBombComponent::MergeFrom(Caver::Proto::MagicBombComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x00000000003361F0 string=0x00000000003361F4 "@"
 *   insn=0x00000000003361FC string=0x0000000000336200 ""
 *   insn=0x0000000000336218 string=0x00000000001FC5C0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MagicBombComponent::CopyFrom(
        Caver::Proto::MagicBombComponent *this,
        const Caver::Proto::MagicBombComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::MagicBombComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::MagicBombComponent::MergeFrom();
  }
}

