/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00575190
 * Function: Caver::SceneObjectGroup::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(SceneObjectGroup * this, SceneObjectGroup * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObjectGroup::LoadFromProtobufMessage(Caver::Proto::SceneObjectGroup const&) */

void __thiscall
Caver::SceneObjectGroup::LoadFromProtobufMessage(SceneObjectGroup *this,SceneObjectGroup *param_1)

{
  undefined *puVar1;
  SceneObjectGroup *pSVar2;
  long *plVar3;
  long lVar4;
  Program *pPVar5;
  long lVar6;
  Program *local_48;
  long *local_40;
  long local_38;
  
                    /* try { // try from 00575194 to 00675247 has its CatchHandler @ 005752d4 */
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  FUN_0066a6a8(this + 0x20,*(undefined8 *)(param_1 + 0x10));
  this[0x48] = *(SceneObjectGroup *)(param_1 + 0x50);
  this[0x49] = *(SceneObjectGroup *)(param_1 + 0x51);
  this[0x4b] = *(SceneObjectGroup *)(param_1 + 0x52);
  if (((byte)param_1[0x60] >> 5 & 1) != 0) {
    pPVar5 = operator_new(0x28);
    puVar1 = PTR_DAT_007e5de8 + 0x18;
    *(undefined8 *)(pPVar5 + 0x18) = 0;
    *(undefined8 *)(pPVar5 + 0x20) = 0;
    *(undefined8 *)(pPVar5 + 8) = 0;
    *(undefined8 *)(pPVar5 + 0x10) = 0;
    *(undefined **)pPVar5 = puVar1;
    local_48 = pPVar5;
    boost::detail::shared_count::shared_count<Caver::Program>((shared_count *)&local_40,pPVar5);
    boost::detail::sp_enable_shared_from_this(&local_48,pPVar5,pPVar5);
    pPVar5 = *(Program **)(this + 0x28);
    plVar3 = *(long **)(this + 0x30);
    *(Program **)(this + 0x28) = local_48;
    *(long **)(this + 0x30) = local_40;
    local_48 = pPVar5;
    local_40 = plVar3;
                    /* catch() { ... } // from try @ 00575164 with catch @ 0057524c */
    if ((plVar3 != (long *)0x0) && (lVar6 = plVar3[1], plVar3[1] = lVar6 + -1, lVar6 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar6 = plVar3[2];
                    /* try { // try from 00575270 to 00675277 has its CatchHandler @ 0057527c */
      plVar3[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
                    /* catch() { ... } // from try @ 00575270 with catch @ 0057527c */
                    /* catch() { ... } // from try @ 00574fd4 with catch @ 00575280 */
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
    pSVar2 = *(SceneObjectGroup **)PTR_default_instance__007e48f0;
    if (*(long *)(param_1 + 0x58) != 0) {
      pSVar2 = param_1;
    }
                    /* try { // try from 005752a4 to 006752cb has its CatchHandler @ 005752d4 */
    Program::LoadFromProtobufMessage(*(Program **)(this + 0x28),*(Program **)(pSVar2 + 0x58));
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
                    /* try { // try from 005752cc to 006752df has its CatchHandler @ 00574d0c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


