/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB6E0
 * Mangled: ._ZN5Caver5Proto11EntityClassC2Ev
 * Demangled: Caver::Proto::EntityClass::EntityClass(void)
 *
 * Callers: 1
 *   0x00000000003B040C  Caver::GameData::SaveToProtobufMessage(Caver::Proto::GameData *)
 *
 * Callees: 1
 *   0x00000000002E2554  Caver::Proto::Quest::GetTypeName(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FB6E4 string=0x00000000002E25AC "( "
 *   insn=0x00000000001FB6E8 string=0x00000000001FB6EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::EntityClass::EntityClass(Caver::Proto::EntityClass *this)
{
  JUMPOUT(0x2E25AC);
}

