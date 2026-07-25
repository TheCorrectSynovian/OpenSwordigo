/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E089C
 * Mangled: _ZN5Caver5Proto4Item8CopyFromERKS1_
 * Demangled: Caver::Proto::Item::CopyFrom(Caver::Proto::Item const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA290  Caver::Proto::Item::MergeFrom(Caver::Proto::Item const&)
 *
 * Referenced strings: 4
 *   insn=0x00000000002E08B0 string=0x00000000002E08B4 "@"
 *   insn=0x00000000002E08BC string=0x00000000002E08C0 ""
 *   insn=0x00000000002E08D4 string=0x00000000002E08D8 "nf"
 *   insn=0x00000000002E08D8 string=0x00000000001FA290 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Item::CopyFrom(Caver::Proto::Item *this, const Caver::Proto::Item *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::Item *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::Item::MergeFrom();
  }
}

