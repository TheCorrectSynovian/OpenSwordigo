/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c9694
 * Function: Caver::Texture::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(Texture * this, Texture * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Texture::SaveToProtobufMessage(Caver::Proto::Texture*) const */

void __thiscall Caver::Texture::SaveToProtobufMessage(Texture *this,Texture *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  TextureConversionInfo *this_00;
  Texture_ConversionInfo *this_01;
  Texture_Subtexture *this_02;
  Rectangle *this_03;
  long lVar11;
  
  puVar4 = PTR__default_name__007e5bc0;
  plVar6 = *(long **)(param_1 + 0x10);
  *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 1;
  if (plVar6 == (long *)puVar4) {
    plVar6 = operator_new(8);
    *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x10) = plVar6;
  }
  FUN_0066a6a8(plVar6,this + 0x30);
  uVar5 = ProtobufValueFromImageType(*(undefined4 *)(this + 0x28));
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 8;
  uVar5 = ProtobufValueFromPixelFormat(*(undefined4 *)(this + 0x44));
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 2;
  puVar4 = PTR__default_name__007e57e8;
  plVar6 = *(long **)(this + 0x78);
  plVar3 = *(long **)(this + 0x80);
  if (plVar6 != plVar3) {
    puVar1 = PTR_DAT_007e5de8 + 0x18;
    do {
      iVar2 = *(int *)(param_1 + 0x28);
      iVar8 = *(int *)(param_1 + 0x2c);
      if (iVar2 < iVar8) {
        *(int *)(param_1 + 0x28) = iVar2 + 1;
        this_02 = *(Texture_Subtexture **)(*(long *)(param_1 + 0x20) + (long)iVar2 * 8);
      }
      else {
        if (iVar8 == *(int *)(param_1 + 0x30)) {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(param_1 + 0x20),iVar8 + 1);
          iVar8 = *(int *)(param_1 + 0x2c);
        }
        *(int *)(param_1 + 0x2c) = iVar8 + 1;
        this_02 = operator_new(0x28);
        Proto::Texture_Subtexture::Texture_Subtexture(this_02);
        iVar2 = *(int *)(param_1 + 0x28);
        *(int *)(param_1 + 0x28) = iVar2 + 1;
        *(Texture_Subtexture **)(*(long *)(param_1 + 0x20) + (long)iVar2 * 8) = this_02;
      }
      lVar9 = *plVar6;
      plVar7 = *(long **)(this_02 + 0x10);
      *(uint *)(this_02 + 0x24) = *(uint *)(this_02 + 0x24) | 1;
      if (plVar7 == (long *)puVar4) {
        plVar7 = operator_new(8);
        *plVar7 = (long)puVar1;
        *(long **)(this_02 + 0x10) = plVar7;
      }
      FUN_0066a6a8(plVar7,lVar9 + 0x30);
      lVar11 = *plVar6;
      this_03 = *(Rectangle **)(this_02 + 0x18);
      *(uint *)(this_02 + 0x24) = *(uint *)(this_02 + 0x24) | 2;
      lVar9 = lVar11;
      if (this_03 == (Rectangle *)0x0) {
        this_03 = operator_new(0x20);
        Proto::Rectangle::Rectangle(this_03);
        *(Rectangle **)(this_02 + 0x18) = this_03;
        lVar9 = *plVar6;
      }
      plVar6 = plVar6 + 1;
      *(undefined8 *)(this_03 + 0xc) = *(undefined8 *)(lVar11 + 0x4c);
      uVar10 = *(undefined8 *)(lVar11 + 0x54);
      *(uint *)(this_03 + 0x1c) = *(uint *)(this_03 + 0x1c) | 0xf;
      *(undefined8 *)(this_03 + 0x14) = uVar10;
      *(undefined4 *)(this_02 + 0x20) = *(undefined4 *)(lVar9 + 0x6c);
      *(uint *)(this_02 + 0x24) = *(uint *)(this_02 + 0x24) | 4;
    } while (plVar3 != plVar6);
  }
  this_00 = *(TextureConversionInfo **)(this + 0x90);
  if (this_00 != (TextureConversionInfo *)0x0) {
    this_01 = *(Texture_ConversionInfo **)(param_1 + 0x60);
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 0x10;
    if (this_01 == (Texture_ConversionInfo *)0x0) {
      this_01 = operator_new(0x20);
      Proto::Texture_ConversionInfo::Texture_ConversionInfo(this_01);
      *(Texture_ConversionInfo **)(param_1 + 0x60) = this_01;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005c964c with catch @ 005c989c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005c95e0 with catch @ 005c98a8
                        */
    TextureConversionInfo::SaveToProtobufMessage(this_00,this_01);
    return;
  }
                    /* try { // try from 005c98c8 to 006c98ef has its CatchHandler @ 005c98f8 */
  return;
}


