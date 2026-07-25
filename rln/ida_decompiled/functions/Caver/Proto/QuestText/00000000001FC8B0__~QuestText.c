/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC8B0
 * Mangled: ._ZN5Caver5Proto9QuestTextD2Ev
 * Demangled: Caver::Proto::QuestText::~QuestText()
 *
 * Callers: 1
 *   0x00000000002ED2A4  Caver::Proto::QuestText::~QuestText()
 *
 * Callees: 1
 *   0x00000000002ECED8  Caver::Proto::QuestText::QuestText(Caver::Proto::QuestText const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC8B8 string=0x00000000001FC8BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::QuestText::~QuestText(Caver::Proto::QuestText *this)
{
  JUMPOUT(0x2ED09C);
}

