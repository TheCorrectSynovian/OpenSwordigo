/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a0964
 * Function: Caver::GUIView::HitTest
 * Signature: undefined __cdecl HitTest(Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::HitTest(Caver::Vector2 const&) */

void Caver::GUIView::HitTest(Vector2 *param_1)

{
  Vector2 *pVVar1;
  long *plVar2;
  long lVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 extraout_x0;
  long *in_x8;
  long lVar6;
  long *plVar7;
  Vector2 *pVVar8;
  Vector2 *pVVar9;
  code *pcVar10;
  undefined *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 005a0994 to 006a09bb has its CatchHandler @ 005a0c98 */
                    /* try { // try from 005a09dc to 006a0a03 has its CatchHandler @ 005a0c88 */
  if (((param_1[0xe4] == (Vector2)0x0) && (param_1[0xe5] != (Vector2)0x0)) &&
     (uVar5 = (**(code **)(*(long *)param_1 + 0xe0))(param_1), (uVar5 & 1) != 0)) {
    pVVar8 = param_1 + 0x20;
    pVVar9 = pVVar8;
    if (*(Vector2 **)pVVar8 != pVVar8) {
      do {
        plVar7 = *(long **)(*(long *)(pVVar9 + 8) + 0x10);
        plVar2 = *(long **)(*(long *)(pVVar9 + 8) + 0x18);
        if (plVar2 != (long *)0x0) {
          plVar2[1] = plVar2[1] + 1;
        }
                    /* try { // try from 005a0a24 to 006a0a4b has its CatchHandler @ 005a0c78 */
        if ((Vector2 *)plVar7[0xb] == param_1) {
          pcVar10 = *(code **)(*plVar7 + 0xe8);
          (**(code **)(*(long *)param_1 + 0x100))(&local_70,param_1);
                    /* try { // try from 005a0a6c to 006a0a93 has its CatchHandler @ 005a0c68 */
          (*pcVar10)(plVar7,&local_70);
          bVar4 = *in_x8 != 0;
                    /* try { // try from 005a0afc to 006a0b23 has its CatchHandler @ 005a0c48 */
          if (((*in_x8 == 0) && (plVar7 = (long *)in_x8[1], plVar7 != (long *)0x0)) &&
             (lVar6 = plVar7[1], plVar7[1] = lVar6 + -1, lVar6 + -1 == 0)) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            lVar6 = plVar7[2];
            plVar7[2] = lVar6 + -1;
            if (lVar6 + -1 == 0) {
              (**(code **)(*plVar7 + 0x18))(plVar7);
            }
          }
        }
        else {
          bVar4 = 4;
        }
        if ((plVar2 != (long *)0x0) && (lVar6 = plVar2[1], plVar2[1] = lVar6 + -1, lVar6 + -1 == 0))
        {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          lVar6 = plVar2[2];
          plVar2[2] = lVar6 + -1;
          if (lVar6 + -1 == 0) {
                    /* try { // try from 005a0ab4 to 006a0adb has its CatchHandler @ 005a0c58 */
            (**(code **)(*plVar2 + 0x18))(plVar2);
          }
        }
        if ((bVar4 | 4) != 4) goto LAB_005a09a8;
        pVVar1 = pVVar9 + 8;
        pVVar9 = *(Vector2 **)pVVar1;
      } while (*(Vector2 **)pVVar8 != *(Vector2 **)pVVar1);
    }
    if (param_1[0xe6] == (Vector2)0x0) {
      plVar7 = *(long **)(param_1 + 0x10);
                    /* try { // try from 005a0b44 to 006a0b6b has its CatchHandler @ 005a0c38 */
      if ((plVar7 == (long *)0x0) || (plVar7[1] == 0)) {
        local_70 = PTR_vtable_007e6120 + 0x10;
        boost::throw_exception<boost::bad_weak_ptr>((bad_weak_ptr *)&local_70);
        std::exception::~exception((exception *)&local_70);
                    /* WARNING: Subroutine does not return */
        FUN_006818c4(extraout_x0);
      }
      lVar6 = plVar7[1] + 1;
      *in_x8 = *(long *)(param_1 + 8);
      in_x8[1] = (long)plVar7;
      plVar7[1] = lVar6;
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        lVar6 = plVar7[2];
        plVar7[2] = lVar6 + -1;
        if (lVar6 + -1 == 0) {
                    /* try { // try from 005a0b8c to 006a0bb3 has its CatchHandler @ 005a0c28 */
          (**(code **)(*plVar7 + 0x18))(plVar7);
        }
      }
      goto LAB_005a09a8;
    }
  }
  *in_x8 = 0;
  in_x8[1] = 0;
LAB_005a09a8:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


