/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00347650
 * Function: std::map<long,boost::shared_ptr<Caver::ComponentCollection>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>::operator[]
 * Signature: undefined __thiscall operator[](map<long,boost::shared_ptr<Caver::ComponentCollection>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>> * this, long * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::map<long, boost::shared_ptr<Caver::ComponentCollection>, std::less<long>,
   std::allocator<std::pair<long const, boost::shared_ptr<Caver::ComponentCollection> > >
   >::operator[](long const&) */

map<long,boost::shared_ptr<Caver::ComponentCollection>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
* __thiscall
std::
map<long,boost::shared_ptr<Caver::ComponentCollection>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
::operator[](map<long,boost::shared_ptr<Caver::ComponentCollection>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
             *this,long *param_1)

{
  map<long,boost::shared_ptr<Caver::ComponentCollection>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
  *pmVar1;
  long lVar2;
  map<long,boost::shared_ptr<Caver::ComponentCollection>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
  *pmVar3;
  long *plVar4;
  map<long,boost::shared_ptr<Caver::ComponentCollection>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
  *pmVar5;
  map<long,boost::shared_ptr<Caver::ComponentCollection>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
  *pmVar6;
  long lVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  long local_60;
  undefined8 uStack_58;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pmVar1 = this + 8;
  pmVar6 = *(map<long,boost::shared_ptr<Caver::ComponentCollection>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
             **)(this + 0x10);
  pmVar5 = pmVar1;
  if (pmVar6 == (map<long,boost::shared_ptr<Caver::ComponentCollection>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
                 *)0x0) {
LAB_003476d4:
    lVar7 = *param_1;
  }
  else {
    do {
      pmVar3 = pmVar6 + 0x18;
      if (*param_1 <= *(long *)(pmVar6 + 0x20)) {
        pmVar5 = pmVar6;
        pmVar3 = pmVar6 + 0x10;
      }
      pmVar6 = *(map<long,boost::shared_ptr<Caver::ComponentCollection>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
                 **)pmVar3;
    } while (pmVar6 != (map<long,boost::shared_ptr<Caver::ComponentCollection>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
                        *)0x0);
    if (pmVar5 == pmVar1) goto LAB_003476d4;
    lVar7 = *param_1;
    if (*(long *)(pmVar5 + 0x20) <= lVar7) goto LAB_003477b0;
  }
  uStack_58 = 0;
  local_50 = (long *)0x0;
  local_60 = lVar7;
  auVar9 = _Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
           ::_M_get_insert_hint_unique_pos
                     ((_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
                       *)this,pmVar5,&local_60);
  pmVar6 = auVar9._8_8_;
  pmVar5 = auVar9._0_8_;
  if (pmVar6 != (map<long,boost::shared_ptr<Caver::ComponentCollection>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
                 *)0x0) {
    bVar8 = true;
    if ((pmVar5 == (map<long,boost::shared_ptr<Caver::ComponentCollection>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
                    *)0x0) && (pmVar1 != pmVar6)) {
      bVar8 = local_60 < *(long *)(pmVar6 + 0x20);
    }
    pmVar5 = operator_new(0x38);
    *(undefined8 *)(pmVar5 + 0x28) = uStack_58;
    *(long *)(pmVar5 + 0x20) = local_60;
    *(long **)(pmVar5 + 0x30) = local_50;
    if (local_50 != (long *)0x0) {
      local_50[1] = local_50[1] + 1;
    }
    FUN_0064c8a0(bVar8,pmVar5,pmVar6,pmVar1);
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  }
  plVar4 = local_50;
  if ((local_50 != (long *)0x0) && (lVar7 = local_50[1], local_50[1] = lVar7 + -1, lVar7 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar7 = plVar4[2];
    plVar4[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
LAB_003477b0:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return pmVar5 + 0x28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


