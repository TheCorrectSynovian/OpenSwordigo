/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CE514
 * Mangled: _ZN5Caver5Proto7Vector28CopyFromERKS1_
 * Demangled: Caver::Proto::Vector2::CopyFrom(Caver::Proto::Vector2 const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002035C0  Caver::Proto::Vector2::MergeFrom(Caver::Proto::Vector2 const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000002CE528 string=0x00000000002CE52C "@"
 *   insn=0x00000000002CE534 string=0x00000000002CE538 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Vector2::CopyFrom(Caver::Proto::Vector2 *this, const Caver::Proto::Vector2 *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::Vector2 *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::Vector2::MergeFrom(this, a2);
  }
}

