/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00447c68
 * Function: Caver::GameOverViewController::LoadView
 * Signature: undefined __thiscall LoadView(GameOverViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOverViewController::LoadView() */

void __thiscall Caver::GameOverViewController::LoadView(GameOverViewController *this)

{
  undefined8 uVar1;
  long lVar2;
  GameOverView *this_00;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this_00 = operator_new(0x108);
  GameOverView::GameOverView(this_00);
  boost::shared_ptr<Caver::GameOverView>::shared_ptr<Caver::GameOverView>
            ((shared_ptr<Caver::GameOverView> *)&local_48,this_00);
  uVar1 = *(undefined8 *)(this + 0x68);
  plVar3 = *(long **)(this + 0x70);
  *(undefined8 *)(this + 0x68) = local_48;
  *(long **)(this + 0x70) = local_40;
  local_48 = uVar1;
  local_40 = plVar3;
                    /* try { // try from 00447cc4 to 00547d0b has its CatchHandler @ 00447cc4
                       catch() { ... } // from try @ 00447cc4 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044b4b0 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044cfdc with catch @ 00447cc4
                       catch() { ... } // from try @ 0044d044 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044d0ac with catch @ 00447cc4
                       catch() { ... } // from try @ 0044d114 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044d17c with catch @ 00447cc4
                       catch() { ... } // from try @ 0044d1e4 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044d24c with catch @ 00447cc4
                       catch() { ... } // from try @ 0044d2b4 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044d31c with catch @ 00447cc4
                       catch() { ... } // from try @ 0044d384 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044d3ec with catch @ 00447cc4
                       catch() { ... } // from try @ 0044d454 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044d4bc with catch @ 00447cc4
                       catch() { ... } // from try @ 0044d524 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044d58c with catch @ 00447cc4
                       catch() { ... } // from try @ 0044d5f4 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044d65c with catch @ 00447cc4
                       catch() { ... } // from try @ 0044d6c4 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044d72c with catch @ 00447cc4
                       catch() { ... } // from try @ 0044d794 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044d7fc with catch @ 00447cc4
                       catch() { ... } // from try @ 0044d864 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044d8cc with catch @ 00447cc4
                       catch() { ... } // from try @ 0044d934 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044d99c with catch @ 00447cc4
                       catch() { ... } // from try @ 0044da04 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044da6c with catch @ 00447cc4
                       catch() { ... } // from try @ 0044dad4 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044db3c with catch @ 00447cc4
                       catch() { ... } // from try @ 0044dba4 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044dc0c with catch @ 00447cc4
                       catch() { ... } // from try @ 0044dc74 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044dcdc with catch @ 00447cc4
                       catch() { ... } // from try @ 0044dd44 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044ddac with catch @ 00447cc4
                       catch() { ... } // from try @ 0044de14 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044de7c with catch @ 00447cc4
                       catch() { ... } // from try @ 0044dee4 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044df4c with catch @ 00447cc4
                       catch() { ... } // from try @ 0044dfb4 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044e048 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044e0b0 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044e118 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044e180 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044e1e8 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044e250 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044e2b8 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044e320 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044e388 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044e3f0 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044e458 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044e4c0 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044e528 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044e590 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044e5f8 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044e660 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044e6c8 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044e730 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044e798 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044e800 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044e868 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044e8d0 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044e938 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044e9a0 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044ea08 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044ea70 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044ead8 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044eb40 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044eba8 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044ec10 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044ec78 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044ece0 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044ed48 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044edb0 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044ee18 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044ee80 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044eee8 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044ef50 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044efb8 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044f020 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044f088 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044f0f0 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044f158 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044f1c0 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044f228 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044f290 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044f2f8 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044f360 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044f3c8 with catch @ 00447cc4
                       catch() { ... } // from try @ 0044f448 with catch @ 00447cc4 */
  if ((plVar3 != (long *)0x0) && (lVar5 = plVar3[1], plVar3[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar5 = plVar3[2];
    plVar3[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  lVar5 = *(long *)(this + 0x68);
                    /* try { // try from 00447d0c to 00547d1f has its CatchHandler @ 0044f4b8 */
  if (*(int *)(lVar5 + 0x70) != 0x12) {
    plVar3 = *(long **)(lVar5 + 0x58);
    *(undefined4 *)(lVar5 + 0x70) = 0x12;
    if ((plVar3 != (long *)0x0) && (DAT_00683734 < *(float *)((long)plVar3 + 0x8c))) {
                    /* try { // try from 00447d3c to 00547d4b has its CatchHandler @ 0044cfa8 */
      (**(code **)(*plVar3 + 0x58))();
      lVar5 = *(long *)(this + 0x68);
    }
  }
  *(GameOverViewController **)(lVar5 + 0xf0) = this + 0x48;
  plVar3 = *(long **)(this + 0x70);
  if (plVar3 != (long *)0x0) {
                    /* try { // try from 00447d5c to 00547d6b has its CatchHandler @ 0044f41c */
    plVar3[1] = plVar3[1] + 2;
  }
  plVar6 = *(long **)(this + 0x20);
  *(long *)(this + 0x18) = lVar5;
  *(long **)(this + 0x20) = plVar3;
  if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* try { // try from 00447d84 to 00547d93 has its CatchHandler @ 0044cfa8 */
    (**(code **)(*plVar6 + 0x10))(plVar6);
    lVar5 = plVar6[2];
    plVar6[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
                    /* try { // try from 00447db0 to 00547dc3 has its CatchHandler @ 0044f418 */
  puVar4 = *(undefined8 **)(this + 0x40);
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,this);
  }
  if ((plVar3 != (long *)0x0) && (lVar5 = plVar3[1], plVar3[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* try { // try from 00447de0 to 00547def has its CatchHandler @ 0044cfa0 */
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar5 = plVar3[2];
    plVar3[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
                    /* try { // try from 00447e00 to 00547e0f has its CatchHandler @ 0044f39c */
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 00447e28 to 00547e37 has its CatchHandler @ 0044cfa0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


