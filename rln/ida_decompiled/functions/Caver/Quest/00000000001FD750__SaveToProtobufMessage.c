/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD750
 * Mangled: ._ZNK5Caver5Quest21SaveToProtobufMessageEPNS_5Proto5QuestE
 * Demangled: Caver::Quest::SaveToProtobufMessage(Caver::Proto::Quest *)
 *
 * Callers: 1
 *   0x00000000003B040C  Caver::GameData::SaveToProtobufMessage(Caver::Proto::GameData *)
 *
 * Callees: 1
 *   0x00000000003C391C  Caver::Quest::SaveToProtobufMessage(Caver::Proto::Quest *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD758 string=0x00000000001FD75C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Quest::SaveToProtobufMessage(Caver::Quest *this, Caver::Proto::Quest *a2)
{
  return _ZNK5Caver5Quest21SaveToProtobufMessageEPNS_5Proto5QuestE(this, a2);
}

