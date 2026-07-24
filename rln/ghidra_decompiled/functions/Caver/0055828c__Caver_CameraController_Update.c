/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055828c
 * Function: Caver::CameraController::Update
 * Signature: undefined __cdecl Update(float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::CameraController::Update(float) */

void Caver::CameraController::Update(float param_1)

{
  long lVar1;
  CameraController *in_x0;
  ulong uVar2;
  Matrix4 *extraout_x1;
  Vector3 *in_x3;
  Vector3 *pVVar3;
  Vector3 *this;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined4 local_a8;
  undefined8 local_a4;
  float local_9c;
  undefined8 local_98;
  float local_90;
  Quaternion aQStack_88 [64];
  long local_48;
  
  fVar5 = DAT_00688634;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pVVar3 = (Vector3 *)(in_x0 + 0x3c);
  this = (Vector3 *)(in_x0 + 0x30);
  fVar10 = param_1 * DAT_00688634;
  fVar9 = fVar10 * (1.0 - *(float *)(in_x0 + 0x1c));
  fVar6 = (float)*(undefined8 *)this;
  fVar7 = (float)((ulong)*(undefined8 *)this >> 0x20);
  if (1.0 < fVar9) {
    fVar9 = 1.0;
  }
  uVar8 = CONCAT44(fVar7 + ((float)((ulong)*(undefined8 *)(in_x0 + 0x10) >> 0x20) - fVar7) * fVar9,
                   fVar6 + ((float)*(undefined8 *)(in_x0 + 0x10) - fVar6) * fVar9);
  *(undefined8 *)this = uVar8;
  fVar9 = *(float *)(in_x0 + 0x38) + (*(float *)(in_x0 + 0x18) - *(float *)(in_x0 + 0x38)) * fVar9;
  lVar4 = *(long *)(in_x0 + 0x58);
  fVar10 = fVar10 * (1.0 - *(float *)(in_x0 + 0x2c));
  fVar6 = (float)*(undefined8 *)pVVar3;
  fVar7 = (float)((ulong)*(undefined8 *)pVVar3 >> 0x20);
  if (1.0 < fVar10) {
    fVar10 = 1.0;
  }
  *(float *)(in_x0 + 0x38) = fVar9;
  *(ulong *)pVVar3 =
       CONCAT44(fVar7 + ((float)((ulong)*(undefined8 *)(in_x0 + 0x20) >> 0x20) - fVar7) * fVar10,
                fVar6 + ((float)*(undefined8 *)(in_x0 + 0x20) - fVar6) * fVar10);
  *(float *)(in_x0 + 0x44) =
       *(float *)(in_x0 + 0x44) + (*(float *)(in_x0 + 0x28) - *(float *)(in_x0 + 0x44)) * fVar10;
  *(undefined8 *)(lVar4 + 0x10) = uVar8;
  *(float *)(lVar4 + 0x18) = fVar9;
  if (DAT_00683944 < *(float *)(in_x0 + 0x98)) {
    *(float *)(in_x0 + 0x98) = *(float *)(in_x0 + 0x98) - param_1;
    fVar6 = 0.0;
    if (*(float *)(in_x0 + 0x94) + param_1 <= 1.0) {
      fVar6 = *(float *)(in_x0 + 0x94) + param_1;
    }
    fVar7 = fVar6 * DAT_00695820;
    *(float *)(in_x0 + 0x94) = fVar6;
    fVar5 = sinf(fVar6 * fVar5);
                    /* try { // try from 005583b0 to 006583b3 has its CatchHandler @ 00558638 */
                    /* try { // try from 005583b4 to 00658403 has its CatchHandler @ 00557d1c */
    *(ulong *)(lVar4 + 0x10) =
         CONCAT44(fVar5 * (fVar7 + 1.0) * 6.0 +
                  (float)((ulong)*(undefined8 *)(lVar4 + 0x10) >> 0x20),
                  (float)*(undefined8 *)(lVar4 + 0x10) + 0.0);
    *(float *)(lVar4 + 0x18) = *(float *)(lVar4 + 0x18) + 0.0;
  }
  uVar2 = Vector3::IsClose(this,pVVar3,DAT_00683734);
  if ((uVar2 & 1) == 0) {
    local_98 = CONCAT44((float)((ulong)*(undefined8 *)(in_x0 + 0x3c) >> 0x20) -
                        (float)((ulong)*(undefined8 *)(in_x0 + 0x30) >> 0x20),
                        (float)*(undefined8 *)(in_x0 + 0x3c) - (float)*(undefined8 *)(in_x0 + 0x30))
    ;
                    /* try { // try from 00558404 to 0065842b has its CatchHandler @ 00558650 */
    local_90 = *(float *)(in_x0 + 0x44) - *(float *)(in_x0 + 0x38);
    Matrix4::LookAt((Matrix4 *)PTR_Vector3Zero_007e5988,(Vector3 *)&local_98,
                    (Vector3 *)(in_x0 + 0x48),in_x3);
    lVar4 = *(long *)(in_x0 + 0x58);
    Quaternion::FromRotationMatrix(aQStack_88,extraout_x1);
    *(undefined4 *)(lVar4 + 0x1c) = local_a8;
    *(ulong *)(lVar4 + 0x20) = CONCAT44(-(float)((ulong)local_a4 >> 0x20),-(float)local_a4);
    *(float *)(lVar4 + 0x28) = -local_9c;
  }
  lVar4 = *(long *)(in_x0 + 0x68);
  if (lVar4 == 0) {
                    /* try { // try from 005584bc to 006584d3 has its CatchHandler @ 00558650 */
    if (*(long *)(in_x0 + 0x70) == 0) {
                    /* try { // try from 005584d4 to 0065860b has its CatchHandler @ 00557d1c */
      if (((*(int *)in_x0 == 2) &&
          (fVar5 = (float)*(undefined8 *)(in_x0 + 0x14) - (float)*(undefined8 *)(in_x0 + 0x34),
          fVar6 = (float)((ulong)*(undefined8 *)(in_x0 + 0x14) >> 0x20) -
                  (float)((ulong)*(undefined8 *)(in_x0 + 0x34) >> 0x20),
          (*(float *)(in_x0 + 0x10) - *(float *)(in_x0 + 0x30)) *
          (*(float *)(in_x0 + 0x10) - *(float *)(in_x0 + 0x30)) + fVar5 * fVar5 + fVar6 * fVar6 <
          _DAT_00689b20)) &&
         (fVar5 = (float)*(undefined8 *)(in_x0 + 0x24) - (float)*(undefined8 *)(in_x0 + 0x40),
         fVar6 = (float)((ulong)*(undefined8 *)(in_x0 + 0x24) >> 0x20) -
                 (float)((ulong)*(undefined8 *)(in_x0 + 0x40) >> 0x20),
         (*(float *)(in_x0 + 0x20) - *(float *)(in_x0 + 0x3c)) *
         (*(float *)(in_x0 + 0x20) - *(float *)(in_x0 + 0x3c)) + fVar5 * fVar5 + fVar6 * fVar6 <
         _DAT_00689b20)) {
        *(undefined4 *)in_x0 = 0;
      }
    }
    else {
      FocusAtShape(in_x0,(intrusive_ptr *)(in_x0 + 0x70),(Rectangle *)(in_x0 + 0x84),false);
    }
  }
  else {
                    /* try { // try from 00558458 to 00658463 has its CatchHandler @ 005585e8 */
    fVar7 = *(float *)(lVar4 + 0x78);
    fVar5 = (float)*(undefined8 *)(lVar4 + 0x70) + (float)*(undefined8 *)(in_x0 + 0x78);
    fVar6 = (float)((ulong)*(undefined8 *)(lVar4 + 0x70) >> 0x20) +
            (float)((ulong)*(undefined8 *)(in_x0 + 0x78) >> 0x20);
    *(ulong *)(in_x0 + 0x20) = CONCAT44(fVar6,fVar5);
    fVar7 = fVar7 + *(float *)(in_x0 + 0x80);
    *(undefined4 *)in_x0 = 1;
                    /* try { // try from 00558484 to 006584ab has its CatchHandler @ 005585e4 */
    *(undefined4 *)(in_x0 + 0x1c) = 0x3f7851ec;
    *(float *)(in_x0 + 0x28) = fVar7;
    *(undefined4 *)(in_x0 + 0x2c) = 0x3f75c28f;
    *(ulong *)(in_x0 + 0x10) =
         CONCAT44(fVar6 + (float)((ulong)*(undefined8 *)(in_x0 + 4) >> 0x20),
                  fVar5 + (float)*(undefined8 *)(in_x0 + 4));
    *(float *)(in_x0 + 0x18) = fVar7 + *(float *)(in_x0 + 0xc);
  }
  Camera::EvaluateViewMatrix();
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


