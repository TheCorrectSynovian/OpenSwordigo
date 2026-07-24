/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00556b74
 * Function: Caver::Camera::ScreenPointFromWorldPosition
 * Signature: undefined __cdecl ScreenPointFromWorldPosition(Vector3 * param_1, Rectangle * param_2, float * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Camera::ScreenPointFromWorldPosition(Caver::Vector3 const&, Caver::Rectangle const&,
   float*) const */

void Caver::Camera::ScreenPointFromWorldPosition(Vector3 *param_1,Rectangle *param_2,float *param_3)

{
  long lVar1;
  float *in_x3;
  undefined8 *in_x8;
  Vector2 local_70 [8];
  Vector3 local_68 [8];
  float local_60;
  undefined8 local_58;
  float local_50;
  undefined4 uStack_4c;
  Vector4 aVStack_48 [12];
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_58 = *(undefined8 *)param_2;
                    /* try { // try from 00556bac to 00656c7f has its CatchHandler @ 00556bac
                       catch(type#1 @ 00000000) { ... } // from try @ 00556bac with catch @ 00556bac
                       catch(type#1 @ 00000000) { ... } // from try @ 00556ca8 with catch @ 00556bac
                       catch(type#1 @ 00000000) { ... } // from try @ 00556db8 with catch @ 00556bac
                        */
  local_50 = *(float *)(param_2 + 8);
  uStack_4c = 0x3f800000;
  C_Matrix4Vector4Mul((float *)(param_1 + 0xac),(float *)&local_58,(float *)aVStack_48);
  Vector3::Vector3(local_68,aVStack_48);
  local_50 = 1.0 / ABS(local_3c);
  local_58 = CONCAT44(local_68._4_4_ * local_50,local_68._0_4_ * local_50);
  local_50 = local_50 * local_60;
  if (in_x3 != (float *)0x0) {
    *in_x3 = local_50;
  }
  Vector2::Vector2(local_70,(Vector3 *)&local_58);
  *in_x8 = CONCAT44((float)((ulong)*(undefined8 *)param_3 >> 0x20) +
                    (float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20) *
                    (local_70._4_4_ * 0.5 + 0.5),
                    (float)*(undefined8 *)param_3 +
                    (float)*(undefined8 *)(param_3 + 2) * (local_70._0_4_ * 0.5 + 0.5));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


