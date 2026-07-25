/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD6A0
 * Mangled: ._ZN6google8protobuf11MessageLite14ParseFromArrayEPKvi
 * Demangled: google::protobuf::MessageLite::ParseFromArray(void const*,int)
 *
 * Callers: 2
 *   0x00000000003C0CE0  Caver::PlayerProfile::LoadFromPath(std::string const&,bool)
 *   0x000000000048933C  Caver::LoadProtobufMessageFromFile(google::protobuf::MessageLite *,std::string const&)
 *
 * Callees: 1
 *   0x00000000004E1014  google::protobuf::MessageLite::ParseFromZeroCopyStream(google::protobuf::io::ZeroCopyInputStream *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD6A8 string=0x00000000001FD6AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall google::protobuf::MessageLite::ParseFromArray(google::protobuf::MessageLite *this, const void *a2)
{
  JUMPOUT(0x4E18F4);
}

