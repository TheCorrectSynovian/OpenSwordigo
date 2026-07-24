/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ac914
 * Function: Caver::ParticleObjectComponent::ParticleObjectComponent
 * Signature: undefined __thiscall ParticleObjectComponent(ParticleObjectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ParticleObjectComponent::ParticleObjectComponent() */

void __thiscall
Caver::ParticleObjectComponent::ParticleObjectComponent(ParticleObjectComponent *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int *piVar8;
  int iVar9;
  ParticleObjectComponent *pPVar10;
  undefined1 auStack_60 [8];
  long local_58 [2];
  long local_48;
  
  puVar7 = PTR_vtable_007e5f38;
  puVar6 = PTR_DAT_007e5de8;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  puVar5 = PTR_vtable_007e50d0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (ParticleObjectComponent)0x0;
  pPVar10 = this + 0x48;
  *(undefined8 *)pPVar10 = 0;
  *(undefined **)this = puVar7 + 0x10;
  *(ParticleObjectComponent **)(this + 0x58) = pPVar10;
  *(ParticleObjectComponent **)(this + 0x60) = pPVar10;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x18) = puVar7 + 0x168;
  *(undefined **)(this + 0x10) = puVar7 + 0x128;
  *(undefined **)(this + 0x70) = puVar5 + 0x10;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  PhysicsObjectState::PhysicsObjectState((PhysicsObjectState *)(this + 0x88));
  uVar4 = _DAT_006837f0;
  *(undefined8 *)(this + 0x118) = _UNK_006837f8;
  *(undefined8 *)(this + 0x110) = uVar4;
  FUN_00666bb8(local_58,"model",auStack_60);
  Component::BindOutlet
            ((Component *)this,0,(string *)local_58,(ComponentOutletBase *)(this + 0x70),true);
  if ((undefined *)(local_58[0] + -0x18) != puVar6) {
    piVar8 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


