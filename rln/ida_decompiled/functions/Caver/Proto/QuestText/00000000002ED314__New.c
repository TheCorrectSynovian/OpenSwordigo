/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ED314
 * Mangled: _ZNK5Caver5Proto9QuestText3NewEv
 * Demangled: Caver::Proto::QuestText::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 8
 *   insn=0x00000000002ED320 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002ED324 string=0x00000000002ED328 ""
 *   insn=0x00000000002ED334 string=0x00000000002ED338 "k"
 *   insn=0x00000000002ED338 string=0x00000000002ED33C "\t"
 *   insn=0x00000000002ED340 string=0x00000000002ED344 "A"
 *   insn=0x00000000002ED344 string=0x00000000002ED348 "$"
 *   insn=0x00000000002ED348 string=0x00000000002ED34C "\n("
 *   insn=0x00000000002ED34C string=0x00000000002ED350 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::QuestText::New(Caver::Proto::QuestText *this)
{
  __int64 result; // x0

  result = operator new(0x58u);
  *(_QWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = &Caver::Proto::QuestText::_default_quest_name_;
  *(_QWORD *)(result + 24) = result + 48;
  *(_DWORD *)(result + 40) = 4;
  *(_QWORD *)result = off_6C6F10;
  *(_DWORD *)(result + 80) = 0;
  return result;
}

