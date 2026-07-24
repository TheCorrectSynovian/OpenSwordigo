/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00548eb0
 * Function: Caver::MeshInstance::CopyData
 * Signature: undefined __thiscall CopyData(MeshInstance * this, MeshData * param_1, MeshData * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshInstance::CopyData(Caver::MeshData const&, Caver::MeshData const&) */

void __thiscall
Caver::MeshInstance::CopyData(MeshInstance *this,MeshData *param_1,MeshData *param_2)

{
  int iVar1;
  int iVar2;
  void *__dest;
  void *__src;
  uint uVar3;
  
  __dest = *(void **)(param_1 + 0x10);
  if (__dest != (void *)0x0) {
    __src = *(void **)(param_2 + 0x10);
    iVar1 = *(int *)(param_1 + 4);
                    /* try { // try from 00548ee8 to 00648eeb has its CatchHandler @ 00549520 */
    iVar2 = MeshData::valueSize(param_1);
                    /* try { // try from 00548eec to 00648f23 has its CatchHandler @ 00548e94 */
    if (**(int **)this != 0) {
      uVar3 = 0;
      do {
        memcpy(__dest,__src,(long)iVar2 * (long)iVar1);
        uVar3 = uVar3 + 1;
                    /* try { // try from 00548f24 to 00648f37 has its CatchHandler @ 0054951c */
        __dest = (void *)((long)__dest + (ulong)*(uint *)(param_1 + 8));
        __src = (void *)((long)__src + (ulong)*(uint *)(param_2 + 8));
      } while (uVar3 < **(uint **)this);
    }
  }
                    /* try { // try from 00548f38 to 00648f43 has its CatchHandler @ 005495ec */
                    /* try { // try from 00548f48 to 00648f5b has its CatchHandler @ 0054950c */
  return;
}


