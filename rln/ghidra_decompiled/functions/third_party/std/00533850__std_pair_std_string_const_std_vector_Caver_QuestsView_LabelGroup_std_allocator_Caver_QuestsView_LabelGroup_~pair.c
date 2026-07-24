/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00533850
 * Function: std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>::~pair
 * Signature: undefined __thiscall ~pair(pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::pair<std::string const, std::vector<Caver::QuestsView::LabelGroup,
   std::allocator<Caver::QuestsView::LabelGroup> > >::~pair() */

void __thiscall
std::
pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>
::~pair(pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>
        *this)

{
  LabelGroup *pLVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  LabelGroup *this_00;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  this_00 = *(LabelGroup **)(this + 8);
  pLVar1 = *(LabelGroup **)(this + 0x10);
  if (this_00 != pLVar1) {
    do {
      Caver::QuestsView::LabelGroup::~LabelGroup(this_00);
      this_00 = this_00 + 0x38;
    } while (pLVar1 != this_00);
    this_00 = *(LabelGroup **)(this + 8);
  }
  if (this_00 != (LabelGroup *)0x0) {
    operator_delete(this_00);
  }
  puVar5 = (undefined *)(*(long *)this + -0x18);
  if (puVar5 != PTR_DAT_007e5de8) {
    piVar7 = (int *)(*(long *)this + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
                    /* try { // try from 005338f0 to 006338f3 has its CatchHandler @ 00533a6c */
        iVar8 = *piVar7;
                    /* try { // try from 005338f4 to 00633a7f has its CatchHandler @ 00533704 */
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete(puVar5);
    }
  }
  if (*(long *)(lVar4 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


