/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00379888
 * Function: Caver::ItemDropComponent::DropItemObjects
 * Signature: undefined __thiscall DropItemObjects(ItemDropComponent * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ItemDropComponent::DropItemObjects(std::vector<boost::intrusive_ptr<Caver::SceneObject>,
   std::allocator<boost::intrusive_ptr<Caver::SceneObject> > > const&) */

void __thiscall Caver::ItemDropComponent::DropItemObjects(ItemDropComponent *this,vector *param_1)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  float fVar10;
  undefined *puVar11;
  SceneObject *pSVar12;
  int iVar13;
  int iVar14;
  long *plVar15;
  Vector2 *this_00;
  long lVar16;
  SceneObject *pSVar17;
  ulong uVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_ac;
  SceneObject *local_a8 [2];
  long local_98;
  
  lVar2 = tpidr_el0;
  local_98 = *(long *)(lVar2 + 0x28);
  lVar16 = *(long *)(this + 0x28);
  local_ac = *(float *)(lVar16 + 0x78);
  fVar21 = *(float *)(lVar16 + 0x70);
  plVar15 = (long *)ComponentManager::ComponentCollectionForInterface
                              ((ComponentManager *)(*(long *)(lVar16 + 0x20) + 0x180),
                               (long)PTR_Interface_007e5a28);
  puVar11 = PTR_FASTRANDOM_MAX_007e4b68;
  fVar10 = _DAT_006884d0;
  uVar9 = DAT_00688498;
  dVar8 = DAT_00688490;
  dVar7 = DAT_00688488;
  dVar6 = DAT_006883b0;
  fVar5 = _DAT_0068782c;
  dVar4 = DAT_00684028;
  fVar3 = DAT_00683488;
  for (plVar1 = (long *)*plVar15; ((long *)plVar15[1] != plVar1 && (*(long *)(*plVar1 + 0x28) == 0))
      ; plVar1 = plVar1 + 1) {
  }
  if ((long *)plVar15[1] == plVar1) {
    fVar21 = fVar21 + 0.0;
  }
  else {
    local_ac = *(float *)(*(long *)(*plVar1 + 0x28) + 0x78);
    fVar21 = *(float *)(*(long *)(*plVar1 + 0x28) + 0x70);
  }
  if (*(long *)(param_1 + 8) != *(long *)param_1) {
    uVar18 = 0;
    do {
      iVar13 = fastrandom();
      fVar22 = (float)((double)(((float)iVar13 / (float)*(int *)puVar11 + -0.5) * 0.25) * dVar4 +
                      dVar6);
      if ((*(int *)(this + 0x88) == 1) && (*(int *)(*(long *)(this + 0x90) + 0x18) < 3)) {
        fVar22 = fVar21 - *(float *)(*(long *)(this + 0x28) + 0x70);
        dVar19 = (double)(ABS(fVar22) / fVar5) * dVar4 * dVar7;
        if (dVar8 < dVar19) {
          dVar19 = dVar8;
        }
        fVar20 = -1.0;
        if (fVar22 <= 0.0) {
          fVar20 = 1.0;
        }
        fVar22 = (float)((double)(fVar20 * (float)dVar19) + dVar6);
      }
      this_00 = (Vector2 *)fastrandom();
      iVar13 = *(int *)puVar11;
      Vector2::FromAngle(this_00,fVar22);
      pSVar12 = local_a8[1];
      pSVar17 = *(SceneObject **)(*(long *)param_1 + uVar18 * 8);
      if (pSVar17 != (SceneObject *)0x0) {
        *(int *)(pSVar17 + 8) = *(int *)(pSVar17 + 8) + 1;
      }
      fVar22 = (float)*(undefined8 *)(*(long *)(this + 0x28) + 0x70) + (float)uVar9;
      fVar20 = (float)((ulong)*(undefined8 *)(*(long *)(this + 0x28) + 0x70) >> 0x20) +
               (float)((ulong)uVar9 >> 0x20);
      local_a8[0] = pSVar17;
      if (((fVar3 < ABS(fVar22 - *(float *)(pSVar17 + 0x70))) ||
          (fVar3 < ABS(fVar20 - *(float *)(pSVar17 + 0x74)))) &&
         (*(ulong *)(pSVar17 + 0x70) = CONCAT44(fVar20,fVar22), pSVar17[0xb4] == (SceneObject)0x0))
      {
        SceneObject::RegisterForWorldBoundsUpdate(pSVar17);
        pSVar17[0xb4] = (SceneObject)0x1;
      }
      pSVar17 = local_a8[0];
      iVar14 = fastrandom();
      *(float *)(pSVar17 + 0x78) = local_ac + ((float)iVar14 / (float)*(int *)puVar11 + -0.5) * 20.0
      ;
      fVar22 = (((float)(int)this_00 / (float)iVar13) * 0.25 + 1.0) * fVar10;
      *(long *)(local_a8[0] + 0x68) =
           CONCAT44((float)((ulong)pSVar12 >> 0x20) * fVar22,SUB84(pSVar12,0) * fVar22);
      (**(code **)(**(long **)(*(long *)(this + 0x28) + 0x20) + 0x28))
                (*(long **)(*(long *)(this + 0x28) + 0x20),local_a8);
      if ((local_a8[0] != (SceneObject *)0x0) &&
         (iVar13 = *(int *)(local_a8[0] + 8), *(int *)(local_a8[0] + 8) = iVar13 + -1,
         iVar13 + -1 == 0)) {
        (**(code **)(*(long *)local_a8[0] + 8))();
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < (ulong)(*(long *)(param_1 + 8) - *(long *)param_1 >> 3));
  }
  if (*(long *)(lVar2 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


