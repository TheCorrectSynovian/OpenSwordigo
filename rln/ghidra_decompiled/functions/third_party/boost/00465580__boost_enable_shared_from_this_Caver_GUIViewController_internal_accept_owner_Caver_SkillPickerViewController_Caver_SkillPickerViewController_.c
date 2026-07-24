/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00465580
 * Function: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::SkillPickerViewController,Caver::SkillPickerViewController>
 * Signature: void __thiscall _internal_accept_owner<Caver::SkillPickerViewController,Caver::SkillPickerViewController>(enable_shared_from_this<Caver::GUIViewController> * this, shared_ptr * param_1, SkillPickerViewController * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void 
   boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::SkillPickerViewController,
   Caver::SkillPickerViewController>(boost::shared_ptr<Caver::SkillPickerViewController> const*,
   Caver::SkillPickerViewController*) const */

void __thiscall
boost::enable_shared_from_this<Caver::GUIViewController>::
_internal_accept_owner<Caver::SkillPickerViewController,Caver::SkillPickerViewController>
          (enable_shared_from_this<Caver::GUIViewController> *this,shared_ptr *param_1,
          SkillPickerViewController *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)(this + 8);
  if ((plVar1 == (long *)0x0) || (plVar1[1] == 0)) {
    plVar3 = *(long **)(param_1 + 8);
    if (plVar3 != (long *)0x0) {
      plVar3[1] = plVar3[1] + 1;
    }
    *(SkillPickerViewController **)this = param_2;
    if (plVar3 != plVar1) {
      if (plVar3 != (long *)0x0) {
                    /* try { // try from 004655c4 to 005655cf has its CatchHandler @ 004656fc */
        plVar3[2] = plVar3[2] + 1;
      }
      if ((plVar1 != (long *)0x0) && (lVar2 = plVar1[2], plVar1[2] = lVar2 + -1, lVar2 + -1 == 0)) {
        (**(code **)(*plVar1 + 0x18))();
      }
                    /* try { // try from 004655f0 to 00565617 has its CatchHandler @ 004656a8 */
      *(long **)(this + 8) = plVar3;
    }
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
                    /* try { // try from 00465638 to 0056565f has its CatchHandler @ 00465944 */
                    /* WARNING: Could not recover jumptable at 0x00465648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))(plVar3);
        return;
      }
    }
  }
  return;
}


