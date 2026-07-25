/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9290
 * Mangled: ._ZN6google8protobuf2io17CodedOutputStream19WriteLittleEndian32Ej
 * Demangled: google::protobuf::io::CodedOutputStream::WriteLittleEndian32(uint)
 *
 * Callers: 5
 *   0x000000000033C234  Caver::Proto::PackedMesh::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000004DEC50  google::protobuf::internal::ExtensionSet::Extension::SerializeFieldWithCachedSizes(int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004E2ED4  google::protobuf::internal::WireFormatLite::WriteFixed32(int,uint,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004E2F44  google::protobuf::internal::WireFormatLite::WriteSFixed32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004E2FB4  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *
 * Callees: 1
 *   0x00000000004E4A84  google::protobuf::io::CodedOutputStream::WriteLittleEndian32(uint)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9298 string=0x00000000001F929C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::io::CodedOutputStream::WriteLittleEndian32(
        google::protobuf::io::CodedOutputStream *this,
        unsigned int a2)
{
  return _ZN6google8protobuf2io17CodedOutputStream19WriteLittleEndian32Ej(this, a2);
}

