/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056888c
 * Function: Caver::Scene::RemoveGroup
 * Signature: undefined __thiscall RemoveGroup(Scene * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Scene::RemoveGroup(boost::intrusive_ptr<Caver::SceneObjectGroup> const&) */

void __thiscall Caver::Scene::RemoveGroup(Scene *this,intrusive_ptr *param_1)

{
  _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
  *this_00;
  char cVar1;
  bool bVar2;
  long lVar3;
  Scene *pSVar4;
  Scene *pSVar5;
  Scene *pSVar6;
  int *piVar7;
  int iVar8;
  undefined1 auVar9 [16];
  long local_58 [2];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 005688b4 to 006688b7 has its CatchHandler @ 005688d0 */
                    /* try { // try from 005688b8 to 006688d3 has its CatchHandler @ 00568884 */
  if (*(SceneObjectGroup **)param_1 != (SceneObjectGroup *)0x0) {
    SceneObjectGroup::SetScene(*(SceneObjectGroup **)param_1,(Scene *)0x0);
                    /* catch() { ... } // from try @ 005688b4 with catch @ 005688d0 */
    SceneObjectGroup::RemoveAllObjects(*(SceneObjectGroup **)param_1);
                    /* catch() { ... } // from try @ 00568908 with catch @ 005688d4 */
    FUN_0066a528(local_58,*(long *)param_1 + 0x20);
    this_00 = (_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
               *)(this + 0xe0);
    auVar9 = std::
             _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
             ::equal_range(this_00,(string *)local_58);
    pSVar6 = auVar9._8_8_;
    pSVar4 = auVar9._0_8_;
                    /* try { // try from 00568904 to 00668907 has its CatchHandler @ 00568918 */
                    /* try { // try from 00568908 to 0066891b has its CatchHandler @ 005688d4 */
    if ((this + 0xe8 == pSVar6) && (*(Scene **)(this + 0xf8) == pSVar4)) {
                    /* catch() { ... } // from try @ 00568904 with catch @ 00568918 */
                    /* catch() { ... } // from try @ 00568950 with catch @ 0056891c */
      std::
      _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
      ::_M_erase(this_00,*(_Rb_tree_node **)(this + 0xf0));
      *(undefined8 *)(this + 0xf0) = 0;
      *(Scene **)(this + 0xf8) = pSVar6;
      *(Scene **)(this + 0x100) = pSVar6;
      *(undefined8 *)(this + 0x108) = 0;
    }
    else {
      while (pSVar4 != pSVar6) {
        pSVar5 = (Scene *)FUN_0064c6a0(pSVar4);
                    /* try { // try from 0056894c to 0066894f has its CatchHandler @ 0056896c */
        std::
        _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
        ::_M_erase_aux(this_00,pSVar4);
                    /* try { // try from 00568950 to 0066896f has its CatchHandler @ 0056891c */
        pSVar4 = pSVar5;
      }
    }
                    /* catch() { ... } // from try @ 0056894c with catch @ 0056896c */
    if ((undefined *)(local_58[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar7 = (int *)(local_58[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar7;
        *piVar7 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar2) {
            *piVar7 = iVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete((undefined *)(local_58[0] + -0x18));
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005689e0 to 006689e3 has its CatchHandler @ 00568a24 */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 005689e4 with catch @ 00568994 */
  return;
}


