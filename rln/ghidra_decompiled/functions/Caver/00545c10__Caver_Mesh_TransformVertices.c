/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00545c10
 * Function: Caver::Mesh::TransformVertices
 * Signature: undefined __thiscall TransformVertices(Mesh * this, Matrix4 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Mesh::TransformVertices(Caver::Matrix4 const&) */

void __thiscall Caver::Mesh::TransformVertices(Mesh *this,Matrix4 *param_1)

{
  long lVar1;
  float afStack_78 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00545c38 to 00645c73 has its CatchHandler @ 00545c38
                       catch() { ... } // from try @ 00545c38 with catch @ 00545c38
                       catch() { ... } // from try @ 00545c7c with catch @ 00545c38
                       catch() { ... } // from try @ 00545d10 with catch @ 00545c38
                       catch() { ... } // from try @ 00545e24 with catch @ 00545c38 */
  if ((*(int *)this != 0) &&
     (C_Matrix4Vector3ArrayMul
                (*(int *)this,(float *)param_1,*(int *)(this + 0x28),*(float **)(this + 0x30),
                 *(int *)(this + 0x28),*(float **)(this + 0x30)), 0 < *(int *)(this + 0x3c))) {
    Matrix4::InverseTranspose3x3();
                    /* try { // try from 00545c74 to 00645c7b has its CatchHandler @ 00545e30 */
                    /* try { // try from 00545c7c to 00645cbf has its CatchHandler @ 00545c38 */
    C_Matrix4Vector3ArrayMul
              (*(int *)this,afStack_78,0.0,*(int *)(this + 0x40),*(float **)(this + 0x48),
               *(int *)(this + 0x40),*(float **)(this + 0x48));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


