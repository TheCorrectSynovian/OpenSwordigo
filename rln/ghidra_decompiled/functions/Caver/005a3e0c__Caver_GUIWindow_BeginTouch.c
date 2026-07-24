/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a3e0c
 * Function: Caver::GUIWindow::BeginTouch
 * Signature: undefined __thiscall BeginTouch(GUIWindow * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIWindow::BeginTouch(Caver::FWTouch const&) */

void __thiscall Caver::GUIWindow::BeginTouch(GUIWindow *this,FWTouch *param_1)

{
  GUIView *pGVar1;
  GUIWindow *pGVar2;
  long lVar3;
  GUIWindow *pGVar4;
  long lVar5;
  FWTouch *this_00;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  GUIView *pGVar10;
  code *pcVar11;
  GUIView *pGVar12;
  long *plVar13;
  GUIWindow *pGVar14;
  undefined1 auStack_80 [8];
  GUIView *local_78;
  long *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (this[0xe5] != (GUIWindow)0x0) {
    if (*(GUIWindow **)(this + 0x1c0) == this + 0x1c0) {
      lVar5 = GUIApplication::sharedApplication();
                    /* try { // try from 005a3ea0 to 006a3f37 has its CatchHandler @ 005a3d7c */
      pGVar2 = this + 0x1b0;
      *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)(param_1 + 0x18);
      if (*(GUIWindow **)(this + 0x1b0) == pGVar2) {
        plVar9 = (long *)0x0;
      }
      else {
        plVar9 = (long *)0x0;
        do {
          plVar13 = *(long **)(*(long *)(this + 0x1b8) + 0x10);
          pcVar11 = *(code **)(*plVar13 + 0xe8);
          GUIView::ConvertPointToView((Vector2 *)this,(GUIView *)(param_1 + 8));
          (*pcVar11)(&local_78,plVar13,auStack_80);
          plVar8 = local_70;
          pGVar12 = local_78;
          if (local_70 != (long *)0x0) {
            local_70[1] = local_70[1] + 1;
          }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005a3e78 with catch @ 005a3f10
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005a3dcc with catch @ 005a3f14
                        */
          if ((plVar9 != (long *)0x0) &&
             (lVar5 = plVar9[1], plVar9[1] = lVar5 + -1, lVar5 + -1 == 0)) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            lVar5 = plVar9[2];
            plVar9[2] = lVar5 + -1;
            if (lVar5 + -1 == 0) {
                    /* try { // try from 005a3f38 to 006a3f5f has its CatchHandler @ 005a3f68 */
              (**(code **)(*plVar9 + 0x18))(plVar9);
            }
          }
          plVar9 = local_70;
          if ((local_70 != (long *)0x0) &&
             (lVar5 = local_70[1], local_70[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* try { // try from 005a3f60 to 006a3f6b has its CatchHandler @ 005a3d7c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005a3f38 with catch @ 005a3f68
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005a40c0 with catch @ 005a3f6c
                       catch(type#1 @ 00000000) { ... } // from try @ 005a433c with catch @ 005a3f6c
                        */
            (**(code **)(*local_70 + 0x10))(local_70);
            lVar5 = plVar9[2];
            plVar9[2] = lVar5 + -1;
            if (lVar5 + -1 == 0) {
              (**(code **)(*plVar9 + 0x18))(plVar9);
            }
          }
          if (pGVar12 != (GUIView *)0x0) goto LAB_005a40c8;
          pGVar14 = *(GUIWindow **)pGVar2;
          while (pGVar4 = pGVar14, pGVar2 != pGVar4) {
            pGVar14 = *(GUIWindow **)pGVar4;
            if (*(long **)(pGVar4 + 0x10) == plVar13) {
              FUN_0062a9c8(pGVar4);
              operator_delete(pGVar4);
            }
          }
          (**(code **)(*plVar13 + 0x78))(plVar13);
          plVar9 = plVar8;
        } while (*(GUIWindow **)pGVar2 != pGVar2);
      }
      (**(code **)(*(long *)this + 0xe8))(&local_78,this,param_1 + 8);
      plVar8 = local_70;
      pGVar12 = local_78;
      if (local_70 != (long *)0x0) {
        local_70[1] = local_70[1] + 1;
      }
                    /* try { // try from 005a402c to 006a4053 has its CatchHandler @ 005a42f4 */
      if ((plVar9 != (long *)0x0) && (lVar5 = plVar9[1], plVar9[1] = lVar5 + -1, lVar5 + -1 == 0)) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        lVar5 = plVar9[2];
        plVar9[2] = lVar5 + -1;
        if (lVar5 + -1 == 0) {
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
      }
      if ((local_70 != (long *)0x0) &&
         (lVar5 = local_70[1], local_70[1] = lVar5 + -1, lVar5 + -1 == 0)) {
        (**(code **)(*local_70 + 0x10))(local_70);
                    /* try { // try from 005a4098 to 006a40bf has its CatchHandler @ 005a42e8 */
        lVar5 = local_70[2];
        local_70[2] = lVar5 + -1;
        if (lVar5 + -1 == 0) {
          (**(code **)(*local_70 + 0x18))(local_70);
        }
      }
      if (pGVar12 != (GUIView *)0x0) {
LAB_005a40c8:
        local_78 = *(GUIView **)param_1;
        this_00 = (FWTouch *)
                  std::
                  map<unsigned_long,Caver::FWTouch,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                  ::operator[]((map<unsigned_long,Caver::FWTouch,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                                *)(this + 0x150),(ulong *)&local_78);
        FWTouch::operator=(this_00,param_1);
        local_78 = *(GUIView **)param_1;
        puVar6 = (undefined8 *)
                 std::
                 map<unsigned_long,boost::shared_ptr<Caver::GUIView>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
                 ::operator[]((map<unsigned_long,boost::shared_ptr<Caver::GUIView>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
                               *)(this + 0x180),(ulong *)&local_78);
        if (plVar8 != (long *)0x0) {
          plVar8[1] = plVar8[1] + 1;
        }
        plVar9 = (long *)puVar6[1];
        *puVar6 = pGVar12;
        puVar6[1] = plVar8;
        pGVar10 = pGVar12;
        if ((plVar9 != (long *)0x0) && (lVar5 = plVar9[1], plVar9[1] = lVar5 + -1, lVar5 + -1 == 0))
        {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          lVar5 = plVar9[2];
          plVar9[2] = lVar5 + -1;
          if (lVar5 + -1 == 0) {
            (**(code **)(*plVar9 + 0x18))(plVar9);
          }
        }
        do {
          uVar7 = (**(code **)(*(long *)pGVar10 + 0xc0))(pGVar10);
          if ((uVar7 & 1) != 0) {
            pcVar11 = *(code **)(*(long *)pGVar10 + 0xe0);
            FWTouch::LocationInView(param_1,pGVar10);
            uVar7 = (*pcVar11)(pGVar10,&local_78);
            if ((uVar7 & 1) != 0) {
              (**(code **)(*(long *)pGVar10 + 200))(pGVar10);
              break;
            }
          }
          pGVar1 = pGVar10 + 0x58;
          pGVar10 = *(GUIView **)pGVar1;
        } while (*(GUIView **)pGVar1 != (GUIView *)0x0);
        (*(code *)**(undefined8 **)pGVar12)(pGVar12,param_1);
      }
      if ((plVar8 != (long *)0x0) && (lVar5 = plVar8[1], plVar8[1] = lVar5 + -1, lVar5 + -1 == 0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        lVar5 = plVar8[2];
        plVar8[2] = lVar5 + -1;
        if (lVar5 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))(plVar8);
        }
      }
    }
    else {
      BeginTouch(*(GUIWindow **)(*(long *)(this + 0x1c8) + 0x10),param_1);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 005a3e78 to 006a3e9f has its CatchHandler @ 005a3f10 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


