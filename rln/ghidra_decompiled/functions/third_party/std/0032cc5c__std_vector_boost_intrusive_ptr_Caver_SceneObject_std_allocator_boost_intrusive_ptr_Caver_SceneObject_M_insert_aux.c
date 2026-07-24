/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032cc5c
 * Function: std::vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>::_M_insert_aux
 * Signature: undefined __thiscall _M_insert_aux(vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>> * this, __normal_iterator param_1, intrusive_ptr * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<boost::intrusive_ptr<Caver::SceneObject>,
   std::allocator<boost::intrusive_ptr<Caver::SceneObject> >
   >::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SceneObject>*,
   std::vector<boost::intrusive_ptr<Caver::SceneObject>,
   std::allocator<boost::intrusive_ptr<Caver::SceneObject> > > >,
   boost::intrusive_ptr<Caver::SceneObject> const&) */

void __thiscall
std::
vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>
::_M_insert_aux(vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>
                *this,long *param_2,long *param_3)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  void *pvVar5;
  long *plVar6;
  ulong uVar7;
  void *pvVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  
  plVar4 = *(long **)(this + 8);
  if (plVar4 == *(long **)(this + 0x10)) {
    lVar11 = *(long *)this;
    lVar9 = (long)plVar4 - lVar11;
    uVar7 = lVar9 >> 3;
    uVar10 = uVar7;
    if (lVar9 == 0) {
      uVar10 = 1;
    }
    uVar1 = 0x1fffffffffffffff;
    if (!CARRY8(uVar10,uVar7) && uVar10 + uVar7 >> 0x3d == 0) {
      uVar1 = uVar10 + uVar7;
    }
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00665294();
    }
    pvVar5 = operator_new(uVar1 << 3);
    lVar9 = *param_3;
    *(long *)((long)pvVar5 + ((long)param_2 - lVar11)) = lVar9;
    if (lVar9 != 0) {
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    }
    plVar4 = *(long **)this;
    pvVar8 = pvVar5;
    if (plVar4 != param_2) {
      lVar9 = 0;
      do {
        lVar11 = *(long *)((long)plVar4 + lVar9);
        *(long *)((long)pvVar5 + lVar9) = lVar11;
        if (lVar11 != 0) {
          *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
        }
        lVar9 = lVar9 + 8;
      } while ((long)param_2 - (long)plVar4 != lVar9);
      pvVar8 = (void *)((long)pvVar5 +
                       ((long)param_2 + (-8 - (long)plVar4) & 0xfffffffffffffff8U) + 8);
    }
    plVar13 = *(long **)(this + 8);
    plVar3 = (long *)((long)pvVar8 + 8);
    plVar12 = plVar3;
    plVar6 = param_2;
    if (plVar13 != param_2) {
      do {
        lVar9 = *plVar6;
        *plVar12 = lVar9;
        if (lVar9 != 0) {
          *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
        }
        plVar6 = plVar6 + 1;
        plVar12 = plVar12 + 1;
      } while (plVar13 != plVar6);
      plVar3 = (long *)((long)plVar3 +
                       ((long)plVar13 + (-8 - (long)param_2) & 0xfffffffffffffff8U) + 8);
    }
    if (plVar4 != plVar13) {
      do {
        plVar6 = (long *)*plVar4;
        if ((plVar6 != (long *)0x0) &&
           (iVar2 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar2, iVar2 == 0)) {
          (**(code **)(*plVar6 + 8))();
        }
        plVar4 = plVar4 + 1;
      } while (plVar13 != plVar4);
      plVar4 = *(long **)this;
    }
    if (plVar4 != (long *)0x0) {
      operator_delete(plVar4);
    }
    *(void **)this = pvVar5;
    *(long **)(this + 8) = plVar3;
    *(void **)(this + 0x10) = (void *)((long)pvVar5 + uVar1 * 8);
  }
  else {
    lVar9 = plVar4[-1];
    *plVar4 = lVar9;
    if (lVar9 != 0) {
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    }
    *(long **)(this + 8) = plVar4 + 1;
    param_3 = (long *)*param_3;
    if (param_3 != (long *)0x0) {
      *(int *)(param_3 + 1) = (int)param_3[1] + 1;
    }
    uVar10 = (long)(plVar4 + -1) - (long)param_2;
    if (0 < (long)uVar10) {
      lVar9 = (uVar10 >> 3) + 1;
      plVar4 = plVar4 + -1;
      do {
        lVar11 = plVar4[-1];
        if (lVar11 != 0) {
          *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
        }
        plVar3 = (long *)*plVar4;
        *plVar4 = lVar11;
        if ((plVar3 != (long *)0x0) &&
           (iVar2 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar2, iVar2 == 0)) {
          (**(code **)(*plVar3 + 8))();
        }
        lVar9 = lVar9 + -1;
        plVar4 = plVar4 + -1;
      } while (1 < lVar9);
    }
    if (param_3 != (long *)0x0) {
      *(int *)(param_3 + 1) = (int)param_3[1] + 1;
    }
    plVar4 = (long *)*param_2;
    *param_2 = (long)param_3;
    if ((plVar4 != (long *)0x0) &&
       (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar4 + 8))();
    }
    if ((param_3 != (long *)0x0) &&
       (iVar2 = (int)param_3[1] + -1, *(int *)(param_3 + 1) = iVar2, iVar2 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0032cd94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 8))(param_3);
      return;
    }
  }
  return;
}


