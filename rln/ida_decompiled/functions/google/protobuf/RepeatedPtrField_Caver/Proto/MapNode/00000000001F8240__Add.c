/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8240
 * Mangled: ._ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto7MapNodeEE3AddEv
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::MapNode>::Add(void)
 *
 * Callers: 1
 *   0x00000000002DE804  Caver::Proto::MapZone::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x00000000002E7FE4  google::protobuf::RepeatedPtrField<Caver::Proto::MapNode>::Add(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8248 string=0x00000000001F824C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::RepeatedPtrField<Caver::Proto::MapNode>::Add(
        google::protobuf::internal::RepeatedPtrFieldBase *this)
{
  return _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto7MapNodeEE3AddEv(this);
}

