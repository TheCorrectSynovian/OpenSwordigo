/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E2494
 * Mangled: _ZN5Caver5Proto5Quest8CopyFromERKS1_
 * Demangled: Caver::Proto::Quest::CopyFrom(Caver::Proto::Quest const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F3A30  Caver::Proto::Quest::MergeFrom(Caver::Proto::Quest const&)
 *
 * Referenced strings: 4
 *   insn=0x00000000002E24A8 string=0x00000000002E24AC "@"
 *   insn=0x00000000002E24B4 string=0x00000000002E24B8 ""
 *   insn=0x00000000002E24CC string=0x00000000002E24D0 "XE"
 *   insn=0x00000000002E24D0 string=0x00000000001F3A30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Quest::CopyFrom(Caver::Proto::Quest *this, const Caver::Proto::Quest *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::Quest *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::Quest::MergeFrom();
  }
}

