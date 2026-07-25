/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCB20
 * Mangled: ._ZN5Caver5Proto10QuestStateC2Ev
 * Demangled: Caver::Proto::QuestState::QuestState(void)
 *
 * Callers: 1
 *   0x00000000003B7610  Caver::GameState::SaveToProtobufMessage(Caver::Proto::GameState *)
 *
 * Callees: 1
 *   0x00000000002EC550  Caver::Proto::StateProperties::GetTypeName(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCB28 string=0x00000000001FCB2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::QuestState::QuestState(Caver::Proto::QuestState *this)
{
  JUMPOUT(0x2EC5A8);
}

