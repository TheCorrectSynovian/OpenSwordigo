/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056da64
 * Function: Caver::SceneGridLayer::CreateVertexData
 * Signature: undefined __thiscall CreateVertexData(SceneGridLayer * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneGridLayer::CreateVertexData() */

void __thiscall Caver::SceneGridLayer::CreateVertexData(SceneGridLayer *this)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  vector<Caver::Vector3,std::allocator<Caver::Vector3>> *pvVar5;
  int iVar6;
  float fVar7;
  float local_58;
  float local_54;
  float local_50;
  long local_48;
  
                    /* try { // try from 0056da68 to 0066da73 has its CatchHandler @ 0056e184 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0056da88 to 0066da9b has its CatchHandler @ 0056e180 */
  pvVar5 = (vector<Caver::Vector3,std::allocator<Caver::Vector3>> *)(this + 0x50);
  pfVar2 = *(float **)pvVar5;
  *(float **)(this + 0x58) = pfVar2;
                    /* try { // try from 0056da9c to 0066daa7 has its CatchHandler @ 0056e148 */
  if (-1 < *(int *)(this + 0x2c)) {
    iVar6 = 0;
    while( true ) {
      local_58 = *(float *)(this + 8);
                    /* try { // try from 0056dac4 to 0066db1f has its CatchHandler @ 0056e430 */
      fVar7 = *(float *)(this + 0xc) + *(float *)(this + 0x1c) * (float)iVar6;
      local_50 = (*(float *)this + *(float *)(this + 4)) * 0.5;
      pfVar3 = *(float **)(this + 0x60);
      if (pfVar2 == pfVar3) {
        local_54 = fVar7;
        std::vector<Caver::Vector3,std::allocator<Caver::Vector3>>::_M_insert_aux
                  (pvVar5,pfVar2,&local_58);
        local_58 = *(float *)(this + 8);
        pfVar4 = *(float **)(this + 0x58);
        pfVar3 = *(float **)(this + 0x60);
        local_50 = (*(float *)this + *(float *)(this + 4)) * 0.5;
      }
      else {
        *pfVar2 = local_58;
        pfVar4 = pfVar2 + 3;
        pfVar2[1] = fVar7;
        pfVar2[2] = local_50;
        *(float **)(this + 0x58) = pfVar4;
      }
                    /* try { // try from 0056db30 to 0066db43 has its CatchHandler @ 0056e040 */
      local_58 = local_58 + *(float *)(this + 0x10);
      if (pfVar4 == pfVar3) {
        local_54 = fVar7;
        std::vector<Caver::Vector3,std::allocator<Caver::Vector3>>::_M_insert_aux
                  (pvVar5,pfVar3,&local_58);
      }
      else {
        *pfVar4 = local_58;
        pfVar4[1] = fVar7;
                    /* try { // try from 0056db44 to 0066db4f has its CatchHandler @ 0056e008 */
        pfVar4[2] = local_50;
        *(float **)(this + 0x58) = pfVar4 + 3;
        local_54 = fVar7;
      }
      if (*(int *)(this + 0x2c) <= iVar6) break;
      pfVar2 = *(float **)(this + 0x58);
      iVar6 = iVar6 + 1;
    }
  }
  if (-1 < *(int *)(this + 0x28)) {
    iVar6 = -1;
    do {
                    /* try { // try from 0056db88 to 0066dbaf has its CatchHandler @ 0056e430 */
      local_54 = *(float *)(this + 0xc);
      fVar7 = *(float *)(this + 8) + *(float *)(this + 0x18) * (float)(iVar6 + 1);
      local_50 = (*(float *)this + *(float *)(this + 4)) * 0.5;
      pfVar2 = *(float **)(this + 0x58);
      pfVar3 = *(float **)(this + 0x60);
                    /* try { // try from 0056dbb4 to 0066dbc7 has its CatchHandler @ 0056e0a8 */
      if (pfVar2 == pfVar3) {
        local_58 = fVar7;
        std::vector<Caver::Vector3,std::allocator<Caver::Vector3>>::_M_insert_aux
                  (pvVar5,pfVar2,&local_58);
                    /* try { // try from 0056dbe8 to 0066dc37 has its CatchHandler @ 0056e430 */
        local_54 = *(float *)(this + 0xc);
        pfVar2 = *(float **)(this + 0x58);
        pfVar3 = *(float **)(this + 0x60);
        local_50 = (*(float *)this + *(float *)(this + 4)) * 0.5;
      }
      else {
        *pfVar2 = fVar7;
        pfVar2[1] = local_54;
        pfVar2[2] = local_50;
                    /* try { // try from 0056dbc8 to 0066dbd3 has its CatchHandler @ 0056e04c */
        pfVar2 = pfVar2 + 3;
        *(float **)(this + 0x58) = pfVar2;
      }
      local_54 = local_54 + *(float *)(this + 0x14);
      if (pfVar2 == pfVar3) {
        local_58 = fVar7;
        std::vector<Caver::Vector3,std::allocator<Caver::Vector3>>::_M_insert_aux
                  (pvVar5,pfVar3,&local_58);
      }
      else {
        *pfVar2 = fVar7;
        pfVar2[1] = local_54;
        pfVar2[2] = local_50;
        *(float **)(this + 0x58) = pfVar2 + 3;
        local_58 = fVar7;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(this + 0x28));
  }
                    /* try { // try from 0056dc50 to 0066dc57 has its CatchHandler @ 0056e0fc */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


