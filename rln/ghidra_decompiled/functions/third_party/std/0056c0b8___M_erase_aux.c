/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056c0b8
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::_M_erase_aux
 * Signature: undefined __thiscall _M_erase_aux(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>> * this, _Rb_tree_const_iterator param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const,
   boost::intrusive_ptr<Caver::SceneObjectGroup> >, std::_Select1st<std::pair<std::string const,
   boost::intrusive_ptr<Caver::SceneObjectGroup> > >, std::less<std::string >,
   std::allocator<std::pair<std::string const, boost::intrusive_ptr<Caver::SceneObjectGroup> > >
   >::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<std::string const,
   boost::intrusive_ptr<Caver::SceneObjectGroup> > >) */

void __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
::_M_erase_aux(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
               *this,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  
                    /* try { // try from 0056c0c0 to 0066c0e7 has its CatchHandler @ 0056c2c4 */
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
  pvVar4 = (void *)FUN_0064ca60(param_2,this + 8);
  plVar5 = *(long **)((long)pvVar4 + 0x28);
                    /* try { // try from 0056c100 to 0066c127 has its CatchHandler @ 0056c380 */
  if ((plVar5 != (long *)0x0) &&
     (iVar9 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar9, iVar9 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  puVar6 = (undefined *)(*(long *)((long)pvVar4 + 0x20) + -0x18);
  if (puVar6 != PTR_DAT_007e5de8) {
                    /* try { // try from 0056c168 to 0066c1eb has its CatchHandler @ 0056c010 */
    piVar8 = (int *)(*(long *)((long)pvVar4 + 0x20) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(puVar6);
    }
  }
  operator_delete(pvVar4);
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + -1;
                    /* try { // try from 0056c140 to 0066c167 has its CatchHandler @ 0056c3c8 */
  if (*(long *)(lVar3 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


