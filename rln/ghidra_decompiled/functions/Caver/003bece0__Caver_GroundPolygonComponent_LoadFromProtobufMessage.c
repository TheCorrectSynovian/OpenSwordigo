/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003bece0
 * Function: Caver::GroundPolygonComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(GroundPolygonComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundPolygonComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::GroundPolygonComponent::LoadFromProtobufMessage
          (GroundPolygonComponent *this,Component *param_1)

{
  ExtensionSet *this_00;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined8 local_80;
  undefined8 uStack_78;
  int local_70;
  undefined4 uStack_6c;
  void *apvStack_68 [3];
  undefined2 local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  this_00 = (ExtensionSet *)(param_1 + 8);
  lVar9 = google::protobuf::internal::ExtensionSet::GetMessage
                    (this_00,*(int *)PTR_extension_007e5308,
                     *(MessageLite **)(PTR_extension_007e5308 + 8));
  this[0xb0] = *(GroundPolygonComponent *)(lVar9 + 0x58);
  uVar4 = *(uint *)(lVar9 + 0x6c);
  if ((uVar4 >> 4 & 1) != 0) {
    *(undefined4 *)(this + 0xa8) = *(undefined4 *)(lVar9 + 0x5c);
  }
  if ((uVar4 >> 5 & 1) != 0) {
    *(undefined4 *)(this + 0xac) = *(undefined4 *)(lVar9 + 0x60);
  }
  if ((uVar4 >> 6 & 1) != 0) {
    *(undefined4 *)(this + 0xb4) = *(undefined4 *)(lVar9 + 100);
  }
  this[0xb8] = *(GroundPolygonComponent *)(lVar9 + 0x68);
  puVar7 = PTR_default_instance__007e5920;
  lVar11 = *(long *)PTR_default_instance__007e5920;
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar11 = lVar9;
  }
  Program::LoadFromProtobufMessage((Program *)(this + 0xc0),*(Program **)(lVar11 + 0x10));
  if (0 < *(int *)(lVar9 + 0x20)) {
    Polygon::Polygon((Polygon *)&local_70,*(int *)(lVar9 + 0x20),(Vector2 *)0x0,true);
    iVar5 = *(int *)(lVar9 + 0x20);
    if (0 < iVar5) {
      lVar12 = *(long *)(lVar9 + 0x18);
      lVar11 = 0;
      puVar1 = (undefined4 *)((long)apvStack_68[0] + (long)local_70 * 8);
      puVar13 = (undefined4 *)((long)apvStack_68[0] + 4);
      do {
        lVar14 = *(long *)(lVar12 + lVar11 * 8);
        uVar2 = *(undefined4 *)(lVar14 + 0xc);
        uVar3 = *(undefined4 *)(lVar14 + 0x10);
        puVar13[-1] = uVar2;
        *puVar13 = uVar3;
        if (lVar11 == 0) {
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
        }
        lVar11 = lVar11 + 1;
        puVar13 = puVar13 + 2;
      } while (lVar11 < iVar5);
    }
    *(int *)(this + 0x70) = local_70;
    std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::operator=
              ((vector<Caver::Vector2,std::allocator<Caver::Vector2>> *)(this + 0x78),
               (vector *)apvStack_68);
    *(undefined2 *)(this + 0x90) = local_50;
    Polygon::Bounds();
    *(undefined8 *)(this + 0xa0) = uStack_78;
    *(undefined8 *)(this + 0x98) = local_80;
    Component::UpdateObjectBounds((Component *)this);
    if (apvStack_68[0] != (void *)0x0) {
      operator_delete(apvStack_68[0]);
    }
  }
  puVar8 = PTR_extension_007e6128;
  uVar10 = google::protobuf::internal::ExtensionSet::Has(this_00,*(int *)PTR_extension_007e6128);
  if (((uVar10 & 1) != 0) &&
     (lVar11 = google::protobuf::internal::ExtensionSet::GetMessage
                         (this_00,*(int *)puVar8,*(MessageLite **)(puVar8 + 8)),
     (*(byte *)(lVar11 + 0x28) >> 2 & 1) != 0)) {
    lVar12 = *(long *)PTR_default_instance__007e7b10;
    if (*(long *)(lVar11 + 0x20) != 0) {
      lVar12 = lVar11;
    }
    LoadPolygonFromProtobufMessage((Polygon *)(this + 0x70),*(Polygon **)(lVar12 + 0x20));
  }
  if ((*(byte *)(lVar9 + 0x6c) >> 2 & 1) != 0) {
    lVar11 = *(long *)puVar7;
    if (*(long *)(lVar9 + 0x50) != 0) {
      lVar11 = lVar9;
    }
    LoadPolygonFromProtobufMessage((Polygon *)(this + 0x70),*(Polygon **)(lVar11 + 0x50));
    Polygon::Bounds();
    *(void **)(this + 0xa0) = apvStack_68[0];
    *(ulong *)(this + 0x98) = CONCAT44(uStack_6c,local_70);
    Component::UpdateObjectBounds((Component *)this);
  }
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


