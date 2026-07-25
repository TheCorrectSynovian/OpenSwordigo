/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E6394
 * Mangled: _ZN5Caver5Proto11GameOptions8CopyFromERKS1_
 * Demangled: Caver::Proto::GameOptions::CopyFrom(Caver::Proto::GameOptions const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5B90  Caver::Proto::GameOptions::MergeFrom(Caver::Proto::GameOptions const&)
 *
 * Referenced strings: 3
 *   insn=0x00000000002E63A8 string=0x00000000002E63AC "@"
 *   insn=0x00000000002E63B4 string=0x00000000002E63B8 ""
 *   insn=0x00000000002E63D0 string=0x00000000001F5B90 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::GameOptions::CopyFrom(
        Caver::Proto::GameOptions *this,
        const Caver::Proto::GameOptions *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::GameOptions *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::GameOptions::MergeFrom();
  }
}

