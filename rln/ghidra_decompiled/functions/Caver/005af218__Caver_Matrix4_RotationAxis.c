/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005af218
 * Function: Caver::Matrix4::RotationAxis
 * Signature: undefined __thiscall RotationAxis(Matrix4 * this, float param_1, float param_2, float param_3, float param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Matrix4::RotationAxis(float, float, float, float) */

void __thiscall
Caver::Matrix4::RotationAxis(Matrix4 *this,float param_1,float param_2,float param_3,float param_4)

{
  long lVar1;
  float *in_x8;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_48;
  float fStack_44;
  float local_40;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c = 0;
  local_48 = param_2;
  fStack_44 = param_3;
  local_40 = param_4;
  Vector4::Normalize((Vector4 *)&local_48);
  dVar3 = sin((double)param_1);
  fVar7 = (float)dVar3;
  dVar3 = cos((double)param_1);
  fVar2 = (float)dVar3;
  fVar5 = 1.0 - fVar2;
  fVar6 = fVar5 * local_48 * fStack_44;
  fVar8 = fVar5 * local_48 * local_40;
  fVar4 = fVar5 * fStack_44 * local_40;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005af414 with catch @ 005af2c0
                       catch(type#1 @ 00000000) { ... } // from try @ 005af690 with catch @ 005af2c0
                        */
  in_x8[3] = 0.0;
  in_x8[7] = 0.0;
  in_x8[0xb] = 0.0;
  in_x8[0xc] = 0.0;
  in_x8[0xd] = 0.0;
  in_x8[0xe] = 0.0;
  in_x8[0xf] = 1.0;
  *in_x8 = local_48 * local_48 * fVar5 + fVar2;
  in_x8[1] = fVar6 + local_40 * fVar7;
  in_x8[4] = fVar6 - local_40 * fVar7;
  in_x8[5] = fVar5 * fStack_44 * fStack_44 + fVar2;
  in_x8[8] = fStack_44 * fVar7 + fVar8;
  in_x8[9] = fVar4 - local_48 * fVar7;
  in_x8[2] = fVar8 - fStack_44 * fVar7;
  in_x8[6] = local_48 * fVar7 + fVar4;
  in_x8[10] = fVar5 * local_40 * local_40 + fVar2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


