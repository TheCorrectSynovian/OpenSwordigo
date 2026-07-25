/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000040E8F0
 * Mangled: _ZN5Caver20InventoryTrinketSlot14TouchCancelledERKNS_7FWTouchE
 * Demangled: Caver::InventoryTrinketSlot::TouchCancelled(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5920  Caver::MenuItemSlot::SetSelected(bool)
 *
 * Referenced strings: 3
 *   insn=0x000000000040E8F0 string=0x000000000040E8F4 "\t"
 *   insn=0x000000000040E8FC string=0x000000000040E900 ""
 *   insn=0x000000000040E910 string=0x00000000001F5920 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::InventoryTrinketSlot::TouchCancelled(__int64 this, const Caver::FWTouch *a2)
{
  Caver::MenuItemSlot *v2; // x8
  char v3; // w1

  if ( *(_QWORD *)a2 == *(_QWORD *)(this + 328) )
  {
    v2 = *(Caver::MenuItemSlot **)(this + 272);
    v3 = *(_BYTE *)(this + 344);
    *(_QWORD *)(this + 328) = 0;
    return Caver::MenuItemSlot::SetSelected(v2, v3);
  }
  return this;
}

