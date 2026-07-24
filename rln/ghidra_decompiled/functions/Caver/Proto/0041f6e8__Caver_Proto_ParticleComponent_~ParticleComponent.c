/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041f6e8
 * Function: Caver::Proto::ParticleComponent::~ParticleComponent
 * Signature: undefined __thiscall ~ParticleComponent(ParticleComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleComponent::~ParticleComponent() */

void __thiscall Caver::Proto::ParticleComponent::~ParticleComponent(ParticleComponent *this)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  
                    /* try { // try from 0041f6f4 to 0051f6f7 has its CatchHandler @ 0041f734 */
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  plVar4 = *(long **)(this + 0x10);
                    /* try { // try from 0041f718 to 0051f71b has its CatchHandler @ 0041f72c */
                    /* try { // try from 0041f71c to 0051f767 has its CatchHandler @ 0041f67c */
  bVar3 = plVar4 != (long *)PTR__default_texture_name__007e6170;
  *(undefined **)this = PTR_vtable_007e5a48 + 0x10;
                    /* catch() { ... } // from try @ 0041f718 with catch @ 0041f72c */
  if ((bVar3) && (plVar4 != (long *)0x0)) {
                    /* catch() { ... } // from try @ 0041f6f4 with catch @ 0041f734 */
    puVar6 = (undefined *)(*plVar4 + -0x18);
                    /* catch() { ... } // from try @ 0041f6d0 with catch @ 0041f744 */
    if (puVar6 != PTR_DAT_007e5de8) {
      piVar7 = (int *)(*plVar4 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar7;
                    /* catch() { ... } // from try @ 0041f768 with catch @ 0041f7a4 */
                    /* catch() { ... } // from try @ 0041f7bc with catch @ 0041f7a8 */
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
                    /* try { // try from 0041f7b8 to 0051f7bb has its CatchHandler @ 0041f7cc */
                    /* try { // try from 0041f7bc to 0051f7df has its CatchHandler @ 0041f7a8 */
        operator_delete(puVar6);
      }
    }
    operator_delete(plVar4);
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
                    /* try { // try from 0041f768 to 0051f79b has its CatchHandler @ 0041f7a4 */
  if (*(long *)(lVar2 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0041f7b8 with catch @ 0041f7cc */
    __stack_chk_fail();
  }
  return;
}


