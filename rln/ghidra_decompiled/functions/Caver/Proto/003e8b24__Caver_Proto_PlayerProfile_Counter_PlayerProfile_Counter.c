/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e8b24
 * Function: Caver::Proto::PlayerProfile_Counter::PlayerProfile_Counter
 * Signature: undefined __thiscall PlayerProfile_Counter(PlayerProfile_Counter * this, PlayerProfile_Counter * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PlayerProfile_Counter::PlayerProfile_Counter(Caver::Proto::PlayerProfile_Counter
   const&) */

void __thiscall
Caver::Proto::PlayerProfile_Counter::PlayerProfile_Counter
          (PlayerProfile_Counter *this,PlayerProfile_Counter *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_vtable_007e4b40;
  *(undefined4 *)(this + 8) = 0;
  puVar2 = PTR__default_name__007e6560;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 0x10) = puVar2;
  *(undefined8 *)(this + 0x18) = 0;
  MergeFrom(this,param_1);
  return;
}


