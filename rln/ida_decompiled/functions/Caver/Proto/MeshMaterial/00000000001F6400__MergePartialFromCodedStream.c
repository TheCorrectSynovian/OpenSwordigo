/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6400
 * Mangled: ._ZN5Caver5Proto12MeshMaterial27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::MeshMaterial::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x0000000000339D60  Caver::Proto::Mesh::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x0000000000338814  Caver::Proto::MeshMaterial::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6408 string=0x00000000001F640C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::MeshMaterial::MergePartialFromCodedStream(
        Caver::Proto::MeshMaterial *this,
        google::protobuf::io::CodedInputStream *a2)
{
  return _ZN5Caver5Proto12MeshMaterial27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(this, a2);
}

