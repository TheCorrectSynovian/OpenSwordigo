/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d78f8
 * Function: Caver::GUIViewLayout::GUIViewLayout
 * Signature: undefined __thiscall GUIViewLayout(GUIViewLayout * this, GUIViewLayout * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIViewLayout::GUIViewLayout(Caver::GUIViewLayout const&) */

void __thiscall Caver::GUIViewLayout::GUIViewLayout(GUIViewLayout *this,GUIViewLayout *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  _Rb_tree_node *p_Var6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
  FUN_0066a528();
  lVar12 = *(long *)(param_1 + 8);
  lVar10 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  uVar3 = lVar10 - lVar12;
  puVar5 = (undefined8 *)0x0;
  if (uVar3 != 0) {
    if ((ulong)((long)uVar3 >> 4) >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00665294();
    }
    puVar5 = operator_new(uVar3);
  }
  *(undefined8 **)(this + 8) = puVar5;
  *(undefined8 **)(this + 0x10) = puVar5;
  *(undefined8 **)(this + 0x18) = puVar5 + ((long)uVar3 >> 4) * 2;
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (puVar2 != puVar1) {
    puVar8 = puVar1;
    puVar11 = puVar5;
    do {
      *puVar11 = *puVar8;
      lVar12 = puVar8[1];
      puVar11[1] = lVar12;
      if (lVar12 != 0) {
        *(long *)(lVar12 + 8) = *(long *)(lVar12 + 8) + 1;
      }
      puVar8 = puVar8 + 2;
      puVar11 = puVar11 + 2;
    } while (puVar8 != puVar2);
    puVar5 = (undefined8 *)
             ((long)puVar5 + ((long)puVar2 + (-0x10 - (long)puVar1) & 0xfffffffffffffff0U) + 0x10);
  }
  p_Var6 = (_Rb_tree_node *)(this + 0x28);
  *(undefined8 *)p_Var6 = 0;
                    /* catch() { ... } // from try @ 004d7a0c with catch @ 004d79bc */
  *(undefined8 **)(this + 0x10) = puVar5;
  *(undefined8 *)(this + 0x30) = 0;
  *(_Rb_tree_node **)(this + 0x38) = p_Var6;
  *(_Rb_tree_node **)(this + 0x40) = p_Var6;
  *(undefined8 *)(this + 0x48) = 0;
  if (*(_Rb_tree_node **)(param_1 + 0x30) != (_Rb_tree_node *)0x0) {
    lVar12 = std::
             _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>>
             ::_M_copy((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>>
                        *)(this + 0x20),*(_Rb_tree_node **)(param_1 + 0x30),p_Var6);
                    /* try { // try from 004d79dc to 005d79df has its CatchHandler @ 004d7a00 */
    *(long *)(this + 0x30) = lVar12;
    lVar10 = lVar12;
    do {
                    /* try { // try from 004d79e0 to 005d79e7 has its CatchHandler @ 004d79f8 */
      lVar9 = lVar10;
      lVar10 = *(long *)(lVar9 + 0x10);
    } while (lVar10 != 0);
    *(long *)(this + 0x38) = lVar9;
    do {
      lVar10 = lVar12;
      lVar12 = *(long *)(lVar10 + 0x18);
                    /* catch() { ... } // from try @ 004d79e0 with catch @ 004d79f8 */
    } while (lVar12 != 0);
    *(long *)(this + 0x40) = lVar10;
                    /* catch() { ... } // from try @ 004d79dc with catch @ 004d7a00 */
                    /* try { // try from 004d7a04 to 005d7a0b has its CatchHandler @ 004d7a1c */
    *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x48);
  }
                    /* try { // try from 004d7a0c to 005d7a1f has its CatchHandler @ 004d79bc */
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  uVar13 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x50) = uVar13;
                    /* catch() { ... } // from try @ 004d7a04 with catch @ 004d7a1c */
  *(undefined8 *)(this + 100) = *(undefined8 *)(param_1 + 100);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


