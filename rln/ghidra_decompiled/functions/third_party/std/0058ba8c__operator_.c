/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058ba8c
 * Function: std::map<unsigned_int,boost::shared_ptr<Caver::RenderingProgram>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>::operator[]
 * Signature: undefined __thiscall operator[](map<unsigned_int,boost::shared_ptr<Caver::RenderingProgram>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>> * this, uint * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::map<unsigned int, boost::shared_ptr<Caver::RenderingProgram>, std::less<unsigned int>,
   std::allocator<std::pair<unsigned int const, boost::shared_ptr<Caver::RenderingProgram> > >
   >::operator[](unsigned int const&) */

map<unsigned_int,boost::shared_ptr<Caver::RenderingProgram>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
* __thiscall
std::
map<unsigned_int,boost::shared_ptr<Caver::RenderingProgram>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
::operator[](map<unsigned_int,boost::shared_ptr<Caver::RenderingProgram>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
             *this,uint *param_1)

{
  map<unsigned_int,boost::shared_ptr<Caver::RenderingProgram>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
  *pmVar1;
  uint uVar2;
  long lVar3;
  map<unsigned_int,boost::shared_ptr<Caver::RenderingProgram>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
  *pmVar4;
  long *plVar5;
  bool bVar6;
  map<unsigned_int,boost::shared_ptr<Caver::RenderingProgram>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
  *pmVar7;
  map<unsigned_int,boost::shared_ptr<Caver::RenderingProgram>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
  *pmVar8;
  long lVar9;
  undefined1 auVar10 [16];
  uint local_60 [2];
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pmVar1 = this + 8;
  pmVar8 = *(map<unsigned_int,boost::shared_ptr<Caver::RenderingProgram>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
             **)(this + 0x10);
  pmVar7 = pmVar1;
  if (pmVar8 == (map<unsigned_int,boost::shared_ptr<Caver::RenderingProgram>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
                 *)0x0) {
LAB_0058bb10:
    uVar2 = *param_1;
  }
  else {
    do {
      pmVar4 = pmVar8 + 0x18;
      if (*param_1 <= *(uint *)(pmVar8 + 0x20)) {
        pmVar7 = pmVar8;
        pmVar4 = pmVar8 + 0x10;
      }
      pmVar8 = *(map<unsigned_int,boost::shared_ptr<Caver::RenderingProgram>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
                 **)pmVar4;
    } while (pmVar8 != (map<unsigned_int,boost::shared_ptr<Caver::RenderingProgram>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
                        *)0x0);
    if (pmVar7 == pmVar1) goto LAB_0058bb10;
    uVar2 = *param_1;
    if (*(uint *)(pmVar7 + 0x20) <= uVar2) goto LAB_0058bbec;
  }
  local_58 = 0;
  local_50 = (long *)0x0;
  local_60[0] = uVar2;
  auVar10 = _Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
            ::_M_get_insert_hint_unique_pos
                      ((_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
                        *)this,pmVar7,local_60);
  pmVar8 = auVar10._8_8_;
  pmVar7 = auVar10._0_8_;
  if (pmVar8 != (map<unsigned_int,boost::shared_ptr<Caver::RenderingProgram>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
                 *)0x0) {
    bVar6 = true;
                    /* catch() { ... } // from try @ 0058bd10 with catch @ 0058bb3c
                       catch() { ... } // from try @ 0058bee0 with catch @ 0058bb3c */
    if ((pmVar7 == (map<unsigned_int,boost::shared_ptr<Caver::RenderingProgram>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
                    *)0x0) && (pmVar1 != pmVar8)) {
      bVar6 = local_60[0] < *(uint *)(pmVar8 + 0x20);
    }
    pmVar7 = operator_new(0x38);
    *(uint *)(pmVar7 + 0x20) = local_60[0];
    *(undefined8 *)(pmVar7 + 0x28) = local_58;
    *(long **)(pmVar7 + 0x30) = local_50;
    if (local_50 != (long *)0x0) {
                    /* try { // try from 0058bb80 to 0068bba7 has its CatchHandler @ 0058bd6c */
      local_50[1] = local_50[1] + 1;
    }
    FUN_0064c8a0(bVar6,pmVar7,pmVar8,pmVar1);
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  }
  plVar5 = local_50;
  if ((local_50 != (long *)0x0) && (lVar9 = local_50[1], local_50[1] = lVar9 + -1, lVar9 + -1 == 0))
  {
                    /* try { // try from 0058bbc8 to 0068bbef has its CatchHandler @ 0058bd5c */
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar9 = plVar5[2];
    plVar5[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
LAB_0058bbec:
  if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 0058bc10 to 0068bc37 has its CatchHandler @ 0058bd4c */
    return pmVar7 + 0x28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


