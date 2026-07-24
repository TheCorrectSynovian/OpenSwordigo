/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cb7b8
 * Function: Caver::Texture::ValueForBindedProperty
 * Signature: undefined __cdecl ValueForBindedProperty(int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Texture::ValueForBindedProperty(int) */

void Caver::Texture::ValueForBindedProperty(int param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  string *in_x1;
  string *in_x2;
  undefined4 *in_x8;
  
  uVar2 = (ulong)(uint)param_1;
  iVar3 = (int)in_x1;
                    /* catch() { ... } // from try @ 005cb69c with catch @ 005cb7c8 */
                    /* catch() { ... } // from try @ 005cb6dc with catch @ 005cb7d0 */
  switch((ulong)in_x1 & 0xffffffff) {
  case 0:
    BindingValue::ValueWithString((BindingValue *)(uVar2 + 0x30),in_x1);
    return;
  case 1:
    uVar1 = *(uint *)(uVar2 + 0x28);
    break;
  case 2:
    uVar1 = *(uint *)(uVar2 + 0x44);
    goto LAB_005cb83c;
  case 3:
    BindingValue::ValueWithInt((BindingValue *)(ulong)(uint)(int)*(float *)(uVar2 + 0x54),iVar3);
    return;
  case 4:
    BindingValue::ValueWithInt((BindingValue *)(ulong)(uint)(int)*(float *)(uVar2 + 0x58),iVar3);
    return;
  case 5:
    uVar1 = *(uint *)(*(long *)(uVar2 + 0x90) + 0xc);
    break;
  case 6:
    uVar1 = *(uint *)(*(long *)(uVar2 + 0x90) + 0x10);
LAB_005cb83c:
    iVar3 = (int)PTR_pixelFormatStrings_007e7170;
    goto LAB_005cb840;
  case 7:
    BindingValue::ValueWithInt((BindingValue *)(ulong)*(uint *)(*(long *)(uVar2 + 0x90) + 4),iVar3);
    return;
  case 8:
    BindingValue::ValueWithInt((BindingValue *)(ulong)*(uint *)(*(long *)(uVar2 + 0x90) + 8),iVar3);
    return;
  default:
    *in_x8 = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    return;
  }
  iVar3 = (int)PTR_imageTypeStrings_007e7180;
LAB_005cb840:
  BindingValue::ValueWithInt((BindingValue *)(ulong)uVar1,iVar3 + uVar1 * 8,in_x2);
  return;
}


