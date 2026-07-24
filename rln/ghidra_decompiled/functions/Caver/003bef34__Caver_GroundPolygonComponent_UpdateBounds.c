/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003bef34
 * Function: Caver::GroundPolygonComponent::UpdateBounds
 * Signature: undefined __thiscall UpdateBounds(GroundPolygonComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundPolygonComponent::UpdateBounds() */

void __thiscall Caver::GroundPolygonComponent::UpdateBounds(GroundPolygonComponent *this)

{
  long lVar1;
  long lVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  Polygon::Bounds();
  *(undefined8 *)(this + 0xa0) = uStack_30;
  *(undefined8 *)(this + 0x98) = local_38;
  Component::UpdateObjectBounds((Component *)this);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


