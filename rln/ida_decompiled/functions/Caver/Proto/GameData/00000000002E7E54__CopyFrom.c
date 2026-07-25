/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E7E54
 * Mangled: _ZN5Caver5Proto8GameData8CopyFromERKS1_
 * Demangled: Caver::Proto::GameData::CopyFrom(Caver::Proto::GameData const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FAFB0  Caver::Proto::GameData::MergeFrom(Caver::Proto::GameData const&)
 *
 * Referenced strings: 4
 *   insn=0x00000000002E7E68 string=0x00000000002E7E6C "@"
 *   insn=0x00000000002E7E74 string=0x00000000002E7E78 ""
 *   insn=0x00000000002E7E8C string=0x00000000002E7E90 "HL"
 *   insn=0x00000000002E7E90 string=0x00000000001FAFB0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::GameData::CopyFrom(Caver::Proto::GameData *this, const Caver::Proto::GameData *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::GameData *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::GameData::MergeFrom(this, a2);
  }
}

