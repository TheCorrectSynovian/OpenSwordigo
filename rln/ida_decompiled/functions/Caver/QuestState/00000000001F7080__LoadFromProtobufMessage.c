/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7080
 * Mangled: ._ZN5Caver10QuestState23LoadFromProtobufMessageERKNS_5Proto10QuestStateE
 * Demangled: Caver::QuestState::LoadFromProtobufMessage(Caver::Proto::QuestState const&)
 *
 * Callers: 1
 *   0x00000000003B62B4  Caver::GameState::LoadFromProtobufMessage(Caver::Proto::GameState const&)
 *
 * Callees: 1
 *   0x00000000003C3A78  Caver::QuestState::LoadFromProtobufMessage(Caver::Proto::QuestState const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7088 string=0x00000000001F708C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::QuestState::LoadFromProtobufMessage(
        Caver::QuestState *this,
        const Caver::Proto::QuestState *a2)
{
  return _ZN5Caver10QuestState23LoadFromProtobufMessageERKNS_5Proto10QuestStateE(this, a2);
}

