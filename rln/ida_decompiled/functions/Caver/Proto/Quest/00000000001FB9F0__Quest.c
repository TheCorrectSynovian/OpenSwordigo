/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB9F0
 * Mangled: ._ZN5Caver5Proto5QuestC2Ev
 * Demangled: Caver::Proto::Quest::Quest(void)
 *
 * Callers: 1
 *   0x00000000003B040C  Caver::GameData::SaveToProtobufMessage(Caver::Proto::GameData *)
 *
 * Callees: 1
 *   0x00000000002E1814  Caver::Proto::Skill::GetTypeName(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FB9F4 string=0x00000000002E186C "( "
 *   insn=0x00000000001FB9F8 string=0x00000000001FB9FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Quest::Quest(Caver::Proto::Quest *this)
{
  JUMPOUT(0x2E186C);
}

