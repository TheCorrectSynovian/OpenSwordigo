/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c2c38
 * Function: Caver::WaterMeshComponent::UpdateBounds
 * Signature: undefined __thiscall UpdateBounds(WaterMeshComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WaterMeshComponent::UpdateBounds() */

void __thiscall Caver::WaterMeshComponent::UpdateBounds(WaterMeshComponent *this)

{
  long lVar1;
  long lVar2;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(this + 0x80) != 0) ||
     (ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this),
     *(long *)(this + 0x80) != 0)) {
    Shape::Bounds();
    if ((DAT_00683488 < ABS(local_38 - *(float *)(this + 0x88))) ||
       (((DAT_00683488 < ABS(fStack_34 - *(float *)(this + 0x8c)) ||
         (DAT_00683488 < ABS(fStack_30 - *(float *)(this + 0x90)))) ||
        (DAT_00683488 < ABS(fStack_2c - *(float *)(this + 0x94)))))) {
      *(ulong *)(this + 0x90) = CONCAT44(fStack_2c,fStack_30);
      *(ulong *)(this + 0x88) = CONCAT44(fStack_34,local_38);
      Component::UpdateObjectBounds((Component *)this);
      VertexArrayObject::Reset((VertexArrayObject *)(this + 0xe0));
      this[0x128] = (WaterMeshComponent)0x0;
      this[0x140] = (WaterMeshComponent)0x1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


