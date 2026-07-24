/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004303c4
 * Function: Caver::Proto::ItemDropComponent::~ItemDropComponent
 * Signature: undefined __thiscall ~ItemDropComponent(ItemDropComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ItemDropComponent::~ItemDropComponent() */

void __thiscall Caver::Proto::ItemDropComponent::~ItemDropComponent(ItemDropComponent *this)

{
  ItemDropComponent *pIVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  
                    /* catch() { ... } // from try @ 00430410 with catch @ 004303c4 */
  *(undefined **)this = PTR_vtable_007e4ac0 + 0x10;
                    /* try { // try from 004303e8 to 005303fb has its CatchHandler @ 00430500 */
  SharedDtor(this);
  iVar3 = *(int *)(this + 0x2c);
  pIVar1 = *(ItemDropComponent **)(this + 0x20);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
                    /* try { // try from 00430400 to 0053040f has its CatchHandler @ 00430490 */
      plVar2 = *(long **)(pIVar1 + lVar4 * 8);
      if (plVar2 != (long *)0x0) {
                    /* try { // try from 00430410 to 00530503 has its CatchHandler @ 004303c4 */
        (**(code **)(*plVar2 + 8))(plVar2);
        iVar3 = *(int *)(this + 0x2c);
        pIVar1 = *(ItemDropComponent **)(this + 0x20);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if ((pIVar1 != this + 0x38) && (pIVar1 != (ItemDropComponent *)0x0)) {
    operator_delete__(pIVar1);
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


