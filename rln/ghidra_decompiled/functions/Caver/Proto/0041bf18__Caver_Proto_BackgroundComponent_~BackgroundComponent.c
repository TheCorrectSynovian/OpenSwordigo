/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041bf18
 * Function: Caver::Proto::BackgroundComponent::~BackgroundComponent
 * Signature: undefined __thiscall ~BackgroundComponent(BackgroundComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BackgroundComponent::~BackgroundComponent() */

void __thiscall Caver::Proto::BackgroundComponent::~BackgroundComponent(BackgroundComponent *this)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  
                    /* try { // try from 0041bf1c to 0051bf27 has its CatchHandler @ 0041bfb8 */
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  plVar4 = *(long **)(this + 0x10);
                    /* try { // try from 0041bf50 to 0051bf5b has its CatchHandler @ 0041bfb4 */
  bVar3 = plVar4 != (long *)PTR__default_texture_name__007e56a8;
  *(undefined **)this = PTR_vtable_007e6a70 + 0x10;
                    /* try { // try from 0041bf5c to 0051bfd3 has its CatchHandler @ 0041bec4 */
  if ((bVar3) && (plVar4 != (long *)0x0)) {
    puVar6 = (undefined *)(*plVar4 + -0x18);
    if (puVar6 != PTR_DAT_007e5de8) {
      piVar7 = (int *)(*plVar4 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar7;
        *piVar7 = iVar8 + -1;
      }
      else {
        do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0041bf50 with catch @ 0041bfb4
                        */
          iVar8 = *piVar7;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0041bf1c with catch @ 0041bfb8
                        */
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar3) {
            *piVar7 = iVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
                    /* try { // try from 0041bfd4 to 0051bfdb has its CatchHandler @ 0041bfe4 */
      if (iVar8 < 1) {
                    /* try { // try from 0041bfdc to 0051bfe7 has its CatchHandler @ 0041bec4 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0041bfd4 with catch @ 0041bfe4
                        */
        operator_delete(puVar6);
      }
    }
    operator_delete(plVar4);
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  if (*(long *)(lVar2 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


