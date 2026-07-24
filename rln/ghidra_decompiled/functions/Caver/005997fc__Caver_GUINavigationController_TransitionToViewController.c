/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005997fc
 * Function: Caver::GUINavigationController::TransitionToViewController
 * Signature: undefined __thiscall TransitionToViewController(GUINavigationController * this, shared_ptr * param_1, float param_2, float param_3, bool param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUINavigationController::TransitionToViewController(boost::shared_ptr<Caver::GUIViewController>
   const&, float, float, bool) */

void __thiscall
Caver::GUINavigationController::TransitionToViewController
          (GUINavigationController *this,shared_ptr *param_1,float param_2,float param_3,
          bool param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 extraout_x0;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 local_108;
  long *local_100;
  undefined1 auStack_f8 [32];
  long *local_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long *local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 *local_80;
  long *local_78;
  undefined *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  if (*(long **)(this + 0x60) != (long *)0x0) {
    if (!param_4) goto LAB_00599e84;
    (**(code **)(**(long **)(this + 0x60) + 0x78))();
    plVar7 = *(long **)(this + 0x68);
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    if ((plVar7 != (long *)0x0) && (lVar3 = plVar7[1], plVar7[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      lVar3 = plVar7[2];
      plVar7[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
  }
  plVar7 = *(long **)(this + 0x50);
  if (plVar7 != (long *)0x0) {
    lVar3 = plVar7[3];
    if (lVar3 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
      lVar3 = plVar7[3];
      plVar7 = (long *)plVar7[4];
    }
    else {
      plVar7 = (long *)plVar7[4];
    }
    if ((plVar7 != (long *)0x0) && (plVar7[1] == 0)) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      lVar4 = plVar7[2];
      plVar7[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
    if (lVar3 != 0) {
      plVar7 = *(long **)(this + 0x50);
      lVar3 = plVar7[3];
      if (lVar3 == 0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
        lVar3 = plVar7[3];
        plVar7 = (long *)plVar7[4];
      }
      else {
        plVar7 = (long *)plVar7[4];
      }
      if (plVar7 == (long *)0x0) {
        *(undefined1 *)(lVar3 + 0xe5) = 0;
      }
      else {
        lVar4 = plVar7[1];
        *(undefined1 *)(lVar3 + 0xe5) = 0;
        plVar7[1] = lVar4;
        if (lVar4 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          lVar3 = plVar7[2];
          plVar7[2] = lVar3 + -1;
          if (lVar3 + -1 == 0) {
            (**(code **)(*plVar7 + 0x18))(plVar7);
          }
        }
      }
    }
  }
  (**(code **)(**(long **)param_1 + 0x10))(&local_b0);
  if (local_a8 != (long *)0x0) {
    local_a8[1] = local_a8[1] + 1;
  }
  plVar7 = *(long **)(this + 0x68);
  *(undefined8 *)(this + 0x60) = local_b0;
  *(long **)(this + 0x68) = local_a8;
  if ((plVar7 != (long *)0x0) && (lVar3 = plVar7[1], plVar7[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar3 = plVar7[2];
    plVar7[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  plVar7 = local_a8;
  if ((local_a8 == (long *)0x0) || (lVar3 = local_a8[1], local_a8[1] = lVar3 + -1, lVar3 + -1 != 0))
  {
LAB_00599a38:
    lVar3 = *(long *)(this + 0x60);
  }
  else {
    (**(code **)(*local_a8 + 0x10))(local_a8);
    lVar3 = plVar7[2];
    plVar7[2] = lVar3 + -1;
    if (lVar3 + -1 != 0) goto LAB_00599a38;
    (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar3 = *(long *)(this + 0x60);
  }
  if (lVar3 == 0) goto LAB_00599e84;
  *(float *)(lVar3 + 0xf0) = param_2;
  *(float *)(lVar3 + 0xf4) = param_3;
  plVar7 = *(long **)(this + 0x18);
  if (plVar7 == (long *)0x0) {
    (**(code **)(*(long *)this + 0x18))(this);
    plVar7 = *(long **)(this + 0x18);
  }
  plVar8 = *(long **)(this + 0x20);
  if (plVar8 != (long *)0x0) {
    plVar8[1] = plVar8[1] + 1;
  }
  local_b0 = *(undefined8 *)(this + 0x60);
  pcVar5 = *(code **)(*plVar7 + 0x60);
  local_a8 = *(long **)(this + 0x68);
  if (local_a8 != (long *)0x0) {
    local_a8[1] = local_a8[1] + 1;
  }
  (*pcVar5)(plVar7,&local_b0);
  plVar7 = local_a8;
  if ((local_a8 != (long *)0x0) && (lVar3 = local_a8[1], local_a8[1] = lVar3 + -1, lVar3 + -1 == 0))
  {
    (**(code **)(*local_a8 + 0x10))(local_a8);
    lVar3 = plVar7[2];
    plVar7[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  if ((plVar8 != (long *)0x0) && (lVar3 = plVar8[1], plVar8[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    lVar3 = plVar8[2];
    plVar8[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
                    /* catch() { ... } // from try @ 0059963c with catch @ 00599b20 */
                    /* catch() { ... } // from try @ 0059918c with catch @ 00599b24 */
                    /* catch() { ... } // from try @ 005985f0 with catch @ 00599b28 */
                    /* catch() { ... } // from try @ 005993f8 with catch @ 00599b2c */
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
                    /* catch() { ... } // from try @ 005993d4 with catch @ 00599b30 */
  if (param_2 <= DAT_00683944) {
    local_80 = (undefined8 *)0x0;
    local_78 = (long *)0x0;
LAB_00599c14:
    SetCurrentViewController(this,param_1);
  }
  else {
                    /* catch() { ... } // from try @ 005996a0 with catch @ 00599b40 */
                    /* catch() { ... } // from try @ 00599344 with catch @ 00599b44 */
    (**(code **)(**(long **)(this + 0x60) + 0x130))(&local_80);
    puVar1 = local_80;
    if (local_80 == (undefined8 *)0x0) goto LAB_00599c14;
    plVar7 = *(long **)(this + 0x10);
                    /* try { // try from 00599b68 to 0069abf7 has its CatchHandler @ 0059ac00 */
    if ((plVar7 == (long *)0x0) || (plVar7[1] == 0)) {
      local_70 = PTR_vtable_007e6120 + 0x10;
      boost::throw_exception<boost::bad_weak_ptr>((bad_weak_ptr *)&local_70);
                    /* catch() { ... } // from try @ 00599608 with catch @ 00599ed0 */
      std::exception::~exception((exception *)&local_70);
      if ((local_78 != (long *)0x0) &&
         (lVar6 = local_78[1], local_78[1] = lVar6 + -1, lVar6 + -1 == 0)) {
        (**(code **)(*local_78 + 0x10))(local_78);
        lVar6 = local_78[2];
        local_78[2] = lVar6 + -1;
        if (lVar6 + -1 == 0) {
          (**(code **)(*local_78 + 0x18))(local_78);
                    /* catch() { ... } // from try @ 00598a14 with catch @ 0059a204 */
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_006818c4(extraout_x0);
    }
    uVar9 = *(undefined8 *)(this + 8);
    plVar7[1] = plVar7[1] + 2;
    local_108 = *(undefined8 *)param_1;
    local_100 = *(long **)(param_1 + 8);
    if (local_100 != (long *)0x0) {
                    /* catch() { ... } // from try @ 0059928c with catch @ 00599b94 */
      local_100[1] = local_100[1] + 1;
    }
                    /* catch() { ... } // from try @ 00598fa0 with catch @ 00599b98 */
    boost::
    bind<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController>const&,void*,Caver::GUIEvent*,Caver::GUINavigationController*,boost::shared_ptr<Caver::GUIViewController>,boost::arg<1>,boost::arg<2>>
              (auStack_f8,PTR_FinishTransitionToViewController_007e7338,0,this,&local_108);
    boost::function<void(void*,Caver::GUIEvent*)>::
    function<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController>const&,void*,Caver::GUIEvent*>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>
              (&local_d0,auStack_f8,0);
    plVar7[2] = plVar7[2] + 1;
    local_a0 = 0;
    local_b0 = uVar9;
    local_a8 = plVar7;
    if (local_d0 != 0) {
      local_a0 = local_d0;
      if ((local_d0 & 1) == 0) {
                    /* catch() { ... } // from try @ 00598f1c with catch @ 00599be8 */
                    /* catch() { ... } // from try @ 00598e20 with catch @ 00599bec */
        (**(code **)(local_d0 & 0xfffffffffffffffe))(&local_c8,&local_98,0);
      }
      else {
                    /* catch() { ... } // from try @ 00598be8 with catch @ 00599c40 */
        local_88 = local_b8;
        uStack_90 = uStack_c0;
        local_98 = local_c8;
      }
    }
    plVar8 = local_a8;
    plVar2 = (long *)puVar1[1];
    *puVar1 = local_b0;
    if (local_a8 != plVar2) {
      if (local_a8 != (long *)0x0) {
        local_a8[2] = local_a8[2] + 1;
      }
      if ((plVar2 != (long *)0x0) && (lVar3 = plVar2[2], plVar2[2] = lVar3 + -1, lVar3 + -1 == 0)) {
                    /* catch() { ... } // from try @ 00598b54 with catch @ 00599c90 */
        (**(code **)(*plVar2 + 0x18))();
      }
                    /* catch() { ... } // from try @ 00598a80 with catch @ 00599c94 */
      puVar1[1] = plVar8;
    }
    boost::function<void(void*,Caver::GUIEvent*)>::operator=
              ((function<void(void*,Caver::GUIEvent*)> *)(puVar1 + 2),(function *)&local_a0);
    if (local_a0 != 0) {
      if (((local_a0 & 1) == 0) && (*(code **)(local_a0 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_a0 & 0xfffffffffffffffe))(&local_98,&local_98,2);
      }
      local_a0 = 0;
    }
                    /* catch() { ... } // from try @ 005989ec with catch @ 00599ce4 */
                    /* catch() { ... } // from try @ 005988f0 with catch @ 00599ce8 */
    if ((local_a8 != (long *)0x0) &&
       (lVar3 = local_a8[2], local_a8[2] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*local_a8 + 0x18))();
    }
    if (local_d0 != 0) {
      if (((local_d0 & 1) == 0) && (*(code **)(local_d0 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_d0 & 0xfffffffffffffffe))(&local_c8,&local_c8,2);
      }
      local_d0 = 0;
    }
                    /* catch() { ... } // from try @ 0059885c with catch @ 00599d38 */
                    /* catch() { ... } // from try @ 005986e8 with catch @ 00599d3c */
    if ((local_d8 != (long *)0x0) &&
       (lVar3 = local_d8[1], local_d8[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*local_d8 + 0x10))(local_d8);
      lVar3 = local_d8[2];
      local_d8[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*local_d8 + 0x18))(local_d8);
      }
    }
    plVar8 = local_100;
    if ((local_100 != (long *)0x0) &&
       (lVar3 = local_100[1], local_100[1] = lVar3 + -1, lVar3 + -1 == 0)) {
                    /* catch() { ... } // from try @ 00598654 with catch @ 00599d8c */
                    /* catch() { ... } // from try @ 00598404 with catch @ 00599d90 */
      (**(code **)(*local_100 + 0x10))(local_100);
      lVar3 = plVar8[2];
      plVar8[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
    }
    lVar3 = plVar7[1];
    plVar7[1] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      lVar3 = plVar7[2];
                    /* catch() { ... } // from try @ 00599548 with catch @ 00599de0 */
      plVar7[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
    lVar3 = plVar7[1];
    plVar7[1] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      lVar3 = plVar7[2];
      plVar7[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
                    /* catch() { ... } // from try @ 00598cc0 with catch @ 00599e30 */
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
  }
  plVar7 = local_78;
  if ((local_78 != (long *)0x0) && (lVar3 = local_78[1], local_78[1] = lVar3 + -1, lVar3 + -1 == 0))
  {
    (**(code **)(*local_78 + 0x10))(local_78);
    lVar3 = plVar7[2];
    plVar7[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
                    /* catch() { ... } // from try @ 00599674 with catch @ 00599e80 */
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
LAB_00599e84:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


