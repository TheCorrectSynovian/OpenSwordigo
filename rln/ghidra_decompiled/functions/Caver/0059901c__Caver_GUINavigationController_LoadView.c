/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059901c
 * Function: Caver::GUINavigationController::LoadView
 * Signature: undefined __thiscall LoadView(GUINavigationController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUINavigationController::LoadView() */

void __thiscall Caver::GUINavigationController::LoadView(GUINavigationController *this)

{
  long lVar1;
  GUIView *this_00;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long local_48;
  long *local_40;
  long local_38;
  
                    /* try { // try from 00599024 to 0069902b has its CatchHandler @ 0059a104 */
                    /* try { // try from 0059902c to 0069903f has its CatchHandler @ 0059a100 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00599040 to 00699053 has its CatchHandler @ 0059a484 */
  this_00 = operator_new(0xf0);
  GUIView::GUIView(this_00);
                    /* try { // try from 00599054 to 00699063 has its CatchHandler @ 0059a0d0 */
  boost::shared_ptr<Caver::GUIView>::shared_ptr<Caver::GUIView>
            ((shared_ptr<Caver::GUIView> *)&local_48,this_00);
  if (*(int *)(local_48 + 0x70) != 0x12) {
    plVar2 = *(long **)(local_48 + 0x58);
    *(undefined4 *)(local_48 + 0x70) = 0x12;
                    /* try { // try from 00599084 to 00699087 has its CatchHandler @ 0059a484 */
    if ((plVar2 != (long *)0x0) && (DAT_00683734 < *(float *)((long)plVar2 + 0x8c))) {
      (**(code **)(*plVar2 + 0x58))();
                    /* try { // try from 0059909c to 006990a3 has its CatchHandler @ 0059a0cc */
    }
  }
                    /* try { // try from 005990a4 to 006990b7 has its CatchHandler @ 0059a0c8 */
  if (local_40 != (long *)0x0) {
    local_40[1] = local_40[1] + 1;
  }
  plVar2 = *(long **)(this + 0x20);
                    /* try { // try from 005990b8 to 006990cb has its CatchHandler @ 0059a44c */
  *(long *)(this + 0x18) = local_48;
  *(long **)(this + 0x20) = local_40;
                    /* try { // try from 005990cc to 006990db has its CatchHandler @ 0059a098 */
  if ((plVar2 != (long *)0x0) && (lVar4 = plVar2[1], plVar2[1] = lVar4 + -1, lVar4 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar4 = plVar2[2];
    plVar2[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
                    /* try { // try from 005990fc to 006990ff has its CatchHandler @ 0059a44c */
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  puVar3 = *(undefined8 **)(this + 0x40);
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,this);
  }
  if ((local_40 != (long *)0x0) && (lVar4 = local_40[1], local_40[1] = lVar4 + -1, lVar4 + -1 == 0))
  {
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar4 = local_40[2];
    local_40[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
                    /* try { // try from 00599158 to 0069916b has its CatchHandler @ 0059a064 */
      (**(code **)(*local_40 + 0x18))(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


