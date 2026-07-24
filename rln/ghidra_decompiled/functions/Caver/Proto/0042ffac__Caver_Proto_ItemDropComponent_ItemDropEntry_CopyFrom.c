/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042ffac
 * Function: Caver::Proto::ItemDropComponent_ItemDropEntry::CopyFrom
 * Signature: undefined __thiscall CopyFrom(ItemDropComponent_ItemDropEntry * this, ItemDropComponent_ItemDropEntry * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ItemDropComponent_ItemDropEntry::CopyFrom(Caver::Proto::ItemDropComponent_ItemDropEntry
   const&) */

void __thiscall
Caver::Proto::ItemDropComponent_ItemDropEntry::CopyFrom
          (ItemDropComponent_ItemDropEntry *this,ItemDropComponent_ItemDropEntry *param_1)

{
  if (param_1 != this) {
                    /* catch() { ... } // from try @ 0042fb7c with catch @ 0042ffd0 */
                    /* catch() { ... } // from try @ 0042fb18 with catch @ 0042ffd4 */
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


