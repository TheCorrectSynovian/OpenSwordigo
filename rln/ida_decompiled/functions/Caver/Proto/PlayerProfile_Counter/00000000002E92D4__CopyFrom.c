/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E92D4
 * Mangled: _ZN5Caver5Proto21PlayerProfile_Counter8CopyFromERKS1_
 * Demangled: Caver::Proto::PlayerProfile_Counter::CopyFrom(Caver::Proto::PlayerProfile_Counter const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000200D40  Caver::Proto::PlayerProfile_Counter::MergeFrom(Caver::Proto::PlayerProfile_Counter const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000002E92E8 string=0x00000000002E92EC "@"
 *   insn=0x00000000002E92F4 string=0x00000000002E92F8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::PlayerProfile_Counter::CopyFrom(
        Caver::Proto::PlayerProfile_Counter *this,
        const Caver::Proto::PlayerProfile_Counter *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::PlayerProfile_Counter *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::PlayerProfile_Counter::MergeFrom();
  }
}

