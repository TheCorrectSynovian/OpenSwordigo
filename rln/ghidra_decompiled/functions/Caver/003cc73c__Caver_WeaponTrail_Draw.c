/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cc73c
 * Function: Caver::WeaponTrail::Draw
 * Signature: undefined __thiscall Draw(WeaponTrail * this, RenderingContext * param_1, Matrix4 * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponTrail::Draw(Caver::RenderingContext*, Caver::Matrix4 const&) const */

void __thiscall
Caver::WeaponTrail::Draw(WeaponTrail *this,RenderingContext *param_1,Matrix4 *param_2)

{
  if ((1 < *(int *)(this + 4)) &&
     ((this[0x24] == (WeaponTrail)0x0 || (DAT_00683944 <= *(float *)(this + 0x28))))) {
    RenderingContext::BindTexture(param_1,*(Texture **)(this + 0x10));
    RenderingContext::SetMatrix(param_1,param_2);
    RenderingContext::SetVertexAttribPointer
              (param_1,0x8074,3,0x1406,*(undefined4 *)(this + 0x20),*(undefined8 *)(this + 0x18));
    RenderingContext::SetVertexAttribPointer
              (param_1,0x8076,4,0x1401,*(undefined4 *)(this + 0x20),*(long *)(this + 0x18) + 0xc);
    RenderingContext::SetVertexAttribPointer
              (param_1,0x8078,2,0x1406,*(undefined4 *)(this + 0x20),*(long *)(this + 0x18) + 0x10);
    RenderingContext::DrawArrays(param_1,5,0,*(int *)(this + 4) << 1);
    return;
  }
  return;
}


