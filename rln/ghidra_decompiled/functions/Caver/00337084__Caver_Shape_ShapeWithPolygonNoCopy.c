/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00337084
 * Function: Caver::Shape::ShapeWithPolygonNoCopy
 * Signature: undefined __thiscall ShapeWithPolygonNoCopy(Shape * this, Polygon * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Shape::ShapeWithPolygonNoCopy(Caver::Polygon*) */

void __thiscall Caver::Shape::ShapeWithPolygonNoCopy(Shape *this,Polygon *param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 *in_x8;
  long lVar3;
  Shape *local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = this;
  boost::detail::shared_count::shared_count<Caver::Polygon>
            ((shared_count *)&local_40,(Polygon *)this);
  boost::detail::sp_enable_shared_from_this(&local_48,this,this);
  plVar2 = local_40;
  if (local_40 == (long *)0x0) {
    *in_x8 = 3;
    *(Shape **)(in_x8 + 2) = local_48;
    *(undefined8 *)(in_x8 + 4) = 0;
  }
  else {
    lVar3 = local_40[1];
    local_40[1] = lVar3 + 1;
    *in_x8 = 3;
    *(Shape **)(in_x8 + 2) = local_48;
    *(long **)(in_x8 + 4) = local_40;
    if (lVar3 + 1 == 0) {
      (**(code **)(*local_40 + 0x10))(local_40);
      lVar3 = plVar2[2];
      plVar2[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
  }
  if ((local_40 != (long *)0x0) && (lVar3 = local_40[1], local_40[1] = lVar3 + -1, lVar3 + -1 == 0))
  {
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar3 = local_40[2];
    local_40[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*local_40 + 0x18))(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


