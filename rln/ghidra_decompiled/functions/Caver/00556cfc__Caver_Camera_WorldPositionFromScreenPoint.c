/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00556cfc
 * Function: Caver::Camera::WorldPositionFromScreenPoint
 * Signature: undefined __cdecl WorldPositionFromScreenPoint(Vector2 param_1, Rectangle * param_2, float param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Camera::WorldPositionFromScreenPoint(Caver::Vector2, Caver::Rectangle const&, float) const
    */

void Caver::Camera::WorldPositionFromScreenPoint(float param_1,Vector2 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  NEON_fmov(0xbf800000,4);
  RayFromScreenPoint(param_2);
  Ray3::IntersectionWithXYPlane(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00556c80 with catch @ 00556d6c
                        */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


