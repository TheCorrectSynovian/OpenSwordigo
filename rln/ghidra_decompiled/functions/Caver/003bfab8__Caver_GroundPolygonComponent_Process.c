/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003bfab8
 * Function: Caver::GroundPolygonComponent::Process
 * Signature: undefined __thiscall Process(GroundPolygonComponent * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundPolygonComponent::Process(std::vector<boost::intrusive_ptr<Caver::Component>,
   std::allocator<boost::intrusive_ptr<Caver::Component> > >*) */

undefined8 __thiscall
Caver::GroundPolygonComponent::Process(GroundPolygonComponent *this,vector *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  long *plVar7;
  CollisionShapeComponent *this_00;
  Polygon *extraout_x1;
  Vector2 *pVVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  code *pcVar12;
  long lVar13;
  ulong uVar14;
  undefined4 local_c8;
  undefined4 uStack_c4;
  Vector2 *local_c0;
  Vector2 *local_b8;
  Vector2 *local_b0;
  void *local_a8;
  void *pvStack_a0;
  undefined8 local_98;
  CollisionShapeComponent *local_90;
  void *local_88;
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((this[0xb0] != (GroundPolygonComponent)0x0) && (2 < *(int *)(this + 0x70))) {
    pVVar8 = (Vector2 *)0x0;
    iVar11 = 0;
    local_a8 = (void *)0x0;
    pvStack_a0 = (void *)0x0;
    local_98 = 0;
    local_c0 = (Vector2 *)0x0;
    local_b8 = (Vector2 *)0x0;
    local_b0 = (Vector2 *)0x0;
    do {
      puVar1 = (undefined4 *)(*(long *)(this + 0x78) + (long)iVar11 * 8);
      local_c8 = *puVar1;
      uStack_c4 = puVar1[1];
      if (local_b8 == local_b0) {
        std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::_M_insert_aux
                  ((vector<Caver::Vector2,std::allocator<Caver::Vector2>> *)&local_c0,local_b0,
                   &local_c8);
        pVVar8 = local_c0;
      }
      else {
        *(undefined4 *)local_b8 = local_c8;
        *(undefined4 *)(local_b8 + 4) = uStack_c4;
        local_b8 = local_b8 + 8;
      }
      if ((9 < (ulong)((long)local_b8 - (long)pVVar8 >> 3)) && (3 < *(int *)(this + 0x70) - iVar11))
      {
        Polygon::Polygon((Polygon *)&local_90,(int)((ulong)((long)local_b8 - (long)pVVar8) >> 3),
                         pVVar8,false);
        std::vector<Caver::Polygon,std::allocator<Caver::Polygon>>::push_back
                  ((vector<Caver::Polygon,std::allocator<Caver::Polygon>> *)&local_a8,
                   (Polygon *)&local_90);
        if (local_88 != (void *)0x0) {
          operator_delete(local_88);
        }
        iVar11 = iVar11 + -3;
        local_b8 = local_c0;
        pVVar8 = local_c0;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(this + 0x70));
    if (pvStack_a0 == local_a8) {
      Polygon::Polygon((Polygon *)&local_90,(int)((ulong)((long)local_b8 - (long)pVVar8) >> 3),
                       pVVar8,true);
      std::vector<Caver::Polygon,std::allocator<Caver::Polygon>>::push_back
                ((vector<Caver::Polygon,std::allocator<Caver::Polygon>> *)&local_a8,
                 (Polygon *)&local_90);
    }
    else {
      puVar9 = *(undefined8 **)(this + 0x78);
      if (local_b8 == local_b0) {
        std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::_M_insert_aux
                  ((vector<Caver::Vector2,std::allocator<Caver::Vector2>> *)&local_c0);
        puVar9 = *(undefined8 **)(this + 0x78);
      }
      else {
        *(undefined8 *)local_b8 = *puVar9;
        local_b8 = local_b8 + 8;
      }
      if (local_b8 == local_b0) {
        std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::_M_insert_aux
                  ((vector<Caver::Vector2,std::allocator<Caver::Vector2>> *)&local_c0,local_b0,
                   puVar9 + 1);
        puVar9 = *(undefined8 **)(this + 0x78);
      }
      else {
        *(undefined8 *)local_b8 = puVar9[1];
        local_b8 = local_b8 + 8;
      }
      if (local_b8 == local_b0) {
        std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::_M_insert_aux
                  ((vector<Caver::Vector2,std::allocator<Caver::Vector2>> *)&local_c0,local_b0);
      }
      else {
        *(undefined8 *)local_b8 = puVar9[2];
        local_b8 = local_b8 + 8;
      }
      Polygon::Polygon((Polygon *)&local_90,(int)((ulong)((long)local_b8 - (long)local_c0) >> 3),
                       local_c0,false);
      std::vector<Caver::Polygon,std::allocator<Caver::Polygon>>::push_back
                ((vector<Caver::Polygon,std::allocator<Caver::Polygon>> *)&local_a8,
                 (Polygon *)&local_90);
    }
    if (local_88 != (void *)0x0) {
      operator_delete(local_88);
    }
    if (pvStack_a0 != local_a8) {
      lVar13 = 0;
      uVar14 = 0;
      do {
        this_00 = operator_new(0x1d0);
        CollisionShapeComponent::CollisionShapeComponent(this_00);
        this_00[0x17a] = (CollisionShapeComponent)0x1;
        pcVar12 = *(code **)(*(long *)this_00 + 0x118);
        Shape::ShapeWithPolygon((Shape *)((long)local_a8 + lVar13),extraout_x1);
        (*pcVar12)(this_00,&local_90);
        plVar7 = local_80;
        if ((local_80 != (long *)0x0) &&
           (lVar10 = local_80[1], local_80[1] = lVar10 + -1, lVar10 + -1 == 0)) {
          (**(code **)(*local_80 + 0x10))(local_80);
          lVar10 = plVar7[2];
          plVar7[2] = lVar10 + -1;
          if (lVar10 + -1 == 0) {
            (**(code **)(*plVar7 + 0x18))(plVar7);
          }
        }
        *(undefined8 *)(this_00 + 0x150) = *(undefined8 *)(this + 0xa8);
        *(undefined4 *)(this_00 + 0x184) = *(undefined4 *)(this + 0xb4);
        *(GroundPolygonComponent *)(this_00 + 0x188) = this[0xb8];
        CollisionShapeComponent::setOnCollide(this_00,(Program *)(this + 0xc0));
        iVar11 = *(int *)(this_00 + 8);
        *(int *)(this_00 + 8) = iVar11 + 1;
        puVar9 = *(undefined8 **)(param_1 + 8);
        local_90 = this_00;
        if (puVar9 == *(undefined8 **)(param_1 + 0x10)) {
          std::
          vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>>
          ::_M_insert_aux((vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>>
                           *)param_1,puVar9,&local_90);
        }
        else {
          *puVar9 = this_00;
          *(int *)(this_00 + 8) = iVar11 + 2;
          *(undefined8 **)(param_1 + 8) = puVar9 + 1;
        }
        if ((local_90 != (CollisionShapeComponent *)0x0) &&
           (iVar11 = *(int *)(local_90 + 8), *(int *)(local_90 + 8) = iVar11 + -1, iVar11 + -1 == 0)
           ) {
          (**(code **)(*(long *)local_90 + 8))();
        }
        uVar14 = uVar14 + 1;
        lVar13 = lVar13 + 0x28;
      } while (uVar14 < (ulong)(((long)pvStack_a0 - (long)local_a8 >> 3) * -0x3333333333333333));
    }
    pvVar3 = local_a8;
    pvVar4 = pvStack_a0;
    pvVar5 = pvStack_a0;
    if (local_c0 != (Vector2 *)0x0) {
      operator_delete(local_c0);
      pvVar3 = local_a8;
      pvVar4 = pvStack_a0;
      pvVar5 = pvStack_a0;
    }
    for (; pvVar6 = pvStack_a0, pvVar3 != pvStack_a0; pvVar3 = (void *)((long)pvVar3 + 0x28)) {
      pvStack_a0 = pvVar5;
      if (*(void **)((long)pvVar3 + 8) != (void *)0x0) {
        operator_delete(*(void **)((long)pvVar3 + 8));
      }
      pvVar4 = local_a8;
      pvVar5 = pvStack_a0;
      pvStack_a0 = pvVar6;
    }
    pvStack_a0 = pvVar5;
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


