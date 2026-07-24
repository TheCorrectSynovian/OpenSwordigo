/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043978c
 * Function: Caver::Proto::Mesh::~Mesh
 * Signature: undefined __thiscall ~Mesh(Mesh * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Mesh::~Mesh() */

void __thiscall Caver::Proto::Mesh::~Mesh(Mesh *this)

{
  Mesh *pMVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  
                    /* try { // try from 00439794 to 00539797 has its CatchHandler @ 00439798 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00439794 with catch @ 00439798
                        */
                    /* try { // try from 0043979c to 0053979f has its CatchHandler @ 004397a8 */
                    /* try { // try from 004397a0 to 005397ab has its CatchHandler @ 00439728 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0043979c with catch @ 004397a8
                        */
  *(undefined **)this = PTR_vtable_007e6d30 + 0x10;
  SharedDtor(this);
  iVar3 = *(int *)(this + 0x3c);
  pMVar1 = *(Mesh **)(this + 0x30);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      plVar2 = *(long **)(pMVar1 + lVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        iVar3 = *(int *)(this + 0x3c);
        pMVar1 = *(Mesh **)(this + 0x30);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if ((pMVar1 != this + 0x48) && (pMVar1 != (Mesh *)0x0)) {
    operator_delete__(pMVar1);
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


