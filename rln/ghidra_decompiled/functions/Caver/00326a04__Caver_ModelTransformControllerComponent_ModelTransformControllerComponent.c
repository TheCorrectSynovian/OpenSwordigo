/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00326a04
 * Function: Caver::ModelTransformControllerComponent::ModelTransformControllerComponent
 * Signature: undefined __thiscall ModelTransformControllerComponent(ModelTransformControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ModelTransformControllerComponent::ModelTransformControllerComponent() */

void __thiscall
Caver::ModelTransformControllerComponent::ModelTransformControllerComponent
          (ModelTransformControllerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  int *piVar10;
  int iVar11;
  ModelTransformControllerComponent *pMVar12;
  undefined1 auStack_60 [8];
  long local_58 [2];
  long local_48;
  
  puVar9 = PTR_vtable_007e6d38;
  puVar8 = PTR_DAT_007e5de8;
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  puVar1 = PTR_vtable_007e6d38 + 0x128;
  puVar2 = PTR_vtable_007e6d38 + 0x168;
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (ModelTransformControllerComponent)0x0;
  pMVar12 = this + 0x48;
  *(undefined8 *)pMVar12 = 0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  puVar1 = PTR_vtable_007e50d0;
  uVar7 = _UNK_00683498;
  uVar6 = _DAT_00683490;
  *(undefined **)this = puVar9 + 0x10;
  *(ModelTransformControllerComponent **)(this + 0x58) = pMVar12;
  *(ModelTransformControllerComponent **)(this + 0x60) = pMVar12;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x70) = puVar1 + 0x10;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  this[0x88] = (ModelTransformControllerComponent)0x1;
  *(undefined8 *)(this + 0x94) = 0;
  *(undefined8 *)(this + 0x8c) = 0;
  *(undefined8 *)(this + 0xa4) = uVar7;
  *(undefined8 *)(this + 0x9c) = uVar6;
  FUN_00666bb8(local_58,"model",auStack_60);
  Component::BindOutlet
            ((Component *)this,0,(string *)local_58,(ComponentOutletBase *)(this + 0x70),true);
  if ((undefined *)(local_58[0] + -0x18) != puVar8) {
    piVar10 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


