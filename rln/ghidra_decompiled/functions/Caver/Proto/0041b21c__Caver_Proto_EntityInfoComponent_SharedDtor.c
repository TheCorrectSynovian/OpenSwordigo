/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041b21c
 * Function: Caver::Proto::EntityInfoComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(EntityInfoComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityInfoComponent::SharedDtor() */

void __thiscall Caver::Proto::EntityInfoComponent::SharedDtor(EntityInfoComponent *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  
                    /* try { // try from 0041b228 to 0051b237 has its CatchHandler @ 0041b524 */
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  plVar4 = *(long **)(this + 0x10);
                    /* try { // try from 0041b248 to 0051b24f has its CatchHandler @ 0041b520 */
  if ((plVar4 != (long *)PTR__default_entity_class__007e6138) && (plVar4 != (long *)0x0)) {
                    /* try { // try from 0041b254 to 0051b25b has its CatchHandler @ 0041b524 */
    puVar6 = (undefined *)(*plVar4 + -0x18);
    if (puVar6 != PTR_DAT_007e5de8) {
                    /* try { // try from 0041b290 to 0051b297 has its CatchHandler @ 0041b524 */
      piVar7 = (int *)(*plVar4 + -8);
                    /* try { // try from 0041b298 to 0051b313 has its CatchHandler @ 0041b1a4 */
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
                    /* try { // try from 0041b26c to 0051b273 has its CatchHandler @ 0041b51c */
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 0041b284 to 0051b28b has its CatchHandler @ 0041b518 */
  return;
}


