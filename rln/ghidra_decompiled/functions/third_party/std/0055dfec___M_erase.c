/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055dfec
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>::_M_erase
 * Signature: undefined __thiscall _M_erase(_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>> * this, _Rb_tree_node * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, boost::weak_ptr<Caver::ObjectLibrary> >,
   std::_Select1st<std::pair<std::string const, boost::weak_ptr<Caver::ObjectLibrary> > >,
   std::less<std::string >, std::allocator<std::pair<std::string const,
   boost::weak_ptr<Caver::ObjectLibrary> > > >::_M_erase(std::_Rb_tree_node<std::pair<std::string
   const, boost::weak_ptr<Caver::ObjectLibrary> > >*) */

void __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>
::_M_erase(_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>
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
  long lVar10;
  int iVar11;
  _Rb_tree_node *p_Var12;
  
  puVar5 = PTR_DAT_007e5de8;
  puVar4 = PTR_pthread_create_007e4e78;
                    /* try { // try from 0055dff8 to 0065e00b has its CatchHandler @ 0055e1d4 */
  lVar3 = tpidr_el0;
  lVar8 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 0055e010 to 0065e01b has its CatchHandler @ 0055e160 */
  while (param_1 != (_Rb_tree_node *)0x0) {
    _M_erase(this,*(_Rb_tree_node **)(param_1 + 0x18));
    plVar6 = *(long **)(param_1 + 0x30);
    p_Var12 = *(_Rb_tree_node **)(param_1 + 0x10);
    if ((plVar6 != (long *)0x0) && (lVar10 = plVar6[2], plVar6[2] = lVar10 + -1, lVar10 + -1 == 0))
    {
      (**(code **)(*plVar6 + 0x18))();
    }
    puVar7 = (undefined *)(*(long *)(param_1 + 0x20) + -0x18);
    if (puVar7 != puVar5) {
      piVar9 = (int *)(*(long *)(param_1 + 0x20) + -8);
      if (puVar4 == (undefined *)0x0) {
                    /* try { // try from 0055e04c to 0065e053 has its CatchHandler @ 0055e110 */
        iVar11 = *piVar9;
                    /* try { // try from 0055e054 to 0065e12f has its CatchHandler @ 0055dfd0 */
        *piVar9 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete(puVar7);
      }
    }
    operator_delete(param_1);
    param_1 = p_Var12;
  }
  if (*(long *)(lVar3 + 0x28) == lVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


