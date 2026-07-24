/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a75d4
 * Function: Caver::ProfileManager::AddDelegate
 * Signature: undefined __thiscall AddDelegate(ProfileManager * this, IProfileManagerDelegate * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileManager::AddDelegate(Caver::IProfileManagerDelegate*) */

void __thiscall
Caver::ProfileManager::AddDelegate(ProfileManager *this,IProfileManagerDelegate *param_1)

{
  ProfileManager *pPVar1;
  ProfileManager *pPVar2;
  ProfileManager *pPVar3;
  void *pvVar4;
  ProfileManager *pPVar5;
  bool bVar6;
  
                    /* try { // try from 004a75e4 to 005a761f has its CatchHandler @ 004a8a18 */
  pPVar1 = this + 0x10;
  pPVar2 = *(ProfileManager **)(this + 0x18);
  pPVar5 = pPVar1;
  if (*(ProfileManager **)(this + 0x18) == (ProfileManager *)0x0) {
LAB_004a7630:
    if (pPVar5 == *(ProfileManager **)(this + 0x20)) goto LAB_004a7650;
                    /* try { // try from 004a7640 to 005a7653 has its CatchHandler @ 004a8a14 */
    pPVar3 = (ProfileManager *)FUN_0064c700(pPVar5);
  }
  else {
    do {
      pPVar3 = pPVar2;
      pPVar5 = pPVar3 + 0x10;
      if (*(IProfileManagerDelegate **)(pPVar3 + 0x20) <= param_1) {
        pPVar5 = pPVar3 + 0x18;
      }
      pPVar2 = *(ProfileManager **)pPVar5;
    } while (*(ProfileManager **)pPVar5 != (ProfileManager *)0x0);
    pPVar5 = pPVar3;
    if (param_1 < *(IProfileManagerDelegate **)(pPVar3 + 0x20)) goto LAB_004a7630;
  }
  if (param_1 <= *(IProfileManagerDelegate **)(pPVar3 + 0x20)) {
    return;
  }
LAB_004a7650:
  if (pPVar5 != (ProfileManager *)0x0) {
    if (pPVar1 == pPVar5) {
      bVar6 = true;
    }
    else {
                    /* try { // try from 004a7664 to 005a766f has its CatchHandler @ 004a89dc */
      bVar6 = param_1 < *(IProfileManagerDelegate **)(pPVar5 + 0x20);
    }
    pvVar4 = operator_new(0x28);
    *(IProfileManagerDelegate **)((long)pvVar4 + 0x20) = param_1;
                    /* try { // try from 004a7690 to 005a76cb has its CatchHandler @ 004a8980 */
    FUN_0064c8a0(bVar6,pvVar4,pPVar5,pPVar1);
    *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
  }
  return;
}


