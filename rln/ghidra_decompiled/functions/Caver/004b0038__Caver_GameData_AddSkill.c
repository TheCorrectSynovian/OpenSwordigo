/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b0038
 * Function: Caver::GameData::AddSkill
 * Signature: undefined __thiscall AddSkill(GameData * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameData::AddSkill(boost::shared_ptr<Caver::Skill> const&) */

void __thiscall Caver::GameData::AddSkill(GameData *this,shared_ptr *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined8 **)(this + 0x38);
  if (puVar1 != *(undefined8 **)(this + 0x40)) {
    *puVar1 = *(undefined8 *)param_1;
    lVar2 = *(long *)(param_1 + 8);
    puVar1[1] = lVar2;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
    }
    *(undefined8 **)(this + 0x38) = puVar1 + 2;
    return;
  }
  std::vector<boost::shared_ptr<Caver::Skill>,std::allocator<boost::shared_ptr<Caver::Skill>>>::
  _M_insert_aux((vector<boost::shared_ptr<Caver::Skill>,std::allocator<boost::shared_ptr<Caver::Skill>>>
                 *)(this + 0x30),puVar1,param_1);
  return;
}


