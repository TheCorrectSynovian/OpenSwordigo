/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00387944
 * Function: Caver::MagicExplosionComponent::CreateStarPolygon
 * Signature: undefined __thiscall CreateStarPolygon(MagicExplosionComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicExplosionComponent::CreateStarPolygon() */

void __thiscall Caver::MagicExplosionComponent::CreateStarPolygon(MagicExplosionComponent *this)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  void *pvVar4;
  
  puVar2 = operator_new__(0x80);
  pvVar4 = *(void **)(this + 0x168);
  *(undefined8 **)(this + 0x168) = puVar2;
  if (pvVar4 != (void *)0x0) {
    operator_delete__(pvVar4);
    puVar2 = *(undefined8 **)(this + 0x168);
  }
  *puVar2 = 0xbd83126fbd83126f;
  puVar2[4] = 0x3d83126f3d83126f;
  uVar1 = DAT_00688bf8;
  *(undefined4 *)(puVar2 + 1) = 0;
  puVar2[2] = uVar1;
  uVar1 = DAT_00688c00;
  *(undefined4 *)(puVar2 + 3) = 0;
  *(undefined4 *)(puVar2 + 5) = 0;
  puVar2[6] = uVar1;
  uVar1 = DAT_00688c08;
  *(undefined4 *)(puVar2 + 7) = 0;
  *(undefined4 *)(puVar2 + 9) = 0;
  puVar2[8] = uVar1;
  uVar1 = DAT_006840e0;
  *(undefined4 *)((long)puVar2 + 0x54) = 0;
  *(undefined4 *)(puVar2 + 0xb) = 0;
  *(undefined4 *)(puVar2 + 0xd) = 0;
  puVar2[0xc] = uVar1;
  uVar1 = DAT_00688c10;
  *(undefined4 *)(puVar2 + 0xf) = 0;
  *(undefined4 *)(puVar2 + 10) = 0x3f800000;
  puVar2[0xe] = uVar1;
  *(undefined4 *)(this + 0x178) = 6;
  puVar3 = operator_new__(0x12);
  pvVar4 = *(void **)(this + 0x170);
  *(undefined1 **)(this + 0x170) = puVar3;
  if (pvVar4 != (void *)0x0) {
    operator_delete__(pvVar4);
    puVar3 = *(undefined1 **)(this + 0x170);
  }
  *puVar3 = 0;
  *(undefined1 *)(*(long *)(this + 0x170) + 1) = 1;
  *(undefined1 *)(*(long *)(this + 0x170) + 2) = 2;
  *(undefined1 *)(*(long *)(this + 0x170) + 3) = 2;
  *(undefined1 *)(*(long *)(this + 0x170) + 4) = 3;
  *(undefined1 *)(*(long *)(this + 0x170) + 5) = 0;
  *(undefined1 *)(*(long *)(this + 0x170) + 6) = 0;
  *(undefined1 *)(*(long *)(this + 0x170) + 7) = 4;
  *(undefined1 *)(*(long *)(this + 0x170) + 8) = 1;
  *(undefined1 *)(*(long *)(this + 0x170) + 9) = 1;
  *(undefined1 *)(*(long *)(this + 0x170) + 10) = 5;
  *(undefined1 *)(*(long *)(this + 0x170) + 0xb) = 2;
  *(undefined1 *)(*(long *)(this + 0x170) + 0xc) = 2;
  *(undefined1 *)(*(long *)(this + 0x170) + 0xd) = 6;
  *(undefined1 *)(*(long *)(this + 0x170) + 0xe) = 3;
  *(undefined1 *)(*(long *)(this + 0x170) + 0xf) = 3;
  *(undefined1 *)(*(long *)(this + 0x170) + 0x10) = 7;
  *(undefined1 *)(*(long *)(this + 0x170) + 0x11) = 0;
  UpdateStarPolygonColor();
  return;
}


