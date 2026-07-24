/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058da6c
 * Function: Caver::VertexArrayObject::Draw
 * Signature: undefined __thiscall Draw(VertexArrayObject * this, RenderingContext * param_1, int param_2, int param_3, int param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::VertexArrayObject::Draw(Caver::RenderingContext*, int, int, int) */

void __thiscall
Caver::VertexArrayObject::Draw
          (VertexArrayObject *this,RenderingContext *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 0058da6c to 0068dadb has its CatchHandler @ 0058dae4 */
  BindArrays(this,param_1);
  if ((*(long *)(this + 0x18) == 0) && (*(int *)(this + 0x30) == 0)) {
                    /* try { // try from 0058db44 to 0068db6b has its CatchHandler @ 0058db7c */
    RenderingContext::DrawArrays(param_1,param_2,param_3,param_4);
  }
  else {
    iVar1 = SizeOfDataType(*(undefined4 *)(this + 0x10));
    if (*(int *)(this + 0x30) == 0) {
      lVar2 = *(long *)(this + 0x18) + (long)(iVar1 * param_3);
    }
    else {
      lVar2 = (long)(iVar1 * param_3);
    }
                    /* try { // try from 0058dadc to 0068dafb has its CatchHandler @ 0058d904 */
    RenderingContext::DrawElements(param_1,param_2,param_4,*(undefined4 *)(this + 0x10),lVar2);
  }
                    /* catch() { ... } // from try @ 0058da6c with catch @ 0058dae4 */
                    /* catch() { ... } // from try @ 0058d934 with catch @ 0058dae8 */
  if (*(int *)(this + (long)*(int *)(this + 0x24) * 4 + 0x40) == 0) {
                    /* catch() { ... } // from try @ 0058db6c with catch @ 0058db04
                       catch() { ... } // from try @ 0058db88 with catch @ 0058db04 */
    if (*(int *)(this + (long)*(int *)(this + 0x24) * 4 + 0x28) != 0) {
      glBindBuffer(0x8892,0);
    }
    if (*(int *)(this + 0x30) != 0) {
      glBindBuffer(0x8893,0);
      return;
    }
  }
  return;
}


