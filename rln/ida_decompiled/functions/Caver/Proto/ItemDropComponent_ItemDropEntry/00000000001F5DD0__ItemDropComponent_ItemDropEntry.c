/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5DD0
 * Mangled: ._ZN5Caver5Proto31ItemDropComponent_ItemDropEntryC2Ev
 * Demangled: Caver::Proto::ItemDropComponent_ItemDropEntry::ItemDropComponent_ItemDropEntry(void)
 *
 * Callers: 1
 *   0x0000000000276128  Caver::ItemDropComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x000000000032F4B8  Caver::Proto::TouchableComponent::GetTypeName(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5DD8 string=0x00000000001F5DDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ItemDropComponent_ItemDropEntry::ItemDropComponent_ItemDropEntry(
        Caver::Proto::ItemDropComponent_ItemDropEntry *this)
{
  JUMPOUT(0x32F510);
}

