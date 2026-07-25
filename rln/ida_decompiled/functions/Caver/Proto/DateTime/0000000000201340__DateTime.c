/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201340
 * Mangled: ._ZN5Caver5Proto8DateTimeC2Ev
 * Demangled: Caver::Proto::DateTime::DateTime(void)
 *
 * Callers: 3
 *   0x00000000002E94F4  Caver::Proto::PlayerProfile::PlayerProfile(Caver::Proto::PlayerProfile const&)
 *   0x00000000002EA650  Caver::Proto::PlayerProfile::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000003C0F08  Caver::PlayerProfile::SaveToProtobufMessage(Caver::Proto::PlayerProfile *)
 *
 * Callees: 1
 *   0x00000000002CDC8C  Caver::Proto::DateTime::DateTime(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201348 string=0x000000000020134C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::DateTime::DateTime(Caver::Proto::DateTime *this)
{
  return _ZN5Caver5Proto8DateTimeC2Ev(this);
}

