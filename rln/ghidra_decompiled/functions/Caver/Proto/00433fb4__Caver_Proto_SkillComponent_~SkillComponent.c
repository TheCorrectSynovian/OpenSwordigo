/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00433fb4
 * Function: Caver::Proto::SkillComponent::~SkillComponent
 * Signature: undefined __thiscall ~SkillComponent(SkillComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SkillComponent::~SkillComponent() */

void __thiscall Caver::Proto::SkillComponent::~SkillComponent(SkillComponent *this)

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
  lVar5 = *(long *)(lVar2 + 0x28);
  plVar4 = *(long **)(this + 0x10);
  bVar3 = plVar4 != (long *)PTR__default_cast_object_template_name__007e65a8;
  *(undefined **)this = PTR_vtable_007e48c8 + 0x10;
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
  if ((*(SkillComponent **)PTR_default_instance__007e5830 != this) &&
     (*(long **)(this + 0x18) != (long *)0x0)) {
                    /* catch() { ... } // from try @ 00433f10 with catch @ 0043403c */
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
                    /* catch() { ... } // from try @ 00433f24 with catch @ 00434044 */
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  if (*(long *)(lVar2 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


