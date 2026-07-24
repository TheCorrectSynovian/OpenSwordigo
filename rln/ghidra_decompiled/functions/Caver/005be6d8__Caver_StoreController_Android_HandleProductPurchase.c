/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005be6d8
 * Function: Caver::StoreController_Android::HandleProductPurchase
 * Signature: undefined __thiscall HandleProductPurchase(StoreController_Android * this, string * param_1, bool param_2, string * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreController_Android::HandleProductPurchase(std::string const&, bool, std::string
   const&) */

void __thiscall
Caver::StoreController_Android::HandleProductPurchase
          (StoreController_Android *this,string *param_1,bool param_2,string *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  StoreController_Android *pSVar6;
  void *pvVar7;
  long *plVar8;
  long *extraout_x8;
  long lVar9;
  ulong uVar10;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_98;
  long *local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  bad_function_call abStack_68 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_2) {
    std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
              ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)(this + 0x70),
               param_1);
  }
  pSVar6 = (StoreController_Android *)
           std::
           _Rb_tree<std::string,std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>,std::_Select1st<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
           ::find((_Rb_tree<std::string,std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>,std::_Select1st<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
                   *)(this + 0x40),param_1);
  if (this + 0x48 != pSVar6) {
    local_98 = *(long *)(pSVar6 + 0x28);
    plVar8 = *(long **)(pSVar6 + 0x30);
    if (plVar8 != (long *)0x0) {
      plVar8[2] = plVar8[2] + 1;
    }
    local_88 = 0;
    uVar10 = *(ulong *)(pSVar6 + 0x38);
    local_90 = plVar8;
    uVar2 = local_88;
    if (uVar10 != 0) {
      local_88 = uVar10;
      if ((uVar10 & 1) != 0) goto LAB_005be7f0;
      (**(code **)(uVar10 & 0xfffffffffffffffe))(pSVar6 + 0x40,&local_80,0);
      plVar8 = local_90;
      uVar2 = local_88;
    }
    while( true ) {
      local_88 = uVar2;
      if (((plVar8 == (long *)0x0) || (plVar8[1] == 0)) || (local_98 == 0)) goto LAB_005be868;
      if ((uVar2 != 0) &&
         ((uVar3 = local_80, uVar4 = uStack_78, uVar5 = local_70, (uVar2 & 1) != 0 ||
          ((**(code **)(uVar2 & 0xfffffffffffffffe))(&local_80,&local_b0,0), uVar3 = local_b0,
          uVar4 = uStack_a8, uVar5 = local_a0, uVar2 != 0)))) break;
      boost::bad_function_call::bad_function_call(abStack_68);
      boost::throw_exception<boost::bad_function_call>(abStack_68);
      plVar8 = extraout_x8;
LAB_005be7f0:
      local_70 = *(undefined8 *)(pSVar6 + 0x50);
      uStack_78 = *(undefined8 *)(pSVar6 + 0x48);
      local_80 = *(undefined8 *)(pSVar6 + 0x40);
      uVar2 = local_88;
    }
    local_a0 = uVar5;
    uStack_a8 = uVar4;
    local_b0 = uVar3;
    (**(code **)((uVar2 & 0xfffffffffffffffe) + 8))(&local_b0,param_1,param_2,param_3);
    if ((uVar2 != 0) &&
       (((uVar2 & 1) == 0 && (*(code **)(uVar2 & 0xfffffffffffffffe) != (code *)0x0)))) {
      (**(code **)(uVar2 & 0xfffffffffffffffe))(&local_b0,&local_b0,2);
    }
LAB_005be868:
    pvVar7 = (void *)FUN_0064ca60(pSVar6,this + 0x48);
    std::
    pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>::
    ~pair((pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>
           *)((long)pvVar7 + 0x20));
    operator_delete(pvVar7);
    *(long *)(this + 0x68) = *(long *)(this + 0x68) + -1;
    if (local_88 != 0) {
      if (((local_88 & 1) == 0) && (*(code **)(local_88 & 0xfffffffffffffffe) != (code *)0x0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005be8f0 with catch @ 005be8b8
                       catch(type#1 @ 00000000) { ... } // from try @ 005be9ec with catch @ 005be8b8
                        */
        (**(code **)(local_88 & 0xfffffffffffffffe))(&local_80,&local_80,2);
      }
      local_88 = 0;
    }
    if ((local_90 != (long *)0x0) &&
       (lVar9 = local_90[2], local_90[2] = lVar9 + -1, lVar9 + -1 == 0)) {
      (**(code **)(*local_90 + 0x18))();
    }
  }
                    /* try { // try from 005be8e8 to 006be8ef has its CatchHandler @ 005be940 */
                    /* try { // try from 005be8f0 to 006be9df has its CatchHandler @ 005be8b8 */
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


