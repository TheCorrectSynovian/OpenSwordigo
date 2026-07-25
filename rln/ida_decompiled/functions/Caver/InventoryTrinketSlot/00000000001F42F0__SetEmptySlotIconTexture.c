/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F42F0
 * Mangled: ._ZN5Caver20InventoryTrinketSlot23SetEmptySlotIconTextureERKN5boost13intrusive_ptrINS_7TextureEEE
 * Demangled: Caver::InventoryTrinketSlot::SetEmptySlotIconTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callers: 1
 *   0x000000000040AD68  Caver::InventoryItemPanel::SetItem(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 1
 *   0x000000000040DF30  Caver::InventoryTrinketSlot::SetEmptySlotIconTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F42F8 string=0x00000000001F42FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::InventoryTrinketSlot::SetEmptySlotIconTexture()
{
  return _ZN5Caver20InventoryTrinketSlot23SetEmptySlotIconTextureERKN5boost13intrusive_ptrINS_7TextureEEE();
}

