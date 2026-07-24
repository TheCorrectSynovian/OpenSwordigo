/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054909c
 * Function: Caver::MeshInstance::SkinWithBoneMatrices
 * Signature: undefined __thiscall SkinWithBoneMatrices(MeshInstance * this, Matrix4 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshInstance::SkinWithBoneMatrices(Caver::Matrix4 const*) */

void __thiscall Caver::MeshInstance::SkinWithBoneMatrices(MeshInstance *this,Matrix4 *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)this;
  this[0xb2] = (MeshInstance)0x1;
  C_Matrix4Vector3ArraySkin
            (*piVar1,(float *)param_1,1.0,piVar1[0x1e],*(int **)(piVar1 + 0x20),piVar1[10],
             *(float **)(piVar1 + 0xc),*(int *)(this + 0x20),*(float **)(this + 0x28));
  if (0 < *(int *)(this + 0x34)) {
    piVar1 = *(int **)this;
                    /* try { // try from 005490f4 to 00649103 has its CatchHandler @ 00549420 */
                    /* try { // try from 00549104 to 0064910f has its CatchHandler @ 005493b4 */
                    /* try { // try from 00549110 to 00649173 has its CatchHandler @ 00548e94 */
    C_Matrix4Vector3ArraySkin
              (*piVar1,(float *)param_1,0.0,piVar1[0x1e],*(int **)(piVar1 + 0x20),piVar1[0x10],
               *(float **)(piVar1 + 0x12),*(int *)(this + 0x38),*(float **)(this + 0x40));
  }
  this[0xb1] = (MeshInstance)0x1;
  return;
}


