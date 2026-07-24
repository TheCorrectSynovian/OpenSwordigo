/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00430610
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
  ~ItemDropComponent(this);
                    /* try { // try from 00430624 to 00530637 has its CatchHandler @ 00430a78 */
  operator_delete(this);
  return;
}


