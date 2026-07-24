/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005763d0
 * Function: Caver::SceneObjectGroup::SetIdentifier
 * Signature: undefined __thiscall SetIdentifier(SceneObjectGroup * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObjectGroup::SetIdentifier(std::string const&) */

void __thiscall Caver::SceneObjectGroup::SetIdentifier(SceneObjectGroup *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  size_t __n;
  int *piVar5;
  SceneObjectGroup *pSVar6;
  long local_48 [2];
  long local_38;
  
                    /* try { // try from 005763d4 to 006763e7 has its CatchHandler @ 0057c514 */
  lVar3 = tpidr_el0;
                    /* try { // try from 005763e8 to 006763fb has its CatchHandler @ 0057c50c */
  local_38 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 005763fc to 0067640f has its CatchHandler @ 0057c504 */
  pSVar6 = this + 0x20;
  __n = *(size_t *)((long)*(void **)param_1 + -0x18);
                    /* try { // try from 00576410 to 00676423 has its CatchHandler @ 0057c4fc */
  if ((__n != *(size_t *)((long)*(void **)pSVar6 + -0x18)) ||
     (iVar4 = memcmp(*(void **)param_1,*(void **)pSVar6,__n), iVar4 != 0)) {
                    /* try { // try from 00576424 to 00676443 has its CatchHandler @ 0057c4f4 */
    FUN_0066a528(local_48,pSVar6);
    FUN_0066a6a8(pSVar6,param_1);
    if (*(Scene **)(this + 0x18) != (Scene *)0x0) {
      Scene::GroupIdentifierChanged(*(Scene **)(this + 0x18),(string *)local_48,param_1);
    }
                    /* try { // try from 0057644c to 0067645f has its CatchHandler @ 0057c4ec */
    if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
                    /* try { // try from 00576488 to 0067649b has its CatchHandler @ 0057c4d4 */
      piVar5 = (int *)(local_48[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar4 = *piVar5;
        *piVar5 = iVar4 + -1;
      }
      else {
        do {
          iVar4 = *piVar5;
                    /* try { // try from 0057649c to 006764bb has its CatchHandler @ 0057c4cc */
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = iVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar4 < 1) {
        operator_delete((undefined *)(local_48[0] + -0x18));
                    /* try { // try from 005764c4 to 006764d7 has its CatchHandler @ 0057c4c4 */
      }
    }
  }
                    /* try { // try from 00576460 to 00676473 has its CatchHandler @ 0057c4e4 */
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00576474 to 00676487 has its CatchHandler @ 0057c4dc */
  return;
}


