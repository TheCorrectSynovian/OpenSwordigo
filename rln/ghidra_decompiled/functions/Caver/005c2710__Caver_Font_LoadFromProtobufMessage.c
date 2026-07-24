/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c2710
 * Function: Caver::Font::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(Font * this, Font * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Font::LoadFromProtobufMessage(Caver::Proto::Font const&) */

void __thiscall Caver::Font::LoadFromProtobufMessage(Font *this,Font *param_1)

{
  Font *pFVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  Texture *pTVar6;
  long *plVar7;
  void *__dest;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  void *pvVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_64;
  long local_58;
  
                    /* try { // try from 005c2724 to 006c2817 has its CatchHandler @ 005c26b8 */
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  FUN_0066a6a8(this,*(undefined8 *)(param_1 + 0x10));
  pTVar6 = (Texture *)TextureLibrary::sharedLibrary();
  puVar5 = PTR_default_instance__007e6840;
  pFVar1 = *(Font **)PTR_default_instance__007e6840;
  if (*(long *)(param_1 + 0x18) != 0) {
    pFVar1 = param_1;
  }
  TextureLibrary::TextureFromProtobufMessage(pTVar6,SUB81(*(undefined8 *)(pFVar1 + 0x18),0));
  plVar7 = (long *)CONCAT44(uStack_84,local_88);
  if (plVar7 != (long *)0x0) {
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
  }
  plVar8 = *(long **)(this + 8);
  *(long **)(this + 8) = plVar7;
  if ((plVar8 != (long *)0x0) &&
     (iVar3 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar3, iVar3 == 0)) {
                    /* catch() { ... } // from try @ 005c26fc with catch @ 005c27a8 */
    (**(code **)(*plVar8 + 8))(plVar8);
    plVar7 = (long *)CONCAT44(uStack_84,local_88);
  }
  if ((plVar7 != (long *)0x0) &&
     (iVar3 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar7 + 8))();
  }
  *(float *)(this + 0x48) = (float)*(int *)(param_1 + 0x60);
  pFVar1 = *(Font **)puVar5;
  if (*(long *)(param_1 + 0x68) != 0) {
    pFVar1 = param_1;
  }
  uVar9 = *(undefined8 *)(*(long *)(pFVar1 + 0x68) + 0x14);
  *(undefined8 *)(this + 0x4c) = *(undefined8 *)(*(long *)(pFVar1 + 0x68) + 0xc);
  *(undefined8 *)(this + 0x54) = uVar9;
  puVar5 = PTR_default_instance__007e5b90;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar13 = 0;
    do {
      lVar10 = *(long *)(*(long *)(param_1 + 0x20) + lVar13 * 8);
      uStack_84 = *(undefined4 *)(lVar10 + 0xc);
      local_88 = (undefined4)lVar13;
      lVar2 = *(long *)puVar5;
      if (*(long *)(lVar10 + 0x10) != 0) {
        lVar2 = lVar10;
      }
      uVar12 = *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0xc);
      uVar9 = *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x14);
      uStack_80 = (undefined4)uVar12;
      local_7c = (undefined4)((ulong)uVar12 >> 0x20);
      uStack_78 = (undefined4)uVar9;
      local_74 = (undefined4)((ulong)uVar9 >> 0x20);
      local_70 = *(undefined4 *)(lVar10 + 0x18);
      lVar2 = *(long *)puVar5;
      if (*(long *)(lVar10 + 0x20) != 0) {
        lVar2 = lVar10;
      }
      local_6c = *(undefined8 *)(*(long *)(lVar2 + 0x20) + 0xc);
      local_64 = *(undefined8 *)(*(long *)(lVar2 + 0x20) + 0x14);
                    /* catch() { ... } // from try @ 005c2904 with catch @ 005c2898 */
      AddGlyph(this,(Glyph *)&local_88);
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(param_1 + 0x28));
  }
  if (((byte)param_1[0x70] >> 3 & 1) != 0) {
    iVar3 = (int)((ulong)(*(long *)(this + 0x18) - *(long *)(this + 0x10)) >> 2) * -0x45d1745d;
    __dest = operator_new__((ulong)(uint)(iVar3 * iVar3));
    pvVar11 = *(void **)(this + 0x40);
    *(void **)(this + 0x40) = __dest;
                    /* try { // try from 005c28dc to 006c2903 has its CatchHandler @ 005c2988 */
    if (pvVar11 != (void *)0x0) {
      operator_delete__(pvVar11);
      __dest = *(void **)(this + 0x40);
    }
    memcpy(__dest,(void *)**(undefined8 **)(param_1 + 0x58),
           *(size_t *)((long)**(undefined8 **)(param_1 + 0x58) + -0x18));
  }
                    /* try { // try from 005c2904 to 006c29f7 has its CatchHandler @ 005c2898 */
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


