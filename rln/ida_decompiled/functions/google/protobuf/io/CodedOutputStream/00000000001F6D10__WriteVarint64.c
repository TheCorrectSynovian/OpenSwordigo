/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6D10
 * Mangled: ._ZN6google8protobuf2io17CodedOutputStream13WriteVarint64Em
 * Demangled: google::protobuf::io::CodedOutputStream::WriteVarint64(ulong)
 *
 * Callers: 6
 *   0x00000000004DEC50  google::protobuf::internal::ExtensionSet::Extension::SerializeFieldWithCachedSizes(int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004E2D7C  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004E2DC8  google::protobuf::internal::WireFormatLite::WriteInt64(int,long,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004E2E30  google::protobuf::internal::WireFormatLite::WriteUInt64(int,ulong,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004E2E9C  google::protobuf::internal::WireFormatLite::WriteSInt64(int,long,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004E3068  google::protobuf::internal::WireFormatLite::WriteEnum(int,int,google::protobuf::io::CodedOutputStream *)
 *
 * Callees: 1
 *   0x00000000004E4FF4  google::protobuf::io::CodedOutputStream::WriteVarint64(ulong)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6D18 string=0x00000000001F6D1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::io::CodedOutputStream::WriteVarint64(
        google::protobuf::io::CodedOutputStream *this,
        unsigned __int64 a2)
{
  return _ZN6google8protobuf2io17CodedOutputStream13WriteVarint64Em(this, a2);
}

