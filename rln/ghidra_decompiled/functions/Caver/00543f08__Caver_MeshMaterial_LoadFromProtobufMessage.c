/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00543f08
 * Function: Caver::MeshMaterial::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(MeshMaterial * this, MeshMaterial * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshMaterial::LoadFromProtobufMessage(Caver::Proto::MeshMaterial const&) */

void __thiscall
Caver::MeshMaterial::LoadFromProtobufMessage(MeshMaterial *this,MeshMaterial *param_1)

{
  MeshMaterial *pMVar1;
  int iVar2;
  long lVar3;
  FloatColor *pFVar4;
  Texture *pTVar5;
  FloatColor *extraout_x1;
  FloatColor *extraout_x1_00;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long *local_48;
  undefined8 uStack_40;
  
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
  uVar6 = *(uint *)(param_1 + 0x38);
  pFVar4 = (FloatColor *)param_1;
  if ((uVar6 & 1) != 0) {
                    /* try { // try from 00544040 to 00644067 has its CatchHandler @ 005445e0 */
    pMVar1 = *(MeshMaterial **)PTR_default_instance__007e6c30;
    if (*(long *)(param_1 + 0x10) != 0) {
      pMVar1 = param_1;
    }
    FloatColorFromProtobufMessage(*(Caver **)(pMVar1 + 0x10),(FloatColor *)param_1);
    *(undefined8 *)(this + 8) = uStack_40;
    *(long **)this = local_48;
    uVar6 = *(uint *)(param_1 + 0x38);
    pFVar4 = extraout_x1;
  }
  if ((uVar6 >> 1 & 1) != 0) {
    pMVar1 = *(MeshMaterial **)PTR_default_instance__007e6c30;
    if (*(long *)(param_1 + 0x18) != 0) {
      pMVar1 = param_1;
    }
    FloatColorFromProtobufMessage(*(Caver **)(pMVar1 + 0x18),pFVar4);
                    /* try { // try from 00544088 to 006440af has its CatchHandler @ 00544994 */
    *(undefined8 *)(this + 0x18) = uStack_40;
    *(long **)(this + 0x10) = local_48;
    uVar6 = *(uint *)(param_1 + 0x38);
    pFVar4 = extraout_x1_00;
  }
  if ((uVar6 >> 2 & 1) != 0) {
                    /* try { // try from 00543f4c to 00643f73 has its CatchHandler @ 00544a04 */
    pMVar1 = *(MeshMaterial **)PTR_default_instance__007e6c30;
    if (*(long *)(param_1 + 0x20) != 0) {
      pMVar1 = param_1;
    }
    FloatColorFromProtobufMessage(*(Caver **)(pMVar1 + 0x20),pFVar4);
    *(undefined8 *)(this + 0x28) = uStack_40;
    *(long **)(this + 0x20) = local_48;
    uVar6 = *(uint *)(param_1 + 0x38);
  }
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x28);
                    /* try { // try from 00543f78 to 00643f83 has its CatchHandler @ 00544994 */
  if ((uVar6 >> 4 & 1) != 0) {
    pTVar5 = (Texture *)TextureLibrary::sharedLibrary();
                    /* try { // try from 00543f84 to 00643f8b has its CatchHandler @ 0054483c */
                    /* try { // try from 00543f8c to 00643f97 has its CatchHandler @ 00544994 */
    pMVar1 = *(MeshMaterial **)PTR_default_instance__007e6c30;
    if (*(long *)(param_1 + 0x30) != 0) {
      pMVar1 = param_1;
    }
    TextureLibrary::TextureFromProtobufMessage(pTVar5,SUB81(*(undefined8 *)(pMVar1 + 0x30),0));
    if (local_48 != (long *)0x0) {
                    /* try { // try from 00543fb8 to 00643fbf has its CatchHandler @ 005447a4 */
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    }
    plVar8 = *(long **)(this + 0x38);
    *(long **)(this + 0x38) = local_48;
    if ((plVar8 != (long *)0x0) &&
       (iVar2 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar2, iVar2 == 0)) {
                    /* try { // try from 00543fe0 to 00644007 has its CatchHandler @ 005445e4 */
      (**(code **)(*plVar8 + 8))(plVar8);
    }
    if ((local_48 != (long *)0x0) &&
       (iVar2 = (int)local_48[1] + -1, *(int *)(local_48 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*local_48 + 8))();
    }
  }
  if (*(long *)(lVar3 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


