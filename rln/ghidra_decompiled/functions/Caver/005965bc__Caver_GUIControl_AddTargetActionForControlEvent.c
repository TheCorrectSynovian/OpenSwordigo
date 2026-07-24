/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005965bc
 * Function: Caver::GUIControl::AddTargetActionForControlEvent
 * Signature: undefined __thiscall AddTargetActionForControlEvent(GUIControl * this, void * param_1, function * param_2, Event param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIControl::AddTargetActionForControlEvent(void*, boost::function<void (void*,
   Caver::GUIEvent*)> const&, Caver::GUIControl::Event) */

void __thiscall
Caver::GUIControl::AddTargetActionForControlEvent
          (GUIControl *this,undefined8 param_1,ulong *param_2,int param_4)

{
  GUIControl *pGVar1;
  GUIControl *pGVar2;
  long lVar3;
  GUIControl *pGVar4;
  undefined8 uVar5;
  ulong uVar6;
  GUIControl *pGVar7;
  bool bVar8;
  ulong local_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  int local_a8;
  undefined8 local_a0;
  ulong local_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  int local_78 [2];
  undefined8 local_70;
  ulong local_68;
  ulong local_60;
  ulong uStack_58;
  ulong local_50;
  long local_48;
  
                    /* try { // try from 005965c4 to 006965cf has its CatchHandler @ 00596bc0 */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_c8 = 0;
  uVar6 = *param_2;
                    /* try { // try from 005965f0 to 006965f3 has its CatchHandler @ 00596f38 */
  if (uVar6 != 0) {
    local_c8 = uVar6;
    if ((uVar6 & 1) == 0) {
                    /* try { // try from 00596608 to 0069660f has its CatchHandler @ 00596bbc */
                    /* try { // try from 00596610 to 00696623 has its CatchHandler @ 00596bb8 */
      (**(code **)(uVar6 & 0xfffffffffffffffe))(param_2 + 1,&local_c0,0);
    }
    else {
      local_b0 = param_2[3];
                    /* try { // try from 00596624 to 00696637 has its CatchHandler @ 00596f00 */
      uStack_b8 = param_2[2];
      local_c0 = param_2[1];
    }
  }
  local_98 = 0;
                    /* try { // try from 00596638 to 00696643 has its CatchHandler @ 00596b88 */
  local_a8 = param_4;
  local_a0 = param_1;
  if (uVar6 != 0) {
    local_98 = uVar6;
    if ((uVar6 & 1) == 0) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(&local_c0,&local_90,0);
      uVar6 = local_98;
                    /* try { // try from 00596664 to 00696667 has its CatchHandler @ 00596f00 */
    }
    else {
      local_80 = local_b0;
      uStack_88 = uStack_b8;
      local_90 = local_c0;
    }
  }
  local_68 = 0;
  local_78[0] = local_a8;
  local_70 = local_a0;
  if (uVar6 != 0) {
    local_68 = uVar6;
    if ((uVar6 & 1) == 0) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(&local_90,&local_60,0);
    }
    else {
      local_50 = local_80;
      uStack_58 = uStack_88;
      local_60 = local_90;
    }
  }
  pGVar1 = this + 0xf8;
  pGVar4 = *(GUIControl **)(this + 0x100);
  pGVar7 = pGVar1;
  if (*(GUIControl **)(this + 0x100) != (GUIControl *)0x0) {
    do {
      pGVar7 = pGVar4;
      pGVar2 = pGVar7 + 0x10;
      if (*(int *)(pGVar7 + 0x20) <= local_78[0]) {
        pGVar2 = pGVar7 + 0x18;
      }
      pGVar4 = *(GUIControl **)pGVar2;
    } while (*(GUIControl **)pGVar2 != (GUIControl *)0x0);
    if (pGVar1 != pGVar7) {
      bVar8 = local_78[0] < *(int *)(pGVar7 + 0x20);
      goto LAB_00596728;
    }
  }
  bVar8 = true;
LAB_00596728:
  uVar5 = std::
          _Rb_tree<int,std::pair<int_const,Caver::GUIControl::TargetAction>,std::_Select1st<std::pair<int_const,Caver::GUIControl::TargetAction>>,std::less<int>,std::allocator<std::pair<int_const,Caver::GUIControl::TargetAction>>>
          ::_M_create_node((_Rb_tree<int,std::pair<int_const,Caver::GUIControl::TargetAction>,std::_Select1st<std::pair<int_const,Caver::GUIControl::TargetAction>>,std::less<int>,std::allocator<std::pair<int_const,Caver::GUIControl::TargetAction>>>
                            *)(this + 0xf0),(pair *)local_78);
  FUN_0064c8a0(bVar8,uVar5,pGVar7,pGVar1);
  *(long *)(this + 0x118) = *(long *)(this + 0x118) + 1;
  if (local_68 != 0) {
                    /* try { // try from 00596758 to 00696763 has its CatchHandler @ 00596b38 */
    if (((local_68 & 1) == 0) && (*(code **)(local_68 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(local_68 & 0xfffffffffffffffe))(&local_60,&local_60,2);
    }
    local_68 = 0;
  }
                    /* try { // try from 00596784 to 006967ab has its CatchHandler @ 00596a38 */
  if (local_98 != 0) {
    if (((local_98 & 1) == 0) && (*(code **)(local_98 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(local_98 & 0xfffffffffffffffe))(&local_90,&local_90,2);
    }
    local_98 = 0;
  }
  if (((local_c8 != 0) && ((local_c8 & 1) == 0)) &&
     (*(code **)(local_c8 & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)(local_c8 & 0xfffffffffffffffe))(&local_c0,&local_c0,2);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


