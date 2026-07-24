/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057301c
 * Function: Caver::SceneObject::SetIdentifier
 * Signature: undefined __thiscall SetIdentifier(SceneObject * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::SetIdentifier(std::string const&) */

void __thiscall Caver::SceneObject::SetIdentifier(SceneObject *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  size_t __n;
  int *piVar5;
  string *psVar6;
  long local_48 [2];
  long local_38;
  
                    /* try { // try from 0057301c to 0067302f has its CatchHandler @ 00573b98 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  psVar6 = (string *)(this + 0x50);
  __n = *(size_t *)((long)*(void **)param_1 + -0x18);
  if ((__n != *(size_t *)((long)*(void **)psVar6 + -0x18)) ||
     (iVar4 = memcmp(*(void **)param_1,*(void **)psVar6,__n), iVar4 != 0)) {
                    /* try { // try from 00573068 to 0067308f has its CatchHandler @ 00573850 */
    FUN_0066a528(local_48,psVar6);
    FUN_0066a6a8(psVar6,param_1);
    if (*(Scene **)(this + 0x20) != (Scene *)0x0) {
      Scene::ObjectIdentifierChanged(*(Scene **)(this + 0x20),(string *)local_48,psVar6);
    }
    if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar5 = (int *)(local_48[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar4 = *piVar5;
        *piVar5 = iVar4 + -1;
      }
      else {
        do {
          iVar4 = *piVar5;
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
                    /* try { // try from 00573110 to 0067311b has its CatchHandler @ 0057399c */
      }
    }
  }
                    /* try { // try from 005730b0 to 006730d7 has its CatchHandler @ 00573b98 */
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


