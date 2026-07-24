/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004306b4
 * Function: Caver::Proto::ItemDropComponent::Clear
 * Signature: undefined __thiscall Clear(ItemDropComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ItemDropComponent::Clear() */

void __thiscall Caver::Proto::ItemDropComponent::Clear(ItemDropComponent *this)

{
  ItemDropComponent IVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  
  IVar1 = this[0x5c];
  uVar3 = (uint)(byte)IVar1;
  if (IVar1 != (ItemDropComponent)0x0) {
    if ((((byte)IVar1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x10), plVar2 != (long *)PTR__default_item_name__007e5cd8)) {
                    /* try { // try from 004306e4 to 005306eb has its CatchHandler @ 00430b88 */
                    /* try { // try from 004306f0 to 005306f7 has its CatchHandler @ 00430b18 */
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x5c);
    }
    if (((uVar3 >> 1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x18), plVar2 != (long *)PTR__default_item_identifier__007e6a38))
    {
                    /* try { // try from 0043071c to 0053071f has its CatchHandler @ 00430af8 */
                    /* try { // try from 00430720 to 0053076f has its CatchHandler @ 00430504 */
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
    }
    *(undefined2 *)(this + 0x58) = 0;
  }
  if (0 < *(int *)(this + 0x28)) {
    lVar4 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(this + 0x20) + lVar4 * 8) + 0x20))();
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(this + 0x28));
  }
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
                    /* try { // try from 00430770 to 00530783 has its CatchHandler @ 00430a04 */
  return;
}


