/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cb9ac
 * Function: Caver::WeaponGlowComponent::CreateVertexData
 * Signature: undefined __thiscall CreateVertexData(WeaponGlowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::WeaponGlowComponent::CreateVertexData() */

void __thiscall Caver::WeaponGlowComponent::CreateVertexData(WeaponGlowComponent *this)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  float fVar4;
  float local_50;
  float local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  float local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = DAT_0068a2a8;
  fVar4 = *(float *)(this + 0xf0) / DAT_00683480;
  local_30 = fVar4 * DAT_00683480;
  local_38 = CONCAT44((float)((ulong)DAT_0068a2b0 >> 0x20) * fVar4,(float)DAT_0068a2b0 * fVar4);
  local_50 = 3.0;
  local_4c = (float)_DAT_0068a2b8 * (*(float *)(this + 0xf4) / 10.0);
  local_48 = CONCAT44((float)((ulong)_DAT_0068a2b8 >> 0x20) * (*(float *)(this + 0xf4) / 10.0),
                      local_4c);
  *(undefined4 *)(this + 0xc0) = 0x11;
  pvVar2 = operator_new__(0x110);
  pvVar3 = *(void **)(this + 0xb8);
  *(void **)(this + 0xb8) = pvVar2;
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  *(undefined4 *)(this + 0xd0) = 0x15;
  pvVar2 = operator_new__(0x3f);
  pvVar3 = *(void **)(this + 200);
  *(void **)(this + 200) = pvVar2;
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  CreateVertexData(this,1,0,0,4,(float *)&local_40,&local_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


