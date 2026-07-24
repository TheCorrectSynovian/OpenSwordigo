/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056124c
 * Function: Caver::PointLightManager::AddLight
 * Signature: undefined __thiscall AddLight(PointLightManager * this, PointLight * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PointLightManager::AddLight(Caver::PointLight const&) */

void __thiscall Caver::PointLightManager::AddLight(PointLightManager *this,PointLight *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)this;
  if (*(int *)(this + 4) <= iVar1) {
    iVar1 = *(int *)(this + 4) * 2;
    if (iVar1 < 0xb) {
      iVar1 = 10;
    }
    FastVector<Caver::PointLight>::Resize((FastVector<Caver::PointLight> *)this,iVar1);
                    /* try { // try from 00561284 to 0066128f has its CatchHandler @ 0056144c */
    iVar1 = *(int *)this;
  }
  puVar2 = (undefined8 *)(*(long *)(this + 8) + (long)iVar1 * 0x3c);
  *puVar2 = *(undefined8 *)param_1;
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x2c);
  *(undefined8 *)((long)puVar2 + 0x34) = *(undefined8 *)(param_1 + 0x34);
  *(undefined8 *)((long)puVar2 + 0x2c) = uVar3;
                    /* try { // try from 005612ac to 006612d3 has its CatchHandler @ 00561444 */
  uVar3 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar2 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar2 + 0x1c) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((long)puVar2 + 0x14) = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((long)puVar2 + 0xc) = uVar3;
  *(int *)this = *(int *)this + 1;
  return;
}


