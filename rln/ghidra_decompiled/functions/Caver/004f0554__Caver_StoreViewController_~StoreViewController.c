/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004f0554
 * Function: Caver::StoreViewController::~StoreViewController
 * Signature: undefined __thiscall ~StoreViewController(StoreViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreViewController::~StoreViewController() */

void __thiscall Caver::StoreViewController::~StoreViewController(StoreViewController *this)

{
  undefined *puVar1;
  void *pvVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  int iVar12;
  void *pvVar13;
  long *plVar14;
  
  lVar6 = tpidr_el0;
  lVar9 = *(long *)(lVar6 + 0x28);
  puVar1 = PTR_vtable_007e4b20 + 0x80;
  *(undefined **)this = PTR_vtable_007e4b20 + 0x10;
  *(undefined **)(this + 0x48) = puVar1;
  std::
  _Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>
  ::_M_erase((_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>
              *)(this + 0xa0),*(_Rb_tree_node **)(this + 0xb0));
  pvVar13 = *(void **)(this + 0x88);
  pvVar2 = *(void **)(this + 0x90);
  if (pvVar13 != pvVar2) {
    do {
      plVar14 = *(long **)((long)pvVar13 + 8);
      if ((plVar14 != (long *)0x0) &&
         (lVar10 = plVar14[1], plVar14[1] = lVar10 + -1, lVar10 + -1 == 0)) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        lVar10 = plVar14[2];
        plVar14[2] = lVar10 + -1;
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar14 + 0x18))(plVar14);
        }
      }
      pvVar13 = (void *)((long)pvVar13 + 0x10);
    } while (pvVar2 != pvVar13);
    pvVar13 = *(void **)(this + 0x88);
  }
  if (pvVar13 != (void *)0x0) {
    operator_delete(pvVar13);
  }
  puVar7 = PTR_DAT_007e5de8;
  puVar1 = PTR_pthread_create_007e4e78;
  plVar14 = *(long **)(this + 0x70);
  plVar3 = *(long **)(this + 0x78);
  if (plVar14 != plVar3) {
    do {
      puVar8 = (undefined *)(*plVar14 + -0x18);
      if (puVar8 != puVar7) {
        piVar11 = (int *)(*plVar14 + -8);
        if (puVar1 == (undefined *)0x0) {
          iVar12 = *piVar11;
          *piVar11 = iVar12 + -1;
        }
        else {
          do {
            iVar12 = *piVar11;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar5) {
              *piVar11 = iVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        if (iVar12 < 1) {
          operator_delete(puVar8);
        }
      }
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar3);
    plVar14 = *(long **)(this + 0x70);
  }
  if (plVar14 != (long *)0x0) {
    operator_delete(plVar14);
  }
  plVar14 = *(long **)(this + 0x60);
  if ((plVar14 != (long *)0x0) && (lVar10 = plVar14[1], plVar14[1] = lVar10 + -1, lVar10 + -1 == 0))
  {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    lVar10 = plVar14[2];
    plVar14[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  GUIViewController::~GUIViewController((GUIViewController *)this);
  if (*(long *)(lVar6 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


