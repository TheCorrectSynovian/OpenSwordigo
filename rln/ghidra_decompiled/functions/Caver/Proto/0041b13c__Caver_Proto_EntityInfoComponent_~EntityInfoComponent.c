/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041b13c
 * Function: Caver::Proto::EntityInfoComponent::~EntityInfoComponent
 * Signature: undefined __thiscall ~EntityInfoComponent(EntityInfoComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityInfoComponent::~EntityInfoComponent() */

void __thiscall Caver::Proto::EntityInfoComponent::~EntityInfoComponent(EntityInfoComponent *this)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  
  lVar2 = tpidr_el0;
                    /* try { // try from 0041b150 to 0051b177 has its CatchHandler @ 0041b180 */
  lVar5 = *(long *)(lVar2 + 0x28);
  plVar4 = *(long **)(this + 0x10);
  bVar3 = plVar4 != (long *)PTR__default_entity_class__007e6138;
                    /* try { // try from 0041b178 to 0051b18f has its CatchHandler @ 0041afe4 */
  *(undefined **)this = PTR_vtable_007e4dd8 + 0x10;
                    /* catch() { ... } // from try @ 0041b150 with catch @ 0041b180 */
  if ((bVar3) && (plVar4 != (long *)0x0)) {
                    /* catch() { ... } // from try @ 0041b024 with catch @ 0041b184 */
                    /* try { // try from 0041b190 to 0051b193 has its CatchHandler @ 0041b194 */
    puVar6 = (undefined *)(*plVar4 + -0x18);
                    /* catch() { ... } // from try @ 0041b190 with catch @ 0041b194 */
                    /* try { // try from 0041b198 to 0051b19b has its CatchHandler @ 0041b1a0 */
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
          bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar3) {
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
                    /* catch() { ... } // from try @ 0041b198 with catch @ 0041b1a0 */
                    /* try { // try from 0041b1a4 to 0051b227 has its CatchHandler @ 0041b1a4
                       catch() { ... } // from try @ 0041b1a4 with catch @ 0041b1a4
                       catch() { ... } // from try @ 0041b298 with catch @ 0041b1a4
                       catch() { ... } // from try @ 0041b33c with catch @ 0041b1a4
                       catch() { ... } // from try @ 0041b4bc with catch @ 0041b1a4
                       catch() { ... } // from try @ 0041b5c0 with catch @ 0041b1a4 */
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  if (*(long *)(lVar2 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


