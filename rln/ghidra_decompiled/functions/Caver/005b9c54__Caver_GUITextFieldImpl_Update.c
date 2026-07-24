/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b9c54
 * Function: Caver::GUITextFieldImpl::Update
 * Signature: undefined __thiscall Update(GUITextFieldImpl * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextFieldImpl::Update(float) */

void __thiscall Caver::GUITextFieldImpl::Update(GUITextFieldImpl *this,float param_1)

{
  float fVar1;
  
  GUIView::Update((GUIView *)this,param_1);
  if ((this[0x198] != (GUITextFieldImpl)0x0) &&
     (fVar1 = *(float *)(this + 0x19c), *(float *)(this + 0x19c) = fVar1 + param_1,
     0.5 < fVar1 + param_1)) {
    *(undefined4 *)(this + 0x19c) = 0;
    this[0x199] = (GUITextFieldImpl)((byte)this[0x199] ^ 1);
  }
  return;
}


