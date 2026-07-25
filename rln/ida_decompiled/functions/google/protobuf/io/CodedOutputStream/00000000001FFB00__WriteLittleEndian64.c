/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFB00
 * Mangled: ._ZN6google8protobuf2io17CodedOutputStream19WriteLittleEndian64Em
 * Demangled: google::protobuf::io::CodedOutputStream::WriteLittleEndian64(ulong)
 *
 * Callers: 4
 *   0x00000000004DEC50  google::protobuf::internal::ExtensionSet::Extension::SerializeFieldWithCachedSizes(int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004E2F0C  google::protobuf::internal::WireFormatLite::WriteFixed64(int,ulong,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004E2F7C  google::protobuf::internal::WireFormatLite::WriteSFixed64(int,long,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004E2FF4  google::protobuf::internal::WireFormatLite::WriteDouble(int,double,google::protobuf::io::CodedOutputStream *)
 *
 * Callees: 1
 *   0x00000000004E4BDC  google::protobuf::io::CodedOutputStream::WriteLittleEndian64(ulong)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFB08 string=0x00000000001FFB0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::io::CodedOutputStream::WriteLittleEndian64(
        google::protobuf::io::CodedOutputStream *this,
        unsigned __int64 a2)
{
  return _ZN6google8protobuf2io17CodedOutputStream19WriteLittleEndian64Em(this, a2);
}

