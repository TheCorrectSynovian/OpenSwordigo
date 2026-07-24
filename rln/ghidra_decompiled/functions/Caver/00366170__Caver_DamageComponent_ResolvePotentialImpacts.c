/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00366170
 * Function: Caver::DamageComponent::ResolvePotentialImpacts
 * Signature: undefined __thiscall ResolvePotentialImpacts(DamageComponent * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::DamageComponent::ResolvePotentialImpacts(bool) */

void __thiscall Caver::DamageComponent::ResolvePotentialImpacts(DamageComponent *this,bool param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  void *pvVar12;
  void *pvVar13;
  float fVar14;
  
  puVar9 = PTR_Interface_007e7450;
  fVar8 = _DAT_00687e1c;
  fVar7 = DAT_00683f68;
  fVar6 = DAT_00683734;
  pvVar13 = *(void **)(this + 0x70);
  pvVar2 = *(void **)(this + 0x78);
  fVar14 = DAT_0068431c;
  if (pvVar13 == pvVar2) {
    pvVar12 = (void *)0x0;
  }
  else {
    pvVar12 = (void *)0x0;
    do {
      lVar10 = SceneObject::ComponentWithInterface
                         (*(SceneObject **)((long)pvVar13 + 8),(long)puVar9);
      if (((lVar10 == 0) || (this[0xa0] != (DamageComponent)0x0)) ||
         (*(float *)(lVar10 + 0x94) <= fVar6)) {
        lVar10 = *(long *)(this + 0x88);
        if (lVar10 != *(long *)(this + 0x90)) {
          do {
            if ((*(float *)(lVar10 + 0x20) <= *(float *)((long)pvVar13 + 0x20) + fVar6) &&
               ((*(float *)(lVar10 + 0x20) <= fVar8 ||
                (fVar7 <= (float)*(undefined8 *)(lVar10 + 0x18) *
                          (float)*(undefined8 *)((long)pvVar13 + 0x18) +
                          (float)((ulong)*(undefined8 *)(lVar10 + 0x18) >> 0x20) *
                          (float)((ulong)*(undefined8 *)((long)pvVar13 + 0x18) >> 0x20))))) {
              *(undefined1 *)((long)pvVar13 + 0x24) = 1;
              goto LAB_003662a0;
            }
            lVar10 = lVar10 + 0x40;
          } while (*(long *)(this + 0x90) != lVar10);
        }
        if (param_1) {
          SceneObject::HandleMessage(*(SceneObject **)((long)pvVar13 + 8),0xe,pvVar13);
          SceneObject::HandleMessage(*(SceneObject **)(this + 0x28),0xd,pvVar13);
          if (*(SceneObject **)(*(long *)(this + 0x28) + 0x30) != (SceneObject *)0x0) {
            SceneObject::HandleMessage(*(SceneObject **)(*(long *)(this + 0x28) + 0x30),0xd,pvVar13)
            ;
          }
        }
        else if (*(float *)((long)pvVar13 + 0x20) < fVar14) {
          pvVar12 = pvVar13;
          fVar14 = *(float *)((long)pvVar13 + 0x20);
        }
      }
LAB_003662a0:
      pvVar13 = (void *)((long)pvVar13 + 0x40);
    } while (pvVar13 != pvVar2);
  }
  pvVar13 = *(void **)(this + 0x88);
  pvVar2 = *(void **)(this + 0x90);
  do {
    if (pvVar13 == pvVar2) {
      if (pvVar12 != (void *)0x0) {
        SceneObject::HandleMessage(*(SceneObject **)((long)pvVar12 + 8),0xe,pvVar12);
        SceneObject::HandleMessage(*(SceneObject **)(this + 0x28),0xd,pvVar12);
        if (*(SceneObject **)(*(long *)(this + 0x28) + 0x30) != (SceneObject *)0x0) {
          SceneObject::HandleMessage(*(SceneObject **)(*(long *)(this + 0x28) + 0x30),0xd,pvVar12);
        }
      }
      lVar3 = *(long *)(this + 0x78);
      lVar1 = *(long *)(this + 0x70);
      for (lVar10 = lVar1; lVar3 != lVar10; lVar10 = lVar10 + 0x40) {
        plVar11 = *(long **)(lVar10 + 8);
        if ((plVar11 != (long *)0x0) &&
           (iVar5 = (int)plVar11[1] + -1, *(int *)(plVar11 + 1) = iVar5, iVar5 == 0)) {
          (**(code **)(*plVar11 + 8))();
        }
      }
      lVar3 = *(long *)(this + 0x88);
      lVar4 = *(long *)(this + 0x90);
      *(long *)(this + 0x78) = lVar1;
      for (lVar10 = lVar3; lVar4 != lVar10; lVar10 = lVar10 + 0x40) {
        plVar11 = *(long **)(lVar10 + 8);
        if ((plVar11 != (long *)0x0) &&
           (iVar5 = (int)plVar11[1] + -1, *(int *)(plVar11 + 1) = iVar5, iVar5 == 0)) {
          (**(code **)(*plVar11 + 8))();
        }
      }
      *(long *)(this + 0x90) = lVar3;
      return;
    }
    lVar10 = *(long *)(this + 0x70);
    if (lVar10 != *(long *)(this + 0x78)) {
      do {
        if ((*(long *)(lVar10 + 8) == *(long *)((long)pvVar13 + 8)) &&
           (*(char *)(lVar10 + 0x24) == '\0')) goto LAB_00366354;
        lVar10 = lVar10 + 0x40;
      } while (*(long *)(this + 0x78) != lVar10);
    }
    *(undefined1 *)((long)pvVar13 + 0x24) = 1;
    if (param_1) {
      SceneObject::HandleMessage(*(SceneObject **)((long)pvVar13 + 8),0xe,pvVar13);
      SceneObject::HandleMessage(*(SceneObject **)(this + 0x28),0xd,pvVar13);
      if (*(SceneObject **)(*(long *)(this + 0x28) + 0x30) != (SceneObject *)0x0) {
        SceneObject::HandleMessage(*(SceneObject **)(*(long *)(this + 0x28) + 0x30),0xd,pvVar13);
      }
    }
    else if (*(float *)((long)pvVar13 + 0x20) < fVar14) {
      pvVar12 = pvVar13;
      fVar14 = *(float *)((long)pvVar13 + 0x20);
    }
LAB_00366354:
    pvVar13 = (void *)((long)pvVar13 + 0x40);
  } while( true );
}


