/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005af474
 * Function: Caver::Matrix4::LookAt
 * Signature: undefined __thiscall LookAt(Matrix4 * this, Vector3 * param_1, Vector3 * param_2, Vector3 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Matrix4::LookAt(Caver::Vector3 const&, Caver::Vector3 const&, Caver::Vector3 const&) */

void __thiscall
Caver::Matrix4::LookAt(Matrix4 *this,Vector3 *param_1,Vector3 *param_2,Vector3 *param_3)

{
  long lVar1;
  float *in_x8;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_68;
  float fStack_64;
  float local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_68 = (float)*(undefined8 *)this - (float)*(undefined8 *)param_1;
  fStack_64 = (float)((ulong)*(undefined8 *)this >> 0x20) -
              (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  local_60 = *(float *)(this + 8) - *(float *)(param_1 + 8);
  Vector3::Normalize((Vector3 *)&local_68);
  fVar14 = *(float *)(param_2 + 4) * local_60 - *(float *)(param_2 + 8) * fStack_64;
  fVar15 = *(float *)(param_2 + 8) * local_68 - local_60 * *(float *)param_2;
  fVar16 = fStack_64 * *(float *)param_2 - *(float *)(param_2 + 4) * local_68;
  fVar5 = fVar16 * fVar16 + fVar14 * fVar14 + fVar15 * fVar15;
  fVar2 = SQRT(fVar5);
  if (NAN(fVar2)) {
    fVar2 = sqrtf(fVar5);
  }
  fVar5 = DAT_00695770;
  if (DAT_00683944 <= fVar2) {
    fVar11 = *(float *)this;
    fVar13 = *(float *)(this + 4);
    fVar2 = 1.0 / fVar2;
    fVar12 = *(float *)(this + 8);
    fVar14 = fVar14 * fVar2;
    fVar15 = fVar15 * fVar2;
    fVar16 = fVar16 * fVar2;
    fVar2 = fVar16 * fStack_64 - fVar15 * local_60;
    fVar18 = fVar14 * local_60 - fVar16 * local_68;
    fVar19 = -fVar11;
    fVar17 = fVar15 * local_68 - fVar14 * fStack_64;
    in_x8[5] = fVar18;
    in_x8[6] = fStack_64;
    in_x8[1] = fVar2;
    in_x8[2] = local_68;
    in_x8[9] = fVar17;
    in_x8[10] = local_60;
    *in_x8 = fVar14;
    in_x8[4] = fVar15;
    in_x8[8] = fVar16;
    in_x8[3] = 0.0;
    in_x8[7] = 0.0;
    in_x8[0xb] = 0.0;
    *(ulong *)(in_x8 + 0xc) =
         CONCAT44(fVar2 * fVar19 + fVar18 * -fVar13 + fVar17 * -fVar12 + 0.0,
                  fVar14 * fVar19 + fVar15 * -fVar13 + fVar16 * -fVar12 + 0.0);
    in_x8[0xe] = ((local_68 * fVar19 - fStack_64 * fVar13) - local_60 * fVar12) + 0.0;
    in_x8[0xf] = ((fVar13 * fVar5 - fVar11 * 0.0) - fVar12 * 0.0) + 1.0;
  }
  else {
    uVar6 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x20);
    uVar4 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x38);
    uVar3 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x30);
    uVar10 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 8);
    uVar9 = *(undefined8 *)PTR_identityMatrix_007e74c8;
    uVar8 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x18);
    uVar7 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x10);
    *(undefined8 *)(in_x8 + 10) = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x28);
    *(undefined8 *)(in_x8 + 8) = uVar6;
    *(undefined8 *)(in_x8 + 0xe) = uVar4;
    *(undefined8 *)(in_x8 + 0xc) = uVar3;
    *(undefined8 *)(in_x8 + 2) = uVar10;
    *(undefined8 *)in_x8 = uVar9;
    *(undefined8 *)(in_x8 + 6) = uVar8;
    *(undefined8 *)(in_x8 + 4) = uVar7;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005af3ec with catch @ 005af63c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005af380 with catch @ 005af648
                        */
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005af668 to 006af68f has its CatchHandler @ 005af698 */
    __stack_chk_fail();
  }
  return;
}


