/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F89B0
 * Mangled: ._ZNK6google8protobuf11MessageLite16SerializeToArrayEPvi
 * Demangled: google::protobuf::MessageLite::SerializeToArray(void *,int)
 *
 * Callers: 2
 *   0x00000000003BFDFC  Caver::PlayerProfile::CreateProfile(std::string const&)
 *   0x00000000004893DC  Caver::SaveProtobufMessageToFile(google::protobuf::MessageLite const&,std::string const&)
 *
 * Callees: 1
 *   0x00000000004E2420  google::protobuf::MessageLite::SerializeToArray(void *,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F89B8 string=0x00000000001F89BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::MessageLite::SerializeToArray(
        google::protobuf::MessageLite *this,
        void *a2,
        int a3)
{
  return _ZNK6google8protobuf11MessageLite16SerializeToArrayEPvi(this, a2, a3);
}

