/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a39d0
 * Function: std::map<unsigned_long,Caver::FWTouch,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>::operator[]
 * Signature: undefined __thiscall operator[](map<unsigned_long,Caver::FWTouch,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>> * this, ulong * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::map<unsigned long, Caver::FWTouch, std::less<unsigned long>,
   std::allocator<std::pair<unsigned long const, Caver::FWTouch> > >::operator[](unsigned long
   const&) */

map<unsigned_long,Caver::FWTouch,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
* __thiscall
std::
map<unsigned_long,Caver::FWTouch,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
::operator[](map<unsigned_long,Caver::FWTouch,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
             *this,ulong *param_1)

{
  map<unsigned_long,Caver::FWTouch,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
  *pmVar1;
  long lVar2;
  map<unsigned_long,Caver::FWTouch,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
  *pmVar3;
  bool bVar4;
  map<unsigned_long,Caver::FWTouch,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
  *pmVar5;
  map<unsigned_long,Caver::FWTouch,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
  *pmVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  FWTouch aFStack_a0 [32];
  undefined8 local_80;
  ulong local_78;
  FWTouch aFStack_70 [40];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pmVar1 = this + 8;
  pmVar6 = *(map<unsigned_long,Caver::FWTouch,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
             **)(this + 0x10);
  pmVar5 = pmVar1;
  if (pmVar6 == (map<unsigned_long,Caver::FWTouch,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                 *)0x0) {
LAB_005a3a54:
    uVar7 = *param_1;
  }
  else {
    do {
      pmVar3 = pmVar6 + 0x18;
      if (*param_1 <= *(ulong *)(pmVar6 + 0x20)) {
        pmVar5 = pmVar6;
        pmVar3 = pmVar6 + 0x10;
      }
      pmVar6 = *(map<unsigned_long,Caver::FWTouch,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                 **)pmVar3;
    } while (pmVar6 != (map<unsigned_long,Caver::FWTouch,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                        *)0x0);
    if (pmVar5 == pmVar1) goto LAB_005a3a54;
    uVar7 = *param_1;
    if (*(ulong *)(pmVar5 + 0x20) <= uVar7) goto LAB_005a3ad8;
  }
  local_80 = 0;
  local_78 = uVar7;
  Caver::FWTouch::FWTouch(aFStack_70,aFStack_a0);
  auVar8 = _Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
           ::_M_get_insert_hint_unique_pos
                     ((_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                       *)this,pmVar5,&local_78);
  pmVar6 = auVar8._8_8_;
  pmVar5 = auVar8._0_8_;
  if (pmVar6 != (map<unsigned_long,Caver::FWTouch,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                 *)0x0) {
    bVar4 = true;
    if ((pmVar5 == (map<unsigned_long,Caver::FWTouch,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                    *)0x0) && (pmVar1 != pmVar6)) {
      bVar4 = local_78 < *(ulong *)(pmVar6 + 0x20);
    }
    pmVar5 = (map<unsigned_long,Caver::FWTouch,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
              *)_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                ::_M_create_node((_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                                  *)this,(pair *)&local_78);
    FUN_0064c8a0(bVar4,pmVar5,pmVar6,pmVar1);
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  }
LAB_005a3ad8:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return pmVar5 + 0x28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


