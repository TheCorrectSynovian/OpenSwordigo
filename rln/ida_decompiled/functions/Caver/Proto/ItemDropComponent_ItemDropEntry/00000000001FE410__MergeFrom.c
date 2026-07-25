/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE410
 * Mangled: ._ZN5Caver5Proto31ItemDropComponent_ItemDropEntry9MergeFromERKS1_
 * Demangled: Caver::Proto::ItemDropComponent_ItemDropEntry::MergeFrom(Caver::Proto::ItemDropComponent_ItemDropEntry const&)
 *
 * Callers: 4
 *   0x000000000032F570  Caver::Proto::ItemDropComponent_ItemDropEntry::ItemDropComponent_ItemDropEntry(Caver::Proto::ItemDropComponent_ItemDropEntry const&)
 *   0x000000000032FFA8  Caver::Proto::ItemDropComponent_ItemDropEntry::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x000000000032FFAC  Caver::Proto::ItemDropComponent_ItemDropEntry::CopyFrom(Caver::Proto::ItemDropComponent_ItemDropEntry const&)
 *   0x0000000000330DDC  google::protobuf::RepeatedPtrField<Caver::Proto::ItemDropComponent_ItemDropEntry>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::ItemDropComponent_ItemDropEntry> const&)
 *
 * Callees: 1
 *   0x000000000032F570  Caver::Proto::ItemDropComponent_ItemDropEntry::ItemDropComponent_ItemDropEntry(Caver::Proto::ItemDropComponent_ItemDropEntry const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE418 string=0x00000000001FE41C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ItemDropComponent_ItemDropEntry::MergeFrom(
        Caver::Proto::ItemDropComponent_ItemDropEntry *this,
        const Caver::Proto::ItemDropComponent_ItemDropEntry *a2)
{
  JUMPOUT(0x32F5DC);
}

