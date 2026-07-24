/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004340d4
 * Function: Caver::Proto::SkillComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(SkillComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SkillComponent::SharedDtor() */

void __thiscall Caver::Proto::SkillComponent::SharedDtor(SkillComponent *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  plVar4 = *(long **)(this + 0x10);
  if ((plVar4 != (long *)PTR__default_cast_object_template_name__007e65a8) &&
     (plVar4 != (long *)0x0)) {
                    /* try { // try from 00434110 to 0053415b has its CatchHandler @ 00434110
                       catch() { ... } // from try @ 00434110 with catch @ 00434110
                       catch() { ... } // from try @ 00434214 with catch @ 00434110 */
    puVar6 = (undefined *)(*plVar4 + -0x18);
    if (puVar6 != PTR_DAT_007e5de8) {
                    /* try { // try from 00434170 to 0053417f has its CatchHandler @ 0043435c */
      piVar7 = (int *)(*plVar4 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar7;
        *piVar7 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar7;
                    /* try { // try from 00434188 to 005341a7 has its CatchHandler @ 00434364 */
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar2) {
            *piVar7 = iVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar8 < 1) {
                    /* try { // try from 004341a8 to 005341b3 has its CatchHandler @ 00434300 */
        operator_delete(puVar6);
      }
    }
    operator_delete(plVar4);
  }
  if ((*(SkillComponent **)PTR_default_instance__007e5830 != this) &&
     (*(long **)(this + 0x18) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
                    /* try { // try from 0043415c to 0053416b has its CatchHandler @ 00434360 */
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


