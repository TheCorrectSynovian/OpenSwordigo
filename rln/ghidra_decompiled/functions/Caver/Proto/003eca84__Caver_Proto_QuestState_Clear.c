/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003eca84
 * Function: Caver::Proto::QuestState::Clear
 * Signature: undefined __thiscall Clear(QuestState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::QuestState::Clear() */

void __thiscall Caver::Proto::QuestState::Clear(QuestState *this)

{
  long *plVar1;
  
  if (this[0x1c] != (QuestState)0x0) {
    if ((((byte)this[0x1c] & 1) != 0) &&
       (plVar1 = *(long **)(this + 0x10), plVar1 != (long *)PTR__default_quest_name__007e6f40)) {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
    }
    this[0x18] = (QuestState)0x0;
  }
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


