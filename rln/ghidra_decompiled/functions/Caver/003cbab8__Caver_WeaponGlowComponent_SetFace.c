/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cbab8
 * Function: Caver::WeaponGlowComponent::SetFace
 * Signature: undefined __thiscall SetFace(WeaponGlowComponent * this, int param_1, int param_2, int param_3, int param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponGlowComponent::SetFace(int, int, int, int) */

void __thiscall
Caver::WeaponGlowComponent::SetFace
          (WeaponGlowComponent *this,int param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  
  lVar1 = (long)param_1 + (long)param_1 * 2;
  *(char *)(*(long *)(this + 200) + lVar1) = (char)param_2;
  lVar1 = (long)(int)lVar1;
  *(char *)(*(long *)(this + 200) + lVar1 + 1) = (char)param_3;
  *(char *)(*(long *)(this + 200) + lVar1 + 2) = (char)param_4;
  return;
}


