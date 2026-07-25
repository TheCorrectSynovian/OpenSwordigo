/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9BF0
 * Mangled: ._ZN6google8protobuf2io16CodedInputStream18ReadStringFallbackEPSsi
 * Demangled: google::protobuf::io::CodedInputStream::ReadStringFallback(std::string *,int)
 *
 * Callers: 3
 *   0x00000000004E3338  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000004E344C  google::protobuf::internal::WireFormatLite::ReadBytes(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000004E3C08  google::protobuf::io::CodedInputStream::ReadString(std::string *,int)
 *
 * Callees: 1
 *   0x00000000004E3CC0  google::protobuf::io::CodedInputStream::ReadStringFallback(std::string *,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9BF8 string=0x00000000001F9BFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::io::CodedInputStream::ReadStringFallback(
        google::protobuf::io::CodedInputStream *this)
{
  return _ZN6google8protobuf2io16CodedInputStream18ReadStringFallbackEPSsi(this);
}

