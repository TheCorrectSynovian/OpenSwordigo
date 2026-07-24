/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003441c0
 * Function: Caver::ComponentFactory::~ComponentFactory
 * Signature: undefined __thiscall ~ComponentFactory(ComponentFactory * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ComponentFactory::~ComponentFactory() */

void __thiscall Caver::ComponentFactory::~ComponentFactory(ComponentFactory *this)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  long *plVar11;
  
  puVar6 = PTR_DAT_007e5de8;
  puVar5 = PTR_pthread_create_007e4e78;
  lVar4 = tpidr_el0;
  lVar8 = *(long *)(lVar4 + 0x28);
  plVar11 = *(long **)(this + 0x30);
  plVar1 = *(long **)(this + 0x38);
  if (plVar11 != plVar1) {
    do {
      puVar7 = (undefined *)(*plVar11 + -0x18);
      if (puVar7 != puVar6) {
        piVar9 = (int *)(*plVar11 + -8);
        if (puVar5 == (undefined *)0x0) {
          iVar10 = *piVar9;
          *piVar9 = iVar10 + -1;
        }
        else {
          do {
            iVar10 = *piVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar3) {
              *piVar9 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar10 < 1) {
          operator_delete(puVar7);
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar1);
    plVar11 = *(long **)(this + 0x30);
  }
  if (plVar11 != (long *)0x0) {
    operator_delete(plVar11);
  }
  std::
  _Rb_tree<std::string,std::pair<std::string_const,boost::function<Caver::Component*()>>,std::_Select1st<std::pair<std::string_const,boost::function<Caver::Component*()>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,boost::function<Caver::Component*()>>,std::_Select1st<std::pair<std::string_const,boost::function<Caver::Component*()>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>
              *)this,*(_Rb_tree_node **)(this + 0x10));
  if (*(long *)(lVar4 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


