/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00355d50
 * Function: Caver::BreakableObjectComponent::HandleMessage
 * Signature: undefined __thiscall HandleMessage(BreakableObjectComponent * this, int param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::BreakableObjectComponent::HandleMessage(int, void*) */

undefined8 __thiscall
Caver::BreakableObjectComponent::HandleMessage
          (BreakableObjectComponent *this,int param_1,void *param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  
  if (param_1 == 7) {
    if (*(char *)(*(long *)((long)param_2 + 8) + 0x17a) == '\0') {
      return 0;
    }
    if (*(char *)(*(long *)param_2 + 0x17b) == '\0') {
      return 0;
    }
    if (this[0x71] == (BreakableObjectComponent)0x0) {
      return 0;
    }
    fVar9 = (float)*(undefined8 *)((long)param_2 + 0x18) -
            (float)*(undefined8 *)((long)param_2 + 0x20);
    fVar10 = (float)((ulong)*(undefined8 *)((long)param_2 + 0x18) >> 0x20) -
             (float)((ulong)*(undefined8 *)((long)param_2 + 0x20) >> 0x20);
    if (fVar9 * fVar9 + fVar10 * fVar10 <= _DAT_006877ac) {
      return 0;
    }
  }
  else {
    if (param_1 != 0xe) {
      return 0;
    }
    lVar8 = *(long *)param_2;
    if (*(int *)(lVar8 + 0xb4) == 0) {
      return 0;
    }
    iVar3 = *(int *)(this + 0x78);
    if ((iVar3 != 0) && (*(int *)(lVar8 + 0xb8) != iVar3)) {
      return 0;
    }
    iVar4 = *(int *)(this + 0x74);
    iVar7 = iVar4 + -1;
    if (iVar4 < 1) {
      return 0;
    }
    if ((iVar3 == 0) && (*(int *)(lVar8 + 0xb8) == 2)) {
      iVar7 = iVar4 + -100;
      *(int *)(this + 0x74) = iVar7;
      if (iVar4 < 100) {
        *(undefined4 *)(this + 0x74) = 0;
        goto LAB_00355e84;
      }
    }
    *(int *)(this + 0x74) = iVar7;
    puVar5 = PTR_Interface_007e7860;
    if (iVar7 != 0) {
      plVar2 = *(long **)(*(long *)(this + 0x28) + 200);
      for (plVar1 = *(long **)(*(long *)(this + 0x28) + 0xc0); plVar1 != plVar2; plVar1 = plVar1 + 1
          ) {
        uVar6 = (**(code **)(*(long *)*plVar1 + 0xa0))((long *)*plVar1,puVar5);
        if ((uVar6 & 1) != 0) {
          lVar8 = *plVar1;
          *(undefined4 *)(lVar8 + 0x136) = 0xff4b5078;
          *(undefined1 *)(lVar8 + 0x135) = 1;
        }
      }
      this[0xa8] = (BreakableObjectComponent)0x1;
      *(undefined4 *)(this + 0xac) = 0x3e19999a;
      return 0;
    }
  }
LAB_00355e84:
  Break(this);
  return 0;
}


