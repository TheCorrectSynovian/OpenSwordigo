/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003beab8
 * Function: Caver::GroundPolygonComponent::SetPolygon
 * Signature: undefined __thiscall SetPolygon(GroundPolygonComponent * this, Polygon * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundPolygonComponent::SetPolygon(Caver::Polygon const&) */

void __thiscall
Caver::GroundPolygonComponent::SetPolygon(GroundPolygonComponent *this,Polygon *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)param_1;
  std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::operator=
            ((vector<Caver::Vector2,std::allocator<Caver::Vector2>> *)(this + 0x78),
             (vector *)(param_1 + 8));
  *(undefined2 *)(this + 0x90) = *(undefined2 *)(param_1 + 0x20);
  Polygon::Bounds();
  *(undefined8 *)(this + 0xa0) = uStack_40;
  *(undefined8 *)(this + 0x98) = local_48;
  Component::UpdateObjectBounds((Component *)this);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


