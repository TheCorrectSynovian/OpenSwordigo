/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ca5b8
 * Function: Caver::WeaponGlowComponent::WeaponGlowComponent
 * Signature: undefined __thiscall WeaponGlowComponent(WeaponGlowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::WeaponGlowComponent::WeaponGlowComponent() */

void __thiscall Caver::WeaponGlowComponent::WeaponGlowComponent(WeaponGlowComponent *this)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  int *piVar9;
  int iVar10;
  undefined1 auStack_60 [8];
  long local_58 [2];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  GlowComponent::GlowComponent((GlowComponent *)this);
  puVar8 = PTR_vtable_007e74d8;
  puVar7 = PTR_vtable_007e4918;
  puVar1 = PTR_vtable_007e4918 + 0x138;
  *(undefined **)(this + 0x18) = PTR_vtable_007e4918 + 0x178;
  *(undefined **)(this + 0x10) = puVar1;
  uVar6 = _UNK_0068a048;
  uVar5 = _DAT_0068a040;
  *(undefined **)this = puVar7 + 0x10;
  *(undefined **)(this + 0x88) = puVar8 + 0x10;
  *(undefined8 *)(this + 0xac) = uVar6;
  *(undefined8 *)(this + 0xa4) = uVar5;
  uVar5 = DAT_0068a2a0;
  *(undefined4 *)(this + 0xb4) = 0xffffff;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  this[0xa0] = (WeaponGlowComponent)0x0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xec) = uVar5;
  *(undefined4 *)(this + 0xf4) = 0x41700000;
  FUN_00666bb8(local_58,"particleEmitter",auStack_60);
  Component::BindOutlet
            ((Component *)this,100,(string *)local_58,(ComponentOutletBase *)(this + 0x88),true);
  if ((undefined *)(local_58[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar9 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


