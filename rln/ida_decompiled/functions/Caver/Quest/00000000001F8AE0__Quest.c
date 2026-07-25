/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8AE0
 * Mangled: ._ZN5Caver5QuestC2Ev
 * Demangled: Caver::Quest::Quest(void)
 *
 * Callers: 1
 *   0x00000000003AF808  Caver::GameData::LoadFromProtobufMessage(Caver::Proto::GameData const&)
 *
 * Callees: 1
 *   0x00000000003C38AC  Caver::Quest::Quest(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F8AE4 string=0x00000000003C38AC "\t"
 *   insn=0x00000000001F8AE8 string=0x00000000001F8AEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Quest::Quest(Caver::Quest *this)
{
  return _ZN5Caver5QuestC2Ev(this);
}

