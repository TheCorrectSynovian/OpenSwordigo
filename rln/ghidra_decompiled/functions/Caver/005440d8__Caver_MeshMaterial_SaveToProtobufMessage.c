/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005440d8
 * Function: Caver::MeshMaterial::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(MeshMaterial * this, MeshMaterial * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshMaterial::SaveToProtobufMessage(Caver::Proto::MeshMaterial*) const */

void __thiscall Caver::MeshMaterial::SaveToProtobufMessage(MeshMaterial *this,MeshMaterial *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  Texture *this_00;
  FloatColor *pFVar3;
  Texture *this_01;
  
  pFVar3 = *(FloatColor **)(param_1 + 0x10);
                    /* try { // try from 005440fc to 00644103 has its CatchHandler @ 00544704 */
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 1;
  if (pFVar3 == (FloatColor *)0x0) {
    pFVar3 = operator_new(0x20);
    Proto::FloatColor::FloatColor(pFVar3);
    *(FloatColor **)(param_1 + 0x10) = pFVar3;
  }
  FloatColorToProtobufMessage((FloatColor *)this,pFVar3);
                    /* try { // try from 00544124 to 0064414b has its CatchHandler @ 00544514 */
  pFVar3 = *(FloatColor **)(param_1 + 0x18);
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 2;
  if (pFVar3 == (FloatColor *)0x0) {
    pFVar3 = operator_new(0x20);
    Proto::FloatColor::FloatColor(pFVar3);
    *(FloatColor **)(param_1 + 0x18) = pFVar3;
  }
  FloatColorToProtobufMessage((FloatColor *)(this + 0x10),pFVar3);
  pFVar3 = *(FloatColor **)(param_1 + 0x20);
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 4;
  if (pFVar3 == (FloatColor *)0x0) {
    pFVar3 = operator_new(0x20);
    Proto::FloatColor::FloatColor(pFVar3);
    *(FloatColor **)(param_1 + 0x20) = pFVar3;
  }
                    /* try { // try from 00544184 to 006441ab has its CatchHandler @ 00544510 */
  FloatColorToProtobufMessage((FloatColor *)(this + 0x20),pFVar3);
  uVar1 = *(uint *)(param_1 + 0x38);
  uVar2 = *(undefined4 *)(this + 0x30);
  *(uint *)(param_1 + 0x38) = uVar1 | 8;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  this_00 = *(Texture **)(this + 0x38);
  if (this_00 != (Texture *)0x0) {
    this_01 = *(Texture **)(param_1 + 0x30);
    *(uint *)(param_1 + 0x38) = uVar1 | 0x18;
    if (this_01 == (Texture *)0x0) {
      this_01 = operator_new(0x70);
      Proto::Texture::Texture(this_01);
      *(Texture **)(param_1 + 0x30) = this_01;
    }
                    /* try { // try from 005441cc to 006441f3 has its CatchHandler @ 005448b4 */
    Texture::SaveToProtobufMessage(this_00,this_01);
    return;
  }
  return;
}


