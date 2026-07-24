/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054bef4
 * Function: std::map<Caver::Model_const*,boost::shared_ptr<Caver::PODLoader>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>::operator[]
 * Signature: undefined __thiscall operator[](map<Caver::Model_const*,boost::shared_ptr<Caver::PODLoader>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>> * this, Model * * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::map<Caver::Model const*, boost::shared_ptr<Caver::PODLoader>, std::less<Caver::Model
   const*>, std::allocator<std::pair<Caver::Model const* const, boost::shared_ptr<Caver::PODLoader>
   > > >::operator[](Caver::Model const* const&) */

map<Caver::Model_const*,boost::shared_ptr<Caver::PODLoader>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
* __thiscall
std::
map<Caver::Model_const*,boost::shared_ptr<Caver::PODLoader>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
::operator[](map<Caver::Model_const*,boost::shared_ptr<Caver::PODLoader>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
             *this,Model **param_1)

{
  map<Caver::Model_const*,boost::shared_ptr<Caver::PODLoader>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
  *pmVar1;
  long lVar2;
  map<Caver::Model_const*,boost::shared_ptr<Caver::PODLoader>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
  *pmVar3;
  long *plVar4;
  bool bVar5;
  map<Caver::Model_const*,boost::shared_ptr<Caver::PODLoader>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
  *pmVar6;
  map<Caver::Model_const*,boost::shared_ptr<Caver::PODLoader>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
  *pmVar7;
  Model *pMVar8;
  long lVar9;
  undefined1 auVar10 [16];
  Model *local_60;
  undefined8 uStack_58;
  long *local_50;
  long local_48;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0054bce0 with catch @ 0054befc
                        */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pmVar1 = this + 8;
                    /* try { // try from 0054bf1c to 0064bf43 has its CatchHandler @ 0054bf4c */
  pmVar7 = *(map<Caver::Model_const*,boost::shared_ptr<Caver::PODLoader>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
             **)(this + 0x10);
  pmVar6 = pmVar1;
  if (pmVar7 == (map<Caver::Model_const*,boost::shared_ptr<Caver::PODLoader>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
                 *)0x0) {
LAB_0054bf78:
    pMVar8 = *param_1;
  }
  else {
    do {
      pmVar3 = pmVar7 + 0x18;
      if (*param_1 <= *(Model **)(pmVar7 + 0x20)) {
        pmVar6 = pmVar7;
        pmVar3 = pmVar7 + 0x10;
      }
                    /* try { // try from 0054bf44 to 0064bf4f has its CatchHandler @ 0054bc24 */
      pmVar7 = *(map<Caver::Model_const*,boost::shared_ptr<Caver::PODLoader>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
                 **)pmVar3;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0054bf1c with catch @ 0054bf4c
                        */
    } while (pmVar7 != (map<Caver::Model_const*,boost::shared_ptr<Caver::PODLoader>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
                        *)0x0);
                    /* try { // try from 0054bf50 to 0064c00f has its CatchHandler @ 0054bf50
                       catch() { ... } // from try @ 0054bf50 with catch @ 0054bf50
                       catch() { ... } // from try @ 0054c924 with catch @ 0054bf50
                       catch() { ... } // from try @ 0054ce94 with catch @ 0054bf50
                       catch() { ... } // from try @ 0054d0e8 with catch @ 0054bf50 */
    if (pmVar6 == pmVar1) goto LAB_0054bf78;
    pMVar8 = *param_1;
    if (*(Model **)(pmVar6 + 0x20) <= pMVar8) goto LAB_0054c054;
  }
  uStack_58 = 0;
  local_50 = (long *)0x0;
  local_60 = pMVar8;
  auVar10 = _Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
            ::_M_get_insert_hint_unique_pos
                      ((_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
                        *)this,pmVar6,&local_60);
  pmVar7 = auVar10._8_8_;
  pmVar6 = auVar10._0_8_;
  if (pmVar7 != (map<Caver::Model_const*,boost::shared_ptr<Caver::PODLoader>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
                 *)0x0) {
    bVar5 = true;
    if ((pmVar6 == (map<Caver::Model_const*,boost::shared_ptr<Caver::PODLoader>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
                    *)0x0) && (pmVar1 != pmVar7)) {
      bVar5 = local_60 < *(Model **)(pmVar7 + 0x20);
    }
    pmVar6 = operator_new(0x38);
    *(undefined8 *)(pmVar6 + 0x28) = uStack_58;
    *(Model **)(pmVar6 + 0x20) = local_60;
    *(long **)(pmVar6 + 0x30) = local_50;
    if (local_50 != (long *)0x0) {
      local_50[1] = local_50[1] + 1;
    }
    FUN_0064c8a0(bVar5,pmVar6,pmVar7,pmVar1);
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  }
  plVar4 = local_50;
                    /* try { // try from 0054c010 to 0064c023 has its CatchHandler @ 0054d098 */
  if ((local_50 != (long *)0x0) && (lVar9 = local_50[1], local_50[1] = lVar9 + -1, lVar9 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar9 = plVar4[2];
                    /* try { // try from 0054c038 to 0064c03f has its CatchHandler @ 0054d090 */
    plVar4[2] = lVar9 + -1;
                    /* try { // try from 0054c040 to 0064c053 has its CatchHandler @ 0054d038 */
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
LAB_0054c054:
  if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 0054c06c to 0064c073 has its CatchHandler @ 0054ced0 */
                    /* try { // try from 0054c074 to 0064c087 has its CatchHandler @ 0054ce98 */
    return pmVar6 + 0x28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


