/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003bec04
 * Function: Caver::GroundPolygonComponent::SetDefaultValues
 * Signature: undefined __thiscall SetDefaultValues(GroundPolygonComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::GroundPolygonComponent::SetDefaultValues() */

void __thiscall Caver::GroundPolygonComponent::SetDefaultValues(GroundPolygonComponent *this)

{
  long lVar1;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88 [2];
  void *local_80 [3];
  undefined2 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_58 = _UNK_00689f68;
  local_60 = _DAT_00689f60;
  uStack_48 = _UNK_00689f78;
  uStack_50 = _DAT_00689f70;
  Polygon::Polygon((Polygon *)local_88,4,(Vector2 *)&local_60,true);
  *(undefined4 *)(this + 0x70) = local_88[0];
  std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::operator=
            ((vector<Caver::Vector2,std::allocator<Caver::Vector2>> *)(this + 0x78),
             (vector *)local_80);
  *(undefined2 *)(this + 0x90) = local_68;
  Polygon::Bounds();
  *(undefined8 *)(this + 0xa0) = uStack_90;
  *(undefined8 *)(this + 0x98) = local_98;
  Component::UpdateObjectBounds((Component *)this);
  if (local_80[0] != (void *)0x0) {
    operator_delete(local_80[0]);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


