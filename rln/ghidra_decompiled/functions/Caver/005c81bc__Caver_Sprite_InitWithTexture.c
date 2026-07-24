/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c81bc
 * Function: Caver::Sprite::InitWithTexture
 * Signature: undefined __thiscall InitWithTexture(Sprite * this, intrusive_ptr * param_1, Rectangle * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Sprite::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&, Caver::Rectangle
   const&) */

void __thiscall
Caver::Sprite::InitWithTexture(Sprite *this,intrusive_ptr *param_1,Rectangle *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_68;
  undefined4 local_60;
  float local_58;
  float fStack_54;
  float local_50;
  float local_4c;
  float fStack_48;
  float local_44;
  float fStack_40;
  float local_3c;
  long local_38;
  
                    /* try { // try from 005c81cc to 006c81db has its CatchHandler @ 005c84e4 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)param_1;
  if (lVar4 != 0) {
                    /* try { // try from 005c81f0 to 006c81fb has its CatchHandler @ 005c84e0 */
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  plVar3 = *(long **)this;
  *(long *)this = lVar4;
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
                    /* try { // try from 005c821c to 006c8227 has its CatchHandler @ 005c84dc */
    (**(code **)(*plVar3 + 8))();
  }
  lVar4 = *(long *)param_1;
  if (lVar4 != 0) {
    if (*(float *)(param_2 + 8) <= DAT_00683734) {
      local_50 = *(float *)(lVar4 + 0x54);
      local_44 = *(float *)(lVar4 + 0x58);
      local_58 = local_50 * -0.5;
      fStack_54 = local_44 * -0.5;
      *(float *)(this + 0x10) = local_50;
      *(float *)(this + 0x14) = local_44;
      *(float *)(this + 8) = local_58;
      *(float *)(this + 0xc) = fStack_54;
    }
    else {
                    /* try { // try from 005c8240 to 006c824b has its CatchHandler @ 005c84d8 */
      uVar5 = *(undefined8 *)param_2;
      *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(this + 8) = uVar5;
      local_58 = *(float *)(this + 8);
      fStack_54 = *(float *)(this + 0xc);
      local_50 = *(float *)(this + 0x10);
      local_44 = *(float *)(this + 0x14);
    }
                    /* try { // try from 005c8298 to 006c82af has its CatchHandler @ 005c85b0 */
    local_50 = local_58 + local_50;
    local_44 = fStack_54 + local_44;
                    /* try { // try from 005c82b4 to 006c82bb has its CatchHandler @ 005c84d4 */
    local_60 = DAT_00697db4;
    local_68 = DAT_00697dac;
    local_4c = fStack_54;
    fStack_48 = local_58;
    fStack_40 = local_50;
    local_3c = local_44;
    CreateVertexData(this,6,(Vector2 *)&local_58,2,(ushort *)&local_68);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005c82f4 to 006c831b has its CatchHandler @ 005c8484 */
  __stack_chk_fail();
}


