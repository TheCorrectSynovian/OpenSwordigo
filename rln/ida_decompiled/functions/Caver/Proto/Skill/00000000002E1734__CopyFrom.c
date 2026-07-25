/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E1734
 * Mangled: _ZN5Caver5Proto5Skill8CopyFromERKS1_
 * Demangled: Caver::Proto::Skill::CopyFrom(Caver::Proto::Skill const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FDD50  Caver::Proto::Skill::MergeFrom(Caver::Proto::Skill const&)
 *
 * Referenced strings: 4
 *   insn=0x00000000002E1748 string=0x00000000002E174C "@"
 *   insn=0x00000000002E1754 string=0x00000000002E1758 ""
 *   insn=0x00000000002E176C string=0x00000000002E1770 "xq"
 *   insn=0x00000000002E1770 string=0x00000000001FDD50 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Skill::CopyFrom(Caver::Proto::Skill *this, const Caver::Proto::Skill *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::Skill *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::Skill::MergeFrom(this, a2);
  }
}

