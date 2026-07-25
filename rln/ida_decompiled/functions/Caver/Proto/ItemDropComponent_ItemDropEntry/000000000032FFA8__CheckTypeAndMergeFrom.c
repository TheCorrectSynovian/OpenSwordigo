/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032FFA8
 * Mangled: _ZN5Caver5Proto31ItemDropComponent_ItemDropEntry21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::ItemDropComponent_ItemDropEntry::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE410  Caver::Proto::ItemDropComponent_ItemDropEntry::MergeFrom(Caver::Proto::ItemDropComponent_ItemDropEntry const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ItemDropComponent_ItemDropEntry::CheckTypeAndMergeFrom(
        Caver::Proto::ItemDropComponent_ItemDropEntry *this,
        const Caver::Proto::ItemDropComponent_ItemDropEntry *a2)
{
  Caver::Proto::ItemDropComponent_ItemDropEntry::MergeFrom(this, a2);
}

