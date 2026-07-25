/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ED2A4
 * Mangled: _ZN5Caver5Proto9QuestTextD0Ev
 * Demangled: Caver::Proto::QuestText::~QuestText()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC8B0  Caver::Proto::QuestText::~QuestText()
 *   0x00000000002ED2DC  Caver::Proto::QuestText::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x00000000002ED2B4 string=0x00000000001FC8B0 "0'"
 *   insn=0x00000000002ED2C4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002ED2D4 string=0x00000000002ED2D8 "{Q\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::QuestText::~QuestText(Caver::Proto::QuestText *this)
{
  Caver::Proto::QuestText::~QuestText(this);
  operator delete(this);
}

