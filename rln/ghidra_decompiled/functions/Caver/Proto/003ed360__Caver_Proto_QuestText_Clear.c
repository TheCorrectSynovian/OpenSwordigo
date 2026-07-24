/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ed360
 * Function: Caver::Proto::QuestText::Clear
 * Signature: undefined __thiscall Clear(QuestText * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::QuestText::Clear() */

void __thiscall Caver::Proto::QuestText::Clear(QuestText *this)

{
  long *plVar1;
  long lVar2;
  
  if ((((byte)this[0x50] & 1) != 0) &&
     (plVar1 = *(long **)(this + 0x10), plVar1 != (long *)PTR__default_quest_name__007e6638)) {
    FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
  }
  if (0 < *(int *)(this + 0x20)) {
    lVar2 = 0;
    do {
      plVar1 = *(long **)(*(long *)(this + 0x18) + lVar2 * 8);
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(this + 0x20));
  }
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  return;
}


