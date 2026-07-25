/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ED724
 * Mangled: _ZN5Caver5Proto9QuestText8CopyFromERKS1_
 * Demangled: Caver::Proto::QuestText::CopyFrom(Caver::Proto::QuestText const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4390  Caver::Proto::QuestText::MergeFrom(Caver::Proto::QuestText const&)
 *
 * Referenced strings: 3
 *   insn=0x00000000002ED738 string=0x00000000002ED73C "@"
 *   insn=0x00000000002ED744 string=0x00000000002ED748 ""
 *   insn=0x00000000002ED760 string=0x00000000001F4390 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::QuestText::CopyFrom(Caver::Proto::QuestText *this, const Caver::Proto::QuestText *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::QuestText *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::QuestText::MergeFrom();
  }
}

