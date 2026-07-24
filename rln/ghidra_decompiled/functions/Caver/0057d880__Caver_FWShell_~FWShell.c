/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057d880
 * Function: Caver::FWShell::~FWShell
 * Signature: undefined __thiscall ~FWShell(FWShell * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FWShell::~FWShell() */

void __thiscall Caver::FWShell::~FWShell(FWShell *this)

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
  
  lVar4 = tpidr_el0;
  lVar8 = *(long *)(lVar4 + 0x28);
                    /* catch() { ... } // from try @ 0057d840 with catch @ 0057d8ac */
  *(undefined **)this = PTR_vtable_007e55f0 + 0x10;
  std::
  _Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
  ::_M_erase((_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
              *)(this + 0x48),*(_Rb_tree_node **)(this + 0x58));
  puVar6 = PTR_DAT_007e5de8;
  puVar5 = PTR_pthread_create_007e4e78;
  plVar11 = *(long **)(this + 8);
  plVar1 = *(long **)(this + 0x10);
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
                    /* try { // try from 0057d8f4 to 0067da2b has its CatchHandler @ 0057d8f4
                       catch() { ... } // from try @ 0057d8f4 with catch @ 0057d8f4
                       catch() { ... } // from try @ 0057db7c with catch @ 0057d8f4
                       catch() { ... } // from try @ 0057dc30 with catch @ 0057d8f4 */
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
    plVar11 = *(long **)(this + 8);
  }
  if (plVar11 != (long *)0x0) {
    operator_delete(plVar11);
  }
  if (*(long *)(lVar4 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


