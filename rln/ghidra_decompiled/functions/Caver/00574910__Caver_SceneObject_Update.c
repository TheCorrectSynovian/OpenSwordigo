/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00574910
 * Function: Caver::SceneObject::Update
 * Signature: undefined __thiscall Update(SceneObject * this, float param_1, bool param_2, bool param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::Update(float, bool, bool) */

void __thiscall
Caver::SceneObject::Update(SceneObject *this,float param_1,bool param_2,bool param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  SceneObject *this_00;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined4 in_register_00005004;
  ulong uVar7;
  
  uVar1 = DAT_00688904;
  if (0 < *(int *)(this + 0xd8)) {
    lVar6 = 0;
    do {
      plVar4 = *(long **)(*(long *)(this + 0xe0) + lVar6 * 8);
      uVar7 = CONCAT44(in_register_00005004,param_1);
      if (param_2) {
        uVar2 = (**(code **)(*plVar4 + 0xc0))(plVar4);
        uVar7 = (ulong)(uint)param_1;
        if ((uVar2 & 1) == 0) {
          uVar7 = 0;
        }
      }
      uVar2 = uVar7;
      if (param_3) {
        uVar3 = (**(code **)(*plVar4 + 0xb0))(plVar4);
        uVar2 = (ulong)uVar1;
        if ((uVar3 & 1) == 0) {
          uVar2 = uVar7 & 0xffffffff;
        }
      }
      (**(code **)(*plVar4 + 200))(uVar2,plVar4);
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(this + 0xd8));
  }
  lVar6 = *(long *)(this + 0x38);
  if ((lVar6 != 0) && (0 < *(int *)(lVar6 + 0x38))) {
    lVar5 = 0;
    do {
      this_00 = *(SceneObject **)(*(long *)(lVar6 + 0x40) + lVar5 * 8);
      if (this_00 != this) {
        Update(this_00,param_1,param_2,param_3);
        lVar6 = *(long *)(this + 0x38);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(lVar6 + 0x38));
  }
  return;
}


