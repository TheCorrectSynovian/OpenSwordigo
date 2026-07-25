/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDE40
 * Mangled: ._ZN6google8protobuf2io17CodedOutputStream13WriteVarint32Ej
 * Demangled: google::protobuf::io::CodedOutputStream::WriteVarint32(uint)
 *
 * Callers: 23
 *   0x000000000033C234  Caver::Proto::PackedMesh::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000004DEC50  google::protobuf::internal::ExtensionSet::Extension::SerializeFieldWithCachedSizes(int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004DF7D0  google::protobuf::internal::ExtensionSet::Extension::SerializeMessageSetItemWithCachedSizes(int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004E2D7C  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004E2DC8  google::protobuf::internal::WireFormatLite::WriteInt64(int,long,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004E2DFC  google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004E2E30  google::protobuf::internal::WireFormatLite::WriteUInt64(int,ulong,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004E2E64  google::protobuf::internal::WireFormatLite::WriteSInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004E2E9C  google::protobuf::internal::WireFormatLite::WriteSInt64(int,long,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004E2ED4  google::protobuf::internal::WireFormatLite::WriteFixed32(int,uint,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004E2F0C  google::protobuf::internal::WireFormatLite::WriteFixed64(int,ulong,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004E2F44  google::protobuf::internal::WireFormatLite::WriteSFixed32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004E2F7C  google::protobuf::internal::WireFormatLite::WriteSFixed64(int,long,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004E2FB4  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004E2FF4  google::protobuf::internal::WireFormatLite::WriteDouble(int,double,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004E3034  google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004E3068  google::protobuf::internal::WireFormatLite::WriteEnum(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004E30B4  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004E3100  google::protobuf::internal::WireFormatLite::WriteBytes(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004E314C  google::protobuf::internal::WireFormatLite::WriteGroup(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004E31A8  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004E3204  google::protobuf::internal::WireFormatLite::WriteGroupMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004E32A0  google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Callees: 1
 *   0x00000000004E4D54  google::protobuf::io::CodedOutputStream::WriteVarint32(uint)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDE48 string=0x00000000001FDE4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::io::CodedOutputStream::WriteVarint32(
        google::protobuf::io::CodedOutputStream *this,
        unsigned int a2)
{
  return _ZN6google8protobuf2io17CodedOutputStream13WriteVarint32Ej(this, a2);
}

