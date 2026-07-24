/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058d39c
 * Function: Caver::VertexArrayObject::CreateBufferObjects
 * Signature: undefined __thiscall CreateBufferObjects(VertexArrayObject * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::VertexArrayObject::CreateBufferObjects(bool) */

void __thiscall Caver::VertexArrayObject::CreateBufferObjects(VertexArrayObject *this,bool param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  
                    /* catch() { ... } // from try @ 0058d410 with catch @ 0058d3a0
                       catch() { ... } // from try @ 0058d4b4 with catch @ 0058d3a0 */
  lVar4 = RenderingContext::CurrentContext();
  if (param_1) {
    cVar2 = *(char *)(lVar4 + 0x62);
  }
  else {
    cVar2 = *(char *)(lVar4 + 0x61);
  }
  if ((cVar2 != '\0') && (*(long *)(this + 8) != 0)) {
    uVar5 = 1;
    if (param_1) {
      uVar5 = 2;
    }
    *(undefined4 *)(this + 0x20) = uVar5;
    glGenBuffers(uVar5,this + 0x28);
    if (0 < *(int *)(this + 0x20)) {
      lVar6 = 0x88e4;
      lVar4 = 0;
      uVar5 = 0x88e8;
      if (!param_1) {
        uVar5 = 0x88e4;
      }
      do {
                    /* try { // try from 0058d40c to 0068d40f has its CatchHandler @ 0058d46c */
                    /* try { // try from 0058d410 to 0068d48b has its CatchHandler @ 0058d3a0 */
        glBindBuffer(lVar6,0x8892,*(undefined4 *)(this + 0x28 + lVar4 * 4));
        glBufferData(0x8892,(long)*(int *)this,*(undefined8 *)(this + 8),uVar5);
        glBindBuffer(0x8892,0);
        lVar6 = (long)*(int *)(this + 0x20);
        lVar4 = lVar4 + 1;
      } while (lVar4 < lVar6);
    }
  }
  lVar4 = RenderingContext::CurrentContext();
  if ((*(char *)(lVar4 + 0x61) != '\0') && (*(long *)(this + 0x18) != 0)) {
                    /* catch() { ... } // from try @ 0058d40c with catch @ 0058d46c */
    glGenBuffers(1,this + 0x30);
    glBindBuffer(0x8893,*(undefined4 *)(this + 0x30));
    iVar1 = *(int *)(this + 0x14);
    iVar3 = SizeOfDataType(*(undefined4 *)(this + 0x10));
                    /* try { // try from 0058d48c to 0068d4b3 has its CatchHandler @ 0058d4bc */
    glBufferData(0x8893,(long)iVar3 * (long)iVar1,*(undefined8 *)(this + 0x18),0x88e4);
                    /* try { // try from 0058d4b4 to 0068d4bf has its CatchHandler @ 0058d3a0 */
    glBindBuffer(0x8893,0);
    return;
  }
                    /* catch() { ... } // from try @ 0058d48c with catch @ 0058d4bc */
  return;
}


