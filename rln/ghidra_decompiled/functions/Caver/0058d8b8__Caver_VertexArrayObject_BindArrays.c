/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058d8b8
 * Function: Caver::VertexArrayObject::BindArrays
 * Signature: undefined __thiscall BindArrays(VertexArrayObject * this, RenderingContext * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::VertexArrayObject::BindArrays(Caver::RenderingContext*) */

void __thiscall
Caver::VertexArrayObject::BindArrays(VertexArrayObject *this,RenderingContext *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  uint local_80 [10];
  long local_58;
  
                    /* try { // try from 0058d8d4 to 0068d8df has its CatchHandler @ 0058d8ec */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0058d8e0 to 0068d903 has its CatchHandler @ 0058d604 */
                    /* catch() { ... } // from try @ 0058d87c with catch @ 0058d8ec
                       catch() { ... } // from try @ 0058d8d4 with catch @ 0058d8ec */
                    /* catch() { ... } // from try @ 0058d634 with catch @ 0058d8f0 */
  if (*(int *)(this + (long)*(int *)(this + 0x24) * 4 + 0x40) == 0) {
    if (*(int *)(this + (long)*(int *)(this + 0x24) * 4 + 0x28) != 0) {
                    /* try { // try from 0058d904 to 0068d933 has its CatchHandler @ 0058d904
                       catch() { ... } // from try @ 0058d904 with catch @ 0058d904
                       catch() { ... } // from try @ 0058d938 with catch @ 0058d904
                       catch() { ... } // from try @ 0058d9c8 with catch @ 0058d904
                       catch() { ... } // from try @ 0058dadc with catch @ 0058d904 */
      glBindBuffer(0x8892);
    }
    if (*(int *)(this + 0x30) != 0) {
      glBindBuffer(0x8893);
    }
    puVar4 = *(uint **)(this + 0x38);
    if (puVar4 == (uint *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
                    /* try { // try from 0058d934 to 0068d937 has its CatchHandler @ 0058dae8 */
      do {
        local_80[lVar3] = *puVar4;
        if (*(int *)(this + (long)*(int *)(this + 0x24) * 4 + 0x28) == 0) {
          lVar2 = *(long *)(this + 8) + (long)(int)puVar4[4];
        }
        else {
                    /* try { // try from 0058d9a0 to 0068d9c7 has its CatchHandler @ 0058da38 */
          lVar2 = (long)(int)puVar4[4];
        }
        lVar3 = lVar3 + 1;
                    /* try { // try from 0058d938 to 0068d967 has its CatchHandler @ 0058d904 */
        if ((*(int *)param_1 == 0) && (*puVar4 - 0x8074 < 5)) {
          switch(*puVar4) {
          case 0x8074:
            glVertexPointer();
            break;
          case 0x8075:
            glNormalPointer(puVar4[2],puVar4[3],lVar2);
            break;
          case 0x8076:
            glColorPointer();
                    /* try { // try from 0058d968 to 0068d97f has its CatchHandler @ 0058da48 */
            break;
          case 0x8078:
            glTexCoordPointer(puVar4[1]);
          }
        }
        puVar4 = *(uint **)(puVar4 + 6);
      } while (puVar4 != (uint *)0x0);
    }
    RenderingContext::SetEnabledVertexAttribArrays(param_1,local_80,(int)lVar3);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


