/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cdf58
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>::_M_erase
 * Signature: undefined __thiscall _M_erase(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>> * this, _Rb_tree_node * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, boost::intrusive_ptr<Caver::Texture> >,
   std::_Select1st<std::pair<std::string const, boost::intrusive_ptr<Caver::Texture> > >,
   std::less<std::string >, std::allocator<std::pair<std::string const,
   boost::intrusive_ptr<Caver::Texture> > > >::_M_erase(std::_Rb_tree_node<std::pair<std::string
   const, boost::intrusive_ptr<Caver::Texture> > >*) */

void __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
::_M_erase(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
           *this,_Rb_tree_node *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined *puVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  _Rb_tree_node *p_Var11;
  
  puVar5 = PTR_DAT_007e5de8;
  puVar4 = PTR_pthread_create_007e4e78;
                    /* try { // try from 005cdf5c to 006cdf67 has its CatchHandler @ 005ce208 */
  lVar3 = tpidr_el0;
  lVar8 = *(long *)(lVar3 + 0x28);
  while (param_1 != (_Rb_tree_node *)0x0) {
    _M_erase(this,*(_Rb_tree_node **)(param_1 + 0x18));
    plVar6 = *(long **)(param_1 + 0x28);
                    /* try { // try from 005cdfec to 006cdff7 has its CatchHandler @ 005ce204 */
    p_Var11 = *(_Rb_tree_node **)(param_1 + 0x10);
    if ((plVar6 != (long *)0x0) &&
       (iVar10 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar10, iVar10 == 0)) {
      (**(code **)(*plVar6 + 8))();
    }
    puVar7 = (undefined *)(*(long *)(param_1 + 0x20) + -0x18);
    if (puVar7 != puVar5) {
      piVar9 = (int *)(*(long *)(param_1 + 0x20) + -8);
      if (puVar4 == (undefined *)0x0) {
        iVar10 = *piVar9;
        *piVar9 = iVar10 + -1;
      }
      else {
        do {
                    /* try { // try from 005cdfa4 to 006cdfcb has its CatchHandler @ 005ce1f8 */
          iVar10 = *piVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = iVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar10 < 1) {
        operator_delete(puVar7);
      }
    }
    operator_delete(param_1);
    param_1 = p_Var11;
  }
                    /* try { // try from 005ce034 to 006ce05b has its CatchHandler @ 005ce1f8 */
  if (*(long *)(lVar3 + 0x28) == lVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


