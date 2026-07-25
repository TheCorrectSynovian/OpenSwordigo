/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DEE34
 * Mangled: _ZN5Caver5Proto7MapZone8CopyFromERKS1_
 * Demangled: Caver::Proto::MapZone::CopyFrom(Caver::Proto::MapZone const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5320  Caver::Proto::MapZone::MergeFrom(Caver::Proto::MapZone const&)
 *
 * Referenced strings: 4
 *   insn=0x00000000002DEE48 string=0x00000000002DEE4C "@"
 *   insn=0x00000000002DEE54 string=0x00000000002DEE58 ""
 *   insn=0x00000000002DEE6C string=0x00000000002DEE70 ",Y"
 *   insn=0x00000000002DEE70 string=0x00000000001F5320 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MapZone::CopyFrom(Caver::Proto::MapZone *this, const Caver::Proto::MapZone *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::MapZone *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::MapZone::MergeFrom();
  }
}

