/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB9E0
 * Mangled: ._ZN6google8protobuf11MessageLite15ParseFromStringERKSs
 * Demangled: google::protobuf::MessageLite::ParseFromString(std::string const&)
 *
 * Callers: 2
 *   0x00000000004BB8D0  Caver::ProfileManager_Android::PlayerProfileWasSaved(Caver::PlayerProfile *,bool)
 *   0x00000000004BBE60  Caver::ProfileManager_Android::HandleDownloadedProfileData(std::string const&)
 *
 * Callees: 1
 *   0x00000000004E1014  google::protobuf::MessageLite::ParseFromZeroCopyStream(google::protobuf::io::ZeroCopyInputStream *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB9E8 string=0x00000000001FB9EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void google::protobuf::MessageLite::ParseFromString()
{
  JUMPOUT(0x4E13BC);
}

