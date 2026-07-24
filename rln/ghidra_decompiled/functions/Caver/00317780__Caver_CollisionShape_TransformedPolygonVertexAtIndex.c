/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00317780
 * Function: Caver::CollisionShape::TransformedPolygonVertexAtIndex
 * Signature: undefined __thiscall TransformedPolygonVertexAtIndex(CollisionShape * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollisionShape::TransformedPolygonVertexAtIndex(int) const */

void __thiscall
Caver::CollisionShape::TransformedPolygonVertexAtIndex(CollisionShape *this,int param_1)

{
  Vector2::Transformed
            ((Vector2 *)(*(long *)(*(long *)(this + 8) + 8) + (long)param_1 * 8),
             *(float *)(this + 0x20),*(float *)(this + 0x24));
  return;
}


