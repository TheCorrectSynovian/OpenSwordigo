/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038d868
 * Function: Caver::SkillComponent::SkillComponent
 * Signature: undefined __thiscall SkillComponent(SkillComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillComponent::SkillComponent() */

void __thiscall Caver::SkillComponent::SkillComponent(SkillComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  SkillComponent *pSVar10;
  int *piVar11;
  int iVar12;
  undefined1 auStack_70 [8];
  long local_68 [2];
  long local_58;
  
  puVar9 = PTR_DAT_007e5de8;
  puVar8 = PTR_vtable_007e5548;
  puVar7 = PTR_vtable_007e54f0;
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  puVar1 = PTR_vtable_007e54f0 + 0x128;
  puVar2 = PTR_vtable_007e54f0 + 0x168;
  puVar3 = PTR_DAT_007e5de8 + 0x18;
  *(undefined4 *)(this + 8) = 0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  this[0x30] = (SkillComponent)0x0;
  *(undefined **)(this + 0x38) = puVar3;
  pSVar10 = this + 0x48;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)pSVar10 = 0;
  *(SkillComponent **)(this + 0x58) = pSVar10;
  *(SkillComponent **)(this + 0x60) = pSVar10;
  *(undefined **)this = puVar7 + 0x10;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x70) = puVar8 + 0x10;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined **)(this + 0xa0) = puVar3;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  FUN_00666bb8(local_68,"castFinishAnimation",auStack_70);
  Component::BindOutlet
            ((Component *)this,0,(string *)local_68,(ComponentOutletBase *)(this + 0x70),false);
  if ((undefined *)(local_68[0] + -0x18) != puVar9) {
    piVar11 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *piVar11;
      *piVar11 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *piVar11;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar5) {
          *piVar11 = iVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


