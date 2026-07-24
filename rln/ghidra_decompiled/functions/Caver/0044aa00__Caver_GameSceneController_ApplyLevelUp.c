/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044aa00
 * Function: Caver::GameSceneController::ApplyLevelUp
 * Signature: undefined __thiscall ApplyLevelUp(GameSceneController * this, int param_1, int param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneController::ApplyLevelUp(int, int, int) */

void __thiscall
Caver::GameSceneController::ApplyLevelUp
          (GameSceneController *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
                    /* try { // try from 0044aa04 to 0054aa13 has its CatchHandler @ 0044cd68 */
  lVar6 = *(long *)(this + 8);
                    /* try { // try from 0044aa28 to 0054aa37 has its CatchHandler @ 0044d698 */
  iVar4 = *(int *)(lVar6 + 0xb4);
  iVar1 = *(int *)(lVar6 + 0xb8) + 1;
  iVar5 = CharacterState::ExperiencePointsRequiredForLevel((CharacterState *)(lVar6 + 0x10),iVar1);
  if (iVar4 < iVar5) {
                    /* try { // try from 0044aa50 to 0054aa5f has its CatchHandler @ 0044cd68 */
    return;
  }
  lVar6 = *(long *)(this + 8);
  uVar2 = param_1 * 2 + 4;
  *(int *)(lVar6 + 0xb8) = iVar1;
  *(int *)(lVar6 + 0xbc) = param_1;
  *(int *)(lVar6 + 0xc0) = param_2;
  *(int *)(lVar6 + 0xc4) = param_3;
  lVar7 = *(long *)(this + 0xf0);
                    /* try { // try from 0044aa74 to 0054aa87 has its CatchHandler @ 0044d694 */
  *(uint *)(lVar7 + 0x7c) = uVar2;
  if (*(char *)(lVar7 + 0x78) == '\0') {
    uVar3 = *(int *)(lVar6 + 0xbc) * 2 + 4;
    if ((int)uVar2 <= (int)uVar3) {
      uVar3 = uVar2;
    }
    *(uint *)(lVar7 + 0x80) = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
  }
  lVar7 = *(long *)(this + 0xf8);
                    /* try { // try from 0044aaa4 to 0054aab3 has its CatchHandler @ 0044cd60 */
  uVar2 = *(int *)(lVar6 + 0xc4) * 0x14 + 10;
  *(uint *)(lVar7 + 0x70) = uVar2;
  uVar3 = *(int *)(lVar6 + 0xc4) * 0x14 + 10;
  if ((int)uVar2 <= (int)uVar3) {
    uVar3 = uVar2;
  }
                    /* try { // try from 0044aac8 to 0054aad7 has its CatchHandler @ 0044d630 */
  *(uint *)(lVar7 + 0x74) = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
  HeroEquipmentManager::ApplyLevelUp((HeroEquipmentManager *)(this + 0x100));
  return;
}


