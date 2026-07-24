/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bd270
 * Function: Caver::StoreController_Android::~StoreController_Android
 * Signature: undefined __thiscall ~StoreController_Android(StoreController_Android * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreController_Android::~StoreController_Android() */

void __thiscall
Caver::StoreController_Android::~StoreController_Android(StoreController_Android *this)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  *(undefined **)this = PTR_vtable_007e6e90 + 0x10;
  std::
  _Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>
  ::_M_erase((_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>
              *)(this + 0x70),*(_Rb_tree_node **)(this + 0x80));
  std::
  _Rb_tree<std::string,std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>,std::_Select1st<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>,std::_Select1st<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
              *)(this + 0x40),*(_Rb_tree_node **)(this + 0x50));
  std::
  _Rb_tree<std::string,std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&)>>,std::_Select1st<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&)>>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&)>>,std::_Select1st<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&)>>>>
              *)(this + 0x10),*(_Rb_tree_node **)(this + 0x20));
  puVar4 = (undefined *)(*(long *)(this + 8) + -0x18);
  bVar3 = puVar4 != PTR_DAT_007e5de8;
  *(undefined **)this = PTR_vtable_007e6678 + 0x10;
  if (bVar3) {
    piVar6 = (int *)(*(long *)(this + 8) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete(puVar4);
    }
  }
  if (*(long *)(lVar2 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 005bd2fc to 006bd323 has its CatchHandler @ 005bd5c4 */
  return;
}


