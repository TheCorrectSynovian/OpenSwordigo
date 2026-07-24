/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00594124
 * Function: std::copy<Caver::GUIApplication::QueuedEvent>
 * Signature: _Deque_iterator copy<Caver::GUIApplication::QueuedEvent>(_Deque_iterator param_1, _Deque_iterator param_2, _Deque_iterator param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Deque_iterator<Caver::GUIApplication::QueuedEvent, Caver::GUIApplication::QueuedEvent&,
   Caver::GUIApplication::QueuedEvent*>
   std::copy<Caver::GUIApplication::QueuedEvent>(std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,
   Caver::GUIApplication::QueuedEvent const&, Caver::GUIApplication::QueuedEvent const*>,
   std::_Deque_iterator<Caver::GUIApplication::QueuedEvent, Caver::GUIApplication::QueuedEvent
   const&, Caver::GUIApplication::QueuedEvent const*>,
   std::_Deque_iterator<Caver::GUIApplication::QueuedEvent, Caver::GUIApplication::QueuedEvent&,
   Caver::GUIApplication::QueuedEvent*>) */

void std::copy<Caver::GUIApplication::QueuedEvent>
               (long *param_1,undefined8 *param_2,long *param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005940f4 with catch @ 00594124
                        */
  lVar5 = param_2[2];
  puVar8 = (undefined8 *)*param_2;
  lVar10 = ((param_3[3] - param_2[3]) - (param_3[3] - param_2[3] >> 3)) +
           (*param_3 - param_3[1] >> 3) * -0x71c71c71c71c71c7 +
           (lVar5 - (long)puVar8 >> 3) * -0x71c71c71c71c71c7 + -7;
  if (0 < lVar10) {
    puVar7 = (undefined8 *)*param_4;
    do {
      lVar5 = (lVar5 - (long)puVar8 >> 3) * -0x71c71c71c71c71c7;
      lVar2 = (param_4[2] - (long)puVar7 >> 3) * -0x71c71c71c71c71c7;
      if (lVar5 <= lVar2) {
        lVar2 = lVar5;
      }
      if (lVar10 <= lVar2) {
        lVar2 = lVar10;
      }
      if (0 < lVar2 * 0x48) {
        lVar5 = lVar2 + 1;
        do {
          *puVar7 = *puVar8;
          boost::function<void(void*,Caver::GUIEvent*)>::operator=
                    ((function<void(void*,Caver::GUIEvent*)> *)(puVar7 + 1),(function *)(puVar8 + 1)
                    );
          uVar1 = puVar8[5];
          lVar3 = puVar8[6];
                    /* try { // try from 00594244 to 006942bb has its CatchHandler @ 00594244
                       catch() { ... } // from try @ 00594244 with catch @ 00594244
                       catch() { ... } // from try @ 005942d0 with catch @ 00594244
                       catch() { ... } // from try @ 00594344 with catch @ 00594244
                       catch() { ... } // from try @ 00594410 with catch @ 00594244
                       catch() { ... } // from try @ 00594484 with catch @ 00594244
                       catch() { ... } // from try @ 00594630 with catch @ 00594244 */
          if (lVar3 != 0) {
            *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
          }
          plVar9 = (long *)puVar7[6];
          puVar7[5] = uVar1;
          puVar7[6] = lVar3;
          if ((plVar9 == (long *)0x0) ||
             (lVar3 = plVar9[1], plVar9[1] = lVar3 + -1, lVar3 + -1 != 0)) {
LAB_00594290:
            uVar1 = puVar8[7];
            lVar3 = puVar8[8];
          }
          else {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            lVar3 = plVar9[2];
            plVar9[2] = lVar3 + -1;
            if (lVar3 + -1 != 0) goto LAB_00594290;
            (**(code **)(*plVar9 + 0x18))(plVar9);
            uVar1 = puVar8[7];
            lVar3 = puVar8[8];
          }
          if (lVar3 != 0) {
            *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
          }
          plVar9 = (long *)puVar7[8];
          puVar7[7] = uVar1;
          puVar7[8] = lVar3;
                    /* try { // try from 005942bc to 006942cf has its CatchHandler @ 005945e4 */
          if ((plVar9 != (long *)0x0) &&
             (lVar3 = plVar9[1], plVar9[1] = lVar3 + -1, lVar3 + -1 == 0)) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
                    /* try { // try from 005942d0 to 0069432f has its CatchHandler @ 00594244 */
            lVar3 = plVar9[2];
            plVar9[2] = lVar3 + -1;
            if (lVar3 + -1 == 0) {
              (**(code **)(*plVar9 + 0x18))(plVar9);
            }
          }
          lVar5 = lVar5 + -1;
          puVar8 = puVar8 + 9;
          puVar7 = puVar7 + 9;
        } while (1 < lVar5);
        puVar8 = (undefined8 *)*param_2;
      }
      uVar4 = lVar2 + ((long)puVar8 - param_2[1] >> 3) * -0x71c71c71c71c71c7;
      if ((long)uVar4 < 0) {
                    /* try { // try from 00594344 to 006943fb has its CatchHandler @ 00594244 */
        uVar6 = ~uVar4 / 7 ^ 0xffffffffffffffff;
LAB_0059436c:
        lVar5 = param_2[3];
        param_2[3] = lVar5 + uVar6 * 8;
        lVar5 = *(long *)(lVar5 + uVar6 * 8);
        puVar8 = (undefined8 *)(lVar5 + (uVar6 * -7 + uVar4) * 0x48);
        param_2[1] = lVar5;
        param_2[2] = lVar5 + 0x1f8;
      }
      else {
                    /* try { // try from 00594330 to 00694343 has its CatchHandler @ 00594594 */
        if (6 < (long)uVar4) {
          uVar6 = uVar4 / 7;
          goto LAB_0059436c;
        }
        puVar8 = puVar8 + lVar2 * 9;
      }
      *param_2 = puVar8;
      lVar5 = param_4[1];
      uVar4 = lVar2 + (*param_4 - lVar5 >> 3) * -0x71c71c71c71c71c7;
      if ((long)uVar4 < 0) {
        uVar6 = ~uVar4 / 7 ^ 0xffffffffffffffff;
LAB_005943e8:
        lVar5 = param_4[3];
                    /* try { // try from 005943fc to 0069440f has its CatchHandler @ 00594544 */
        param_4[3] = lVar5 + uVar6 * 8;
        lVar5 = *(long *)(lVar5 + uVar6 * 8);
        puVar7 = (undefined8 *)(lVar5 + (uVar6 * -7 + uVar4) * 0x48);
        param_4[1] = lVar5;
        param_4[2] = lVar5 + 0x1f8;
      }
      else {
        if (6 < (long)uVar4) {
          uVar6 = uVar4 / 7;
          goto LAB_005943e8;
        }
        puVar7 = (undefined8 *)(*param_4 + lVar2 * 0x48);
      }
                    /* try { // try from 00594410 to 0069446f has its CatchHandler @ 00594244 */
      lVar10 = lVar10 - lVar2;
      *param_4 = (long)puVar7;
      if (lVar10 < 1) goto LAB_00594434;
      lVar5 = param_2[2];
    } while( true );
  }
  puVar7 = (undefined8 *)*param_4;
  lVar5 = param_4[1];
LAB_00594434:
  *param_1 = (long)puVar7;
  param_1[1] = lVar5;
  param_1[2] = param_4[2];
  param_1[3] = param_4[3];
  return;
}


