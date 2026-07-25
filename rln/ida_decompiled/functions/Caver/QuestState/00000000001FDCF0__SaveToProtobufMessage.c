/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDCF0
 * Mangled: ._ZNK5Caver10QuestState21SaveToProtobufMessageEPNS_5Proto10QuestStateE
 * Demangled: Caver::QuestState::SaveToProtobufMessage(Caver::Proto::QuestState *)
 *
 * Callers: 1
 *   0x00000000003B7610  Caver::GameState::SaveToProtobufMessage(Caver::Proto::GameState *)
 *
 * Callees: 1
 *   0x00000000003C3AA8  Caver::QuestState::SaveToProtobufMessage(Caver::Proto::QuestState *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDCF8 string=0x00000000001FDCFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::QuestState::SaveToProtobufMessage(Caver::QuestState *this, Caver::Proto::QuestState *a2)
{
  return _ZNK5Caver10QuestState21SaveToProtobufMessageEPNS_5Proto10QuestStateE(this, a2);
}

