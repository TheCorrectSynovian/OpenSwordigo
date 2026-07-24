/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042f920
 * Function: Caver::Proto::ItemDropComponent_ItemDropEntry::~ItemDropComponent_ItemDropEntry
 * Signature: undefined __thiscall ~ItemDropComponent_ItemDropEntry(ItemDropComponent_ItemDropEntry * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ItemDropComponent_ItemDropEntry::~ItemDropComponent_ItemDropEntry() */

void __thiscall
Caver::Proto::ItemDropComponent_ItemDropEntry::~ItemDropComponent_ItemDropEntry
          (ItemDropComponent_ItemDropEntry *this)

{
  *(undefined **)this = PTR_vtable_007e5f28 + 0x10;
  SharedDtor(this);
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


