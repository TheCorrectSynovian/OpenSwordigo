/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00593d7c
 * Function: std::copy_backward<Caver::GUIApplication::QueuedEvent>
 * Signature: _Deque_iterator copy_backward<Caver::GUIApplication::QueuedEvent>(_Deque_iterator param_1, _Deque_iterator param_2, _Deque_iterator param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Deque_iterator<Caver::GUIApplication::QueuedEvent, Caver::GUIApplication::QueuedEvent&,
   Caver::GUIApplication::QueuedEvent*>
   std::copy_backward<Caver::GUIApplication::QueuedEvent>(std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,
   Caver::GUIApplication::QueuedEvent const&, Caver::GUIApplication::QueuedEvent const*>,
   std::_Deque_iterator<Caver::GUIApplication::QueuedEvent, Caver::GUIApplication::QueuedEvent
   const&, Caver::GUIApplication::QueuedEvent const*>,
   std::_Deque_iterator<Caver::GUIApplication::QueuedEvent, Caver::GUIApplication::QueuedEvent&,
   Caver::GUIApplication::QueuedEvent*>) */

void std::copy_backward<Caver::GUIApplication::QueuedEvent>
               (long *param_1,long *param_2,long *param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar12 = *param_3;
  lVar10 = param_3[1];
  lVar11 = ((param_3[3] - param_2[3]) - (param_3[3] - param_2[3] >> 3)) +
           (lVar12 - lVar10 >> 3) * -0x71c71c71c71c71c7 +
           (param_2[2] - *param_2 >> 3) * -0x71c71c71c71c71c7 + -7;
  if (lVar11 < 1) {
    lVar7 = *param_4;
    lVar4 = param_4[1];
  }
  else {
    lVar7 = *param_4;
    lVar4 = param_4[1];
    do {
      lVar4 = lVar7 - lVar4;
      if (lVar12 - lVar10 == 0) {
        lVar9 = *(long *)(param_3[3] + -8) + 0x1f8;
        lVar2 = 7;
        if (lVar4 != 0) goto LAB_00593e38;
LAB_00593e58:
        lVar7 = *(long *)(param_4[3] + -8) + 0x1f8;
        lVar5 = 7;
      }
      else {
        lVar2 = (lVar12 - lVar10 >> 3) * -0x71c71c71c71c71c7;
        lVar9 = lVar12;
        if (lVar4 == 0) goto LAB_00593e58;
LAB_00593e38:
        lVar5 = (lVar4 >> 3) * -0x71c71c71c71c71c7;
      }
      if (lVar2 <= lVar5) {
        lVar5 = lVar2;
      }
      if (lVar11 <= lVar5) {
        lVar5 = lVar11;
      }
      if (0 < lVar5 * 0x48) {
        lVar10 = 0;
        lVar12 = (ulong)(lVar5 * 0x48) / 0x48 + 1;
        do {
          lVar4 = lVar9 + lVar10;
          lVar2 = lVar7 + lVar10;
          *(undefined8 *)(lVar2 + -0x48) = *(undefined8 *)(lVar4 + -0x48);
          boost::function<void(void*,Caver::GUIEvent*)>::operator=
                    ((function<void(void*,Caver::GUIEvent*)> *)(lVar2 + -0x40),
                     (function *)(lVar4 + -0x40));
          uVar1 = *(undefined8 *)(lVar4 + -0x20);
          lVar4 = *(long *)(lVar4 + -0x18);
          if (lVar4 != 0) {
            *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
          }
          plVar8 = *(long **)(lVar2 + -0x18);
          *(undefined8 *)(lVar2 + -0x20) = uVar1;
          *(long *)(lVar2 + -0x18) = lVar4;
          if ((plVar8 != (long *)0x0) &&
             (lVar4 = plVar8[1], plVar8[1] = lVar4 + -1, lVar4 + -1 == 0)) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            lVar4 = plVar8[2];
            plVar8[2] = lVar4 + -1;
            if (lVar4 + -1 == 0) {
              (**(code **)(*plVar8 + 0x18))(plVar8);
            }
          }
          uVar1 = *(undefined8 *)(lVar9 + lVar10 + -0x10);
          lVar4 = *(long *)(lVar9 + lVar10 + -8);
          if (lVar4 != 0) {
            *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
          }
          lVar2 = lVar7 + lVar10;
          plVar8 = *(long **)(lVar2 + -8);
          *(undefined8 *)(lVar2 + -0x10) = uVar1;
          *(long *)(lVar2 + -8) = lVar4;
          if ((plVar8 != (long *)0x0) &&
             (lVar4 = plVar8[1], plVar8[1] = lVar4 + -1, lVar4 + -1 == 0)) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            lVar4 = plVar8[2];
                    /* try { // try from 00593f74 to 00694027 has its CatchHandler @ 00593f74
                       catch(type#1 @ 00000000) { ... } // from try @ 00593f74 with catch @ 00593f74
                       catch(type#1 @ 00000000) { ... } // from try @ 0059403c with catch @ 00593f74
                       catch(type#1 @ 00000000) { ... } // from try @ 0059411c with catch @ 00593f74
                        */
            plVar8[2] = lVar4 + -1;
            if (lVar4 + -1 == 0) {
              (**(code **)(*plVar8 + 0x18))(plVar8);
            }
          }
          lVar12 = lVar12 + -1;
          lVar10 = lVar10 + -0x48;
        } while (1 < lVar12);
        lVar12 = *param_3;
        lVar10 = param_3[1];
      }
      uVar3 = (lVar12 - lVar10 >> 3) * -0x71c71c71c71c71c7 - lVar5;
      if ((long)uVar3 < 0) {
        uVar6 = ~uVar3 / 7 ^ 0xffffffffffffffff;
LAB_0059401c:
        lVar12 = param_3[3];
                    /* try { // try from 00594028 to 0069403b has its CatchHandler @ 005940d0 */
        param_3[3] = lVar12 + uVar6 * 8;
        lVar10 = *(long *)(lVar12 + uVar6 * 8);
                    /* try { // try from 0059403c to 006940f3 has its CatchHandler @ 00593f74 */
        param_3[1] = lVar10;
        param_3[2] = lVar10 + 0x1f8;
        lVar12 = lVar10 + (uVar6 * -7 + uVar3) * 0x48;
      }
      else {
        if (6 < (long)uVar3) {
          uVar6 = uVar3 / 7;
          goto LAB_0059401c;
        }
        lVar12 = lVar12 + lVar5 * -0x48;
      }
      *param_3 = lVar12;
      lVar4 = param_4[1];
      uVar3 = (*param_4 - lVar4 >> 3) * -0x71c71c71c71c71c7 - lVar5;
      if ((long)uVar3 < 0) {
        uVar6 = ~uVar3 / 7 ^ 0xffffffffffffffff;
LAB_005940a0:
        lVar7 = param_4[3];
        param_4[3] = lVar7 + uVar6 * 8;
        lVar4 = *(long *)(lVar7 + uVar6 * 8);
        lVar7 = lVar4 + (uVar6 * -7 + uVar3) * 0x48;
        param_4[1] = lVar4;
        param_4[2] = lVar4 + 0x1f8;
      }
      else {
        if (6 < (long)uVar3) {
          uVar6 = uVar3 / 7;
          goto LAB_005940a0;
        }
        lVar7 = *param_4 + lVar5 * -0x48;
      }
      lVar11 = lVar11 - lVar5;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00594028 with catch @ 005940d0
                        */
      *param_4 = lVar7;
    } while (0 < lVar11);
  }
  *param_1 = lVar7;
  param_1[1] = lVar4;
                    /* try { // try from 005940f4 to 0069411b has its CatchHandler @ 00594124 */
  param_1[2] = param_4[2];
  param_1[3] = param_4[3];
                    /* try { // try from 0059411c to 00694127 has its CatchHandler @ 00593f74 */
  return;
}


