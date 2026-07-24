/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040ed1c
 * Function: Caver::Proto::ObjectLinkControllerComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(ObjectLinkControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectLinkControllerComponent::SharedDtor() */

void __thiscall
Caver::Proto::ObjectLinkControllerComponent::SharedDtor(ObjectLinkControllerComponent *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  
                    /* try { // try from 0040ed28 to 0050ed3b has its CatchHandler @ 00410058 */
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 0040ed3c to 0050ed47 has its CatchHandler @ 0040fff4 */
  plVar4 = *(long **)(this + 0x10);
  if ((plVar4 != (long *)PTR__default_target_object_identifier__007e4c30) && (plVar4 != (long *)0x0)
     ) {
                    /* try { // try from 0040ed5c to 0050ed6f has its CatchHandler @ 0040fff0 */
    puVar6 = (undefined *)(*plVar4 + -0x18);
    if (puVar6 != PTR_DAT_007e5de8) {
      piVar7 = (int *)(*plVar4 + -8);
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
        operator_delete(puVar6);
      }
    }
    operator_delete(plVar4);
  }
                    /* try { // try from 0040ed70 to 0050ed7b has its CatchHandler @ 0040ffb8 */
  plVar4 = *(long **)(this + 0x18);
  if ((plVar4 != (long *)PTR__default_target_bone_identifier__007e7b50) && (plVar4 != (long *)0x0))
  {
    puVar6 = (undefined *)(*plVar4 + -0x18);
    if (puVar6 != PTR_DAT_007e5de8) {
      piVar7 = (int *)(*plVar4 + -8);
                    /* try { // try from 0040ee44 to 0050ee4f has its CatchHandler @ 00410290 */
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar7;
        *piVar7 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar7;
                    /* try { // try from 0040ee50 to 0050ee57 has its CatchHandler @ 0040fe9c */
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar2) {
            *piVar7 = iVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar8 < 1) {
                    /* try { // try from 0040eea0 to 0050eec7 has its CatchHandler @ 0040fc14 */
        operator_delete(puVar6);
      }
    }
    operator_delete(plVar4);
  }
                    /* try { // try from 0040eda4 to 0050edaf has its CatchHandler @ 0040ff6c */
                    /* try { // try from 0040edb0 to 0050edbb has its CatchHandler @ 0040ff10 */
  if (*(ObjectLinkControllerComponent **)PTR_default_instance__007e4830 != this) {
    if (*(long **)(this + 0x20) != (long *)0x0) {
                    /* try { // try from 0040edc0 to 0050edc7 has its CatchHandler @ 0040feb4 */
      (**(code **)(**(long **)(this + 0x20) + 8))();
    }
    if (*(long **)(this + 0x28) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x28) + 8))();
    }
    if (*(long **)(this + 0x30) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x30) + 8))();
    }
  }
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 0040ee04 to 0050ee43 has its CatchHandler @ 004102a0 */
  return;
}


