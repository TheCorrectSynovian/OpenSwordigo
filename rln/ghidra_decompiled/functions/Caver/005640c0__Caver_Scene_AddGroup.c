/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005640c0
 * Function: Caver::Scene::AddGroup
 * Signature: undefined __thiscall AddGroup(Scene * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Scene::AddGroup(boost::intrusive_ptr<Caver::SceneObjectGroup> const&) */

void __thiscall Caver::Scene::AddGroup(Scene *this,intrusive_ptr *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  int *piVar6;
  int iVar7;
  long lVar8;
  long local_48 [2];
  long local_38;
  
                    /* try { // try from 005640c0 to 006640e7 has its CatchHandler @ 005640f0 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 005640e8 to 006640f3 has its CatchHandler @ 00563fd4 */
                    /* catch() { ... } // from try @ 005640c0 with catch @ 005640f0 */
                    /* try { // try from 005640f4 to 0066412b has its CatchHandler @ 005640f4
                       catch() { ... } // from try @ 005640f4 with catch @ 005640f4
                       catch() { ... } // from try @ 00564130 with catch @ 005640f4 */
  FUN_0066a528(local_48,*(long *)param_1 + 0x20);
  plVar4 = (long *)std::
                   map<std::string,boost::intrusive_ptr<Caver::SceneObjectGroup>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
                   ::operator[]((map<std::string,boost::intrusive_ptr<Caver::SceneObjectGroup>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
                                 *)(this + 0xe0),(string *)local_48);
  lVar8 = *(long *)param_1;
  if (lVar8 != 0) {
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
  }
  plVar5 = (long *)*plVar4;
  *plVar4 = lVar8;
                    /* try { // try from 0056412c to 0066412f has its CatchHandler @ 005641e8 */
                    /* try { // try from 00564130 to 006641fb has its CatchHandler @ 005640f4 */
  if ((plVar5 != (long *)0x0) &&
     (iVar7 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar7, iVar7 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar6 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  SceneObjectGroup::SetScene(*(SceneObjectGroup **)param_1,this);
  if (this[8] != (Scene)0x0) {
    SceneObjectGroup::FinishLoad(*(SceneObjectGroup **)param_1);
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


