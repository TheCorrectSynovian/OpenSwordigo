/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202140
 * Mangled: ._ZN5Caver5Proto7Texture27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::Texture::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 3
 *   0x00000000002D4A18  Caver::Proto::Font::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002FD4AC  Caver::Proto::ObjectLibrary::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000338814  Caver::Proto::MeshMaterial::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x00000000002D2C78  Caver::Proto::Texture::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202148 string=0x000000000020214C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Texture::MergePartialFromCodedStream(
        Caver::Proto::Texture *this,
        google::protobuf::io::CodedInputStream *a2)
{
  return _ZN5Caver5Proto7Texture27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(this, a2);
}

