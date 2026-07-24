/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00472d08
 * Function: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SkillPickerView,Caver::SkillPickerView>
 * Signature: void __thiscall _internal_accept_owner<Caver::SkillPickerView,Caver::SkillPickerView>(enable_shared_from_this<Caver::GUIResponder> * this, shared_ptr * param_1, SkillPickerView * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void 
   boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SkillPickerView,
   Caver::SkillPickerView>(boost::shared_ptr<Caver::SkillPickerView> const*,
   Caver::SkillPickerView*) const */

void __thiscall
boost::enable_shared_from_this<Caver::GUIResponder>::
_internal_accept_owner<Caver::SkillPickerView,Caver::SkillPickerView>
          (enable_shared_from_this<Caver::GUIResponder> *this,shared_ptr *param_1,
          SkillPickerView *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
                    /* try { // try from 00472d10 to 00572e2f has its CatchHandler @ 00472d10
                       catch(type#1 @ 00000000) { ... } // from try @ 00472d10 with catch @ 00472d10
                       catch(type#1 @ 00000000) { ... } // from try @ 00472e3c with catch @ 00472d10
                       catch(type#1 @ 00000000) { ... } // from try @ 00472eb8 with catch @ 00472d10
                        */
  plVar1 = *(long **)(this + 8);
  if ((plVar1 == (long *)0x0) || (plVar1[1] == 0)) {
    plVar3 = *(long **)(param_1 + 8);
    if (plVar3 != (long *)0x0) {
      plVar3[1] = plVar3[1] + 1;
    }
    *(SkillPickerView **)this = param_2;
    if (plVar3 != plVar1) {
      if (plVar3 != (long *)0x0) {
        plVar3[2] = plVar3[2] + 1;
      }
      if ((plVar1 != (long *)0x0) && (lVar2 = plVar1[2], plVar1[2] = lVar2 + -1, lVar2 + -1 == 0)) {
        (**(code **)(*plVar1 + 0x18))();
      }
      *(long **)(this + 8) = plVar3;
    }
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00472dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))(plVar3);
        return;
      }
    }
  }
  return;
}


