/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a37e4
 * Function: std::map<unsigned_long,boost::shared_ptr<Caver::GUIView>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>::operator[]
 * Signature: undefined __thiscall operator[](map<unsigned_long,boost::shared_ptr<Caver::GUIView>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>> * this, ulong * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::map<unsigned long, boost::shared_ptr<Caver::GUIView>, std::less<unsigned long>,
   std::allocator<std::pair<unsigned long const, boost::shared_ptr<Caver::GUIView> > >
   >::operator[](unsigned long const&) */

map<unsigned_long,boost::shared_ptr<Caver::GUIView>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
* __thiscall
std::
map<unsigned_long,boost::shared_ptr<Caver::GUIView>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
::operator[](map<unsigned_long,boost::shared_ptr<Caver::GUIView>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
             *this,ulong *param_1)

{
  map<unsigned_long,boost::shared_ptr<Caver::GUIView>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
  *pmVar1;
  long lVar2;
  map<unsigned_long,boost::shared_ptr<Caver::GUIView>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
  *pmVar3;
  long *plVar4;
  bool bVar5;
  map<unsigned_long,boost::shared_ptr<Caver::GUIView>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
  *pmVar6;
  map<unsigned_long,boost::shared_ptr<Caver::GUIView>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
  *pmVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  ulong local_60;
  undefined8 uStack_58;
  long *local_50;
  long local_48;
  
                    /* try { // try from 005a37e4 to 006a37fb has its CatchHandler @ 005a387c */
                    /* try { // try from 005a37fc to 006a389f has its CatchHandler @ 005a362c */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pmVar1 = this + 8;
  pmVar7 = *(map<unsigned_long,boost::shared_ptr<Caver::GUIView>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
             **)(this + 0x10);
  pmVar6 = pmVar1;
  if (pmVar7 == (map<unsigned_long,boost::shared_ptr<Caver::GUIView>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
                 *)0x0) {
LAB_005a3868:
    uVar8 = *param_1;
  }
  else {
    do {
      pmVar3 = pmVar7 + 0x18;
      if (*param_1 <= *(ulong *)(pmVar7 + 0x20)) {
        pmVar6 = pmVar7;
        pmVar3 = pmVar7 + 0x10;
      }
      pmVar7 = *(map<unsigned_long,boost::shared_ptr<Caver::GUIView>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
                 **)pmVar3;
    } while (pmVar7 != (map<unsigned_long,boost::shared_ptr<Caver::GUIView>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
                        *)0x0);
    if (pmVar6 == pmVar1) goto LAB_005a3868;
    uVar8 = *param_1;
    if (*(ulong *)(pmVar6 + 0x20) <= uVar8) goto LAB_005a3944;
  }
  uStack_58 = 0;
  local_50 = (long *)0x0;
  local_60 = uVar8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005a37e4 with catch @ 005a387c
                        */
  auVar10 = _Rb_tree<unsigned_long,std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
            ::_M_get_insert_hint_unique_pos
                      ((_Rb_tree<unsigned_long,std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
                        *)this,pmVar6,&local_60);
  pmVar7 = auVar10._8_8_;
  pmVar6 = auVar10._0_8_;
  if (pmVar7 != (map<unsigned_long,boost::shared_ptr<Caver::GUIView>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
                 *)0x0) {
    bVar5 = true;
    if ((pmVar6 == (map<unsigned_long,boost::shared_ptr<Caver::GUIView>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
                    *)0x0) && (pmVar1 != pmVar7)) {
                    /* try { // try from 005a38a0 to 006a38c7 has its CatchHandler @ 005a38d0 */
      bVar5 = local_60 < *(ulong *)(pmVar7 + 0x20);
    }
    pmVar6 = operator_new(0x38);
    *(undefined8 *)(pmVar6 + 0x28) = uStack_58;
    *(ulong *)(pmVar6 + 0x20) = local_60;
                    /* try { // try from 005a38c8 to 006a38d3 has its CatchHandler @ 005a362c */
    *(long **)(pmVar6 + 0x30) = local_50;
    if (local_50 != (long *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005a38a0 with catch @ 005a38d0
                        */
      local_50[1] = local_50[1] + 1;
    }
    FUN_0064c8a0(bVar5,pmVar6,pmVar7,pmVar1);
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  }
  plVar4 = local_50;
  if ((local_50 != (long *)0x0) && (lVar9 = local_50[1], local_50[1] = lVar9 + -1, lVar9 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar9 = plVar4[2];
    plVar4[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
LAB_005a3944:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return pmVar6 + 0x28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


