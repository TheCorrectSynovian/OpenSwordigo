/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00316054
 * Function: std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux
 * Signature: undefined __thiscall _M_insert_aux(vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> * this, __normal_iterator param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<Caver::BindingValue, std::allocator<Caver::BindingValue>
   >::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::BindingValue*,
   std::vector<Caver::BindingValue, std::allocator<Caver::BindingValue> > >, Caver::BindingValue
   const&) */

void __thiscall
std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux
          (vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *this,
          BindingValue *param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined4 *puVar13;
  long *plVar14;
  BindingValue *this_00;
  BindingValue *pBVar15;
  long lVar16;
  
  puVar9 = *(undefined4 **)(this + 8);
  if (puVar9 == *(undefined4 **)(this + 0x10)) {
    lVar16 = (long)puVar9 - *(long *)this;
    uVar12 = (lVar16 >> 3) * -0x3333333333333333;
    uVar10 = uVar12;
    if (lVar16 == 0) {
      uVar10 = 1;
    }
    uVar1 = 0x666666666666666;
    if (!CARRY8(uVar10,uVar12) && uVar10 + uVar12 < 0x666666666666667) {
      uVar1 = uVar10 + uVar12;
    }
    if (0x666666666666666 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00665294();
    }
    lVar16 = (long)param_2 - *(long *)this >> 3;
    puVar9 = operator_new(uVar1 * 0x28);
    puVar13 = puVar9 + lVar16 * 2;
    *puVar13 = *param_3;
    *(undefined8 *)(puVar13 + 2) = *(undefined8 *)(param_3 + 2);
    lVar11 = *(long *)(param_3 + 4);
    *(long *)(puVar13 + 4) = lVar11;
    if (lVar11 != 0) {
      *(long *)(lVar11 + 8) = *(long *)(lVar11 + 8) + 1;
    }
    *(undefined8 *)(puVar9 + lVar16 * 2 + 6) = *(undefined8 *)(param_3 + 6);
    lVar11 = *(long *)(param_3 + 8);
    *(long *)(puVar9 + lVar16 * 2 + 8) = lVar11;
    if (lVar11 != 0) {
      *(long *)(lVar11 + 8) = *(long *)(lVar11 + 8) + 1;
    }
    this_00 = *(BindingValue **)this;
    puVar13 = puVar9;
    for (pBVar15 = this_00; pBVar15 != param_2; pBVar15 = pBVar15 + 0x28) {
      *puVar13 = *(undefined4 *)pBVar15;
      *(undefined8 *)(puVar13 + 2) = *(undefined8 *)(pBVar15 + 8);
      lVar16 = *(long *)(pBVar15 + 0x10);
      *(long *)(puVar13 + 4) = lVar16;
      if (lVar16 != 0) {
        *(long *)(lVar16 + 8) = *(long *)(lVar16 + 8) + 1;
      }
      *(undefined8 *)(puVar13 + 6) = *(undefined8 *)(pBVar15 + 0x18);
      lVar16 = *(long *)(pBVar15 + 0x20);
      *(long *)(puVar13 + 8) = lVar16;
      if (lVar16 != 0) {
        *(long *)(lVar16 + 8) = *(long *)(lVar16 + 8) + 1;
      }
      puVar13 = puVar13 + 10;
    }
    pBVar15 = *(BindingValue **)(this + 8);
    for (; puVar8 = puVar13 + 10, pBVar15 != param_2; param_2 = param_2 + 0x28) {
      *puVar8 = *(undefined4 *)param_2;
      *(undefined8 *)(puVar13 + 0xc) = *(undefined8 *)(param_2 + 8);
      lVar16 = *(long *)(param_2 + 0x10);
      *(long *)(puVar13 + 0xe) = lVar16;
      if (lVar16 != 0) {
        *(long *)(lVar16 + 8) = *(long *)(lVar16 + 8) + 1;
      }
      *(undefined8 *)(puVar13 + 0x10) = *(undefined8 *)(param_2 + 0x18);
      lVar16 = *(long *)(param_2 + 0x20);
      *(long *)(puVar13 + 0x12) = lVar16;
      if (lVar16 != 0) {
        *(long *)(lVar16 + 8) = *(long *)(lVar16 + 8) + 1;
      }
      puVar13 = puVar8;
    }
    if (this_00 != pBVar15) {
      do {
        Caver::BindingValue::~BindingValue(this_00);
        this_00 = this_00 + 0x28;
      } while (pBVar15 != this_00);
      this_00 = *(BindingValue **)this;
    }
    if (this_00 != (BindingValue *)0x0) {
      operator_delete(this_00);
    }
    *(undefined4 **)this = puVar9;
    *(undefined4 **)(this + 8) = puVar8;
    *(undefined4 **)(this + 0x10) = puVar9 + uVar1 * 10;
  }
  else {
    lVar16 = *(long *)(puVar9 + -6);
    *puVar9 = puVar9[-10];
    *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar9 + -8);
    *(long *)(puVar9 + 4) = lVar16;
    if (lVar16 != 0) {
      *(long *)(lVar16 + 8) = *(long *)(lVar16 + 8) + 1;
    }
    lVar16 = *(long *)(puVar9 + -2);
    *(undefined8 *)(puVar9 + 6) = *(undefined8 *)(puVar9 + -4);
    *(long *)(puVar9 + 8) = lVar16;
    if (lVar16 != 0) {
      *(long *)(lVar16 + 8) = *(long *)(lVar16 + 8) + 1;
    }
    *(undefined4 **)(this + 8) = puVar9 + 10;
    uVar2 = *(undefined8 *)(param_3 + 2);
    plVar5 = *(long **)(param_3 + 4);
    uVar7 = *param_3;
    if (plVar5 != (long *)0x0) {
      plVar5[1] = plVar5[1] + 1;
    }
    uVar3 = *(undefined8 *)(param_3 + 6);
    plVar6 = *(long **)(param_3 + 8);
    if (plVar6 != (long *)0x0) {
      plVar6[1] = plVar6[1] + 1;
    }
    uVar10 = (long)(puVar9 + -10) - (long)param_2;
    if (0 < (long)uVar10) {
      lVar16 = uVar10 / 0x28 + 1;
      puVar9 = puVar9 + -10;
      do {
        uVar4 = *(undefined8 *)(puVar9 + -8);
        lVar11 = *(long *)(puVar9 + -6);
        *puVar9 = puVar9[-10];
        if (lVar11 != 0) {
          *(long *)(lVar11 + 8) = *(long *)(lVar11 + 8) + 1;
        }
        plVar14 = *(long **)(puVar9 + 4);
        *(undefined8 *)(puVar9 + 2) = uVar4;
        *(long *)(puVar9 + 4) = lVar11;
        if ((plVar14 != (long *)0x0) &&
           (lVar11 = plVar14[1], plVar14[1] = lVar11 + -1, lVar11 + -1 == 0)) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          lVar11 = plVar14[2];
          plVar14[2] = lVar11 + -1;
          if (lVar11 + -1 == 0) {
            (**(code **)(*plVar14 + 0x18))(plVar14);
          }
        }
        uVar4 = *(undefined8 *)(puVar9 + -4);
        lVar11 = *(long *)(puVar9 + -2);
        if (lVar11 != 0) {
          *(long *)(lVar11 + 8) = *(long *)(lVar11 + 8) + 1;
        }
        plVar14 = *(long **)(puVar9 + 8);
        *(undefined8 *)(puVar9 + 6) = uVar4;
        *(long *)(puVar9 + 8) = lVar11;
        if ((plVar14 != (long *)0x0) &&
           (lVar11 = plVar14[1], plVar14[1] = lVar11 + -1, lVar11 + -1 == 0)) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          lVar11 = plVar14[2];
          plVar14[2] = lVar11 + -1;
          if (lVar11 + -1 == 0) {
            (**(code **)(*plVar14 + 0x18))(plVar14);
          }
        }
        lVar16 = lVar16 + -1;
        puVar9 = puVar9 + -10;
      } while (1 < lVar16);
    }
    *(undefined4 *)param_2 = uVar7;
    if (plVar5 != (long *)0x0) {
      plVar5[1] = plVar5[1] + 1;
    }
    plVar14 = *(long **)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 8) = uVar2;
    *(long **)(param_2 + 0x10) = plVar5;
    if ((plVar14 != (long *)0x0) &&
       (lVar16 = plVar14[1], plVar14[1] = lVar16 + -1, lVar16 + -1 == 0)) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      lVar16 = plVar14[2];
      plVar14[2] = lVar16 + -1;
      if (lVar16 + -1 == 0) {
        (**(code **)(*plVar14 + 0x18))(plVar14);
      }
    }
    if (plVar6 != (long *)0x0) {
      plVar6[1] = plVar6[1] + 1;
    }
    plVar14 = *(long **)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x18) = uVar3;
    *(long **)(param_2 + 0x20) = plVar6;
    if ((plVar14 != (long *)0x0) &&
       (lVar16 = plVar14[1], plVar14[1] = lVar16 + -1, lVar16 + -1 == 0)) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      lVar16 = plVar14[2];
      plVar14[2] = lVar16 + -1;
      if (lVar16 + -1 == 0) {
        (**(code **)(*plVar14 + 0x18))(plVar14);
      }
    }
    if ((plVar6 != (long *)0x0) && (lVar16 = plVar6[1], plVar6[1] = lVar16 + -1, lVar16 + -1 == 0))
    {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar16 = plVar6[2];
      plVar6[2] = lVar16 + -1;
      if (lVar16 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
    if ((plVar5 != (long *)0x0) && (lVar16 = plVar5[1], plVar5[1] = lVar16 + -1, lVar16 + -1 == 0))
    {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      lVar16 = plVar5[2];
      plVar5[2] = lVar16 + -1;
      if (lVar16 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0031634c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x18))(plVar5);
        return;
      }
    }
  }
  return;
}


