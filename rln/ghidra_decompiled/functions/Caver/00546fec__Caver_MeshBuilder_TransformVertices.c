/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00546fec
 * Function: Caver::MeshBuilder::TransformVertices
 * Signature: undefined __thiscall TransformVertices(MeshBuilder * this, Matrix4 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshBuilder::TransformVertices(Caver::Matrix4 const&) */

void __thiscall Caver::MeshBuilder::TransformVertices(MeshBuilder *this,Matrix4 *param_1)

{
  long lVar1;
  float afStack_78 [16];
  long local_38;
  
                    /* try { // try from 00546fec to 00646ff3 has its CatchHandler @ 00547090 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00547020 to 0064702b has its CatchHandler @ 00547038 */
  C_Matrix4Vector3ArrayMul
            (*(int *)(this + 0x10),(float *)param_1,0x44,*(float **)(this + 0x18),0x44,
             *(float **)(this + 0x18));
                    /* catch() { ... } // from try @ 00547020 with catch @ 00547038 */
  if (0 < *(int *)(*(long *)this + 0x3c)) {
    Matrix4::InverseTranspose3x3();
                    /* try { // try from 0054705c to 00647083 has its CatchHandler @ 0054708c */
    C_Matrix4Vector3ArrayMul
              (*(int *)(this + 0x10),afStack_78,0.0,0x44,(float *)(*(long *)(this + 0x18) + 0x10),
               0x44,(float *)(*(long *)(this + 0x18) + 0x10));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00547084 to 0064709f has its CatchHandler @ 00546fd4 */
                    /* catch() { ... } // from try @ 0054705c with catch @ 0054708c */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00546fec with catch @ 00547090 */
  __stack_chk_fail();
}


