/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00375588
 * Function: std::copy<Caver::HeroEntityComponent::SafePosition>
 * Signature: _Deque_iterator copy<Caver::HeroEntityComponent::SafePosition>(_Deque_iterator param_1, _Deque_iterator param_2, _Deque_iterator param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,
   Caver::HeroEntityComponent::SafePosition&, Caver::HeroEntityComponent::SafePosition*>
   std::copy<Caver::HeroEntityComponent::SafePosition>(std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,
   Caver::HeroEntityComponent::SafePosition const&, Caver::HeroEntityComponent::SafePosition
   const*>, std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,
   Caver::HeroEntityComponent::SafePosition const&, Caver::HeroEntityComponent::SafePosition
   const*>, std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,
   Caver::HeroEntityComponent::SafePosition&, Caver::HeroEntityComponent::SafePosition*>) */

void std::copy<Caver::HeroEntityComponent::SafePosition>
               (long *param_1,undefined8 *param_2,long *param_3,long *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  
  lVar4 = param_2[2];
  puVar9 = (undefined8 *)*param_2;
  lVar10 = (*param_3 - param_3[1] >> 3) * -0x3333333333333333 + (param_3[3] - param_2[3] >> 3) * 0xc
           + (lVar4 - (long)puVar9 >> 3) * -0x3333333333333333 + -0xc;
  if (lVar10 < 1) {
    puVar11 = (undefined8 *)*param_4;
    lVar7 = param_4[1];
LAB_003757d0:
    *param_1 = (long)puVar11;
    param_1[1] = lVar7;
    param_1[2] = param_4[2];
    param_1[3] = param_4[3];
    return;
  }
  puVar11 = (undefined8 *)*param_4;
  do {
    lVar7 = (lVar4 - (long)puVar9 >> 3) * -0x3333333333333333;
    lVar4 = (param_4[2] - (long)puVar11 >> 3) * -0x3333333333333333;
    if (lVar7 <= lVar4) {
      lVar4 = lVar7;
    }
    if (lVar10 <= lVar4) {
      lVar4 = lVar10;
    }
    if (0 < lVar4 * 0x28) {
      lVar7 = lVar4 + 1;
      do {
        *puVar11 = *puVar9;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar9 + 1);
        lVar5 = puVar9[2];
        if (lVar5 != 0) {
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        }
        plVar3 = (long *)puVar11[2];
        puVar11[2] = lVar5;
        if ((plVar3 != (long *)0x0) &&
           (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
          (**(code **)(*plVar3 + 8))();
        }
        puVar2 = puVar9 + 4;
        uVar12 = puVar9[3];
        lVar7 = lVar7 + -1;
        puVar9 = puVar9 + 5;
        puVar11[4] = *puVar2;
        puVar11[3] = uVar12;
        puVar11 = puVar11 + 5;
      } while (1 < lVar7);
      puVar9 = (undefined8 *)*param_2;
    }
    uVar6 = lVar4 + ((long)puVar9 - param_2[1] >> 3) * -0x3333333333333333;
    if ((long)uVar6 < 0) {
      uVar8 = ~uVar6 / 0xc ^ 0xffffffffffffffff;
LAB_00375720:
      lVar7 = param_2[3];
      param_2[3] = lVar7 + uVar8 * 8;
      lVar7 = *(long *)(lVar7 + uVar8 * 8);
      puVar9 = (undefined8 *)(lVar7 + (uVar6 + uVar8 * -0xc) * 0x28);
      param_2[1] = lVar7;
      param_2[2] = lVar7 + 0x1e0;
    }
    else {
      if (0xb < (long)uVar6) {
        uVar8 = uVar6 / 0xc;
        goto LAB_00375720;
      }
      puVar9 = puVar9 + lVar4 * 5;
    }
    *param_2 = puVar9;
    lVar7 = param_4[1];
    uVar6 = lVar4 + (*param_4 - lVar7 >> 3) * -0x3333333333333333;
    if ((long)uVar6 < 0) {
      uVar8 = ~uVar6 / 0xc ^ 0xffffffffffffffff;
LAB_00375788:
      lVar7 = param_4[3];
      param_4[3] = lVar7 + uVar8 * 8;
      lVar7 = *(long *)(lVar7 + uVar8 * 8);
      puVar11 = (undefined8 *)(lVar7 + (uVar6 + uVar8 * -0xc) * 0x28);
      param_4[1] = lVar7;
      param_4[2] = lVar7 + 0x1e0;
    }
    else {
      if (0xb < (long)uVar6) {
        uVar8 = uVar6 / 0xc;
        goto LAB_00375788;
      }
      puVar11 = (undefined8 *)(*param_4 + lVar4 * 0x28);
    }
    lVar10 = lVar10 - lVar4;
    *param_4 = (long)puVar11;
    if (lVar10 < 1) goto LAB_003757d0;
    lVar4 = param_2[2];
  } while( true );
}


