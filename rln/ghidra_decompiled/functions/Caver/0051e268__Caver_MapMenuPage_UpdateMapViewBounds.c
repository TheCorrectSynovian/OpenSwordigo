/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0051e268
 * Function: Caver::MapMenuPage::UpdateMapViewBounds
 * Signature: undefined __thiscall UpdateMapViewBounds(MapMenuPage * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapMenuPage::UpdateMapViewBounds() */

void __thiscall Caver::MapMenuPage::UpdateMapViewBounds(MapMenuPage *this)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(this + 0x1c8);
  pcVar3 = *(code **)(*plVar2 + 0xf8);
  Rectangle::RectangleByOutsetting((Rectangle *)((long)plVar2 + 0x84),DAT_00684320);
                    /* catch() { ... } // from try @ 0051e2c4 with catch @ 0051e2b0 */
  (*pcVar3)(plVar2,auStack_48);
                    /* try { // try from 0051e2c0 to 0061e2c3 has its CatchHandler @ 0051e2d4 */
                    /* try { // try from 0051e2c4 to 0061e2e7 has its CatchHandler @ 0051e2b0 */
  (**(code **)(**(long **)(this + 0x1b8) + 0x130))
            (*(long **)(this + 0x1b8),*(long *)(this + 0x1c8) + 0x74);
                    /* catch() { ... } // from try @ 0051e2c0 with catch @ 0051e2d4 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


