/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a71a8
 * Function: Caver::GUIEffect::Update
 * Signature: undefined __thiscall Update(GUIEffect * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIEffect::Update(float) */

void __thiscall Caver::GUIEffect::Update(GUIEffect *this,float param_1)

{
  long lVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
                    /* try { // try from 005a71a8 to 006a724b has its CatchHandler @ 005a7124 */
  fVar2 = DAT_00683730;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*(int *)(this + 0x38) == 0) || (*this != (GUIEffect)0x0)) goto LAB_005a7298;
  fVar4 = *(float *)(this + 0x44);
  if (fVar4 < DAT_00683734) {
    CreateVertices(this);
    *this = (GUIEffect)0x1;
    goto LAB_005a7298;
  }
  fVar5 = *(float *)(this + 0x4c);
  if (this[0x40] == (GUIEffect)0x0) {
    if (1.0 <= fVar5) goto LAB_005a7268;
    fVar5 = param_1 / fVar4 + fVar5;
                    /* try { // try from 005a724c to 006a7273 has its CatchHandler @ 005a727c */
    *(float *)(this + 0x4c) = fVar5;
    if (fVar2 < fVar5) {
      *(undefined4 *)(this + 0x4c) = 0x3f800000;
    }
  }
  else if (fVar5 <= 0.0) {
    *(undefined4 *)(this + 0x38) = 0;
LAB_005a7268:
    *this = (GUIEffect)0x1;
  }
  else {
    fVar5 = fVar5 - param_1 / fVar4;
    bVar3 = fVar5 < DAT_00683734;
    *(float *)(this + 0x4c) = fVar5;
    if (bVar3) {
      *(undefined4 *)(this + 0x4c) = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005a7178 with catch @ 005a722c
                        */
    }
  }
                    /* try { // try from 005a7274 to 006a727f has its CatchHandler @ 005a7124 */
  CreateVertices(this);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005a724c with catch @ 005a727c
                        */
  if (*this != (GUIEffect)0x0) {
    local_38 = 0;
    local_30 = 0;
    GUITargetAction::Send((GUITargetAction *)(this + 8),this,(GUIEvent *)&local_38);
  }
LAB_005a7298:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


