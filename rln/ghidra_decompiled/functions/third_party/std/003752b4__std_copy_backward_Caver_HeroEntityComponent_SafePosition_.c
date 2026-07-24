/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003752b4
 * Function: std::copy_backward<Caver::HeroEntityComponent::SafePosition>
 * Signature: _Deque_iterator copy_backward<Caver::HeroEntityComponent::SafePosition>(_Deque_iterator param_1, _Deque_iterator param_2, _Deque_iterator param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,
   Caver::HeroEntityComponent::SafePosition&, Caver::HeroEntityComponent::SafePosition*>
   std::copy_backward<Caver::HeroEntityComponent::SafePosition>(std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,
   Caver::HeroEntityComponent::SafePosition const&, Caver::HeroEntityComponent::SafePosition
   const*>, std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,
   Caver::HeroEntityComponent::SafePosition const&, Caver::HeroEntityComponent::SafePosition
   const*>, std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,
   Caver::HeroEntityComponent::SafePosition&, Caver::HeroEntityComponent::SafePosition*>) */

void std::copy_backward<Caver::HeroEntityComponent::SafePosition>
               (long *param_1,long *param_2,long *param_3,long *param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  lVar12 = *param_3;
  lVar11 = param_3[1];
  lVar10 = (lVar12 - lVar11 >> 3) * -0x3333333333333333 + (param_3[3] - param_2[3] >> 3) * 0xc +
           (param_2[2] - *param_2 >> 3) * -0x3333333333333333 + -0xc;
  if (lVar10 < 1) {
    lVar9 = *param_4;
    lVar5 = param_4[1];
  }
  else {
    lVar9 = *param_4;
    lVar5 = param_4[1];
    do {
      lVar5 = lVar9 - lVar5;
      if (lVar12 - lVar11 == 0) {
        lVar8 = *(long *)(param_3[3] + -8) + 0x1e0;
        lVar3 = 0xc;
        if (lVar5 != 0) goto LAB_0037536c;
LAB_0037538c:
        lVar9 = *(long *)(param_4[3] + -8) + 0x1e0;
        lVar6 = 0xc;
      }
      else {
        lVar3 = (lVar12 - lVar11 >> 3) * -0x3333333333333333;
        lVar8 = lVar12;
        if (lVar5 == 0) goto LAB_0037538c;
LAB_0037536c:
        lVar6 = (lVar5 >> 3) * -0x3333333333333333;
      }
      if (lVar3 <= lVar6) {
        lVar6 = lVar3;
      }
      if (lVar10 <= lVar6) {
        lVar6 = lVar10;
      }
      if (0 < lVar6 * 0x28) {
        lVar11 = 0;
        lVar12 = (ulong)(lVar6 * 0x28) / 0x28 + 1;
        do {
          lVar5 = lVar8 + lVar11;
          lVar3 = lVar9 + lVar11;
          *(undefined8 *)(lVar3 + -0x28) = *(undefined8 *)(lVar5 + -0x28);
          *(undefined4 *)(lVar3 + -0x20) = *(undefined4 *)(lVar5 + -0x20);
          lVar5 = *(long *)(lVar5 + -0x18);
          if (lVar5 != 0) {
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          }
          plVar2 = *(long **)(lVar3 + -0x18);
          *(long *)(lVar3 + -0x18) = lVar5;
          if ((plVar2 != (long *)0x0) &&
             (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
            (**(code **)(*plVar2 + 8))();
          }
          lVar5 = lVar8 + lVar11;
          uVar13 = *(undefined8 *)(lVar5 + -0x10);
          lVar12 = lVar12 + -1;
          lVar3 = lVar9 + lVar11;
          lVar11 = lVar11 + -0x28;
          *(undefined8 *)(lVar3 + -8) = *(undefined8 *)(lVar5 + -8);
          *(undefined8 *)(lVar3 + -0x10) = uVar13;
        } while (1 < lVar12);
        lVar12 = *param_3;
        lVar11 = param_3[1];
      }
      uVar4 = (lVar12 - lVar11 >> 3) * -0x3333333333333333 - lVar6;
      if ((long)uVar4 < 0) {
        uVar7 = ~uVar4 / 0xc ^ 0xffffffffffffffff;
LAB_00375498:
        lVar12 = param_3[3];
        param_3[3] = lVar12 + uVar7 * 8;
        lVar11 = *(long *)(lVar12 + uVar7 * 8);
        param_3[1] = lVar11;
        param_3[2] = lVar11 + 0x1e0;
        lVar12 = lVar11 + (uVar4 + uVar7 * -0xc) * 0x28;
      }
      else {
        if (0xb < (long)uVar4) {
          uVar7 = uVar4 / 0xc;
          goto LAB_00375498;
        }
        lVar12 = lVar12 + lVar6 * -0x28;
      }
      *param_3 = lVar12;
      lVar5 = param_4[1];
      uVar4 = (*param_4 - lVar5 >> 3) * -0x3333333333333333 - lVar6;
      if ((long)uVar4 < 0) {
        uVar7 = ~uVar4 / 0xc ^ 0xffffffffffffffff;
LAB_00375508:
        lVar9 = param_4[3];
        param_4[3] = lVar9 + uVar7 * 8;
        lVar5 = *(long *)(lVar9 + uVar7 * 8);
        lVar9 = lVar5 + (uVar4 + uVar7 * -0xc) * 0x28;
        param_4[1] = lVar5;
        param_4[2] = lVar5 + 0x1e0;
      }
      else {
        if (0xb < (long)uVar4) {
          uVar7 = uVar4 / 0xc;
          goto LAB_00375508;
        }
        lVar9 = *param_4 + lVar6 * -0x28;
      }
      lVar10 = lVar10 - lVar6;
      *param_4 = lVar9;
    } while (0 < lVar10);
  }
  *param_1 = lVar9;
  param_1[1] = lVar5;
  param_1[2] = param_4[2];
  param_1[3] = param_4[3];
  return;
}


