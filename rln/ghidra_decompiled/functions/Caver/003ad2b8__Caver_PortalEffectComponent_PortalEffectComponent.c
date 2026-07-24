/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ad2b8
 * Function: Caver::PortalEffectComponent::PortalEffectComponent
 * Signature: undefined __thiscall PortalEffectComponent(PortalEffectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalEffectComponent::PortalEffectComponent() */

void __thiscall Caver::PortalEffectComponent::PortalEffectComponent(PortalEffectComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  int *piVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_60 [8];
  long local_58 [2];
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  GlowComponent::GlowComponent((GlowComponent *)this);
  puVar7 = PTR_vtable_007e5768;
  puVar6 = PTR_vtable_007e4878;
  puVar1 = PTR_vtable_007e5ec0 + 0x138;
  puVar2 = PTR_vtable_007e5ec0 + 0x178;
  *(undefined **)this = PTR_vtable_007e5ec0 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined **)(this + 0x88) = puVar7 + 0x10;
  auVar10 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined **)(this + 0xa0) = puVar6 + 0x10;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(long *)(this + 0xc0) = auVar10._8_8_;
  *(long *)(this + 0xb8) = auVar10._0_8_;
  *(undefined8 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  FUN_00666bb8(local_58,0x6847f1,auStack_60);
  Component::BindOutlet
            ((Component *)this,100,(string *)local_58,(ComponentOutletBase *)(this + 0x88),true);
  puVar1 = PTR_DAT_007e5de8;
  if ((undefined *)(local_58[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar8 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
  FUN_00666bb8(local_58,"textureMapping",auStack_60);
  Component::BindOutlet
            ((Component *)this,0x65,(string *)local_58,(ComponentOutletBase *)(this + 0xa0),true);
  if ((undefined *)(local_58[0] + -0x18) != puVar1) {
    piVar8 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


