/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202440
 * Mangled: ._ZN5Caver5Quest23LoadFromProtobufMessageERKNS_5Proto5QuestE
 * Demangled: Caver::Quest::LoadFromProtobufMessage(Caver::Proto::Quest const&)
 *
 * Callers: 1
 *   0x00000000003AF808  Caver::GameData::LoadFromProtobufMessage(Caver::Proto::GameData const&)
 *
 * Callees: 1
 *   0x00000000003C38D0  Caver::Quest::LoadFromProtobufMessage(Caver::Proto::Quest const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202448 string=0x000000000020244C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Quest::LoadFromProtobufMessage(Caver::Quest *this, const Caver::Proto::Quest *a2)
{
  return _ZN5Caver5Quest23LoadFromProtobufMessageERKNS_5Proto5QuestE(this, a2);
}

