/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6030
 * Mangled: ._ZN5Caver5Proto7Polygon27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::Polygon::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 2
 *   0x00000000003063B0  Caver::Proto::GroundPolygonComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000030AF94  Caver::Proto::ShapeComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x00000000002D0568  Caver::Proto::Polygon::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6038 string=0x00000000001F603C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Polygon::MergePartialFromCodedStream(
        Caver::Proto::Polygon *this,
        google::protobuf::io::CodedInputStream *a2)
{
  return _ZN5Caver5Proto7Polygon27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(this, a2);
}

