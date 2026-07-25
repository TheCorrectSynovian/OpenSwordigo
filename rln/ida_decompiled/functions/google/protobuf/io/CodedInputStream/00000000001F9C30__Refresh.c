/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9C30
 * Mangled: ._ZN6google8protobuf2io16CodedInputStream7RefreshEv
 * Demangled: google::protobuf::io::CodedInputStream::Refresh(void)
 *
 * Callers: 10
 *   0x00000000004E1014  google::protobuf::MessageLite::ParseFromZeroCopyStream(google::protobuf::io::ZeroCopyInputStream *)
 *   0x00000000004E38C4  google::protobuf::io::CodedInputStream::GetDirectBufferPointer(void const**,int *)
 *   0x00000000004E3930  google::protobuf::io::CodedInputStream::Refresh(void)
 *   0x00000000004E3CC0  google::protobuf::io::CodedInputStream::ReadStringFallback(std::string *,int)
 *   0x00000000004E3D88  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000004E3E84  google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(ulong *)
 *   0x00000000004E3FE4  google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *)
 *   0x00000000004E4310  google::protobuf::io::CodedInputStream::ReadTagSlow(void)
 *   0x00000000004E43F0  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000004E45D0  google::protobuf::io::CodedInputStream::ReadVarint64Slow(ulong *)
 *
 * Callees: 1
 *   0x00000000004E3930  google::protobuf::io::CodedInputStream::Refresh(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9C38 string=0x00000000001F9C3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::io::CodedInputStream::Refresh(google::protobuf::io::CodedInputStream *this)
{
  return _ZN6google8protobuf2io16CodedInputStream7RefreshEv(this);
}

