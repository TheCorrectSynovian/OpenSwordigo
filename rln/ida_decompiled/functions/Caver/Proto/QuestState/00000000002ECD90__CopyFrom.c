/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ECD90
 * Mangled: _ZN5Caver5Proto10QuestState8CopyFromERKS1_
 * Demangled: Caver::Proto::QuestState::CopyFrom(Caver::Proto::QuestState const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F3770  Caver::Proto::QuestState::MergeFrom(Caver::Proto::QuestState const&)
 *
 * Referenced strings: 4
 *   insn=0x00000000002ECDA4 string=0x00000000002ECDA8 "@"
 *   insn=0x00000000002ECDB0 string=0x00000000002ECDB4 ""
 *   insn=0x00000000002ECDC8 string=0x00000000002ECDCC "i"
 *   insn=0x00000000002ECDCC string=0x00000000001F3770 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::QuestState::CopyFrom(Caver::Proto::QuestState *this, const Caver::Proto::QuestState *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::QuestState *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::QuestState::MergeFrom();
  }
}

