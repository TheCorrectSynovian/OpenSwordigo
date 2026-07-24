/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042e4ec
 * Function: Caver::Proto::CollectableItemComponent::Clear
 * Signature: undefined __thiscall Clear(CollectableItemComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CollectableItemComponent::Clear() */

void __thiscall Caver::Proto::CollectableItemComponent::Clear(CollectableItemComponent *this)

{
  CollectableItemComponent CVar1;
  long *plVar2;
  uint uVar3;
  
  CVar1 = this[0x38];
  uVar3 = (uint)(byte)CVar1;
  if (CVar1 != (CollectableItemComponent)0x0) {
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    if ((((byte)CVar1 >> 2 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x18), plVar2 != (long *)PTR__default_item_name__007e5e68)) {
                    /* try { // try from 0042e524 to 0052e52b has its CatchHandler @ 0042e5b4 */
                    /* try { // try from 0042e52c to 0052e583 has its CatchHandler @ 0042e30c */
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x38);
    }
    if (((uVar3 >> 3 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x20), plVar2 != (long *)PTR__default_identifier__007e6b70)) {
                    /* catch() { ... } // from try @ 0042e3fc with catch @ 0042e560 */
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x38);
    }
    this[0x28] = (CollectableItemComponent)0x0;
    if (((uVar3 >> 5 & 1) != 0) && (*(Program **)(this + 0x30) != (Program *)0x0)) {
      Program::Clear(*(Program **)(this + 0x30));
    }
  }
  *(undefined4 *)(this + 0x38) = 0;
                    /* try { // try from 0042e584 to 0052e5ab has its CatchHandler @ 0042e5b0 */
  return;
}


