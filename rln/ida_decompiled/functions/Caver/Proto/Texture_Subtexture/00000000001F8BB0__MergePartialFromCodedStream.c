/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8BB0
 * Mangled: ._ZN5Caver5Proto18Texture_Subtexture27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::Texture_Subtexture::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000002D2C78  Caver::Proto::Texture::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x00000000002D17CC  Caver::Proto::Texture_Subtexture::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8BB8 string=0x00000000001F8BBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Texture_Subtexture::MergePartialFromCodedStream(
        Caver::Proto::Texture_Subtexture *this,
        google::protobuf::io::CodedInputStream *a2)
{
  return _ZN5Caver5Proto18Texture_Subtexture27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(
           this,
           a2);
}

