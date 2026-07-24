/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00534110
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,std::_Select1st<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>::_M_create_node
 * Signature: undefined __thiscall _M_create_node(_Rb_tree<std::string,std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,std::_Select1st<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>> * this, pair * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x005341c4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* std::_Rb_tree<std::string, std::pair<std::string const,
   std::vector<Caver::QuestsView::LabelGroup, std::allocator<Caver::QuestsView::LabelGroup> > >,
   std::_Select1st<std::pair<std::string const, std::vector<Caver::QuestsView::LabelGroup,
   std::allocator<Caver::QuestsView::LabelGroup> > > >, std::less<std::string >,
   std::allocator<std::pair<std::string const, std::vector<Caver::QuestsView::LabelGroup,
   std::allocator<Caver::QuestsView::LabelGroup> > > > >::_M_create_node(std::pair<std::string
   const, std::vector<Caver::QuestsView::LabelGroup, std::allocator<Caver::QuestsView::LabelGroup> >
   > const&) */

void * __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,std::_Select1st<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>
::_M_create_node(_Rb_tree<std::string,std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,std::_Select1st<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>
                 *this,pair *param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  LabelGroup *pLVar6;
  long lVar7;
  long lVar8;
  
  lVar2 = tpidr_el0;
  lVar8 = *(long *)(lVar2 + 0x28);
  pvVar3 = operator_new(0x40);
  FUN_0066a528((long)pvVar3 + 0x20,param_1);
  lVar7 = *(long *)(param_1 + 0x10);
  uVar1 = lVar7 - *(long *)(param_1 + 8);
  *(undefined8 *)((long)pvVar3 + 0x28) = 0;
  *(undefined8 *)((long)pvVar3 + 0x30) = 0;
  *(undefined8 *)((long)pvVar3 + 0x38) = 0;
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
    pvVar5 = pvVar3;
  }
  else {
    if (0x492492492492492 < (ulong)(((long)uVar1 >> 3) * 0x6db6db6db6db6db7)) {
                    /* WARNING: Subroutine does not return */
      FUN_00665294();
    }
    pvVar4 = operator_new(uVar1);
    lVar7 = *(long *)(param_1 + 0x10);
    pvVar5 = pvVar4;
  }
  *(void **)((long)pvVar3 + 0x28) = pvVar4;
  *(void **)((long)pvVar3 + 0x30) = pvVar4;
  *(void **)((long)pvVar3 + 0x38) = (void *)((long)pvVar4 + ((long)uVar1 >> 3) * 8);
                    /* catch() { ... } // from try @ 005341d8 with catch @ 005341c4 */
  pLVar6 = __uninitialized_copy<false>::
           __uninit_copy<__gnu_cxx::__normal_iterator<Caver::QuestsView::LabelGroup_const*,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,Caver::QuestsView::LabelGroup*>
                     (pvVar5,lVar7);
  *(LabelGroup **)((long)pvVar3 + 0x30) = pLVar6;
                    /* try { // try from 005341d4 to 006341d7 has its CatchHandler @ 005341e8 */
                    /* try { // try from 005341d8 to 006341fb has its CatchHandler @ 005341c4 */
  if (*(long *)(lVar2 + 0x28) == lVar8) {
                    /* catch() { ... } // from try @ 005341d4 with catch @ 005341e8 */
    return pvVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


