/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD700
 * Mangled: ._ZN6google8protobuf8internal14WireFormatLite10WriteBytesEiRKSsPNS0_2io17CodedOutputStreamE
 * Demangled: google::protobuf::internal::WireFormatLite::WriteBytes(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 7
 *   0x00000000002D500C  Caver::Proto::Font::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002D5E04  Caver::Proto::Program::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000308204  Caver::Proto::GroundMeshComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000033AA0C  Caver::Proto::Mesh::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000033C234  Caver::Proto::PackedMesh::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000033D41C  Caver::Proto::UnpackedMesh::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000004DEC50  google::protobuf::internal::ExtensionSet::Extension::SerializeFieldWithCachedSizes(int,google::protobuf::io::CodedOutputStream *)
 *
 * Callees: 1
 *   0x00000000004E3100  google::protobuf::internal::WireFormatLite::WriteBytes(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD708 string=0x00000000001FD70C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::internal::WireFormatLite::WriteBytes(
        int a1,
        int a2,
        google::protobuf::io::CodedOutputStream *this)
{
  return _ZN6google8protobuf8internal14WireFormatLite10WriteBytesEiRKSsPNS0_2io17CodedOutputStreamE(a1, a2, this);
}

