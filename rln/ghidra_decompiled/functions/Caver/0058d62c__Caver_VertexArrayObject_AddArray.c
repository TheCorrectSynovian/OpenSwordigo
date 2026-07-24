/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058d62c
 * Function: Caver::VertexArrayObject::AddArray
 * Signature: undefined __thiscall AddArray(VertexArrayObject * this, uint param_1, int param_2, DataType param_3, int param_4, int param_5)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::VertexArrayObject::AddArray(unsigned int, int, Caver::DataType, int, int) */

void __thiscall
Caver::VertexArrayObject::AddArray
          (VertexArrayObject *this,undefined4 param_1,undefined4 param_2,undefined4 param_4,
          undefined4 param_5,int param_6)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 local_70;
  undefined1 auStack_6c [4];
  long local_68;
  
                    /* try { // try from 0058d634 to 0068d637 has its CatchHandler @ 0058d8f0 */
                    /* try { // try from 0058d638 to 0068d733 has its CatchHandler @ 0058d604 */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((*(int *)(this + 0x20) < 1) ||
     (lVar2 = RenderingContext::CurrentContext(), *(char *)(lVar2 + 99) == '\0')) {
    puVar4 = operator_new(0x20);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *(undefined4 *)puVar4 = param_1;
    *(undefined4 *)((long)puVar4 + 4) = param_2;
    *(undefined4 *)(puVar4 + 1) = param_4;
    *(undefined4 *)((long)puVar4 + 0xc) = param_5;
    *(int *)(puVar4 + 2) = param_6;
    puVar4[3] = 0;
    this = this + 0x38;
    lVar2 = *(long *)this;
    while (lVar2 != 0) {
      this = (VertexArrayObject *)(lVar2 + 0x18);
      lVar2 = *(long *)this;
    }
    *(undefined8 **)this = puVar4;
  }
  else {
    glGetIntegerv(0,auStack_6c);
    glGetIntegerv(0x8894,&local_70);
    if (0 < *(int *)(this + 0x20)) {
      lVar2 = 0;
      lVar5 = (long)param_6;
      do {
                    /* try { // try from 0058d748 to 0068d7af has its CatchHandler @ 0058d604 */
        if ((*(int *)(this + lVar2 * 4 + 0x40) == 0) && (*(int *)(this + 0x30) != 0)) {
          glBindBuffer(0x8893);
        }
        if (*(int *)(this + lVar2 * 4 + 0x28) != 0) {
          glBindBuffer(0x8892);
        }
        piVar3 = (int *)RenderingContext::CurrentContext();
        if (*piVar3 == 0) {
          glEnableClientState(param_1);
        }
        piVar3 = (int *)RenderingContext::CurrentContext();
        if (*piVar3 == 0) {
          switch(param_1) {
          case 0x8074:
            glVertexPointer(param_2,param_4,param_5,lVar5);
            break;
          case 0x8075:
            glNormalPointer(param_4,param_5,lVar5);
            break;
          case 0x8076:
            glColorPointer(param_2,param_4,param_5,lVar5);
            break;
          case 0x8078:
                    /* try { // try from 0058d734 to 0068d747 has its CatchHandler @ 0058d8a8 */
            glTexCoordPointer(param_2,param_4,param_5,lVar5);
          }
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < *(int *)(this + 0x20));
    }
    if (*(int *)(this + 0x28) != 0) {
      glBindBuffer(0x8892,local_70);
    }
  }
                    /* try { // try from 0058d7f0 to 0068d87b has its CatchHandler @ 0058d604 */
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


