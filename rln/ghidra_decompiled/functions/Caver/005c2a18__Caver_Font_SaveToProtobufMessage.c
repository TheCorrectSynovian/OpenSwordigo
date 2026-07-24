/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c2a18
 * Function: Caver::Font::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(Font * this, Font * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Font::SaveToProtobufMessage(Caver::Proto::Font*) const */

void __thiscall Caver::Font::SaveToProtobufMessage(Font *this,Font *param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  int iVar7;
  undefined8 uVar8;
  int *piVar9;
  int iVar10;
  Texture *this_00;
  Rectangle *pRVar11;
  Texture *this_01;
  Font_Glyph *this_02;
  long lVar12;
  undefined1 auStack_70 [8];
  long local_68 [2];
  long local_58;
  
  puVar5 = PTR__default_name__007e6280;
                    /* try { // try from 005c2a18 to 006c2a4f has its CatchHandler @ 005c29f8 */
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
                    /* catch() { ... } // from try @ 005c2a10 with catch @ 005c2a48 */
                    /* try { // try from 005c2a50 to 006c2a57 has its CatchHandler @ 005c2a64 */
  plVar6 = *(long **)(param_1 + 0x10);
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 1;
                    /* try { // try from 005c2a60 to 006c2a63 has its CatchHandler @ 005c2a74 */
                    /* catch() { ... } // from try @ 005c2a50 with catch @ 005c2a64 */
  if (plVar6 == (long *)puVar5) {
    plVar6 = operator_new(8);
                    /* catch() { ... } // from try @ 005c2a60 with catch @ 005c2a74 */
                    /* try { // try from 005c2a78 to 006c2a7b has its CatchHandler @ 005c2a84 */
                    /* try { // try from 005c2a7c to 006c2a87 has its CatchHandler @ 005c29f8 */
    *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x10) = plVar6;
  }
                    /* catch() { ... } // from try @ 005c2a78 with catch @ 005c2a84 */
  FUN_0066a6a8(plVar6,this);
                    /* catch() { ... } // from try @ 005c2aa8 with catch @ 005c2a8c */
  this_01 = *(Texture **)(param_1 + 0x18);
  this_00 = *(Texture **)(this + 8);
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 2;
                    /* try { // try from 005c2aa0 to 006c2aa7 has its CatchHandler @ 005c2ac4 */
  if (this_01 == (Texture *)0x0) {
                    /* try { // try from 005c2aa8 to 006c2ad7 has its CatchHandler @ 005c2a8c */
    this_01 = operator_new(0x70);
    Proto::Texture::Texture(this_01);
    *(Texture **)(param_1 + 0x18) = this_01;
  }
  Texture::SaveToProtobufMessage(this_00,this_01);
                    /* catch() { ... } // from try @ 005c2aa0 with catch @ 005c2ac4 */
  pRVar11 = *(Rectangle **)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = (int)*(float *)(this + 0x48);
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x30;
                    /* catch() { ... } // from try @ 005c2c8c with catch @ 005c2ae0
                       catch() { ... } // from try @ 005c2d04 with catch @ 005c2ae0 */
  if (pRVar11 == (Rectangle *)0x0) {
    pRVar11 = operator_new(0x20);
    Proto::Rectangle::Rectangle(pRVar11);
    *(Rectangle **)(param_1 + 0x68) = pRVar11;
  }
  *(undefined8 *)(pRVar11 + 0xc) = *(undefined8 *)(this + 0x4c);
  uVar8 = *(undefined8 *)(this + 0x54);
  *(uint *)(pRVar11 + 0x1c) = *(uint *)(pRVar11 + 0x1c) | 0xf;
  *(undefined8 *)(pRVar11 + 0x14) = uVar8;
  lVar12 = *(long *)(this + 0x10);
  lVar1 = *(long *)(this + 0x18);
  if (lVar12 != lVar1) {
    do {
                    /* try { // try from 005c2b24 to 006c2b4b has its CatchHandler @ 005c2d20 */
      iVar10 = *(int *)(param_1 + 0x28);
      iVar7 = *(int *)(param_1 + 0x2c);
      if (iVar10 < iVar7) {
        *(int *)(param_1 + 0x28) = iVar10 + 1;
        this_02 = *(Font_Glyph **)(*(long *)(param_1 + 0x20) + (long)iVar10 * 8);
      }
      else {
        if (iVar7 == *(int *)(param_1 + 0x30)) {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(param_1 + 0x20),iVar7 + 1);
          iVar7 = *(int *)(param_1 + 0x2c);
        }
        *(int *)(param_1 + 0x2c) = iVar7 + 1;
                    /* try { // try from 005c2b70 to 006c2b73 has its CatchHandler @ 005c2cdc */
        this_02 = operator_new(0x30);
        Proto::Font_Glyph::Font_Glyph(this_02);
        iVar10 = *(int *)(param_1 + 0x28);
        *(int *)(param_1 + 0x28) = iVar10 + 1;
        *(Font_Glyph **)(*(long *)(param_1 + 0x20) + (long)iVar10 * 8) = this_02;
      }
      pRVar11 = *(Rectangle **)(this_02 + 0x10);
      *(undefined4 *)(this_02 + 0xc) = *(undefined4 *)(lVar12 + 4);
                    /* try { // try from 005c2ba0 to 006c2bc7 has its CatchHandler @ 005c2d0c */
      *(uint *)(this_02 + 0x28) = *(uint *)(this_02 + 0x28) | 3;
      if (pRVar11 == (Rectangle *)0x0) {
        pRVar11 = operator_new(0x20);
        Proto::Rectangle::Rectangle(pRVar11);
        *(Rectangle **)(this_02 + 0x10) = pRVar11;
      }
      *(undefined8 *)(pRVar11 + 0xc) = *(undefined8 *)(lVar12 + 8);
      uVar8 = *(undefined8 *)(lVar12 + 0x10);
      *(uint *)(pRVar11 + 0x1c) = *(uint *)(pRVar11 + 0x1c) | 0xf;
      *(undefined8 *)(pRVar11 + 0x14) = uVar8;
      pRVar11 = *(Rectangle **)(this_02 + 0x20);
      *(undefined4 *)(this_02 + 0x18) = *(undefined4 *)(lVar12 + 0x18);
                    /* try { // try from 005c2bec to 006c2bef has its CatchHandler @ 005c2ccc */
      *(uint *)(this_02 + 0x28) = *(uint *)(this_02 + 0x28) | 0xc;
      if (pRVar11 == (Rectangle *)0x0) {
        pRVar11 = operator_new(0x20);
        Proto::Rectangle::Rectangle(pRVar11);
        *(Rectangle **)(this_02 + 0x20) = pRVar11;
      }
                    /* try { // try from 005c2c10 to 006c2c37 has its CatchHandler @ 005c2cc4 */
      *(undefined8 *)(pRVar11 + 0xc) = *(undefined8 *)(lVar12 + 0x1c);
      uVar8 = *(undefined8 *)(lVar12 + 0x24);
      lVar12 = lVar12 + 0x2c;
      *(uint *)(pRVar11 + 0x1c) = *(uint *)(pRVar11 + 0x1c) | 0xf;
      *(undefined8 *)(pRVar11 + 0x14) = uVar8;
    } while (lVar1 != lVar12);
  }
  if (*(long *)(this + 0x40) != 0) {
    iVar10 = (int)((ulong)(*(long *)(this + 0x18) - *(long *)(this + 0x10)) >> 2) * -0x45d1745d;
    FUN_00666a7c(local_68,*(long *)(this + 0x40),iVar10 * iVar10,auStack_70);
    puVar5 = PTR__default_kerning__007e5500;
                    /* try { // try from 005c2c64 to 006c2c8b has its CatchHandler @ 005c2ce4 */
    plVar6 = *(long **)(param_1 + 0x58);
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 8;
    if (plVar6 == (long *)puVar5) {
      plVar6 = operator_new(8);
                    /* try { // try from 005c2c8c to 006c2cfb has its CatchHandler @ 005c2ae0 */
      *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(param_1 + 0x58) = plVar6;
    }
    FUN_0066a6a8(plVar6,local_68);
    if ((undefined *)(local_68[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar9 = (int *)(local_68[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar10 = *piVar9;
        *piVar9 = iVar10 + -1;
      }
      else {
        do {
                    /* try { // try from 005c2cfc to 006c2d03 has its CatchHandler @ 005c2e74 */
          iVar10 = *piVar9;
                    /* try { // try from 005c2d04 to 006c2d3b has its CatchHandler @ 005c2ae0 */
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar3) {
            *piVar9 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
                    /* catch() { ... } // from try @ 005c2b24 with catch @ 005c2d20 */
      if (iVar10 < 1) {
        operator_delete((undefined *)(local_68[0] + -0x18));
      }
    }
  }
                    /* catch() { ... } // from try @ 005c2c10 with catch @ 005c2cc4 */
                    /* catch() { ... } // from try @ 005c2bec with catch @ 005c2ccc */
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 005c2b70 with catch @ 005c2cdc */
                    /* catch() { ... } // from try @ 005c2c64 with catch @ 005c2ce4 */
  return;
}


