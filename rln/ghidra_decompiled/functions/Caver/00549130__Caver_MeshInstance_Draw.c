/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00549130
 * Function: Caver::MeshInstance::Draw
 * Signature: undefined __thiscall Draw(MeshInstance * this, RenderingContext * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshInstance::Draw(Caver::RenderingContext*) */

void __thiscall Caver::MeshInstance::Draw(MeshInstance *this,RenderingContext *param_1)

{
  VertexArrayObject *this_00;
  int *piVar1;
  undefined4 *puVar2;
  long lVar3;
  int *piVar4;
  
  if (this[0xb2] == (MeshInstance)0x0) {
    piVar1 = &DAT_007e9a00;
  }
  else {
    piVar1 = &DAT_007e9a04;
    this[0xb2] = (MeshInstance)0x0;
  }
  piVar4 = *(int **)this;
                    /* try { // try from 00549174 to 00649177 has its CatchHandler @ 005493a8 */
                    /* try { // try from 00549178 to 006491ff has its CatchHandler @ 00548e94 */
  *piVar1 = *piVar1 + *piVar4;
  DAT_007e9a08 = DAT_007e9a08 + piVar4[1];
  if (this[0xb0] == (MeshInstance)0x0) {
    this_00 = (VertexArrayObject *)(this + 0x68);
    this[0xb0] = (MeshInstance)0x1;
    VertexArrayObject::CreateBufferObjects(this_00,this[0x10] == (MeshInstance)0x0);
    VertexArrayObject::AddArray
              (this_00,0x8074,*(undefined4 *)(this + 0x1c),*(undefined4 *)(this + 0x18),
               *(undefined4 *)(this + 0x20),*(undefined8 *)(this + 0x28));
    if (0 < *(int *)(this + 0x34)) {
      VertexArrayObject::AddArray
                (this_00,0x8075,*(int *)(this + 0x34),*(undefined4 *)(this + 0x30),
                 *(undefined4 *)(this + 0x38),*(undefined8 *)(this + 0x40));
    }
                    /* try { // try from 00549200 to 00649203 has its CatchHandler @ 0054939c */
                    /* try { // try from 00549204 to 00649443 has its CatchHandler @ 00548e94 */
    if (0 < *(int *)(*(long *)this + 0x140)) {
      puVar2 = *(undefined4 **)(this + 0x48);
      VertexArrayObject::AddArray
                (this_00,0x8078,puVar2[1],*puVar2,puVar2[2],*(undefined8 *)(puVar2 + 4));
    }
    if (0 < *(int *)(this + 0x54)) {
      VertexArrayObject::AddArray
                (this_00,0x8076,*(int *)(this + 0x54),*(undefined4 *)(this + 0x50),
                 *(undefined4 *)(this + 0x58),*(undefined8 *)(this + 0x60));
    }
    if (this[0x10] != (MeshInstance)0x0) {
      VertexArrayObject::DeleteClientSideBuffers(this_00);
    }
  }
  if (this[0xb1] != (MeshInstance)0x0) {
    VertexArrayObject::SwapBufferObjects((VertexArrayObject *)(this + 0x68));
    VertexArrayObject::UpdateVertexBufferObjectData((VertexArrayObject *)(this + 0x68));
    this[0xb1] = (MeshInstance)0x0;
  }
  lVar3 = *(long *)this;
  if ((int)((ulong)(*(long *)(lVar3 + 0x130) - *(long *)(lVar3 + 0x128)) >> 2) != 0) {
    return;
  }
  VertexArrayObject::Draw((VertexArrayObject *)(this + 0x68),param_1,4,0,*(int *)(lVar3 + 4) * 3);
  return;
}


